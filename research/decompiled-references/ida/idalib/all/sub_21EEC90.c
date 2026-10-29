__int64 __fastcall sub_21EEC90(__int64 a1, unsigned __int16 *a2)
{
  int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // edi
  unsigned int v6; // edi
  unsigned __int64 v7; // rcx
  char v8; // al
  int v9; // eax
  unsigned int v11; // r13d
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  bool v14; // bl
  unsigned int v15; // eax
  void *v16; // [rsp+0h] [rbp-48h]
  unsigned int v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+18h] [rbp-30h]

  v3 = *(_DWORD *)a2;
  v4 = *a2;
  v5 = *(_DWORD *)a2;
  v19 = v4;
  v6 = HIBYTE(v5);
  if ( (v6 & 0x20) != 0 )
  {
    v11 = v4 - 1;
    v12 = ~(1LL << ((unsigned __int8)v4 - 1));
    if ( v4 > 0x40 )
    {
      sub_2205470(&v18, -1, 1);
      v4 = v19;
      if ( v19 > 0x40 )
      {
        *(_QWORD *)(v18 + 8LL * (v11 >> 6)) &= v12;
        v3 = *(_DWORD *)a2;
        v7 = v18;
        goto LABEL_13;
      }
      v3 = *(_DWORD *)a2;
    }
    else
    {
      v13 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v4;
      if ( !v4 )
        v13 = 0;
      v18 = v13;
    }
    v7 = v18 & v12;
LABEL_13:
    v17 = v4;
    v16 = (void *)v7;
    goto LABEL_14;
  }
  if ( v4 <= 0x40 )
  {
    v17 = v4;
    v7 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v4;
    if ( !v4 )
      v7 = 0;
    v8 = 1;
    v16 = (void *)v7;
    if ( (v6 & 0x80u) == 0 )
      goto LABEL_6;
LABEL_24:
    v18 = v7;
LABEL_25:
    if ( v4 == 1 )
      v18 = 0;
    else
      v18 >>= 1;
    goto LABEL_27;
  }
  sub_2205470(&v18, -1, 1);
  v3 = *(_DWORD *)a2;
  v4 = v19;
  v7 = v18;
  v17 = v19;
  v16 = (void *)v18;
  if ( (HIBYTE(*(_DWORD *)a2) & 0x80u) == 0 )
    goto LABEL_14;
  if ( v19 <= 0x40 )
    goto LABEL_24;
  sub_2205510(&v18);
  v4 = v19;
  if ( v19 <= 0x40 )
    goto LABEL_25;
  sub_220ABD0(&v18, 1);
LABEL_27:
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  v7 = v18;
  v4 = v19;
  v3 = *(_DWORD *)a2;
  v16 = (void *)v18;
  v17 = v19;
LABEL_14:
  v19 = v4;
  v14 = (v3 & 0x20000000) == 0;
  v8 = v14;
  if ( v4 <= 0x40 )
  {
LABEL_6:
    *(_QWORD *)a1 = v7;
    *(_BYTE *)(a1 + 12) = v8;
    v9 = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 8) = v4;
    *(_DWORD *)(a1 + 16) = v9;
    return a1;
  }
  sub_2205510(&v18);
  v15 = v19;
  *(_BYTE *)(a1 + 12) = v14;
  *(_DWORD *)(a1 + 8) = v15;
  *(_QWORD *)a1 = v18;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  if ( v17 <= 0x40 || !v16 )
    return a1;
  operator delete[](v16);
  return a1;
}
