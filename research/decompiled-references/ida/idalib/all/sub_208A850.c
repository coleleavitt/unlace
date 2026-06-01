__int64 __fastcall sub_208A850(__int64 *a1, int a2, unsigned int a3, __int64 *a4, __int64 a5, unsigned int a6, int a7)
{
  __int16 v7; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // eax
  __int64 v13; // r9
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __m128 *v18; // r9
  __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // r12
  unsigned int v23; // r8d
  int v24; // eax
  int v25; // edx
  int v26; // r8d
  unsigned int v27; // eax
  __int64 *v28; // rsi
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int8 v33; // r9
  _QWORD *v34; // rcx
  unsigned __int64 *v35; // rdx
  __int64 v36; // [rsp-8h] [rbp-B0h]
  __m128 v37; // [rsp+0h] [rbp-A8h] BYREF
  __m128 *v38; // [rsp+10h] [rbp-98h]
  __int64 *v39; // [rsp+18h] [rbp-90h]
  __int64 *v40; // [rsp+20h] [rbp-88h]
  __int64 v41; // [rsp+28h] [rbp-80h]
  __int64 v42; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v43; // [rsp+38h] [rbp-70h] BYREF
  __m128i si128; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v45; // [rsp+50h] [rbp-58h] BYREF
  __m128i v46; // [rsp+58h] [rbp-50h] BYREF

  v7 = a2;
  v9 = *a1;
  LODWORD(v38) = a3;
  v37.m128_u64[0] = a5;
  LODWORD(v39) = a7;
  if ( a6 )
  {
    v39 = a4;
    v37 = _mm_loadh_ps((const double *)v37.m128_u64);
    goto LABEL_3;
  }
  v40 = a4;
  v45 = (_QWORD *)__PAIR64__(a3, a2);
  v22 = *(_QWORD *)(v9 + 1168);
  v23 = *(_DWORD *)(v9 + 1184);
  v37 = _mm_loadh_ps((const double *)v37.m128_u64);
  v46 = (__m128i)v37;
  if ( v23 )
  {
    LODWORD(v40) = v23;
    v24 = sub_20721D0(a2, (int *)&v45 + 1, v46.m128i_i64, &v46.m128i_i64[1]);
    v25 = (_DWORD)v40 - 1;
    v40 = (__int64 *)v46.m128i_i64[1];
    v26 = 1;
    v27 = v25 & v24;
    v28 = (__int64 *)(v22 + 8LL * v27);
    v29 = *v28;
    if ( *v28 != -4096 )
    {
      v41 = v46.m128i_i64[0];
      while ( 1 )
      {
        if ( v29 != -8192 && v45 == (_QWORD *)__PAIR64__(*(_DWORD *)(v29 + 4), *(unsigned __int16 *)(v29 + 2)) )
        {
          v33 = *(_BYTE *)(v29 - 16);
          v34 = (v33 & 2) != 0 ? *(_QWORD **)(v29 - 32) : (_QWORD *)(-16 - 8LL * ((v33 >> 2) & 0xF) + v29);
          if ( v41 == *v34 && v40 == (__int64 *)v34[1] )
            break;
        }
        v27 = v25 & (v26 + v27);
        v28 = (__int64 *)(v22 + 8LL * v27);
        v29 = *v28;
        if ( *v28 == -4096 )
          goto LABEL_22;
        ++v26;
      }
      sub_20829B0(
        (__m128 *)&si128,
        v28,
        (_QWORD *)(*(_QWORD *)(v9 + 1168) + 8LL * *(unsigned int *)(v9 + 1184)),
        v9 + 1168,
        1);
      v30 = si128.m128i_i64[0];
      goto LABEL_24;
    }
LABEL_22:
    v22 = *(_QWORD *)(v9 + 1168);
    v23 = *(_DWORD *)(v9 + 1184);
  }
  sub_20829B0((__m128 *)&si128, (_QWORD *)(v22 + 8LL * v23), (_QWORD *)(v22 + 8LL * v23), v9 + 1168, 1);
  v30 = si128.m128i_i64[0];
LABEL_24:
  v31 = *(unsigned int *)(v9 + 1184);
  v32 = *(_QWORD *)(v9 + 1168);
  v40 = (__int64 *)v30;
  sub_20829B0((__m128 *)&si128, (_QWORD *)(v32 + 8 * v31), (_QWORD *)(v32 + 8 * v31), v9 + 1168, 1);
  if ( v40 != (__int64 *)si128.m128i_i64[0] )
  {
    v10 = *v40;
    if ( *v40 )
      return v10;
  }
  if ( !(_BYTE)v39 )
    return 0;
  v9 = *a1;
LABEL_3:
  si128 = _mm_load_si128((const __m128i *)&v37);
  v10 = sub_20B4330(16, 2, a6);
  sub_20B2FD0(v10, (_DWORD)a1, 32, a6, (unsigned int)&si128, 2, 0, 0);
  v11 = (int)v38;
  *(_WORD *)(v10 + 2) = v7;
  *(_DWORD *)(v10 + 4) = v11;
  v42 = v10;
  if ( !a6 )
  {
    if ( (unsigned __int8)sub_2081810((__int64 *)(v9 + 1168), &v42, &v43) )
    {
      sub_20829B0(
        (__m128 *)&v45,
        v43,
        (_QWORD *)(*(_QWORD *)(v9 + 1168) + 8LL * *(unsigned int *)(v9 + 1184)),
        v9 + 1168,
        1);
      return v42;
    }
    v14 = v43;
    v15 = (unsigned int)(*(_DWORD *)(v9 + 1176) + 1);
    v16 = *(unsigned int *)(v9 + 1184);
    v45 = v43;
    v17 = (unsigned int)(4 * v15);
    if ( (unsigned int)v17 >= 3 * (int)v16 )
    {
      sub_208A530(v9 + 1168, 2 * v16, v15, (unsigned int)(2 * v16), v17, v13);
      v38 = (__m128 *)&v45;
      v35 = (unsigned __int64 *)&v45;
    }
    else
    {
      v18 = (__m128 *)&v45;
      v19 = (unsigned int)(v16 - *(_DWORD *)(v9 + 1180) - v15);
      if ( (unsigned int)v19 > (unsigned int)v16 >> 3 )
      {
LABEL_11:
        v20 = *v14 == -4096;
        *(_DWORD *)(v9 + 1176) = v15;
        if ( !v20 )
          --*(_DWORD *)(v9 + 1180);
        *v14 = v42;
        v21 = *(_QWORD *)(v9 + 1168);
        v43 = v14;
        sub_20829B0(v18, v14, (_QWORD *)(v21 + 8 * v16), v9 + 1168, 1);
        return v42;
      }
      v38 = (__m128 *)&v45;
      sub_208A530(v9 + 1168, v16, v15, v19, v17, (__int64)&v45);
      v35 = (unsigned __int64 *)v38;
    }
    sub_2081810((__int64 *)(v9 + 1168), &v42, v35);
    v14 = v45;
    v18 = v38;
    v16 = *(unsigned int *)(v9 + 1184);
    LODWORD(v15) = *(_DWORD *)(v9 + 1176) + 1;
    goto LABEL_11;
  }
  if ( a6 == 1 )
  {
    sub_20AC2A0(v10, a1, v36);
    return v42;
  }
  return v10;
}
