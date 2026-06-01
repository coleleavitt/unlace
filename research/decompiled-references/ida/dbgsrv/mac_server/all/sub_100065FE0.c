/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065FE0
// Address: 0x0000000100065FE0

//----- (0000000100065FE0) ----------------------------------------------------
__int64 __fastcall sub_100065FE0(void **a1, __int64 *a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  char *v4; // rax
  unsigned __int64 v5; // rdx
  void **v6; // rdi
  __int64 v7; // rbx
  const char *v8; // r13
  size_t v9; // rax
  size_t v10; // r12
  char *v11; // rbx
  void *v13; // [rsp+8h] [rbp-48h]
  unsigned __int8 v15; // [rsp+1Fh] [rbp-31h] BYREF

  v2 = a2[1];
  sub_100032FE0(a1, v2);
  if ( v2 )
  {
    v3 = 16;
    do
    {
      v7 = *a2;
      sub_100032FE0(a1, *(_DWORD *)(*a2 + v3 - 16));
      v8 = _s1;
      if ( *(_QWORD *)(v7 + v3) )
        v8 = *(const char **)(v7 + v3 - 8);
      if ( !v8 )
        v8 = &_s;
      v9 = strlen(v8);
      v10 = v9 + 1;
      if ( v9 != -1 )
      {
        v6 = a1;
        v11 = (char *)a1[1];
        v5 = 0x7FFFFFFFFFFFFFFFLL;
        if ( !__CFADD__(v10, v11) )
          v5 = (unsigned __int64)&v11[v10];
        if ( (unsigned __int64)v11 >= v5 )
        {
          if ( v11 != (char *)v5 )
          {
            v15 = 0;
            sub_10001CE90((__int64)a1, v5, &v15);
            v6 = a1;
          }
        }
        else
        {
          v4 = (char *)*a1;
          v13 = (void *)v5;
          if ( (unsigned __int64)a1[2] < v5 )
          {
            v4 = (char *)qvector_reserve((__int64)a1, v4, v5, 1u);
            v5 = (unsigned __int64)v13;
            *a1 = v4;
          }
          __bzero(&v4[(_QWORD)a1[1]], v5 - (_QWORD)a1[1]);
          v6 = a1;
          a1[1] = v13;
        }
        memcpy(&v11[(_QWORD)*v6], v8, v10);
      }
      v3 += 32;
      --v2;
    }
    while ( v2 );
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
