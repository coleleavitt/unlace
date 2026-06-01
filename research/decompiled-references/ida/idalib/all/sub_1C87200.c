__int64 __fastcall sub_1C87200(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 *v8; // rax
  __int64 v9; // rbx
  unsigned __int16 *v11; // r13
  __int64 v12; // rdx
  char v13; // al
  unsigned __int64 *v14; // rsi
  unsigned __int64 v15; // r13
  unsigned int v16; // r15d
  __int64 v17; // rax
  int v18; // [rsp+8h] [rbp-C0h]
  int v19; // [rsp+Ch] [rbp-BCh]
  char v20; // [rsp+1Bh] [rbp-ADh] BYREF
  unsigned int v21; // [rsp+1Ch] [rbp-ACh] BYREF
  _BYTE v22[32]; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __int64 v24; // [rsp+48h] [rbp-80h]
  _BYTE v25[120]; // [rsp+50h] [rbp-78h] BYREF

  v8 = sub_1C7CFE0(a1, *(_QWORD *)(a2 + 32), a6, a7, a3, a4, a5);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v11 = v8;
  v12 = *(unsigned int *)(a2 + 16);
  ptr = v25;
  v24 = 0x800000000LL;
  v13 = *(_BYTE *)(a2 + 2);
  v20 = 0;
  v14 = (unsigned __int64 *)(a2 + 8 * (((v13 & 8) != 0) + 1LL) + 32);
  if ( (unsigned __int8)sub_1C7D7D0(a1, v14, v12, 1u, (__int64)&ptr, &v20, a6, a7) )
  {
    v9 = 1;
  }
  else
  {
    v15 = (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFELL;
    v16 = sub_EEC8C0(v15, (__int64)v14, *(double *)a6.m128_u64);
    sub_15F3080((__int64)v22, *a1);
    if ( (*(_DWORD *)a2 & 0x200000) != 0 )
    {
      v19 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
      v18 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36);
      sub_BF6C80(&v21, *(_QWORD *)(*a1 + 232));
      *(_DWORD *)(*a1 + 224) = v21 ^ v18 & (v19 ^ v21);
      v17 = *a1;
      *(_DWORD *)(v17 + 1952) = v19;
      *(_DWORD *)(v17 + 1956) = v18;
    }
    v9 = sub_19303F0(*a1, 0, v15, v16, (unsigned __int64 *)ptr, (unsigned int)v24, a6, a7, *(_DWORD *)(a2 + 20), 0);
    sub_15F30C0((__int64)v22);
  }
  if ( ptr != v25 )
    free(ptr);
  return v9;
}
