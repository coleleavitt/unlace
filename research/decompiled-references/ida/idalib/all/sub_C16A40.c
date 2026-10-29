void __fastcall sub_C16A40(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  void *v6; // rsi
  bool v7; // dl
  void *v8; // rax
  bool v9; // r12
  unsigned int v10; // eax
  bool v11; // cc
  void *v12; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-30h]

  v4 = *(unsigned __int16 *)a3;
  v5 = HIBYTE(*a3);
  v13 = v4;
  if ( v4 <= 0x40 )
  {
    v6 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v4) & a2);
    if ( !v4 )
      v6 = nullptr;
    v7 = (v5 & 0x20) == 0;
    v12 = v6;
    goto LABEL_5;
  }
  sub_2205470(&v12, a2, (v5 >> 5) & 1);
  v4 = v13;
  v9 = (*a3 & 0x20000000) == 0;
  v7 = v9;
  v15 = v13;
  if ( v13 <= 0x40 )
  {
LABEL_5:
    *(_DWORD *)(a1 + 8) = v4;
    v8 = v12;
    *(_BYTE *)(a1 + 12) = v7;
    *(_QWORD *)a1 = v8;
    *(_DWORD *)(a1 + 16) = *a3;
    return;
  }
  sub_2205510(&v14);
  v10 = v15;
  v11 = v13 <= 0x40;
  *(_BYTE *)(a1 + 12) = v9;
  *(_DWORD *)(a1 + 8) = v10;
  *(_QWORD *)a1 = v14;
  *(_DWORD *)(a1 + 16) = *a3;
  if ( !v11 && v12 )
    operator delete[](v12);
}
