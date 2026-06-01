/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpnam
// Address: 0x000000010007BE50

//----- (000000010007BE50) ----------------------------------------------------
int __fastcall qtmpnam(char *__s, signed __int64 a2)
{
  unsigned __int64 v2; // r15
  char *v3; // rbx
  bool v4; // al
  const char *v5; // rdx
  char *v6; // r14
  __int64 v7; // r12
  __int64 v8; // r12
  _WORD *v9; // r15
  size_t v10; // rax
  unsigned int v11; // ecx
  _opaque_pthread_t *v12; // rax
  _WORD *v13; // rbx
  int v14; // r15d
  int v15; // eax
  int v16; // ecx
  const char *v18; // [rsp+8h] [rbp-48h]
  _WORD v19[3]; // [rsp+14h] [rbp-3Ch] BYREF
  char __sa[6]; // [rsp+1Ah] [rbp-36h] BYREF

  if ( a2 >= 0 )
  {
    v2 = a2;
    if ( !__s )
      v2 = 1024;
    v3 = (char *)qword_1000AE8E0;
    if ( __s )
      v3 = __s;
    qtmpdir((unsigned __int64)v3, v2);
    v4 = qisdir(v3);
    v5 = ".";
    if ( v4 )
      v5 = v3;
    qmakepath(v3, v2, (__int64)v5, "ida12345.tmp", 0);
    v18 = v3;
    v6 = &v3[strlen(v3)];
    v7 = 9;
    if ( v2 < 9 )
      v7 = v2;
    v8 = -v7;
    v9 = v19;
    while ( !(unsigned __int8)gen_rand_buf(v9, 4u) )
    {
      v12 = qthread_self();
      *(_DWORD *)v19 ^= (unsigned int)v12;
      qthread_free(v12);
      v11 = *(_DWORD *)v19;
      if ( *(_DWORD *)v19 >= 0x20000u )
        goto LABEL_19;
LABEL_11:
      qsnprintf(__sa, 6, "%05u", v11);
      v10 = strlen(__sa);
      *(_DWORD *)&v6[v8] = *(_DWORD *)((char *)v19 + v10 + 1);
      v6[v8 + 4] = *((_BYTE *)&v19[2] + v10 + 1);
      if ( !qfileexist(v18) )
        return (int)v18;
    }
    if ( dword_1000AECE0 )
    {
      v11 = dword_1000AECE0 + 1;
    }
    else
    {
      v13 = v9;
      v14 = time(nullptr);
      v15 = rand();
      v16 = 1000 * v14;
      v9 = v13;
      v11 = (v15 % 1000 + v16) % 0x186A0u;
    }
    dword_1000AECE0 = v11;
    *(_DWORD *)v19 = v11;
    if ( v11 < 0x20000 )
      goto LABEL_11;
LABEL_19:
    v11 = (v11 >> 17) ^ v11 & 0x1FFFF;
    *(_DWORD *)v19 = v11;
    goto LABEL_11;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x4C9u);
  return qgetcwd((char *)0x4C9, a2);
}
// 1000AE23D: using guessed type char under_debugger;
// 1000AE8E0: using guessed type __int64 qword_1000AE8E0[128];
// 1000AECE0: using guessed type int dword_1000AECE0;
