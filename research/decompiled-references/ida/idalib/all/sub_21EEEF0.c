__int64 __fastcall sub_21EEEF0(__int64 a1, int *a2)
{
  unsigned int v3; // eax
  int v4; // esi
  __int64 v5; // rdx
  bool v6; // r12
  int v7; // eax
  unsigned int v9; // eax
  __int64 v10; // r12
  int v11; // ecx
  void *v12; // [rsp+0h] [rbp-48h]
  unsigned int v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-30h]

  v4 = *a2;
  v3 = (unsigned __int16)v4;
  v15 = (unsigned __int16)v4;
  if ( (v4 & 0x20000000) != 0 )
  {
    v10 = 1LL << ((unsigned __int8)v4 - 1);
    if ( (unsigned __int16)v4 > 0x40u )
    {
      sub_2205470(&v14, 0, 0);
      v3 = v15;
      if ( v15 > 0x40 )
      {
        v11 = *a2;
        *(_QWORD *)(v14 + 8LL * (((unsigned int)(unsigned __int16)v4 - 1) >> 6)) |= v10;
        v13 = v3;
        v6 = (v11 & 0x20000000) == 0;
        v12 = (void *)v14;
        v15 = v3;
        goto LABEL_7;
      }
      v4 = *a2;
    }
    else
    {
      v14 = 0;
    }
    v5 = v10 | v14;
    goto LABEL_3;
  }
  v5 = 0;
  if ( (unsigned __int16)v4 <= 0x40u )
  {
LABEL_3:
    v6 = (v4 & 0x20000000) == 0;
LABEL_4:
    *(_DWORD *)(a1 + 8) = v3;
    *(_QWORD *)a1 = v5;
    v7 = *a2;
    *(_BYTE *)(a1 + 12) = v6;
    *(_DWORD *)(a1 + 16) = v7;
    return a1;
  }
  sub_2205470(&v14, 0, 0);
  v3 = v15;
  v5 = v14;
  v13 = v15;
  v12 = (void *)v14;
  v6 = (*a2 & 0x20000000) == 0;
  if ( v15 <= 0x40 )
    goto LABEL_4;
LABEL_7:
  sub_2205510(&v14);
  v9 = v15;
  *(_BYTE *)(a1 + 12) = v6;
  *(_DWORD *)(a1 + 8) = v9;
  *(_QWORD *)a1 = v14;
  *(_DWORD *)(a1 + 16) = *a2;
  if ( v13 <= 0x40 || !v12 )
    return a1;
  operator delete[](v12);
  return a1;
}
