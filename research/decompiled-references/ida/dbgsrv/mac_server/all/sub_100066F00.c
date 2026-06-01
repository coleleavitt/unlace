/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066F00
// Address: 0x0000000100066F00

//----- (0000000100066F00) ----------------------------------------------------
__int64 __fastcall sub_100066F00(void **a1, __int64 a2)
{
  size_t v3; // r14
  const void *v4; // r15
  char *v5; // r12
  unsigned __int64 v6; // r13
  char *v7; // rax
  unsigned __int8 v8; // [rsp+Fh] [rbp-31h] BYREF

  sub_100032FE0(a1, *(_DWORD *)a2 + 3);
  if ( *(_DWORD *)a2 != -3 )
  {
    if ( *(_DWORD *)a2 == -2 )
      return sub_10005A320(a1, *(_QWORD *)(a2 + 8) + 1LL);
    sub_100032FE0(a1, *(_DWORD *)(a2 + 16));
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 )
    {
      v4 = *(const void **)(a2 + 8);
      v5 = (char *)a1[1];
      v6 = 0x7FFFFFFFFFFFFFFFLL;
      if ( !__CFADD__(v3, v5) )
        v6 = (unsigned __int64)&v5[v3];
      if ( (unsigned __int64)v5 >= v6 )
      {
        if ( v5 != (char *)v6 )
        {
          v8 = 0;
          sub_10001CE90((__int64)a1, v6, &v8);
        }
      }
      else
      {
        v7 = (char *)*a1;
        if ( (unsigned __int64)a1[2] < v6 )
        {
          v7 = (char *)qvector_reserve((__int64)a1, *a1, v6, 1u);
          *a1 = v7;
        }
        __bzero(&v7[(_QWORD)a1[1]], v6 - (_QWORD)a1[1]);
        a1[1] = (void *)v6;
      }
      memcpy(&v5[(_QWORD)*a1], v4, v3);
    }
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
