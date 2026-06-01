/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98DC4
// Address: 0x00098DC4

//----- (00098DC4) --------------------------------------------------------
int __fastcall sub_98DC4(int a1)
{
  int v1; // r0
  __int64 v3; // [sp+0h] [bp-20h] BYREF
  __int64 v4; // [sp+8h] [bp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  if ( *(_BYTE *)(v1 + 4) != 7 )
    return 0;
  v4 = *(_QWORD *)(v1 + 8);
  LODWORD(v3) = "objc_object";
  HIDWORD(v3) = "";
  return sub_96B94((unsigned __int8 **)&v4, &v3);
}
