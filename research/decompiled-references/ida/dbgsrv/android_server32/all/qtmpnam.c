/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpnam
// Address: 0x0007D468

//----- (0007D468) --------------------------------------------------------
const char *__fastcall qtmpnam(char *a1, int a2)
{
  char *v2; // r4
  unsigned int v3; // r5
  const char *v4; // r0
  _BOOL4 v5; // r0
  char *v6; // r2
  char *v7; // r4
  unsigned int v8; // r1
  pthread_t v9; // r0
  unsigned int v10; // r3
  int v11; // r6
  _BYTE *v12; // r0
  char *v14; // [sp+18h] [bp-14h]
  unsigned int v15; // [sp+1Ch] [bp-10h] BYREF
  _BYTE v16[8]; // [sp+20h] [bp-Ch] BYREF

  v2 = a1;
  if ( a2 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __debugbreak();
  }
  v3 = 4096;
  if ( a1 )
    v3 = a2;
  else
    v2 = (char *)&word_DF536;
  v4 = (const char *)qtmpdir((unsigned int)v2, v3);
  v5 = qisdir(v4);
  v6 = v2;
  if ( !v5 )
    v6 = ".";
  qmakepath(v2, v3, v6);
  if ( v3 >= 9 )
    v3 = 9;
  v14 = v2;
  v7 = &v2[strlen(v2) - v3];
  do
  {
    if ( !gen_rand_buf(&v15, 4u) )
    {
      v9 = qthread_self();
      v15 ^= v9;
      qthread_free(v9);
      v8 = v15;
      v10 = v15 >> 17;
      if ( !(v15 >> 17) )
        goto LABEL_17;
LABEL_14:
      v15 = v10 ^ v8 & 0x1FFFF;
      goto LABEL_17;
    }
    if ( dword_E0538 )
    {
      v8 = dword_E0538 + 1;
    }
    else
    {
      v11 = 1000 * time(nullptr);
      v8 = (lrand48() % 1000 + v11) % 0x186A0u;
    }
    dword_E0538 = v8;
    v15 = v8;
    v10 = v8 >> 17;
    if ( v8 >> 17 )
      goto LABEL_14;
LABEL_17:
    qsnprintf(v16, 6, "%05u");
    v12 = &v16[_strlen_chk(v16, 6)];
    *v7 = *(v12 - 5);
    v12 -= 5;
    v7[1] = v12[1];
    v7[2] = v12[2];
    v7[3] = v12[3];
    v7[4] = v12[4];
  }
  while ( qfileexist(v14) );
  return v14;
}
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// DF536: using guessed type __int16 word_DF536;
// E0538: using guessed type int dword_E0538;
// E0550: using guessed type char under_debugger;
