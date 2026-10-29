__int64 __fastcall sub_1565A10(__int64 a1, __int64 a2, char a3, int a4, __m128i a5, __m128 a6)
{
  unsigned __int16 v9; // r15
  __int64 result; // rax
  __int64 *v11; // rdi
  __int64 v12; // rax
  unsigned __int8 v13; // al
  __int64 v14; // r14
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  int v19; // edx
  int v20; // r12d
  int v21; // eax
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // rax
  char v27; // dl
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  int v31; // edx
  char v32; // al
  __int64 v33; // rdi
  unsigned int v34; // eax
  unsigned int v35; // r15d
  __int64 *v36; // rdi
  unsigned __int8 v37; // [rsp+8h] [rbp-A0h]
  int v38; // [rsp+8h] [rbp-A0h]
  _BOOL4 v39; // [rsp+Ch] [rbp-9Ch]
  _BYTE v40[9]; // [rsp+17h] [rbp-91h] BYREF
  int v41; // [rsp+20h] [rbp-88h] BYREF
  __int64 v42; // [rsp+28h] [rbp-80h]
  __int64 v43; // [rsp+38h] [rbp-70h]

  v9 = *(_WORD *)(a1 + 32);
  if ( v9 != 5 )
    goto LABEL_2;
  v14 = *(_QWORD *)(a1 + 96);
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(v15 + 2944);
  if ( *(unsigned int *)(v15 + 2912) <= v16 )
  {
    v17 = sub_14180A0(v15, 1u);
    v9 = *(_WORD *)(a1 + 32);
  }
  else
  {
    v17 = *(_QWORD *)(v15 + 2904) + 24 * v16;
  }
  v39 = *(_WORD *)(v17 + 16) == 26;
  sub_141A630(v9);
  v18 = sub_18013B0(v14, v39, 0, 0, 1, 1, a4, 0);
  if ( v18 )
  {
    v19 = *(_DWORD *)(a1 + 16);
    v20 = *(_DWORD *)a2;
    v21 = v19;
    if ( (!*(_DWORD *)a2 || !*(_DWORD *)(a2 + 4)) && !*(_QWORD *)(a2 + 8) )
      v20 = *(_DWORD *)(a1 + 16);
    v22 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(*(_QWORD *)(v22 + 56) + 2LL) & 4) == 0 )
    {
LABEL_32:
      *(_QWORD *)(a1 + 24) = v18;
      *(_WORD *)(a1 + 32) = 417;
      *(_DWORD *)(a1 + 20) = v21;
      *(_DWORD *)(a1 + 16) = v20;
      if ( *(_QWORD *)(v22 + 2944) && *(_QWORD *)(v22 + 2960) != *(_QWORD *)(v22 + 2952) )
      {
        sub_1417320(v22, (const __m128i *)(a1 + 16));
        return 0;
      }
      return 0;
    }
    v23 = *(_QWORD *)(v22 + 2944);
    if ( v23 >= *(unsigned int *)(v22 + 2912) )
    {
      v24 = sub_14180A0(v22, 1u);
      v19 = *(_DWORD *)(a1 + 16);
    }
    else
    {
      v24 = *(_QWORD *)(v22 + 2904) + 24 * v23;
    }
    if ( *(_WORD *)(v24 + 16) != 47
      || (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 34) > 2u )
    {
      v22 = *(_QWORD *)(a1 + 8);
      v21 = v19;
      goto LABEL_32;
    }
    *(_DWORD *)(a1 + 40) = v19;
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v25 = *(_DWORD *)(a1 + 40);
    v41 = 0;
    v26 = sub_14FA050(a1, v25, v18, 0, &v41, a5, a6);
    if ( !v27 && v26 )
    {
      v18 = v26;
LABEL_31:
      v22 = *(_QWORD *)(a1 + 8);
      v21 = *(_DWORD *)(a1 + 16);
      goto LABEL_32;
    }
    if ( *(_WORD *)(a1 + 32) != 1 )
      goto LABEL_31;
    return 0;
  }
  v28 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v28 + 56) + 1LL) & 8) == 0 )
    return 0;
  v29 = *(_QWORD *)(v28 + 2944);
  if ( v29 >= *(unsigned int *)(v28 + 2912) )
    v30 = sub_14180A0(v28, 1u);
  else
    v30 = *(_QWORD *)(v28 + 2904) + 24 * v29;
  v9 = *(_WORD *)(a1 + 32);
  if ( *(_WORD *)(v30 + 16) != 47 )
    goto LABEL_2;
  v31 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)&v40[1] = 0;
  v41 = 0;
  v38 = v31;
  v42 = 0;
  v43 = 0;
  v32 = sub_141A630(v9);
  if ( v9 != 1 && !v32 )
    v18 = *(_QWORD *)(a1 + 24);
  v33 = *(_QWORD *)(a1 + 96);
  v42 = v18;
  HIDWORD(v43) = v38;
  LODWORD(v43) = v38;
  v34 = sub_1CE58C0(v33, 0, (__int64)&v40[1], (__int64)v40, 0);
  v35 = v34;
  if ( !v34
    || v34 == 5 && (unsigned int)sub_1562FA0((const __m128i *)a1, 1) == 1
    || (v36 = *(__int64 **)(a1 + 8),
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16),
        sub_14634E0(v36, (int *)(a1 + 16)),
        result = sub_1556B20((const __m128i *)a1, *(__int64 *)&v40[1], v35, a2, 0, &v41, a5, a6, 1, 0),
        !(_BYTE)result) )
  {
    v9 = *(_WORD *)(a1 + 32);
LABEL_2:
    if ( v9 == 418 && *(_DWORD *)(*(_QWORD *)(a1 + 24) + 32LL) == 2 )
    {
      sub_154E5D0((const __m128i *)a1, a2, a4, 0);
      return 0;
    }
    if ( *(_DWORD *)a2 && *(_DWORD *)(a2 + 4) || *(_QWORD *)(a2 + 8) )
    {
      sub_15655A0((const __m128i *)a1, (__int64 *)a2, a3);
    }
    else
    {
      v11 = *(__int64 **)(a1 + 8);
      v12 = v11[7];
      if ( (*(_BYTE *)(v12 + 2) & 4) != 0 )
      {
        v13 = (v9 == 72) & ((*(_BYTE *)(v12 + 1) >> 3) ^ 1);
        if ( v13 )
        {
          v37 = v13;
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v11, (int *)(a1 + 16));
          sub_FC70B0((__int64)&v41, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 40), 1657);
          sub_AEA040((__int64)&v41);
          return v37;
        }
      }
    }
    return 0;
  }
  return result;
}
