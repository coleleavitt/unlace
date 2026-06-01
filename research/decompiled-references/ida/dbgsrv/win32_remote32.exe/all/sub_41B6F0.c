/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B6F0
// Address: 0x0041B6F0

//----- (0041B6F0) --------------------------------------------------------
int __userpurge sub_41B6F0@<eax>(int a1@<ebx>, int a2, int a3)
{
  unsigned int v3; // ecx
  int v4; // eax
  void *v5; // eax
  int v6; // esi
  void *v7; // eax
  void *v9; // [esp+Ch] [ebp-18h] BYREF
  int v10; // [esp+10h] [ebp-14h]
  unsigned int v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+20h] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 < dword_4B6B24 && (v4 = *(_DWORD *)(dword_4B6B20 + 4 * v3)) != 0 )
  {
    v9 = nullptr;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    if ( sub_45D490(a1, (int)&v9, v4) >= 0 )
    {
      v6 = v10 != 0 ? v10 - 1 : 0;
      if ( v6 + 2 <= v11 )
      {
        v7 = v9;
      }
      else
      {
        v7 = sub_453B00((int)&v9, v9, v6 + 2, 1u);
        v9 = v7;
      }
      v10 = v6 + 2;
      *((_BYTE *)v7 + v6 + 1) = 0;
      *((_BYTE *)v9 + v6) = 10;
      *(_DWORD *)(a3 + 8) = v9;
      *(_DWORD *)(a3 + 12) = v10;
      *(_DWORD *)(a3 + 16) = v11;
      v5 = nullptr;
      *(_BYTE *)a3 = 7;
      v9 = nullptr;
      v10 = 0;
      v11 = 0;
    }
    else
    {
      *(_DWORD *)(a3 + 8) = -1;
      v5 = v9;
    }
    v12 = 2;
    if ( v5 )
    {
      v10 = 0;
      sub_453A20(v5);
    }
  }
  else
  {
    *(_DWORD *)(a3 + 8) = -1;
  }
  return 0;
}
// 4B6B20: using guessed type int dword_4B6B20;
// 4B6B24: using guessed type int dword_4B6B24;
