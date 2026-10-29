__int64 __fastcall sub_1C93790(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 *v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v18; // rsi
  unsigned __int64 *v19; // r12
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // [rsp+8h] [rbp-30h] BYREF

  if ( *(char *)(a2 + 2) < 0 )
  {
    v18 = *(_QWORD *)(a2 + 16);
    v19 = sub_1C8AA80(a1, v18, a3, a4);
    if ( v19 )
    {
      v20 = sub_EEC8C0(a2, v18, *(double *)a3.m128_u64);
      return sub_1944A80(*a1, v19, *(_DWORD *)(a2 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF, v20, a3, a4);
    }
    else
    {
      return 1;
    }
  }
  else
  {
    v5 = *a1;
    sub_18C79B0(*a1, 0, 0, 4);
    v9 = *(_QWORD *)(a2 + 16);
    v21 = nullptr;
    if ( (*(_WORD *)v9 & 0x1FF) == 0x14 && (v10 = *(_QWORD *)(v9 + 24), (*(_WORD *)v10 & 0x1FF) == 0x45) )
    {
      v11 = sub_1C93520(a1, (int *)v10, 0, &v21, a3, a4);
      if ( v11 > 1 )
      {
        v10 = *(unsigned int *)(v9 + 16);
        v11 = sub_190C990(*a1, v10, *(_DWORD *)(v9 + 20), v11 & 0xFFFFFFFFFFFFFFFELL, *(double *)a3.m128_u64, a4);
      }
    }
    else
    {
      v10 = v9;
      v11 = (unsigned __int64)sub_1C7CFE0(a1, v9, a3, a4, v6, v7, v8);
    }
    v14 = v21;
    if ( v21 )
    {
      v15 = sub_EEC8C0(a2, v10, *(double *)a3.m128_u64);
      v16 = sub_1944A80(*a1, v14, *(_DWORD *)(a2 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 0xF, v15, a3, a4);
    }
    else if ( v11 == 1 )
    {
      v16 = 1;
    }
    else
    {
      v16 = sub_1934340(
              *a1,
              (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL),
              *(unsigned int *)(a2 + 24),
              (*(_BYTE *)(a2 + 2) >> 3) & 0xF,
              v12,
              v13,
              (__m128i)a3,
              a4);
    }
    sub_190D5E0(v5, a3);
    return v16;
  }
}
