/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpnam
// Address: 0x000AE800

//----- (000AE800) --------------------------------------------------------
char *__cdecl qtmpnam(char *s, int a2)
{
  unsigned int v2; // edi
  char *v3; // esi
  bool v4; // al
  const char *v5; // ecx
  int v6; // esi
  int v7; // esi
  unsigned int v8; // ecx
  pthread_t v9; // eax
  int v10; // edi
  int v11; // eax
  char *v13; // [esp+4h] [ebp-28h]
  char *v14; // [esp+8h] [ebp-24h]
  _WORD buf[3]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v16[26]; // [esp+12h] [ebp-1Ah] BYREF

  v2 = a2;
  *(_DWORD *)&v16[6] = __readgsdword(0x14u);
  if ( a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  if ( !s )
    v2 = 4096;
  v3 = byte_13D331;
  if ( s )
    v3 = s;
  qtmpdir((unsigned int)v3, v2);
  v4 = qisdir(v3);
  v5 = ".";
  if ( v4 )
    v5 = v3;
  qmakepath(v3, v2, v5, (int)"ida12345.tmp");
  v13 = v3;
  v14 = &v3[strlen(v3)];
  v6 = 9;
  if ( v2 < 9 )
    v6 = v2;
  v7 = -v6;
  do
  {
    if ( (unsigned __int8)gen_rand_buf(buf, 4u) )
    {
      if ( dword_13E334 )
      {
        v8 = dword_13E334 + 1;
      }
      else
      {
        v10 = 1000 * time(nullptr);
        v8 = (v10 + lrand48() % 1000) % 0x186A0u;
      }
      dword_13E334 = v8;
      *(_DWORD *)buf = v8;
    }
    else
    {
      v9 = qthread_self();
      *(_DWORD *)buf ^= v9;
      qthread_free(v9);
      v8 = *(_DWORD *)buf;
    }
    if ( v8 >> 17 )
    {
      v8 = (v8 >> 17) ^ v8 & 0x1FFFF;
      *(_DWORD *)buf = v8;
    }
    qsnprintf(v16, 6, "%05u", v8);
    v11 = __strlen_chk(v16, 6);
    v14[v7] = *((_BYTE *)buf + v11 + 1);
    v14[v7 + 1] = *((_BYTE *)&buf[1] + v11);
    v14[v7 + 2] = *((_BYTE *)&buf[1] + v11 + 1);
    v14[v7 + 3] = *((_BYTE *)&buf[2] + v11);
    v14[v7 + 4] = *((_BYTE *)&buf[2] + v11 + 1);
  }
  while ( qfileexist(v13) );
  return v13;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 13E334: using guessed type int dword_13E334;
// 13E34C: using guessed type int under_debugger;
