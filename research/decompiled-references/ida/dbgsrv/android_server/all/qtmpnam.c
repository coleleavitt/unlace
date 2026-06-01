/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpnam
// Address: 0x00000000000BC508

//----- (00000000000BC508) ----------------------------------------------------
char *__fastcall qtmpnam(char *a1, size_t a2)
{
  unsigned __int64 v2; // x21
  char *v3; // x19
  const char *v4; // x0
  char *v5; // x0
  size_t v6; // x0
  __int64 v7; // x9
  char *v8; // x28
  unsigned int v9; // w3
  pthread_t v10; // x0
  unsigned int v11; // w8
  int v12; // w21
  __int64 v13; // x0
  unsigned int v15; // [xsp+Ch] [xbp-74h] BYREF
  pthread_mutex_t v16; // [xsp+10h] [xbp-70h] BYREF

  *(&v16.__align + 1) = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (a2 & 0x8000000000000000LL) == 0 )
  {
    if ( a1 )
      v2 = a2;
    else
      v2 = 4096;
    if ( a1 )
      v3 = a1;
    else
      v3 = byte_167DCD;
    v4 = (const char *)qtmpdir((unsigned __int64)v3, v2);
    if ( qisdir(v4) )
      v5 = qmakepath((size_t)v3, v2, v3, "ida12345.tmp", 0);
    else
      v5 = qmakepath((size_t)v3, v2, ".", "ida12345.tmp", 0);
    v6 = strlen(v5);
    v7 = 9;
    if ( v2 < 9 )
      v7 = v2;
    v8 = &v3[v6 - v7];
    while ( 1 )
    {
      if ( gen_rand_buf(&v15, 4u) )
      {
        if ( dword_168DD0 )
        {
          v9 = dword_168DD0 + 1;
        }
        else
        {
          v12 = time(nullptr);
          v9 = (rand() % 1000 + 1000 * v12) % 0x186A0u;
        }
        dword_168DD0 = v9;
        v15 = v9;
        v11 = v9 >> 17;
        if ( !(v9 >> 17) )
          goto LABEL_22;
      }
      else
      {
        v10 = qthread_self();
        v15 ^= v10;
        qthread_free(v10);
        v9 = v15;
        v11 = v15 >> 17;
        if ( !(v15 >> 17) )
          goto LABEL_22;
      }
      v15 = v11 ^ v9 & 0x1FFFF;
LABEL_22:
      qsnprintf(&v16, 6, "%05u");
      v13 = __strlen_chk(&v16, 6);
      *v8 = v16.__size[v13 - 5];
      v8[1] = *((_BYTE *)&v15 + v13);
      v8[2] = *((_BYTE *)&v15 + v13 + 1);
      v8[3] = *((_BYTE *)&v15 + v13 + 2);
      v8[4] = v16.__size[v13 - 1];
      if ( !qfileexist(v3) )
        return v3;
    }
  }
  if ( !under_debugger )
    interr(1225);
  __break(1u);
  return qgetcwd(a1, a2);
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 167DD0: using guessed type __int64[512];
// 168DD0: using guessed type int dword_168DD0;
// 168DF0: using guessed type char under_debugger;
