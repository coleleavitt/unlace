/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479FBD
// Address: 0x00479FBD

//----- (00479FBD) --------------------------------------------------------
int __usercall sub_479FBD@<eax>(
        int a1@<ebx>,
        _BYTE *a2,
        unsigned int a3,
        int a4,
        char a5,
        int a6,
        int a7,
        unsigned __int8 a8,
        _DWORD *a9)
{
  int v9; // eax
  unsigned __int8 v11; // dl
  _BYTE *v12; // esi
  _BYTE *v13; // esi
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int v17; // eax
  _DWORD v18[3]; // [esp+8h] [ebp-10h] BYREF
  char v19; // [esp+14h] [ebp-4h]

  if ( a4 <= 0 )
    v9 = 0;
  else
    v9 = a4;
  if ( a3 > v9 + 9 )
  {
    sub_467FF8((int)v18, a9);
    v11 = a8;
    if ( a8 )
    {
      sub_47A3F1((int)a2, a3, &a2[*(_DWORD *)a7 == 45], a4 > 0);
      v11 = a8;
    }
    v12 = a2;
    if ( *(_DWORD *)a7 == 45 )
    {
      *a2 = 45;
      v12 = a2 + 1;
    }
    if ( a4 > 0 )
    {
      *v12 = v12[1];
      *++v12 = ***(_BYTE ***)(v18[1] + 136);
    }
    v13 = &v12[a4 + (v11 ^ 1)];
    v14 = -1;
    if ( a3 != -1 )
      v14 = a3 + a2 - v13;
    if ( sub_46C78C((int)a2, a4, v13, v14, (int)"e+000") )
    {
      sub_467F04(a1, a4);
      __debugbreak();
    }
    if ( a5 )
      *v13 = 69;
    if ( **(_BYTE **)(a7 + 8) != 48 )
    {
      v15 = *(_DWORD *)(a7 + 4) - 1;
      if ( v15 < 0 )
      {
        v15 = 1 - *(_DWORD *)(a7 + 4);
        v13[1] = 45;
      }
      if ( v15 >= 100 )
      {
        v16 = v15 / 100;
        v15 %= 100;
        v13[2] += v16;
      }
      if ( v15 >= 10 )
      {
        v17 = v15 / 10;
        v15 %= 10;
        v13[3] += v17;
      }
      v13[4] += v15;
    }
    if ( a6 == 2 && v13[2] == 48 )
      sub_464310((unsigned int)(v13 + 2), (unsigned int)(v13 + 3), 3u);
    if ( v19 )
      *(_DWORD *)(v18[0] + 848) &= ~2u;
    return 0;
  }
  else
  {
    *sub_46B984() = 34;
    sub_467EF4(a1, a4);
    return 34;
  }
}
