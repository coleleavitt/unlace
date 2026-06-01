__int64 __fastcall sub_CF8770(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // eax
  bool v5; // zf
  unsigned __int64 v6; // rdx
  unsigned int v7; // eax
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-20h]

  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_BYTE *)(a2 + 12) == 0;
  v15 = v4;
  if ( !v5 )
  {
    if ( v4 > 0x40 )
    {
      sub_2205510(&v14);
      v4 = v15;
      if ( v15 > 0x40 )
      {
        sub_220ABD0(&v14, a3);
        v6 = v14;
LABEL_8:
        v7 = v15;
        *(_QWORD *)a1 = v6;
        *(_BYTE *)(a1 + 12) = 1;
        *(_DWORD *)(a1 + 8) = v7;
        return a1;
      }
    }
    else
    {
      v14 = *(_QWORD *)a2;
    }
    v6 = 0;
    if ( a3 != v4 )
      v6 = v14 >> a3;
    goto LABEL_8;
  }
  if ( v4 <= 0x40 )
  {
    v9 = *(_QWORD *)a2;
LABEL_11:
    v10 = 0;
    if ( v4 )
      v10 = (__int64)(v9 << (64 - (unsigned __int8)v4)) >> (64 - (unsigned __int8)v4);
    v11 = v10 >> 63;
    v12 = v10 >> a3;
    if ( a3 == v4 )
      v12 = v11;
    v14 = v12;
    sub_CF8100(&v14);
    goto LABEL_16;
  }
  sub_2205510(&v14);
  v4 = v15;
  if ( v15 <= 0x40 )
  {
    v9 = v14;
    goto LABEL_11;
  }
  sub_2206EF0(&v14, a3);
LABEL_16:
  v13 = v15;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = v13;
  *(_QWORD *)a1 = v14;
  return a1;
}
