/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5012C
// Address: 0x000000000005012C

//----- (000000000005012C) ----------------------------------------------------
void __fastcall sub_5012C(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  unsigned int v7; // w22
  char *v8; // x0
  const char *v9; // x1
  __int64 v10; // x8
  const char *v11; // x1
  __int64 v12; // x2
  void *ptr; // [xsp+0h] [xbp-50h] BYREF
  unsigned __int64 v14; // [xsp+8h] [xbp-48h]
  __int64 v15; // [xsp+10h] [xbp-40h]
  __int64 v16; // [xsp+18h] [xbp-38h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(_DWORD *)(a3 + 4);
  if ( v7 > 0xB || ((1 << v7) & 0xA55) == 0 )
  {
    v10 = *(_QWORD *)(a3 + 24);
    if ( !v10 )
    {
      sub_39FA0((__int64)"Illegal offset of the string table section\n");
      return;
    }
    if ( *a2 >= 1 && a2[2] )
    {
      if ( *a2 == v10 )
        return;
      v11 = (__int64 *)(a1 + 352) == a2 ? "dynamic linking " : "";
      v12 = (a4 & 1) != 0 ? *(_QWORD *)(a3 + 24) : *a2;
      sub_4EC28(
        (__int64)"AUTOHIDE SESSION\nMore than one string table for %ssymbols, using one at offset %08llX",
        v11,
        v12);
      if ( (a4 & 1) == 0 )
        return;
      v10 = *(_QWORD *)(a3 + 24);
    }
    *a2 = v10;
    a2[1] = *(_QWORD *)(a3 + 16);
    a2[2] = *(_QWORD *)(a3 + 32);
    return;
  }
  v8 = sub_55E38(a1 + 80, v7);
  sub_39140(&ptr, v8);
  if ( v14 > 1 || (sub_3C748((__int64)&ptr, "%X", v7), v14) )
    v9 = (const char *)ptr;
  else
    v9 = &byte_F154B;
  sub_39FA0((__int64)"Illegal type %s of the string table section\n", v9);
  if ( ptr )
  {
    v14 = 0;
    qfree(ptr);
    ptr = nullptr;
    v15 = 0;
  }
}
// F154B: using guessed type char byte_F154B;
