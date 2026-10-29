__int64 __fastcall sub_805650(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  char v5; // r12
  __int64 v6; // rsi
  unsigned int v7; // eax
  bool v8; // r12
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-20h]

  if ( ((*(_BYTE *)(a2 + 2) >> 3) & 3) == 1 )
  {
    v5 = *(_BYTE *)(a2 + 3);
    v6 = *(_QWORD *)(a2 + 24);
    v7 = *(_BYTE *)(a2 + 4) & 0x7F;
    v10 = v7;
    v8 = (v5 & 2) != 0;
    if ( v7 > 0x40 )
    {
      sub_2585A50(&v9, v6, 0);
      v7 = v10;
      v6 = v9;
    }
    *(_DWORD *)(a1 + 8) = v7;
    *(_QWORD *)a1 = v6;
    *(_BYTE *)(a1 + 12) = v8;
    return a1;
  }
  else
  {
    v3 = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a1 + 8) = v3;
    if ( v3 > 0x40 )
      sub_2585B30(a1);
    else
      *(_QWORD *)a1 = *(_QWORD *)(a2 + 32);
    *(_BYTE *)(a1 + 12) = *(_BYTE *)(a2 + 44);
    return a1;
  }
}

