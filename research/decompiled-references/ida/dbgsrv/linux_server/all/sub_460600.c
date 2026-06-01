/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_460600
// Address: 0x0000000000460600

//----- (0000000000460600) ----------------------------------------------------
__int64 __fastcall sub_460600(__int64 a1, unsigned int a2)
{
  int v3; // eax
  __int64 result; // rax
  void *v5; // rdi
  unsigned int v6; // [rsp+Ch] [rbp-3Ch]
  void *ptr[7]; // [rsp+10h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 288) )
    return 0;
  *(_BYTE *)(a1 + 289) = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 440) + 136LL))(
         *(_QWORD *)(a1 + 440),
         a1 + 368,
         a2);
  *(_BYTE *)(a1 + 288) = v3 > 0;
  if ( v3 <= 0 )
  {
    *(_BYTE *)(a1 + 289) = 1;
    return 0;
  }
  sub_470050((__int64)ptr, 4);
  sub_46C160((char **)ptr, (unsigned int *)(a1 + 368));
  result = sub_46F530((__int64 *)(a1 + 192), (__int64 *)ptr);
  v5 = ptr[0];
  *(_BYTE *)(a1 + 288) = 0;
  if ( v5 )
  {
    v6 = result;
    ptr[1] = nullptr;
    j__free(v5);
    return v6;
  }
  return result;
}
