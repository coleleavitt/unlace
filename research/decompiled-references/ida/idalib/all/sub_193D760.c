__int64 __fastcall sub_193D760(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // r13
  int v9; // edx
  char v10; // al
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // r13
  unsigned int v13; // r15d
  __int64 v14; // rax
  int v15; // [rsp+8h] [rbp-C0h]
  int v16; // [rsp+Ch] [rbp-BCh]
  char v17; // [rsp+1Bh] [rbp-ADh] BYREF
  unsigned int v18; // [rsp+1Ch] [rbp-ACh] BYREF
  _BYTE v19[32]; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __int64 v21; // [rsp+48h] [rbp-80h]
  _BYTE v22[120]; // [rsp+50h] [rbp-78h] BYREF

  v5 = sub_1933BC0(a1, *(_QWORD *)(a2 + 32), *(double *)a3.m128_u64, a4);
  if ( v5 == 1 )
    return 1;
  v8 = v5;
  v9 = *(_DWORD *)(a2 + 16);
  ptr = v22;
  v21 = 0x800000000LL;
  v10 = *(_BYTE *)(a2 + 2);
  v17 = 0;
  v11 = (unsigned __int64 *)(a2 + 8 * (((v10 & 8) != 0) + 1LL) + 32);
  if ( (unsigned __int8)sub_19347F0(a1, v11, v9, 1, (__int64)&ptr, &v17, *(double *)a3.m128_u64, a4) )
  {
    v6 = 1;
  }
  else
  {
    v12 = v8 & 0xFFFFFFFFFFFFFFFELL;
    v13 = sub_EEC8C0(v12, (__int64)v11, *(double *)a3.m128_u64);
    sub_15F3080((__int64)v19, *a1);
    if ( (*(_DWORD *)a2 & 0x200000) != 0 )
    {
      v16 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
      v15 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36);
      sub_BF6C80(&v18, *(_QWORD *)(*a1 + 232));
      *(_DWORD *)(*a1 + 224) = v18 ^ v15 & (v16 ^ v18);
      v14 = *a1;
      *(_DWORD *)(v14 + 1952) = v16;
      *(_DWORD *)(v14 + 1956) = v15;
    }
    v6 = sub_19303F0(*a1, 0, v12, v13, (unsigned __int64 *)ptr, (unsigned int)v21, a3, a4, *(_DWORD *)(a2 + 20), 0);
    sub_15F30C0((__int64)v19);
  }
  if ( ptr != v22 )
    free(ptr);
  return v6;
}
