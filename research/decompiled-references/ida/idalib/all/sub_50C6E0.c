unsigned __int64 __fastcall sub_50C6E0(
        __int64 a1,
        __int64 *a2,
        size_t a3,
        char *a4,
        __int64 a5,
        char *a6,
        unsigned __int64 a7)
{
  __int64 v9; // r15
  char *v11; // rdi
  unsigned __int64 v12; // rdx
  size_t v13; // rdx
  char *v14; // rax
  char *v15; // r14
  _QWORD *v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r12
  int v25; // edx
  _DWORD *v26; // rax
  int c; // [rsp+14h] [rbp-54h]
  int v29; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v9 = *a2;
  v30 = __readfsqword(0x28u);
  if ( a7 == -1 )
    a7 = a2[1] - v9;
  while ( !a3 )
  {
    if ( a7 < (unsigned __int64)a6 )
      return v30 - __readfsqword(0x28u);
LABEL_13:
    if ( a6 == (char *)-1LL )
      return v30 - __readfsqword(0x28u);
    v17 = (_QWORD *)a2[6];
    v18 = (a2[7] - (__int64)v17) >> 3;
    if ( a2[7] - (__int64)v17 <= 0 )
      goto LABEL_25;
    v19 = (_QWORD *)a2[6];
    do
    {
      while ( 1 )
      {
        v20 = v18 >> 1;
        v21 = &v19[v18 >> 1];
        if ( (unsigned __int64)a6 < *v21 )
          break;
        v19 = v21 + 1;
        v18 = v18 - 1 - v20;
        if ( v18 <= 0 )
          goto LABEL_19;
      }
      v18 >>= 1;
    }
    while ( v20 > 0 );
LABEL_19:
    if ( v17 == v19 || (_QWORD *)a2[7] == v19 )
    {
LABEL_25:
      v23 = 0x3FFFFFFFCLL;
      v24 = 0;
    }
    else
    {
      v22 = v19 - 1 - v17;
      v23 = 4LL * (unsigned int)v22;
      v24 = 8LL * (unsigned int)(v22 + 1);
    }
    v25 = *(_DWORD *)(a2[3] + v23);
    v26 = *(_DWORD **)(a5 + 8);
    v29 = v25;
    if ( v26 == *(_DWORD **)(a5 + 16) )
    {
      sub_50C600(a5, &v29);
    }
    else
    {
      *v26 = v25;
      *(_QWORD *)(a5 + 8) += 4LL;
    }
    v9 = *a2;
    a6 = *(char **)(a2[6] + v24);
  }
  if ( (unsigned __int64)a6 < a7 )
  {
    v11 = &a6[v9];
    v12 = a7 - (_QWORD)a6;
    if ( a7 - (unsigned __int64)a6 >= a3 )
    {
      c = *a4;
      do
      {
        v13 = 1 - a3 + v12;
        if ( !v13 )
          break;
        v14 = (char *)memchr(v11, c, v13);
        v15 = v14;
        if ( !v14 )
          break;
        if ( !memcmp(v14, a4, a3) )
        {
          a6 = &v15[-v9];
          goto LABEL_13;
        }
        v11 = v15 + 1;
        v12 = v9 + a7 - (_QWORD)(v15 + 1);
      }
      while ( v12 >= a3 );
    }
  }
  return v30 - __readfsqword(0x28u);
}
