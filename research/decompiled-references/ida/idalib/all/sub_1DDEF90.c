__int64 __fastcall sub_1DDEF90(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v9; // rax
  __int64 v10; // rbx
  unsigned __int16 *v12; // r13
  unsigned __int64 v13; // rdx
  char v14; // al
  unsigned __int64 *v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r15
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // [rsp+0h] [rbp-C8h]
  int v23; // [rsp+8h] [rbp-C0h]
  int v24; // [rsp+Ch] [rbp-BCh]
  char v25; // [rsp+1Bh] [rbp-ADh] BYREF
  unsigned int v26; // [rsp+1Ch] [rbp-ACh] BYREF
  _BYTE v27[32]; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __int64 v29; // [rsp+48h] [rbp-80h]
  _BYTE v30[120]; // [rsp+50h] [rbp-78h] BYREF

  v9 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 32), a3, a4, a5, a6, a7, a8);
  if ( v9 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v12 = v9;
  v13 = *(unsigned int *)(a2 + 16);
  ptr = v30;
  v29 = 0x800000000LL;
  v14 = *(_BYTE *)(a2 + 2);
  v25 = 0;
  v15 = (unsigned __int64 *)(a2 + 8 * (((v14 & 8) != 0) + 1LL) + 32);
  if ( (unsigned __int8)sub_1DDBD00(a1, v15, v13, 1u, (__int64)&ptr, &v25, a7, a8) )
  {
    v10 = 1;
  }
  else
  {
    v18 = *a1;
    v19 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFELL;
    v20 = *(unsigned int *)(*a1 + 12632);
    if ( (_DWORD)v20 || *(_QWORD *)(a2 + 32) != v19 || v25 )
    {
      v22 = sub_EEC8C0(v19, (__int64)v15, *(double *)a7.m128_u64);
      sub_15F3080((__int64)v27, v18);
      if ( (*(_DWORD *)a2 & 0x200000) != 0 )
      {
        v24 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32);
        v23 = *(_DWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 36);
        sub_BF6C80(&v26, *(_QWORD *)(*a1 + 232));
        *(_DWORD *)(*a1 + 224) = v26 ^ v23 & (v24 ^ v26);
        v21 = *a1;
        *(_DWORD *)(v21 + 1952) = v24;
        *(_DWORD *)(v21 + 1956) = v23;
      }
      v10 = sub_19303F0(*a1, 0, v19, v22, (unsigned __int64 *)ptr, (unsigned int)v29, a7, a8, *(_DWORD *)(a2 + 20), 0);
      sub_15F30C0((__int64)v27);
    }
    else
    {
      v10 = (__int64)sub_19A3E40(v18, (unsigned __int16 *)a2, v16, v20, v17, a7, a8);
    }
  }
  if ( ptr != v30 )
    free(ptr);
  return v10;
}
