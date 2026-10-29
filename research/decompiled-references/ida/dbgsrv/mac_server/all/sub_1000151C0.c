/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000151C0
// Address: 0x00000001000151C0

//----- (00000001000151C0) ----------------------------------------------------
__int64 __fastcall sub_1000151C0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  char *v4; // rax
  _OWORD v6[2]; // [rsp+0h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 >= a2 )
  {
    if ( v3 != a2 )
    {
      memset(v6, 0, sizeof(v6));
      sub_10001E1B0(a1, a2, v6);
    }
  }
  else
  {
    v4 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < a2 )
    {
      v4 = (char *)qvector_reserve(a1, *(void **)a1, a2, 0x20u);
      *(_QWORD *)a1 = v4;
      v3 = *(_QWORD *)(a1 + 8);
    }
    __bzero(&v4[32 * v3], 32 * (a2 - v3));
    *(_QWORD *)(a1 + 8) = a2;
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
