/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpnam
// Address: 0x00000000000C1210

//----- (00000000000C1210) ----------------------------------------------------
char *__fastcall qtmpnam(char *s, __int64 a2)
{
  unsigned __int64 v2; // rbp
  char *v3; // r14
  bool v4; // al
  const char *v5; // rdx
  char *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r15
  unsigned int v9; // ecx
  pthread_t v10; // rax
  int v11; // ebp
  __int64 v12; // rax
  char *v14; // [rsp+8h] [rbp-50h]
  _WORD buf[3]; // [rsp+14h] [rbp-44h] BYREF
  char v16[6]; // [rsp+1Ah] [rbp-3Eh] BYREF
  unsigned __int64 v17; // [rsp+20h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  if ( a2 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  v2 = a2;
  if ( !s )
    v2 = 4096;
  v3 = (char *)qword_157B20;
  if ( s )
    v3 = s;
  qtmpdir((unsigned __int64)v3, v2);
  v4 = qisdir(v3);
  v5 = ".";
  if ( v4 )
    v5 = v3;
  qmakepath(v3, v2, v5, "ida12345.tmp", 0);
  v6 = &v3[strlen(v3)];
  v7 = 9;
  if ( v2 < 9 )
    v7 = v2;
  v8 = -v7;
  v14 = v3;
  do
  {
    if ( (unsigned __int8)gen_rand_buf(buf, 4u) )
    {
      if ( dword_158B20 )
      {
        v9 = dword_158B20 + 1;
      }
      else
      {
        v11 = time(nullptr);
        v3 = v14;
        v9 = (rand() % 1000 + 1000 * v11) % 0x186A0u;
      }
      dword_158B20 = v9;
      *(_DWORD *)buf = v9;
    }
    else
    {
      v10 = qthread_self();
      *(_DWORD *)buf ^= v10;
      qthread_free(v10);
      v9 = *(_DWORD *)buf;
    }
    if ( v9 >> 17 )
    {
      v9 = (v9 >> 17) ^ v9 & 0x1FFFF;
      *(_DWORD *)buf = v9;
    }
    qsnprintf(v16, 6, "%05u", v9);
    v12 = __strlen_chk(v16, 6);
    v6[v8] = *((_BYTE *)buf + v12 + 1);
    v6[v8 + 1] = *((_BYTE *)&buf[1] + v12);
    v6[v8 + 2] = *((_BYTE *)&buf[1] + v12 + 1);
    v6[v8 + 3] = *((_BYTE *)&buf[2] + v12);
    v6[v8 + 4] = *((_BYTE *)&buf[2] + v12 + 1);
  }
  while ( qfileexist(v3) );
  return v3;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 157B20: using guessed type __int64 qword_157B20[512];
// 158B20: using guessed type int dword_158B20;
// 158B40: using guessed type __int64 under_debugger;
