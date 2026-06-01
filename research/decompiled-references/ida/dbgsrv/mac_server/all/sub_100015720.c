/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100015720
// Address: 0x0000000100015720

//----- (0000000100015720) ----------------------------------------------------
__int64 __fastcall sub_100015720(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  char *v3; // rax
  __int64 v5; // [rsp+0h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 >= a2 )
  {
    if ( v2 != a2 )
    {
      v5 = 0;
      sub_10001E3B0(a1, a2, &v5);
    }
  }
  else
  {
    v3 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < a2 )
    {
      v3 = (char *)qvector_reserve(a1, *(void **)a1, a2, 8u);
      *(_QWORD *)a1 = v3;
      v2 = *(_QWORD *)(a1 + 8);
    }
    __bzero(&v3[8 * v2], 8 * (a2 - v2));
    *(_QWORD *)(a1 + 8) = a2;
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
