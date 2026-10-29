__int64 __fastcall sub_14D2560(__int64 a1, __int64 a2, char a3, __m128i a4, __m128 a5)
{
  __int16 v6; // ax
  unsigned __int64 v8; // rax
  _BOOL4 v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // r14
  unsigned __int64 v14; // rbp
  __int16 v15; // ax
  int v17; // eax
  unsigned int v18; // r13d
  __int64 v19; // r14
  _BOOL8 v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  unsigned int v24; // ebp
  __int64 v25; // r12
  __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int32 v29; // [rsp+4h] [rbp-54h] BYREF
  unsigned __int64 v30; // [rsp+8h] [rbp-50h] BYREF
  int v31; // [rsp+10h] [rbp-48h] BYREF
  __int64 v32; // [rsp+18h] [rbp-40h]
  __int64 v33; // [rsp+28h] [rbp-30h]

  v6 = *(_WORD *)(a1 + 32);
  v30 = 0;
  switch ( v6 )
  {
    case 420:
      v23 = *(_DWORD *)(a1 + 20);
      v24 = *(_DWORD *)(a1 + 16);
      v25 = *(_QWORD *)(a1 + 24);
      if ( !v23 )
        v23 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v23;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v30 = sub_17A2730(*(_QWORD *)(a1 + 96), v25, v24);
LABEL_12:
      v14 = v30;
      if ( v30 >= 2 )
      {
        v15 = *(_WORD *)(a1 + 32);
        if ( v15 != 27 )
        {
LABEL_14:
          v30 = v14;
          goto LABEL_15;
        }
        v26 = *(_QWORD *)(a1 + 8);
        v27 = *(_QWORD *)(v26 + 2944);
        if ( v27 >= *(unsigned int *)(v26 + 2912) )
          v28 = sub_14180A0(v26, 1u);
        else
          v28 = *(_QWORD *)(v26 + 2904) + 24 * v27;
        if ( *(_WORD *)(v28 + 16) != 20 )
        {
          v15 = *(_WORD *)(a1 + 32);
          goto LABEL_14;
        }
        v30 = sub_14C7C00(a1, v14, a4);
        if ( v30 > 1 )
        {
          v15 = *(_WORD *)(a1 + 32);
LABEL_15:
          if ( v15 == 47 )
            sub_1555F90(a1, &v30);
        }
      }
      return v30;
    case 421:
      v17 = *(_DWORD *)(a1 + 20);
      v18 = *(_DWORD *)(a1 + 16);
      v19 = *(_QWORD *)(a1 + 24);
      if ( !v17 )
        v17 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v17;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v20 = 0;
      if ( a3 )
      {
        v21 = *(unsigned __int16 *)(a1 + 32);
        if ( (unsigned __int16)v21 > 0x25u || (v22 = 0x2004500000LL, !_bittest64(&v22, v21)) )
          v20 = (v21 & 0xFFFB) != 34;
      }
      v30 = sub_17A28D0(*(_QWORD *)(a1 + 96), a2, v19, v18, v20);
      goto LABEL_12;
    case 419:
      v11 = *(_DWORD *)(a1 + 20);
      v12 = *(_DWORD *)(a1 + 16);
      v13 = *(_QWORD *)(a1 + 24);
      if ( !v11 )
        v11 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v11;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v30 = sub_17A2920(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), a2, v13, v12, a1 + 16);
      goto LABEL_12;
  }
  v29 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( !(unsigned __int8)sub_14D1670((const __m128i *)a1, a2, 0, 0, 0, 0, a4, a5, 0, 0, &v29, (__int64)&v31) )
  {
    v8 = *(unsigned __int16 *)(a1 + 32);
    v9 = 0;
    if ( a3 )
    {
      if ( (unsigned __int16)v8 > 0x25u || (v10 = 0x2004500000LL, !_bittest64(&v10, v8)) )
        v9 = (v8 & 0xFFFB) != 34;
    }
    v30 = sub_190BE30(*(_QWORD *)(a1 + 96), v9, 0, 0);
    goto LABEL_12;
  }
  return 1;
}
