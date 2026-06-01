/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60DD0
// Address: 0x0000000000060DD0

//----- (0000000000060DD0) ----------------------------------------------------
unsigned __int64 __fastcall sub_60DD0(__int64 a1, const char *a2, int a3)
{
  __int64 v3; // rbp
  int v5; // r15d
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 192);
  if ( v3 )
  {
    v5 = *(_DWORD *)(a1 + 208);
    sub_37F60((__int64)ptr, a2);
    sub_6C410(v3, v5, (__int64)ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
    sub_6C720(*(_QWORD *)(a1 + 192), *(_DWORD *)(a1 + 208), a3);
  }
  return __readfsqword(0x28u);
}
