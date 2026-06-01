/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: frame_state_for
// Address: 0x000DA74E

//----- (000DA74E) --------------------------------------------------------
int __cdecl _frame_state_for(int a1, int a2)
{
  int v2; // eax
  int v3; // edx
  char *v4; // eax
  _BYTE *v5; // edx
  int v6; // edi
  char v7; // cl
  _DWORD v9[32]; // [esp+10h] [ebp-148h] BYREF
  _BYTE v10[144]; // [esp+90h] [ebp-C8h] BYREF
  char v11; // [esp+120h] [ebp-38h] BYREF
  int v12; // [esp+124h] [ebp-34h]
  int v13; // [esp+128h] [ebp-30h]
  int v14; // [esp+130h] [ebp-28h]
  int v15; // [esp+144h] [ebp-14h]
  int v16; // [esp+14Ch] [ebp-Ch]

  memset(v9, 0, sizeof(v9));
  v9[24] = 0x40000000;
  v9[19] = a1 + 1;
  v2 = sub_DA20C(v9, (int)v10);
  v3 = 0;
  if ( !v2 && v14 != 2 )
  {
    v4 = v10;
    v5 = (_BYTE *)(a2 + 92);
    v6 = -3 * a2;
    do
    {
      v7 = *((_DWORD *)v4 + 1);
      *v5 = v7;
      if ( v7 == 1 || v7 == 2 )
        *(_DWORD *)(v6 + 4 * (_DWORD)v5 - 352) = *(_DWORD *)v4;
      else
        *(_DWORD *)(v6 + 4 * (_DWORD)v5 - 352) = 0;
      ++v5;
      v4 += 8;
    }
    while ( v4 != &v11 );
    v3 = a2;
    *(_DWORD *)(a2 + 8) = v12;
    *(_WORD *)(a2 + 88) = v13;
    *(_WORD *)(a2 + 90) = v15;
    *(_DWORD *)(a2 + 12) = v9[26];
    *(_DWORD *)(a2 + 4) = v16;
  }
  return v3;
}
