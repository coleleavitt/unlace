__int64 __fastcall sub_1D4D710(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // r13
  __int64 v12; // rdx
  char v13; // al
  unsigned __int16 **v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r15
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // [rsp+0h] [rbp-C8h]
  int v22; // [rsp+8h] [rbp-C0h]
  int v23; // [rsp+Ch] [rbp-BCh]
  char v24; // [rsp+1Bh] [rbp-ADh] BYREF
  unsigned int v25; // [rsp+1Ch] [rbp-ACh] BYREF
  _BYTE v26[32]; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __int64 v28; // [rsp+48h] [rbp-80h]
  _BYTE v29[120]; // [rsp+50h] [rbp-78h] BYREF

  v8 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 32), a6, a7, a3, a4, a5);
  if ( v8 == 1 )
    return 1;
  v11 = v8;
  v12 = *(unsigned int *)(a2 + 16);
  ptr = v29;
  v28 = 0x800000000LL;
  v13 = *(_BYTE *)(a2 + 2);
  v24 = 0;
  v14 = (unsigned __int16 **)(a2 + 8 * (((v13 & 8) != 0) + 1LL) + 32);
  if ( (unsigned __int8)sub_1D43E00(a1, v14, v12, 1u, (__int64)&ptr, &v24, a6, a7) )
  {
    v9 = 1;
  }
  else
  {
    v17 = *a1;
    v18 = v11 & 0xFFFFFFFFFFFFFFFELL;
    v19 = *(unsigned int *)(*a1 + 12632);
    if ( (_DWORD)v19 || *(_QWORD *)(a2 + 32) != v18 || v24 )
    {
      v21 = sub_EEC8C0(v18, (__int64)v14, *(double *)a6.m128_u64);
      sub_15F3080((__int64)v26, v17);
      if ( (*(_DWORD *)a2 & 0x200000) != 0 )
      {
        v23 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
        v22 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36);
        sub_BF6C80(&v25, *(_QWORD *)(*a1 + 232));
        *(_DWORD *)(*a1 + 224) = v25 ^ v22 & (v23 ^ v25);
        v20 = *a1;
        *(_DWORD *)(v20 + 1952) = v23;
        *(_DWORD *)(v20 + 1956) = v22;
      }
      v9 = sub_19303F0(*a1, 0, v18, v21, (unsigned __int64 *)ptr, (unsigned int)v28, a6, a7, *(_DWORD *)(a2 + 20), 0);
      sub_15F30C0((__int64)v26);
    }
    else
    {
      v9 = (__int64)sub_19A3E40(v17, (unsigned __int16 *)a2, v15, v19, v16, a6, a7);
    }
  }
  if ( ptr != v29 )
    free(ptr);
  return v9;
}
