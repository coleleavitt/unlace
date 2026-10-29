__int64 __fastcall sub_BDA860(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  bool v4; // zf
  __int64 v5; // rax
  int *v6; // rdi
  int v7; // ebx
  int v8; // ebp
  int *v9; // rax
  unsigned int v10[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v2 = *(_WORD *)a1 & 0x1FF;
  if ( v2 <= 0x58u )
  {
    if ( v2 == 4 )
    {
      if ( (*(_BYTE *)(a1 + 3) & 2) == 0 )
        return sub_FC7050(a2);
      v7 = *(_DWORD *)(a1 + 24);
      v8 = *(_DWORD *)(a1 + 28);
    }
    else if ( ((v2 + 433) & 0x1FFu) <= 9 )
    {
      if ( (*(_QWORD *)a1 & 0x8000000LL) == 0 )
        return sub_FC7050(a2);
      v9 = (int *)sub_BD6990(a1);
      v7 = *v9;
      v8 = v9[1];
    }
    else
    {
      if ( v2 != 74 || (*(_BYTE *)(a1 + 2) & 8) == 0 )
        return sub_FC7050(a2);
      v7 = *(_DWORD *)(a1 + 40);
      v8 = *(_DWORD *)(a1 + 44);
    }
  }
  else if ( v2 > 0x5Du )
  {
    if ( ((v2 + 394) & 0x1FFu) > 1 || (*(_BYTE *)(a1 + 3) & 2) == 0 )
      return sub_FC7050(a2);
    v4 = v2 == 119;
    v5 = 48;
    if ( !v4 )
      v5 = 32;
    v6 = (int *)(v5 + a1);
    v7 = *v6;
    v8 = v6[1];
  }
  else
  {
    if ( (*(_DWORD *)a1 & 0x200000) == 0 )
      return sub_FC7050(a2);
    v7 = *(_DWORD *)(a1 + 8 * (*(_DWORD *)(a1 + 16) + (unsigned int)((*(_BYTE *)(a1 + 2) & 8) != 0) + 1) + 32);
    v8 = *(_DWORD *)(a1 + 8 * (*(_DWORD *)(a1 + 16) + (unsigned int)((*(_BYTE *)(a1 + 2) & 8) != 0) + 1) + 36);
  }
  sub_BD2F40(v10, a2);
  return v10[0] ^ v8 & (v10[0] ^ v7);
}

