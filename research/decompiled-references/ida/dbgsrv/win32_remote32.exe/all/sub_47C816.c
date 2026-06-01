/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C816
// Address: 0x0047C816

//----- (0047C816) --------------------------------------------------------
int __usercall sub_47C816@<eax>(int a1@<ebx>, __m128i a2@<xmm0>, const WCHAR *a3, unsigned __int16 *a4, int a5, int a6)
{
  unsigned int *v6; // eax
  unsigned int v8[3]; // [esp+8h] [ebp-1Ch] BYREF
  DWORD v9; // [esp+14h] [ebp-10h]
  unsigned int v10; // [esp+18h] [ebp-Ch]
  unsigned int v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h] BYREF

  v6 = sub_47C5AB(a2, v8, a4);
  v9 = *v6;
  v10 = v6[1];
  v11 = v6[2];
  if ( !(_BYTE)v11 || sub_472F68(a1, (int)&v12, &v12, a3, v9, a5, 384) )
    return 0;
  ++dword_4B78D0;
  _InterlockedOr((volatile signed __int32 *)(a6 + 12), v10);
  *(_DWORD *)(a6 + 8) = 0;
  *(_DWORD *)(a6 + 28) = 0;
  *(_DWORD *)(a6 + 4) = 0;
  *(_DWORD *)a6 = 0;
  *(_DWORD *)(a6 + 16) = v12;
  return a6;
}
// 4B78D0: using guessed type int dword_4B78D0;
