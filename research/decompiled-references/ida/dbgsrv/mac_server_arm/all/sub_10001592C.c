/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001592C
// Address: 0x000000010001592C

//----- (000000010001592C) ----------------------------------------------------
void __fastcall sub_10001592C(__int64 a1)
{
  int v2; // w8
  __int64 v3; // [xsp+0h] [xbp-40h] BYREF
  void *v4; // [xsp+8h] [xbp-38h]
  __int64 v5; // [xsp+10h] [xbp-30h]
  __int64 v6; // [xsp+18h] [xbp-28h]
  int v7; // [xsp+20h] [xbp-20h]

  v3 = 0x800000028LL;
  v5 = 0;
  v6 = 0;
  v4 = nullptr;
  v7 = -1;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 552LL))(*(_QWORD *)(a1 + 8), &v3);
  v2 = HIDWORD(v3);
  *(_DWORD *)(a1 + 20) = HIDWORD(v3);
  *(_BYTE *)(a1 + 24) = v2 > 4;
  if ( v4 )
  {
    v5 = 0;
    qfree(v4);
  }
}
