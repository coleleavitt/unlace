__int64 __fastcall sub_17663C0(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v7; // r13
  int v8; // edx
  char v9; // al
  unsigned __int16 **v10; // rsi
  __int64 v11; // r15
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  int v14; // [rsp+0h] [rbp-C8h]
  int v15; // [rsp+8h] [rbp-C0h]
  int v16; // [rsp+Ch] [rbp-BCh]
  char v17; // [rsp+1Bh] [rbp-ADh] BYREF
  unsigned int v18; // [rsp+1Ch] [rbp-ACh] BYREF
  _BYTE v19[32]; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __int64 v21; // [rsp+48h] [rbp-80h]
  _BYTE v22[120]; // [rsp+50h] [rbp-78h] BYREF

  v4 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 32));
  if ( v4 == 1 )
    return 1;
  v7 = v4;
  v8 = *(_DWORD *)(a2 + 16);
  ptr = v22;
  v21 = 0x800000000LL;
  v9 = *(_BYTE *)(a2 + 2);
  v17 = 0;
  v10 = (unsigned __int16 **)(a2 + 8 * (((v9 & 8) != 0) + 1LL) + 32);
  if ( (unsigned __int8)sub_175C6E0(a1, v10, v8, 1, (__int64)&ptr, &v17) )
  {
    v5 = 1;
  }
  else
  {
    v11 = *a1;
    v12 = v7 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 32) != v12 || v17 )
    {
      v14 = sub_EEC8C0(v12, (__int64)v10, a3);
      sub_15F3080((__int64)v19, v11);
      if ( (*(_DWORD *)a2 & 0x200000) != 0 )
      {
        v16 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
        v15 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36);
        sub_BF6C80(&v18, *(_QWORD *)(*a1 + 232));
        *(_DWORD *)(*a1 + 224) = v18 ^ v15 & (v16 ^ v18);
        v13 = *a1;
        *(_DWORD *)(v13 + 1952) = v16;
        *(_DWORD *)(v13 + 1956) = v15;
      }
      v5 = sub_19303F0(*a1, 0, v12, v14, (_DWORD)ptr, v21, *(_DWORD *)(a2 + 20), 0);
      sub_15F30C0((__int64)v19);
    }
    else
    {
      v5 = sub_19A3E40(v11, a2);
    }
  }
  if ( ptr != v22 )
    free(ptr);
  return v5;
}
