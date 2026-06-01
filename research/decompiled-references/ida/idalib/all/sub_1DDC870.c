__int64 __fastcall sub_1DDC870(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  unsigned __int16 *v13; // r12
  unsigned __int16 *v14; // rax
  unsigned __int64 v15; // r12
  _QWORD *v16; // r13
  unsigned int v17; // ecx
  __int64 v18; // rax
  int *v19; // rax
  int v20; // edx
  int v21; // r15d
  __int64 v22; // rax
  int v23; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+8h] [rbp-70h]
  unsigned int v25; // [rsp+1Ch] [rbp-5Ch] BYREF
  _BYTE v26[88]; // [rsp+20h] [rbp-58h] BYREF

  v8 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6, a7, a8);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v13 = v8;
  v14 = sub_1DDC230(a1, *(_QWORD *)(a2 + 24), 0, a7, a8, v9, v10, v11);
  if ( v14 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v15 = (unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL;
  v16 = (_QWORD *)((unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL);
  if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD *)(a2 + 16) != v15 || (result = a2, *(_QWORD **)(a2 + 24) != v16) )
  {
    v17 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
    if ( v17 - 22 <= 9 )
    {
      return sub_1929BB0(*a1, 0, *(unsigned int *)(a2 + 4), v17, v15, v16, a7, a8, 0);
    }
    else
    {
      sub_15F3080((__int64)v26, *a1);
      if ( (*(_BYTE *)(a2 + 3) & 2) != 0 )
      {
        v18 = 48;
        if ( (*(_WORD *)a2 & 0x1FF) != 0x77 )
          v18 = 32;
        v19 = (int *)(a2 + v18);
        v20 = *v19;
        v21 = v19[1];
      }
      else
      {
        v21 = 0;
        v20 = 0;
      }
      v23 = v20;
      sub_BF6C80(&v25, *(_QWORD *)(*a1 + 232));
      *(_DWORD *)(*a1 + 224) = v25 ^ v21 & (v25 ^ v23);
      v22 = *a1;
      *(_DWORD *)(v22 + 1956) = v21;
      *(_DWORD *)(v22 + 1952) = v23;
      v24 = sub_1929BB0(*a1, 0, *(unsigned int *)(a2 + 4), (*(_WORD *)(a2 + 2) >> 3) & 0x3F, v15, v16, a7, a8, 0);
      sub_15F30C0((__int64)v26);
      return v24;
    }
  }
  return result;
}
