/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E370
// Address: 0x000000000005E370

//----- (000000000005E370) ----------------------------------------------------
void __fastcall sub_5E370(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v3; // x21
  int v4; // w22
  void *ptr[4]; // [xsp+40h] [xbp-50h] BYREF

  ptr[3] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD *)(a1 + 192);
  if ( v3 )
  {
    v4 = *(_DWORD *)(a1 + 208);
    sub_39140(ptr, a2);
    sub_69394(v3, v4, (__int64)ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      ptr[2] = nullptr;
    }
    sub_69650(*(_QWORD *)(a1 + 192), *(_DWORD *)(a1 + 208), a3);
  }
}
