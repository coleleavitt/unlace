_QWORD *__fastcall sub_10C27E0(_QWORD *a1, _QWORD *a2, void *a3, __int64 a4, __int64 a5)
{
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  _BYTE *v9; // rsi
  _BYTE *v10; // rdx
  _BYTE *v11; // rsi
  _BYTE *v12; // rdx
  _BYTE *v13; // rsi
  __int64 v14; // rdx
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  _BYTE *v19; // rsi
  __int64 v20; // rdx
  _BYTE *v21; // rsi
  __int64 v22; // rdx
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  _QWORD *v25; // [rsp+10h] [rbp-3C8h]
  void *v27; // [rsp+40h] [rbp-398h] BYREF
  __int64 v28; // [rsp+48h] [rbp-390h]
  _QWORD *v29; // [rsp+50h] [rbp-388h] BYREF
  void **v30; // [rsp+58h] [rbp-380h] BYREF
  char *v31; // [rsp+60h] [rbp-378h] BYREF
  __int16 v32; // [rsp+80h] [rbp-358h]
  _QWORD v33[4]; // [rsp+90h] [rbp-348h] BYREF
  __int16 v34; // [rsp+B0h] [rbp-328h]
  void *v35; // [rsp+C0h] [rbp-318h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-310h]
  __int16 v37; // [rsp+E0h] [rbp-2F8h]
  void *v38; // [rsp+F0h] [rbp-2E8h] BYREF
  __int64 v39; // [rsp+F8h] [rbp-2E0h]
  __int16 v40; // [rsp+110h] [rbp-2C8h]
  void *v41; // [rsp+120h] [rbp-2B8h] BYREF
  __m128i si128; // [rsp+128h] [rbp-2B0h]
  _BYTE v43[136]; // [rsp+138h] [rbp-2A0h] BYREF
  void *v44; // [rsp+1C0h] [rbp-218h] BYREF
  __m128i v45; // [rsp+1C8h] [rbp-210h]
  _WORD v46[68]; // [rsp+1D8h] [rbp-200h] BYREF
  void *ptr; // [rsp+260h] [rbp-178h] BYREF
  __m128i v48; // [rsp+268h] [rbp-170h]
  __int64 v49; // [rsp+278h] [rbp-160h] BYREF
  __int16 v50; // [rsp+280h] [rbp-158h]
  void *v51; // [rsp+300h] [rbp-D8h] BYREF
  __m128i v52; // [rsp+308h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+318h] [rbp-C0h] BYREF
  __int16 v54; // [rsp+320h] [rbp-B8h]

  v27 = a3;
  v28 = a4;
  v29 = a2;
  v30 = &v27;
  sub_10C23E0((__m128i *)&v51, (__int64)&v29, (__int64 **)&v30, (__int64)(a2 + 43));
  v25 = a1 + 2;
  if ( (_BYTE)v54 )
  {
    v6 = v51;
    v7 = v52.m128i_i64[0];
    *a1 = a1 + 2;
    sub_10B4F90(a1, v6, (__int64)&v6[v7]);
    if ( (_BYTE)v54 && v51 != &v52.m128i_u64[1] )
      operator delete(v51);
  }
  else
  {
    v9 = (_BYTE *)a2[31];
    v10 = &v9[a2[32]];
    v41 = v43;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
    sub_9FC110(&v41, v9, v10);
    v54 = 257;
    v38 = v27;
    v50 = 257;
    v39 = v28;
    v46[4] = 257;
    v40 = 261;
    sub_2266670(&v41, &v38, &v44, &ptr, &v51);
    v54 = 261;
    v51 = v41;
    v52.m128i_i64[0] = si128.m128i_i64[0];
    if ( (unsigned int)sub_22684A0(&v51, 0) )
    {
      (*(void (__fastcall **)(void **))(*(_QWORD *)a5 + 296LL))(&v51);
      v44 = v46;
      v45 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
      sub_9FC110(&v44, v51, (_BYTE *)v51 + v52.m128i_i64[0]);
      if ( v51 != &v52.m128i_u64[1] )
        operator delete(v51);
      v54 = 257;
      v50 = 257;
      v40 = 257;
      v37 = 261;
      v35 = v27;
      v36 = v28;
      sub_2266670(&v44, &v35, &v38, &ptr, &v51);
      v54 = 261;
      v51 = v44;
      v52.m128i_i64[0] = v45.m128i_i64[0];
      if ( (unsigned int)sub_22684A0(&v51, 0) )
      {
        v11 = (_BYTE *)a2[13];
        v12 = &v11[a2[14]];
        ptr = &v49;
        v48 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
        sub_9FC110(&ptr, v11, v12);
        v54 = 257;
        v35 = v27;
        v40 = 257;
        v36 = v28;
        v33[0] = "..";
        v37 = 261;
        v34 = 259;
        sub_2266670(&ptr, v33, &v35, &v38, &v51);
        v54 = 261;
        v51 = ptr;
        v52.m128i_i64[0] = v48.m128i_i64[0];
        if ( (unsigned int)sub_22684A0(&v51, 0) )
        {
          sub_10C23E0((__m128i *)&v51, (__int64)&v29, (__int64 **)&v30, a5 + 96);
          if ( (_BYTE)v54 || (sub_10C23E0((__m128i *)&v51, (__int64)&v29, (__int64 **)&v30, a5 + 624), (_BYTE)v54) )
          {
            v23 = v51;
            v24 = v52.m128i_i64[0];
            *a1 = v25;
            sub_10B4F90(a1, v23, (__int64)&v23[v24]);
            if ( (_BYTE)v54 && v51 != &v52.m128i_u64[1] )
              operator delete(v51);
          }
          else
          {
            v19 = (_BYTE *)a2[31];
            v20 = a2[32];
            v51 = &v53;
            v52 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
            sub_9FC110(&v51, v19, &v19[v20]);
            v40 = 257;
            v37 = 261;
            v35 = v27;
            v34 = 259;
            v36 = v28;
            v32 = 259;
            v33[0] = "..";
            v31 = "..";
            sub_2266670(&v51, &v31, v33, &v35, &v38);
            v40 = 261;
            v38 = v51;
            v39 = v52.m128i_i64[0];
            if ( (unsigned int)sub_22684A0(&v38, 0) )
            {
              v21 = v27;
              v22 = v28;
            }
            else
            {
              v21 = v51;
              v22 = v52.m128i_i64[0];
            }
            *a1 = v25;
            sub_10B5070(a1, v21, (__int64)&v21[v22]);
            if ( v51 != &v53 )
              free(v51);
          }
        }
        else
        {
          v13 = ptr;
          v14 = v48.m128i_i64[0];
          *a1 = v25;
          sub_10B5070(a1, v13, (__int64)&v13[v14]);
        }
        if ( ptr != &v49 )
          free(ptr);
      }
      else
      {
        v15 = v44;
        v16 = v45.m128i_i64[0];
        *a1 = v25;
        sub_10B5070(a1, v15, (__int64)&v15[v16]);
      }
      if ( v44 != v46 )
        free(v44);
    }
    else
    {
      v17 = v41;
      v18 = si128.m128i_i64[0];
      *a1 = v25;
      sub_10B5070(a1, v17, (__int64)&v17[v18]);
    }
    if ( v41 != v43 )
      free(v41);
  }
  return a1;
}

