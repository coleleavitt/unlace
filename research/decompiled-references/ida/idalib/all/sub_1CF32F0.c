__int64 __fastcall sub_1CF32F0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  _QWORD *v15; // r13
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

  v7 = sub_1CE88F0(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return 1;
  v12 = v7;
  v13 = sub_1CE94F0(a1, *(_QWORD *)(a2 + 24), 0, a6, a7, v8, v9, v10);
  if ( v13 == 1 )
    return 1;
  v14 = v12 & 0xFFFFFFFFFFFFFFFELL;
  v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 16) != v14 || (result = a2, *(_QWORD **)(a2 + 24) != v15) )
  {
    v16 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
    if ( v16 - 22 <= 9 )
    {
      return sub_1929BB0(*a1, 0, *(unsigned int *)(a2 + 4), v16, v14, v15, a6, a7, 0);
    }
    else
    {
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
      v23 = sub_1929BB0(*a1, 0, *(unsigned int *)(a2 + 4), (*(_WORD *)(a2 + 2) >> 3) & 0x3F, v14, v15, a6, a7, 0);
      sub_15F30C0((__int64)v25);
      return v23;
    }
  }
  return result;
}
