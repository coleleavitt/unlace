/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vqmakepath
// Address: 0x000000010007BA90

//----- (000000010007BA90) ----------------------------------------------------
char *__fastcall vqmakepath(char *__s, __int64 a2, __int64 a3, unsigned int *a4)
{
  char *v4; // r14
  char *v5; // rax
  char *v7; // r13
  const char *v8; // r12
  int v9; // ecx
  int v10; // ecx
  unsigned __int64 v11; // rdx
  __int64 *v12; // rcx
  int v13; // ecx
  char *v15; // rdx
  char v16; // [rsp+0h] [rbp-2Ch]

  if ( a2 >= 0 )
  {
    if ( !__s )
      return __s;
    v4 = &__s[a2];
    v5 = __s;
    if ( !a3 )
      goto LABEL_32;
    a2 = a3;
    v7 = v4 - 1;
    v16 = 0;
    v8 = __s;
    while ( 1 )
    {
      if ( v8 != (const char *)a2 )
        qustrncpy((unsigned __int64)v8, (char *)a2, v4 - v8);
      v5 = (char *)&v8[strlen(v8)];
      if ( v5 > __s )
      {
        v9 = (unsigned __int8)*(v5 - 1);
        if ( v9 == 92 || v9 == 47 )
        {
          --v5;
          v16 = 1;
          while ( v5 > __s )
          {
            v10 = (unsigned __int8)*(v5 - 1);
            if ( v10 != 92 && v10 != 47 )
              goto LABEL_17;
            --v5;
          }
          v5 = __s;
        }
      }
LABEL_17:
      v11 = *a4;
      if ( v11 > 0x28 )
      {
        v12 = *((__int64 **)a4 + 1);
        *((_QWORD *)a4 + 1) = v12 + 1;
      }
      else
      {
        v12 = (__int64 *)(*((_QWORD *)a4 + 2) + v11);
        *a4 = v11 + 8;
      }
      a2 = *v12;
      if ( !*v12 )
        break;
      while ( 1 )
      {
        v13 = *(unsigned __int8 *)a2;
        if ( v13 != 92 && v13 != 47 )
          break;
        ++a2;
      }
      if ( v5 >= v4 )
        goto LABEL_35;
      *v5 = 47;
      v8 = v5 + 1;
      if ( v5 + 1 >= v4 )
      {
        *v7 = 0;
        v8 = v4 - 1;
      }
    }
    if ( v5 != __s || (v16 & 1) == 0 )
      goto LABEL_32;
    if ( v4 > __s )
    {
      *v5++ = 47;
      if ( v5 >= v4 )
      {
        *v7 = 0;
        v5 = v4 - 1;
      }
LABEL_32:
      if ( v5 < v4 )
      {
        *v5 = 0;
        return __s;
      }
      goto LABEL_40;
    }
LABEL_35:
    if ( under_debugger == 1 )
      goto LABEL_36;
    interr(0x206u);
  }
  if ( under_debugger == 1 )
    goto LABEL_36;
  interr(0x4C9u);
LABEL_40:
  if ( under_debugger == 1 )
LABEL_36:
    BUG();
  interr(0x207u);
  return (char *)qdirname((char *)0x207, a2, v15);
}
// 10007BC3D: variable 'v15' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
