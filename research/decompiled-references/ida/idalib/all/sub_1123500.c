unsigned __int64 __fastcall sub_1123500(
        __int64 *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11)
{
  __int64 *v12; // rbx
  __int64 *v13; // r12
  __int64 *v16; // rax
  __int64 v17; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rsi
  __m128 v34; // xmm0
  __int64 v35; // r9
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r8
  __int64 v39; // rsi
  __m128 v40; // xmm0
  __int64 v41; // r9
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r8
  __int128 v45; // [rsp+0h] [rbp-158h] BYREF
  __int64 *v46; // [rsp+10h] [rbp-148h]
  __int64 v47; // [rsp+18h] [rbp-140h]
  __int64 v48; // [rsp+20h] [rbp-138h] BYREF
  __int64 v49; // [rsp+28h] [rbp-130h]
  __int64 v50; // [rsp+30h] [rbp-128h]
  unsigned __int8 **v51; // [rsp+38h] [rbp-120h]
  __int64 v52; // [rsp+40h] [rbp-118h]
  __int64 v53; // [rsp+48h] [rbp-110h] BYREF
  __int64 v54; // [rsp+50h] [rbp-108h]
  __int64 v55; // [rsp+58h] [rbp-100h]
  void **v56; // [rsp+60h] [rbp-F8h]
  __m128 *v57; // [rsp+68h] [rbp-F0h]
  char *v58; // [rsp+70h] [rbp-E8h]
  __int64 v59; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v60; // [rsp+80h] [rbp-D8h]
  unsigned __int64 v61; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v62; // [rsp+90h] [rbp-C8h]
  __int64 v63; // [rsp+98h] [rbp-C0h]
  __m128 v64; // [rsp+A0h] [rbp-B8h] BYREF
  void *v65; // [rsp+B0h] [rbp-A8h] BYREF
  signed __int64 v66; // [rsp+B8h] [rbp-A0h]
  char v67; // [rsp+C0h] [rbp-98h] BYREF
  char v68; // [rsp+D0h] [rbp-88h] BYREF

  v12 = *(__int64 **)(a2 + 8);
  v46 = a1;
  *(_QWORD *)&v45 = a4;
  v52 = a7;
  v53 = a8;
  v47 = a9;
  v48 = a10;
  v13 = &v12[*(unsigned int *)(a2 + 16)];
  if ( v12 != v13 )
  {
    if ( *v12 )
    {
LABEL_3:
      v50 = 0;
      v51 = (unsigned __int8 **)&v68;
      v56 = &v65;
      v49 = 0;
      v55 = 0;
      v54 = 0;
      v57 = &v64;
      v58 = &v67;
      while ( 1 )
      {
        v17 = *v12;
        if ( (unsigned __int8)sub_21B9810(*v12, a6) )
        {
          v18 = sub_1120AA0(v46, v17, a3);
          v20 = v19;
          v21 = v19 & v48;
          v22 = v19 & v48 & ~v49;
          if ( __PAIR128__(v18 & v47 & ~v50, v22) != 0 && a3 )
          {
            v59 = v22;
            v62 = v18;
            v63 = v20;
            v33 = *v46;
            v34 = _mm_loadh_ps((const double *)&v59);
            v61 = v18 & v47;
            v60 = v21;
            v64 = v34;
            sub_FC70B0((__int64)v51, v33, 0, 497);
            sub_AEC220(v51, *(_BYTE **)(v17 + 24), *(_QWORD *)(v17 + 32));
            sub_1122360((__int64)v56, (__int64 *)v57);
            sub_AEC220(v51, v65, v66);
            v35 = v60;
            v36 = v61;
            v37 = v62;
            v38 = v63;
            if ( v65 != v58 )
            {
              v62 = v63;
              v61 = v37;
              v60 = v36;
              v59 = v35;
              operator delete(v65);
              v38 = v62;
              v35 = v59;
              v37 = v61;
              v36 = v60;
            }
            v62 = v38;
            v61 = v37;
            v60 = v36;
            v59 = v35;
            sub_AEA040((__int64)v51);
            v50 |= v60;
            v20 = v62;
            v49 |= v59;
            v18 = v61;
          }
          *(_QWORD *)&v45 = sub_10045F0(v18, v20) | v45;
          v23 = *(_QWORD *)(v17 + 16);
          a5 |= v24;
          if ( !v23 )
            v23 = v17;
          *(_BYTE *)(v23 + 44) |= 1u;
          v16 = v12 + 1;
          if ( v13 == v12 + 1 )
            goto LABEL_14;
        }
        else
        {
          if ( (unsigned __int8)sub_21B9810(v17, a11) )
          {
            v26 = sub_1120AA0(v46, v17, a3);
            v28 = v27;
            v29 = v27 & v53;
            v30 = v27 & v53 & ~v55;
            if ( __PAIR128__(v26 & v52 & ~v54, v30) != 0 && a3 )
            {
              v59 = v30;
              v62 = v26;
              v63 = v28;
              v39 = *v46;
              v40 = _mm_loadh_ps((const double *)&v59);
              v61 = v26 & v52;
              v60 = v29;
              v64 = v40;
              sub_FC70B0((__int64)v51, v39, 0, 497);
              sub_AEC220(v51, *(_BYTE **)(v17 + 24), *(_QWORD *)(v17 + 32));
              sub_1122360((__int64)v56, (__int64 *)v57);
              sub_AEC220(v51, v65, v66);
              v41 = v60;
              v42 = v61;
              v43 = v62;
              v44 = v63;
              if ( v65 != v58 )
              {
                v62 = v63;
                v61 = v43;
                v60 = v42;
                v59 = v41;
                operator delete(v65);
                v44 = v62;
                v41 = v59;
                v43 = v61;
                v42 = v60;
              }
              v62 = v44;
              v61 = v43;
              v60 = v42;
              v59 = v41;
              sub_AEA040((__int64)v51);
              v54 |= v60;
              v28 = v62;
              v55 |= v59;
              v26 = v61;
            }
            *(_QWORD *)&v45 = ~sub_10045F0(v26, v28) & v45;
            v31 = *(_QWORD *)(v17 + 16);
            a5 &= ~v32;
            if ( !v31 )
              v31 = v17;
            *(_BYTE *)(v31 + 44) |= 1u;
          }
          v16 = v12 + 1;
          if ( v13 == v12 + 1 )
            goto LABEL_14;
        }
        if ( !v12[1] )
          break;
LABEL_7:
        v12 = v16;
      }
      while ( v13 != ++v16 )
      {
        if ( *v16 )
          goto LABEL_7;
      }
    }
    else
    {
      while ( v13 != ++v12 )
      {
        if ( *v12 )
          goto LABEL_3;
      }
    }
  }
LABEL_14:
  *(_QWORD *)&v45 = a5;
  return _mm_andnot_si128(
           (__m128i)_mm_loadh_ps((const double *)&v48),
           _mm_or_si128((__m128i)_mm_loadh_ps((const double *)&v45), (__m128i)_mm_loadh_ps((const double *)&v53))).m128i_u64[0];
}
