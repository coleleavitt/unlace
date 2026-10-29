/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42FFD0
// Address: 0x0042FFD0

//----- (0042FFD0) --------------------------------------------------------
int __usercall sub_42FFD0@<eax>(__m128i a1@<xmm0>, int a2, int a3)
{
  int v3; // eax
  int v5; // [esp+8h] [ebp-18h] BYREF
  int v6; // [esp+Ch] [ebp-14h]
  int v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-4h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  sub_42F530(a3, a1, sub_42F430, (int)&v5, a2, a3);
  *(_DWORD *)(a3 + 8) = v5;
  *(_DWORD *)(a3 + 12) = v6;
  v3 = v7;
  *(_BYTE *)a3 = 7;
  *(_DWORD *)(a3 + 16) = v3;
  return 0;
}
