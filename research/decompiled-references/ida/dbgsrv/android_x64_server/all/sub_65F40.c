/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65F40
// Address: 0x0000000000065F40

//----- (0000000000065F40) ----------------------------------------------------
__int64 __fastcall sub_65F40(__int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  void *ptr[5]; // [rsp+0h] [rbp-28h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  sub_66090((__int64)a1, 2);
  v1 = a1[41];
  v2 = *(unsigned __int16 *)(a1[40] + 2 * v1 - 2);
  if ( v1 )
    a1[41] = v1 - 1;
  *(_DWORD *)(*(_QWORD *)(a1[43] + 8 * a1[44] - 8) + 24LL) = v2;
  sub_662B0((__int64)ptr, a1 + 20);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    ptr[2] = nullptr;
  }
  return 0;
}
