__int64 __fastcall sub_21EF060(__int64 a1, unsigned __int16 *a2)
{
  int v2; // ecx
  unsigned int v3; // eax
  bool v4; // r12
  unsigned __int64 v5; // rdx
  int v6; // eax
  int v8; // r12d
  unsigned int v9; // eax
  bool v10; // cc
  void *v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-40h]
  bool v13; // [rsp+Ch] [rbp-3Ch]
  __int64 v14; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-30h]

  v2 = *(_DWORD *)a2;
  v3 = *a2;
  v12 = v3;
  v4 = (v2 & 0x20000000) == 0;
  v5 = 0;
  if ( v3 <= 0x40 )
    goto LABEL_2;
  sub_2205470(&v11, 0, 0);
  v3 = v12;
  v5 = (unsigned __int64)v11;
  v13 = v4;
  if ( v12 <= 0x40 )
  {
    v2 = *(_DWORD *)a2;
LABEL_2:
    *(_DWORD *)(a1 + 8) = v3;
    *(_QWORD *)a1 = v5 | 1;
    v6 = *(_DWORD *)a2;
    *(_BYTE *)(a1 + 12) = (v2 & 0x20000000) == 0;
    *(_DWORD *)(a1 + 16) = v6;
    return a1;
  }
  *(_QWORD *)v11 |= 1uLL;
  v8 = *(_DWORD *)a2;
  v15 = v3;
  sub_2205510(&v14);
  v9 = v15;
  *(_BYTE *)(a1 + 12) = (v8 & 0x20000000) == 0;
  v10 = v12 <= 0x40;
  *(_DWORD *)(a1 + 8) = v9;
  *(_QWORD *)a1 = v14;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  if ( v10 || !v11 )
    return a1;
  operator delete[](v11);
  return a1;
}
