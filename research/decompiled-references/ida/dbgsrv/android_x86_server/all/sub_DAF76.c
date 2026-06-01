/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DAF76
// Address: 0x000DAF76

//----- (000DAF76) --------------------------------------------------------
int __cdecl sub_DAF76(int a1, int a2, int a3)
{
  char v3; // si
  int result; // eax
  _BYTE *v5; // [esp-8h] [ebp-30h]
  unsigned int v6; // [esp+18h] [ebp-10h] BYREF
  _DWORD v7[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = (unsigned __int16)*(_DWORD *)(a1 + 16) >> 3;
  v5 = (_BYTE *)sub_DAE47(v3, a1);
  sub_DAECB(v3, v5, (_BYTE *)(a2 + 8), &v6);
  sub_DAECB((unsigned __int16)*(_DWORD *)(a1 + 16) >> 3, v5, (_BYTE *)(a3 + 8), v7);
  result = 1;
  if ( v6 <= v7[0] )
    return -(v6 < v7[0]);
  return result;
}
