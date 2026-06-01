__int64 __fastcall sub_19B4A30(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v8; // r15
  bool v9; // r13
  unsigned int v10; // r14d
  _QWORD *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // r13
  unsigned __int8 v20; // al
  __int64 v21; // rdi
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  char v35; // al
  unsigned __int64 v36; // rax
  bool v37; // al
  int v38; // eax
  __int64 v39; // rax
  int v40; // eax
  _QWORD *v41; // [rsp+8h] [rbp-70h]
  unsigned int v42; // [rsp+8h] [rbp-70h]
  bool v43; // [rsp+17h] [rbp-61h] BYREF
  __int64 v44; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v45[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = a2 & 0xFFFFFFFFFFFFFFFELL;
  if ( (a2 & 0xFFFFFFFFFFFFFFFELL) == 0 )
    return 1;
  v9 = a5;
  v10 = a3;
  v12 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFFELL);
  if ( !(_BYTE)a6 )
  {
    v42 = a4;
    v35 = sub_1E534E0(a1, a2 & 0xFFFFFFFFFFFFFFFELL, 0);
    a4 = v42;
    if ( v35 )
      return 1;
  }
  if ( !(_BYTE)a4 )
    goto LABEL_4;
  if ( *(char *)(*(_QWORD *)(a1 + 232) + 105LL) < 0 )
  {
    a4 = *(_QWORD *)(a1 + 248);
    if ( *(_QWORD *)(v8 + 8) == *(_QWORD *)(a4 + 19104) )
    {
      v41 = *(_QWORD **)(a1 + 248);
      v23 = sub_A8A250(v41);
      v26 = (__int64)v41;
      v27 = *(_QWORD *)(v23 + 48);
      if ( v27 )
        v28 = v27 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v28 = sub_A7AA70((__int64)v41, v23, 0, (__int64)v41, v24, v25);
      v29 = sub_18F0490(a1, v8, v28, v26, v24, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
      if ( v29 == 1 )
        return 1;
      v12 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFELL);
    }
  }
  v30 = sub_1907C70(a1, v12, (__m128i)a7, a8, a3, a4, a5, a6);
  if ( v30 == 1 )
    return 1;
  v36 = sub_19A6720(a1, v30 & 0xFFFFFFFFFFFFFFFELL, v31, v32, v33, v34, a7, a8);
  if ( v36 == 1 )
    return 1;
  v12 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFELL);
  sub_1C45040(a1, v36 & 0xFFFFFFFFFFFFFFFELL, 7524);
LABEL_4:
  sub_16F7BA0(a1, v12, v10, v9, a7, a8);
  v17 = sub_15F2610(a1, 1, v13, v14, v15, v16);
  v18 = *(_QWORD *)(a1 + 544);
  v19 = v17;
LABEL_5:
  if ( v18 )
  {
    while ( 1 )
    {
      v20 = *(_BYTE *)(v18 + 8) & 0x7F;
      if ( v20 != 7 )
        break;
      v21 = *(_QWORD *)(sub_B8C1B0(v18) + 16);
      if ( (v21 & 4) != 0 )
      {
        v18 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
        goto LABEL_5;
      }
      v18 = v21 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v18 )
        return sub_19A3EF0(a1, (__int64)v12);
    }
    if ( (unsigned int)v20 - 35 <= 3 )
    {
      v37 = sub_C1DDA0(v18 - 72);
      if ( v19 )
      {
        if ( v37 && (*(_DWORD *)(v19 + 1672) || *(_DWORD *)(v19 + 1904)) )
        {
          v38 = *(_DWORD *)a2;
          v44 = v19;
          v45[2] = a1;
          v43 = (v38 & 0x8000) != 0;
          v45[0] = &v44;
          v45[1] = &v43;
          sub_15EEA90(v19, (__int64 (__fastcall *)(__int64, __int64, _WORD *))sub_199FF20, (__int64)v45);
          v39 = v44;
          if ( *(_DWORD *)(v44 + 1904) )
          {
            v40 = sub_1A2CB80(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40), 0);
            if ( v40 )
            {
              LODWORD(v45[0]) = v40 - 1;
              sub_19B4460(a1, (const __m128i *)*(unsigned int *)(v44 + 1904), 0, 1u, (int *)v45, 0);
            }
            v39 = v44;
          }
          *(_DWORD *)(v39 + 1672) = 0;
          *(_DWORD *)(v39 + 1904) = 0;
        }
      }
    }
  }
  return sub_19A3EF0(a1, (__int64)v12);
}
