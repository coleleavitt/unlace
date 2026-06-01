/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400202A0
// Address: 0x00000001400202A0

//----- (00000001400202A0) ----------------------------------------------------
__int64 __fastcall sub_1400202A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  v3 = sub_14005A400();
  sub_140029390(a2);
  *(_QWORD *)(a2 + 8) = v3;
  *(_BYTE *)a2 = 9;
  return 0;
}
