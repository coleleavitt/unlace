__int64 __fastcall sub_111A30(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v9; // r15
  unsigned int v11; // r15d
  __int64 v13; // rax
  __int64 v14; // rbx
  char v15; // al
  int v16; // r10d
  int v17; // eax
  __m128d v18; // xmm0
  unsigned __int8 *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rdx
  char v22; // al
  _BYTE *v23; // rax
  __int64 v24; // rax
  char v25; // al
  char v26; // al
  __int64 v27; // rdi
  __m128i v28; // xmm1
  __m128i v29; // xmm1
  char v30; // al
  char v31; // al
  __int64 v33; // [rsp+8h] [rbp-120h]
  unsigned __int8 *v34; // [rsp+10h] [rbp-118h]
  __int64 v35; // [rsp+18h] [rbp-110h]
  double v36; // [rsp+20h] [rbp-108h]
  _BYTE *v37; // [rsp+28h] [rbp-100h]
  int v38; // [rsp+30h] [rbp-F8h] BYREF
  int v39; // [rsp+34h] [rbp-F4h] BYREF
  int v40; // [rsp+38h] [rbp-F0h] BYREF
  int v41; // [rsp+3Ch] [rbp-ECh] BYREF
  _BYTE v42[4]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v43; // [rsp+44h] [rbp-E4h]
  _BYTE v44[4]; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v45; // [rsp+54h] [rbp-D4h]
  __int64 v46[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v48; // [rsp+78h] [rbp-B0h]
  __int64 v49[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v51; // [rsp+A8h] [rbp-80h]
  __m128d v52; // [rsp+C0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v54; // [rsp+E8h] [rbp-40h]

  v9 = a2[8];
  v54 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_A2980(v9, a4) )
    return 0;
  v11 = sub_A2980(v9, a5);
  if ( !(_BYTE)v11
    || (*(_BYTE *)(a3 + 4) & 0x10) != 0
    || (*(_BYTE *)(a4 + 4) & 0x10) != 0
    || (*(_BYTE *)(a5 + 4) & 0x10) != 0 )
  {
    return 0;
  }
  *(_QWORD *)&v52.m128d_f64[0] = a5 + 32;
  *(_QWORD *)&v52.m128d_f64[1] = a5 + 48;
  v13 = a4 + 32;
  v14 = a4 + 48;
  si128.m128i_i64[0] = v13;
  si128.m128i_i64[1] = v14;
  if ( (a6 & 4) != 0 )
  {
    si128.m128i_i64[0] = v14;
    si128.m128i_i64[1] = v13;
  }
  v35 = *(_QWORD *)(a2[60] + 112LL);
  v15 = sub_111770((__m128i *)&v52, &v38, &v39, (__int64)a2, a3, a6);
  v40 = 0;
  v41 = 0;
  if ( v15 )
    goto LABEL_23;
  v16 = a6 & 0x10;
  if ( (a6 & 0x10) != 0 )
  {
    v29 = _mm_load_si128(&si128);
    si128 = _mm_load_si128((const __m128i *)&v52);
    v52 = (__m128d)v29;
    v30 = sub_111770((__m128i *)&v52, &v40, &v41, (__int64)a2, a3, a6);
    v16 = a6 & 0x10;
    if ( v30 )
      goto LABEL_23;
  }
  if ( (a6 & 2) == 0 || *(int *)(*(_QWORD *)&v52.m128d_f64[0] + 4LL) <= 1 )
    return 0;
  v17 = v40;
  if ( !v40 )
  {
    if ( !v16 )
    {
      if ( !v38 )
        return 0;
LABEL_20:
      v17 = v38;
      goto LABEL_21;
    }
    if ( !v38 )
      return 0;
    goto LABEL_53;
  }
  if ( v38 && v41 <= v39 )
  {
    if ( v41 == v39 && v38 > 2 && v40 <= 2 )
    {
      v38 = v40;
      goto LABEL_23;
    }
    if ( !v16 )
      goto LABEL_20;
LABEL_53:
    v28 = _mm_load_si128(&si128);
    v17 = v38;
    si128 = (__m128i)_mm_loadh_ps(&v52.m128d_f64[1]);
    v52 = (__m128d)v28;
    goto LABEL_21;
  }
  v38 = v40;
LABEL_21:
  if ( v17 > 2 )
  {
    v18 = (__m128d)_mm_load_si128((const __m128i *)&v52);
    v52 = _mm_shuffle_pd(v18, v18, 1);
  }
LABEL_23:
  if ( a2[7] == a1 || (unsigned __int8)sub_110F20((__int64)a2, a3, a3 + 32, a3 + 48) )
  {
    v19 = (unsigned __int8 *)si128.m128i_i64[0];
    if ( !si128.m128i_i64[0] || (unsigned __int8)sub_157240(a2, *(_QWORD *)&v52.m128d_f64[0], si128.m128i_i64[0]) )
    {
      v34 = (unsigned __int8 *)si128.m128i_i64[1];
      if ( !si128.m128i_i64[1] || (unsigned __int8)sub_157240(a2, *(_QWORD *)&v52.m128d_f64[1], si128.m128i_i64[1]) )
      {
        v20 = 0;
        do
        {
          v21 = *((_QWORD *)&v52 + v20 + 2);
          if ( v21 )
          {
            v33 = v20;
            v37 = *((_BYTE **)&v52 + v20 + 2);
            v36 = v52.m128d_f64[v20 ^ 1];
            v22 = sub_157240(a2, *(_QWORD *)&v36, v21);
            v20 = v33;
            if ( !v22 && (**(_BYTE **)&v52.m128d_f64[v33] != 6 || *v37 != 6) )
            {
              if ( **(_BYTE **)&v36 != 6 )
                return 0;
              v23 = *(_BYTE **)((char *)&si128.m128i_i64[1] + (-v33 & 0xFFFFFFFFFFFFFFF8LL));
              if ( !v23 || *v23 != 6 )
                return 0;
            }
          }
          v24 = v20 + 1;
          v20 = 1;
        }
        while ( v24 != 2 );
        sub_123A40(v42);
        if ( v19 )
          sub_1571F0(a2, a3, v42, a3, v19, 6);
        else
          sub_1207E0(v42, v35, 9, *(_QWORD *)(a5 + 24), 2 * v43);
        sub_123A40(v44);
        if ( v34 )
          sub_1571F0(a2, a3, v44, a3, v34, 6);
        else
          sub_1207E0(v44, v35, 9, *(_QWORD *)(a5 + 24), 2 * v45);
        v25 = sub_125B60(v42, v44, 0);
        if ( v19 != nullptr && v34 != nullptr && v25 != 1 )
        {
          v48 = 0;
          v46[0] = 0;
          v46[1] = 0;
          v47 = 0;
          sub_110FD0((__int64)v46, (__int64)a2, v19);
          v49[0] = 0;
          v49[1] = 0;
          v50 = 0;
          v51 = 0;
          sub_110FD0((__int64)v49, (__int64)a2, v34);
          v26 = sub_64780(v46, v49);
          v27 = v50;
          if ( v26 || (v31 = sub_318470(&v47, &v50), v27 = v50, v31) )
          {
            if ( v27 )
            {
              *(_QWORD *)&v51 = 0;
              qfree(v27);
            }
            qfree(v49[0]);
            if ( v47 )
            {
              *(_QWORD *)&v48 = 0;
              qfree(v47);
            }
            v11 = 0;
            qfree(v46[0]);
            goto LABEL_44;
          }
          if ( v50 )
          {
            *(_QWORD *)&v51 = 0;
            qfree(v50);
          }
          qfree(v49[0]);
          if ( v47 )
          {
            *(_QWORD *)&v48 = 0;
            qfree(v47);
          }
          qfree(v46[0]);
        }
        sub_12AB50(v42, v35, v43, 2);
        sub_12AB50(v44, v35, v45, 2);
        sub_11CA10(a1 + 32, v42);
        sub_11CA10(a1 + 48, v44);
        sub_11D5D0(a1, v35);
LABEL_44:
        sub_11CDA0(v44);
        sub_11CDA0(v42);
        return v11;
      }
    }
  }
  return 0;
}
