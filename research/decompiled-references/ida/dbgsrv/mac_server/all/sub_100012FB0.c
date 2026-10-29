/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100012FB0
// Address: 0x0000000100012FB0

//----- (0000000100012FB0) ----------------------------------------------------
__int64 __fastcall sub_100012FB0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rcx
  char *v5; // rax
  void *v6; // rdi
  unsigned __int8 v8; // [rsp+Fh] [rbp-21h] BYREF

  if ( a2 )
  {
    v3 = a2 + 1;
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 >= a2 + 1 )
    {
      if ( v4 != a2 + 1 )
      {
        v8 = 0;
        sub_10001D550(a1, a2 + 1, &v8);
      }
    }
    else
    {
      v5 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v3 )
      {
        v5 = (char *)qvector_reserve(a1, *(void **)a1, v3, 1u);
        *(_QWORD *)a1 = v5;
        v4 = *(_QWORD *)(a1 + 8);
      }
      __bzero(&v5[v4], v3 - v4);
      *(_QWORD *)(a1 + 8) = v3;
    }
    *(_BYTE *)(*(_QWORD *)a1 + a2) = 0;
  }
  else
  {
    v6 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v6);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
