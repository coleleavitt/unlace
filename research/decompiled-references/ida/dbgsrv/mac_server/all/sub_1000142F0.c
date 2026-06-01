/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000142F0
// Address: 0x00000001000142F0

//----- (00000001000142F0) ----------------------------------------------------
__int64 __fastcall sub_1000142F0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  char *v3; // rax
  unsigned __int16 v5; // [rsp+6h] [rbp-1Ah] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 >= a2 )
  {
    if ( v2 != a2 )
    {
      v5 = 0;
      sub_10001DC80(a1, a2, &v5);
    }
  }
  else
  {
    v3 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < a2 )
    {
      v3 = (char *)qvector_reserve(a1, *(void **)a1, a2, 2u);
      *(_QWORD *)a1 = v3;
      v2 = *(_QWORD *)(a1 + 8);
    }
    __bzero(&v3[2 * v2], 2 * (a2 - v2));
    *(_QWORD *)(a1 + 8) = a2;
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
