__int64 __fastcall sub_19853B0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // r12
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __int64 v15; // rdi
  unsigned int v16; // ecx
  __int64 v17; // rax
  int *v18; // rax
  int v19; // edx
  int v20; // r15d
  __int64 v21; // rax
  int v22; // [rsp+8h] [rbp-70h]
  __int64 v23; // [rsp+8h] [rbp-70h]
  unsigned int v24; // [rsp+1Ch] [rbp-5Ch] BYREF
  _BYTE v25[88]; // [rsp+20h] [rbp-58h] BYREF

  v5 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), *(double *)a3.m128_u64, a4);
  if ( v5 == 1 )
    return 1;
  v9 = *(_QWORD **)(a2 + 24);
  v10 = v5;
  if ( v9 )
  {
    v11 = sub_197B880((__int64)a1, *(_QWORD *)(a2 + 24), 0, v6, v7, v8, a3, a4);
    if ( v11 == 1 )
      return 1;
    v13 = v11 & 0xFFFFFFFFFFFFFFFELL;
    v14 = v10 & 0xFFFFFFFFFFFFFFFELL;
    v9 = (_QWORD *)v13;
    if ( v14 == *(_QWORD *)(a2 + 16) && *(_QWORD *)(a2 + 24) == v13 )
      return a2;
  }
  else
  {
    v14 = v5 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_QWORD *)(a2 + 16) == (v5 & 0xFFFFFFFFFFFFFFFELL) )
      return a2;
  }
  v15 = *a1;
  v16 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( v16 - 22 <= 9 )
    return sub_1929BB0(v15, 0, *(unsigned int *)(a2 + 4), v16, v14, v9, a3, a4, 0);
  sub_15F3080((__int64)v25, *a1);
  if ( (*(_BYTE *)(a2 + 3) & 2) != 0 )
  {
    v17 = 48;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x77 )
      v17 = 32;
    v18 = (int *)(a2 + v17);
    v19 = *v18;
    v20 = v18[1];
  }
  else
  {
    v20 = 0;
    v19 = 0;
  }
  v22 = v19;
  sub_BF6C80(&v24, *(_QWORD *)(*a1 + 232));
  *(_DWORD *)(*a1 + 224) = v24 ^ v20 & (v24 ^ v22);
  v21 = *a1;
  *(_DWORD *)(v21 + 1956) = v20;
  *(_DWORD *)(v21 + 1952) = v22;
  v23 = sub_1929BB0(*a1, 0, *(unsigned int *)(a2 + 4), (*(_WORD *)(a2 + 2) >> 3) & 0x3F, v14, v9, a3, a4, 0);
  sub_15F30C0((__int64)v25);
  return v23;
}
