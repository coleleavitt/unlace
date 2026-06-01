__int64 __fastcall sub_BD3DC0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, __int64 a8, char a9)
{
  int v9; // edx
  __int64 v11; // rcx
  unsigned int v12; // eax
  bool v13; // bp
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-20h]

  v9 = (*(_BYTE *)(a2 + 2) >> 3) & 3;
  if ( (_BYTE)v9 == 1 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    v12 = *(_BYTE *)(a2 + 4) & 0x7F;
    v13 = (*(_BYTE *)(a2 + 3) & 2) != 0;
    v15 = v12;
    if ( v12 > 0x40 )
    {
      sub_21E1730(&v14, v11, 0);
      v12 = v15;
      v11 = v14;
    }
    *(_DWORD *)(a1 + 16) = v12;
    *(_BYTE *)(a1 + 20) = v13;
    *(_BYTE *)(a1 + 4) &= ~1u;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v11;
    return a1;
  }
  else if ( (_BYTE)v9 )
  {
    if ( (_BYTE)v9 == 2 )
    {
      sub_A2FF00(a1, (int *)(a2 + 24));
      return a1;
    }
    else
    {
      return sub_BD3E90(a1, a2, v9, a4, a5, a6, a7, a8, a9);
    }
  }
  else
  {
    if ( (*(_WORD *)(a2 + 2) & 0x1E0) == 0x20 )
    {
      *(_BYTE *)(a1 + 4) &= ~1u;
      *(_DWORD *)a1 = 1;
    }
    else
    {
      *(_DWORD *)a1 = 0;
      *(_BYTE *)(a1 + 4) &= ~1u;
    }
    return a1;
  }
}

