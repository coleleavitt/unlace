__int64 __fastcall sub_193E140(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  _QWORD *v12; // r13
  unsigned int v13; // ecx
  __int64 v14; // rax
  int *v15; // rax
  int v16; // ecx
  int v17; // r15d
  __int64 v18; // rax
  int v19; // [rsp+8h] [rbp-70h]
  __int64 v20; // [rsp+8h] [rbp-70h]
  unsigned int v21; // [rsp+1Ch] [rbp-5Ch] BYREF
  _BYTE v22[88]; // [rsp+20h] [rbp-58h] BYREF

  v4 = sub_1933BC0(a1, *(_QWORD *)(a2 + 16), *(double *)a3.m128_u64, a4);
  if ( v4 == 1 )
    return 1;
  v9 = v4;
  v10 = sub_1934A90(a1, *(_QWORD *)(a2 + 24), 0, a3, a4, v5, v6, v7);
  if ( v10 == 1 )
    return 1;
  v11 = v9 & 0xFFFFFFFFFFFFFFFELL;
  v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL);
  v13 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( v13 - 22 <= 9 )
    return sub_1929BB0(*a1, 0, *(unsigned int *)(a2 + 4), v13, v11, v12, a3, a4, 0);
  sub_15F3080((__int64)v22, *a1);
  if ( (*(_BYTE *)(a2 + 3) & 2) != 0 )
  {
    v14 = 48;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x77 )
      v14 = 32;
    v15 = (int *)(a2 + v14);
    v16 = *v15;
    v17 = v15[1];
  }
  else
  {
    v17 = 0;
    v16 = 0;
  }
  v19 = v16;
  sub_BF6C80(&v21, *(_QWORD *)(*a1 + 232));
  *(_DWORD *)(*a1 + 224) = v21 ^ v17 & (v21 ^ v19);
  v18 = *a1;
  *(_DWORD *)(v18 + 1956) = v17;
  *(_DWORD *)(v18 + 1952) = v19;
  v20 = sub_1929BB0(*a1, 0, *(unsigned int *)(a2 + 4), (*(_WORD *)(a2 + 2) >> 3) & 0x3F, v11, v12, a3, a4, 0);
  sub_15F30C0((__int64)v22);
  return v20;
}
