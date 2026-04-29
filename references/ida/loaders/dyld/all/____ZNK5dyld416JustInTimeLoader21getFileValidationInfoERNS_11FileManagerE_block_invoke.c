__n128 __fastcall ___ZNK5dyld416JustInTimeLoader21getFileValidationInfoERNS_11FileManagerE_block_invoke(
        __int64 a1,
        __n128 *a2)
{
  __n128 *v2; // x8
  __n128 result; // q0

  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 101LL) = 1;
  v2 = *(__n128 **)(*(_QWORD *)(a1 + 32) + 8LL);
  result = *a2;
  v2[5].n128_u32[0] = a2[1].n128_u32[0];
  v2[4] = result;
  return result;
}
