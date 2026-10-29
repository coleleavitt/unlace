/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469D97
// Address: 0x00469D97

//----- (00469D97) --------------------------------------------------------
int __usercall sub_469D97@<eax>(int **a1@<ecx>, int a2@<ebx>, __m128i a3@<xmm0>)
{
  int v4; // edi
  int v5; // esi
  int v7; // [esp+8h] [ebp-474h] BYREF
  _BYTE v8[12]; // [esp+Ch] [ebp-470h] BYREF
  int v9; // [esp+18h] [ebp-464h]
  int v10; // [esp+1Ch] [ebp-460h] BYREF
  _DWORD v11[16]; // [esp+20h] [ebp-45Ch] BYREF
  LPVOID v12[262]; // [esp+60h] [ebp-41Ch] BYREF

  v4 = **a1;
  LOBYTE(v9) = sub_47A664(a2, v4, v4);
  sub_467FF8((int)&v7, (_DWORD *)*a1[1]);
  v10 = **a1;
  sub_469D1D(v11, &v10, *a1[2], a1[2][1], *a1[3], (int)v8, *a1[4]);
  v12[260] = nullptr;
  v5 = sub_46A029((int)v11, a2, v4, a3);
  sub_469D59(v12);
  if ( v8[8] )
    *(_DWORD *)(v7 + 848) &= ~2u;
  sub_47A710(a2, v9, v4);
  return v5;
}
