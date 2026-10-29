__int64 __fastcall sub_7327A0(
        __int64 a1,
        __m128i *a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8,
        unsigned __int64 a9)
{
  int v10; // ebx
  int v11; // eax
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rcx
  bool v20; // dl
  __int64 v21; // rbx
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rbx
  unsigned int v25; // ebx
  bool v26; // zf
  __int64 v27; // rsi
  unsigned __int64 v28; // rbp
  bool v30; // dl
  bool v31; // bp
  __int64 v32; // rax
  __int64 v33; // r12
  bool v34; // cl
  char v35; // al
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  __m128i v40; // xmm4
  __m128i v41; // xmm5
  __m128i v42; // xmm6
  __m128i v43; // xmm7
  unsigned int v44; // [rsp+4h] [rbp-134h]
  __int64 v46; // [rsp+8h] [rbp-130h]
  __int64 v50; // [rsp+48h] [rbp-F0h] BYREF
  void *v51; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v53; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+68h] [rbp-D0h] BYREF
  __m128i v55; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v56; // [rsp+80h] [rbp-B8h] BYREF
  __m128i v57; // [rsp+90h] [rbp-A8h] BYREF
  __m128i v58; // [rsp+A0h] [rbp-98h] BYREF
  __m128i v59; // [rsp+B0h] [rbp-88h] BYREF
  __m128i v60; // [rsp+C0h] [rbp-78h] BYREF
  __m128i v61; // [rsp+D0h] [rbp-68h] BYREF
  __m128i v62; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v63; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v64; // [rsp+F8h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  if ( !a1 )
    return (unsigned int)-102;
  if ( sub_7307F0(a1) || (v10 = sub_732680(a1, *(_QWORD *)(a1 + 96), &v51)) != 0 )
  {
    v10 = -1;
  }
  else if ( v51 != &loc_2014B50 )
  {
    v10 = -103;
  }
  if ( (unsigned int)sub_7325F0(a1, *(_QWORD *)(a1 + 96), &v55) )
    v10 = -1;
  if ( (unsigned int)sub_7325F0(a1, *(_QWORD *)(a1 + 96), &v55.m128i_i64[1]) )
    v10 = -1;
  if ( (unsigned int)sub_7325F0(a1, *(_QWORD *)(a1 + 96), &v56) )
    v10 = -1;
  if ( (unsigned int)sub_7325F0(a1, *(_QWORD *)(a1 + 96), &v56.m128i_i64[1]) )
    v10 = -1;
  v11 = sub_732680(a1, *(_QWORD *)(a1 + 96), &v57);
  v12 = *(_QWORD *)(a1 + 96);
  if ( v11 )
    v10 = -1;
  v62.m128i_i32[3] = ((unsigned __int64)v57.m128i_i64[0] >> 16) & 0x1F;
  LODWORD(v63) = (((unsigned __int64)v57.m128i_i64[0] >> 21) & 0xF) - 1;
  HIDWORD(v63) = ((unsigned __int32)v57.m128i_i32[0] >> 25) + 1980;
  v62.m128i_i32[2] = ((unsigned __int64)v57.m128i_i64[0] >> 11) & 0x1F;
  v62.m128i_i32[0] = 2 * (v57.m128i_i8[0] & 0x1F);
  v62.m128i_i32[1] = ((unsigned __int64)v57.m128i_i64[0] >> 5) & 0x3F;
  if ( (unsigned int)sub_732680(a1, v12, &v57.m128i_i64[1]) )
    v10 = -1;
  v13 = sub_732680(a1, *(_QWORD *)(a1 + 96), &v52);
  v14 = *(_QWORD *)(a1 + 96);
  if ( v13 )
    v10 = -1;
  v58.m128i_i64[0] = v52;
  v15 = sub_732680(a1, v14, &v52);
  v16 = *(_QWORD *)(a1 + 96);
  if ( v15 )
    v10 = -1;
  v58.m128i_i64[1] = v52;
  if ( (unsigned int)sub_7325F0(a1, v16, &v59) )
    v10 = -1;
  if ( (unsigned int)sub_7325F0(a1, *(_QWORD *)(a1 + 96), &v59.m128i_i64[1]) )
    v10 = -1;
  if ( (unsigned int)sub_7325F0(a1, *(_QWORD *)(a1 + 96), &v60) )
    v10 = -1;
  if ( (unsigned int)sub_7325F0(a1, *(_QWORD *)(a1 + 96), &v60.m128i_i64[1]) )
    v10 = -1;
  if ( (unsigned int)sub_7325F0(a1, *(_QWORD *)(a1 + 96), &v61) )
    v10 = -1;
  v17 = sub_732680(a1, *(_QWORD *)(a1 + 96), &v61.m128i_i64[1]);
  v18 = *(_QWORD *)(a1 + 96);
  if ( v17 )
  {
    if ( (unsigned int)sub_732680(a1, v18, &v52) )
      return (unsigned int)-1;
    return (unsigned int)-1;
  }
  v44 = sub_732680(a1, v18, &v52);
  if ( v44 )
    return (unsigned int)-1;
  v19 = v59.m128i_i64[0];
  v50 = v52;
  v20 = v10 == 0 && a4 != 0;
  if ( v20 )
  {
    v21 = a5;
    if ( v59.m128i_i64[0] < a5 )
    {
      v21 = v59.m128i_i64[0];
      v22 = 0;
      *(_BYTE *)(a4 + v59.m128i_i64[0]) = 0;
    }
    else
    {
      v22 = v59.m128i_i64[0] - a5;
    }
    if ( a5 && v19 )
    {
      v10 = -((*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(a1 + 8))(
                *(_QWORD *)(a1 + 56),
                *(_QWORD *)(a1 + 96),
                a4,
                v21) != v21);
      v20 = v10 == 0;
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v22 = v59.m128i_i64[0];
    v20 = v10 == 0;
  }
  v23 = v59.m128i_i64[1];
  if ( a6 && v20 )
  {
    v24 = v59.m128i_i64[1];
    if ( a7 <= v59.m128i_i64[1] )
      v24 = a7;
    if ( v22 )
    {
      v26 = sub_7307F0(a1) == 0;
      v23 = v59.m128i_i64[1];
      if ( v26 )
        v22 = 0;
      else
        v44 = -1;
    }
    if ( v23 && a7 )
    {
      if ( (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(a1 + 8))(
             *(_QWORD *)(a1 + 56),
             *(_QWORD *)(a1 + 96),
             a6,
             v24) != v24 )
        return (unsigned int)-1;
      v23 = v59.m128i_i64[1];
    }
    v46 = v22 - v24 + v23;
  }
  else
  {
    v44 = v10;
    v46 = v22 + v59.m128i_i64[1];
  }
  if ( !v44 )
  {
    if ( v23 )
    {
      v25 = 0;
      v26 = v46 == v23;
      v46 -= v23;
      v27 = *(_QWORD *)(a1 + 96);
      if ( v26 )
      {
LABEL_49:
        v28 = 0;
        while ( 1 )
        {
          if ( (unsigned int)sub_7325F0(a1, v27, &v53) )
            v25 = -1;
          if ( (unsigned int)sub_7325F0(a1, *(_QWORD *)(a1 + 96), &v54) )
            v25 = -1;
          if ( v53 != 1 )
            break;
          if ( v58.m128i_i64[1] == 0xFFFFFFFFLL && (unsigned int)sub_732710(a1, *(_QWORD *)(a1 + 96), &v58.m128i_i64[1]) )
            v25 = -1;
          if ( v58.m128i_i64[0] == 0xFFFFFFFFLL && (unsigned int)sub_732710(a1, *(_QWORD *)(a1 + 96), &v58) )
            v25 = -1;
          if ( v50 == 0xFFFFFFFFLL && (unsigned int)sub_732710(a1, *(_QWORD *)(a1 + 96), &v50) )
            v25 = -1;
          if ( v60.m128i_i64[1] == 0xFFFF && (unsigned int)sub_732680(a1, *(_QWORD *)(a1 + 96), &v60.m128i_i64[1]) )
            goto LABEL_62;
LABEL_54:
          v28 += v54 + 4;
          if ( v59.m128i_i64[1] <= v28 )
          {
            v30 = v25 == 0;
LABEL_72:
            v31 = v30 && a8 != 0;
            if ( v31 )
            {
              v32 = v60.m128i_i64[0];
              v33 = a9;
              if ( v60.m128i_i64[0] < a9 )
              {
                v33 = v60.m128i_i64[0];
                *(_BYTE *)(a8 + v60.m128i_i64[0]) = 0;
              }
              if ( v46 )
              {
                if ( !sub_7307F0(a1) )
                {
                  v32 = v60.m128i_i64[0];
                  goto LABEL_76;
                }
                if ( v60.m128i_i64[0] && a9 )
                {
                  v25 = -1;
                  goto LABEL_102;
                }
              }
              else
              {
LABEL_76:
                if ( !v32 || (v25 = 0, !a9) )
                {
                  v34 = a2 != nullptr;
                  v25 = 0;
                  goto LABEL_79;
                }
LABEL_102:
                if ( (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(a1 + 8))(
                       *(_QWORD *)(a1 + 56),
                       *(_QWORD *)(a1 + 96),
                       a8,
                       v33) == v33 )
                {
                  v31 = v25 == 0;
                  v34 = v25 == 0 && a2 != nullptr;
                  goto LABEL_79;
                }
              }
              return (unsigned int)-1;
            }
            v31 = v30;
            v34 = v30 && a2 != nullptr;
LABEL_79:
            v35 = a3 != nullptr;
            if ( v34 )
            {
              v36 = _mm_load_si128(&v55);
              v37 = _mm_load_si128(&v56);
              v38 = _mm_load_si128(&v57);
              v39 = _mm_load_si128(&v58);
              a2[8].m128i_i64[0] = v63;
              v40 = _mm_load_si128(&v59);
              *a2 = v36;
              v41 = _mm_load_si128(&v60);
              v42 = _mm_load_si128(&v61);
              a2[1] = v37;
              v43 = _mm_load_si128(&v62);
              a2[2] = v38;
              a2[3] = v39;
              a2[4] = v40;
              a2[5] = v41;
              a2[6] = v42;
              a2[7] = v43;
              goto LABEL_81;
            }
LABEL_116:
            v35 &= v31;
LABEL_81:
            if ( v35 )
              *a3 = v50;
            else
              return v25;
            return v44;
          }
          v27 = *(_QWORD *)(a1 + 96);
        }
        if ( !sub_7307F0(a1) )
          goto LABEL_54;
LABEL_62:
        v25 = -1;
        goto LABEL_54;
      }
      if ( sub_7307F0(a1) )
      {
        v25 = -1;
        if ( !v59.m128i_i64[1] )
        {
          v35 = a3 != nullptr;
          v31 = 0;
          goto LABEL_116;
        }
        goto LABEL_106;
      }
      v25 = 0;
      v46 = 0;
      if ( v59.m128i_i64[1] )
      {
LABEL_106:
        v27 = *(_QWORD *)(a1 + 96);
        goto LABEL_49;
      }
    }
    else
    {
      v25 = 0;
    }
    v30 = 1;
    goto LABEL_72;
  }
  return v44;
}

