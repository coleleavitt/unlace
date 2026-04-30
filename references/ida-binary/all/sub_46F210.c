__int64 __fastcall sub_46F210(
        char *a1,
        const char *a2,
        __int64 a3,
        _QWORD *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rsi
  unsigned __int128 v13; // rax
  __int64 result; // rax
  _QWORD *v15; // rbx
  char *v16; // rdi
  void (*v17)(); // rax
  __int64 *v19; // rbx
  __m128i v20; // xmm2
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // r13
  __int64 i; // rbp
  __int64 *v25; // rax
  __int64 v26; // rdi
  __m128i v27; // xmm3
  __m128i v28; // xmm4
  __int64 v29; // r12
  __int64 v30; // rdx
  __int64 v31; // r13
  __int64 j; // rbp
  __int64 *v33; // rax
  __int64 v34; // rdi
  __m128i v35; // xmm5
  __int64 v36; // rbp
  __m128i v37; // xmm0
  __int64 v38; // rdi
  __m128i v39; // xmm6
  __int64 v40; // r14
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 k; // r12
  _QWORD *v44; // rbp
  __int64 v45; // rdi
  __int64 v46; // rdi
  __m128i v47; // xmm7
  __int64 v48; // rdi
  __int64 v49; // r12
  __int64 v50; // rbp
  _QWORD *v51; // rbx
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rbp
  __int64 v56; // rbx
  __int64 *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rbp
  __int64 v61; // rbx
  __int64 *v62; // rax
  __int64 v63; // rdi
  unsigned __int128 v64; // rax
  unsigned __int128 v65; // rax
  __m128i v66; // [rsp+0h] [rbp-118h] BYREF
  __int64 v67; // [rsp+10h] [rbp-108h] BYREF
  __m128i v68; // [rsp+18h] [rbp-100h] BYREF
  __int64 v69; // [rsp+28h] [rbp-F0h]
  __m128i v70; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v71; // [rsp+40h] [rbp-D8h]
  __m128i v72; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v73; // [rsp+58h] [rbp-C0h]
  __m128i v74; // [rsp+60h] [rbp-B8h] BYREF
  char v75; // [rsp+70h] [rbp-A8h]
  int v76; // [rsp+74h] [rbp-A4h]
  char v77; // [rsp+78h] [rbp-A0h]
  unsigned __int128 v78; // [rsp+C0h] [rbp-58h]
  unsigned __int128 v79; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v80; // [rsp+E8h] [rbp-30h]

  v80 = __readfsqword(0x28u);
  if ( !(_DWORD)a2 )
  {
    switch ( a3 )
    {
      case 0LL:
        v66.m128i_i64[0] = (__int64)a4;
        sub_39C500((__int64)&v67, (__int64)a1);
        v19 = *(__int64 **)v66.m128i_i64[0];
        if ( *(_QWORD *)v66.m128i_i64[0] )
        {
          v20 = _mm_loadu_si128(&v68);
          v21 = v67;
          v67 = 0;
          v68 = 0;
          v22 = *v19;
          v66 = v20;
          if ( v22 )
          {
            v23 = v19[1];
            if ( v23 )
            {
              for ( i = 0; i != v23; ++i )
              {
                v25 = (__int64 *)(v22 + 24 * i);
                v26 = *v25;
                if ( *v25 )
                {
                  v25[1] = 0;
                  qfree(v26, a1);
                  v22 = *v19;
                }
              }
            }
            v19[1] = 0;
            qfree(v22, a1);
          }
          v27 = _mm_load_si128(&v66);
          *v19 = v21;
          *(__m128i *)(v19 + 1) = v27;
          v28 = _mm_load_si128(&v70);
          v29 = v69;
          v70 = 0;
          v69 = 0;
          v30 = v19[3];
          v66 = v28;
          if ( v30 )
          {
            v31 = v19[4];
            if ( v31 )
            {
              for ( j = 0; j != v31; ++j )
              {
                v33 = (__int64 *)(v30 + 24 * j);
                v34 = *v33;
                if ( *v33 )
                {
                  v33[1] = 0;
                  qfree(v34, a1);
                  v30 = v19[3];
                }
              }
            }
            v19[4] = 0;
            qfree(v30, a1);
          }
          v35 = _mm_load_si128(&v66);
          v19[3] = v29;
          *((__m128i *)v19 + 2) = v35;
          v36 = v71;
          v37 = _mm_loadu_si128(&v72);
          v71 = 0;
          v72 = 0;
          v38 = v19[6];
          if ( v38 )
          {
            v19[7] = 0;
            v66 = v37;
            qfree(v38, a1);
            v37 = _mm_load_si128(&v66);
          }
          *(__m128i *)(v19 + 7) = v37;
          v19[6] = v36;
          v39 = _mm_load_si128(&v74);
          v40 = v73;
          v74 = 0;
          v73 = 0;
          v41 = v19[9];
          v66 = v39;
          if ( v41 )
          {
            v42 = v19[10];
            if ( v42 )
            {
              for ( k = 0; k != v42; ++k )
              {
                v44 = (_QWORD *)(v41 + 80 * k);
                v45 = v44[4];
                if ( v45 )
                {
                  v44[5] = 0;
                  qfree(v45, a1);
                }
                v46 = v44[1];
                if ( v46 )
                {
                  v44[2] = 0;
                  qfree(v46, a1);
                }
                v41 = v19[9];
              }
            }
            v19[10] = 0;
            qfree(v41, a1);
          }
          v47 = _mm_load_si128(&v66);
          v19[9] = v40;
          *((__m128i *)v19 + 5) = v47;
          *((_BYTE *)v19 + 96) = v75;
          *((_DWORD *)v19 + 25) = v76;
          *((_BYTE *)v19 + 104) = v77;
        }
        v48 = v73;
        if ( v73 )
        {
          v49 = v74.m128i_i64[0];
          if ( v74.m128i_i64[0] )
          {
            v50 = 0;
            do
            {
              v51 = (_QWORD *)(v48 + 80 * v50);
              v52 = v51[4];
              if ( v52 )
              {
                v51[5] = 0;
                qfree(v52, a1);
              }
              v53 = v51[1];
              if ( v53 )
              {
                v51[2] = 0;
                qfree(v53, a1);
              }
              ++v50;
              v48 = v73;
            }
            while ( v49 != v50 );
          }
          v74.m128i_i64[0] = 0;
          qfree(v48, a1);
        }
        if ( v71 )
        {
          v72.m128i_i64[0] = 0;
          qfree(v71, a1);
        }
        v54 = v69;
        if ( v69 )
        {
          v55 = v70.m128i_i64[0];
          if ( v70.m128i_i64[0] )
          {
            v56 = 0;
            do
            {
              v57 = (__int64 *)(v54 + 24 * v56);
              v58 = *v57;
              if ( *v57 )
              {
                v57[1] = 0;
                qfree(v58, a1);
                v54 = v69;
              }
              ++v56;
            }
            while ( v55 != v56 );
          }
          v70.m128i_i64[0] = 0;
          qfree(v54, a1);
        }
        v59 = v67;
        if ( v67 )
        {
          v60 = v68.m128i_i64[0];
          if ( v68.m128i_i64[0] )
          {
            v61 = 0;
            do
            {
              v62 = (__int64 *)(v59 + 24 * v61);
              v63 = *v62;
              if ( *v62 )
              {
                v62[1] = 0;
                qfree(v63, a1);
                v59 = v67;
              }
              ++v61;
            }
            while ( v60 != v61 );
          }
          v68.m128i_i64[0] = 0;
          qfree(v59, a1);
        }
        return v80 - __readfsqword(0x28u);
      case 1LL:
        return sub_39B690(a5, a6, a7, a8, a9, a10, a11, a12, (__int64)a1, *(QT::QObject ***)a4[1]);
      case 2LL:
        v17 = *(void (**)())(*(_QWORD *)a1 + 416LL);
        if ( v17 == nullsub_233 )
          return v80 - __readfsqword(0x28u);
        goto LABEL_12;
      case 3LL:
        v17 = *(void (**)())(*(_QWORD *)a1 + 424LL);
        if ( v17 == nullsub_234 )
          return v80 - __readfsqword(0x28u);
LABEL_12:
        result = ((__int64 (*)(void))v17)();
        break;
      case 4LL:
        result = sub_39DCB0((QT::QWidget *)a1, a2, (unsigned int)a3, (__int64)a4, a5);
        break;
      case 5LL:
        result = sub_39DCD0((QT::QWidget *)a1, a2, (unsigned int)a3, (__int64)a4, a5);
        break;
      default:
        return v80 - __readfsqword(0x28u);
    }
    return result;
  }
  if ( (_DWORD)a2 == 1 )
  {
    v15 = (_QWORD *)*a4;
    v16 = a1 + 40;
    switch ( a3 )
    {
      case 0LL:
        v12 = 2165563904LL;
        goto LABEL_7;
      case 1LL:
        v12 = 2165563905LL;
        goto LABEL_7;
      case 2LL:
        v12 = 2165563906LL;
        goto LABEL_7;
      case 3LL:
        v12 = 2165563907LL;
LABEL_7:
        *(_QWORD *)&v13 = sub_524FA0(v16, v12, 0);
        *v15 = v13;
        *(_QWORD *)((char *)v15 + 6) = v13 >> 48;
        break;
      case 4LL:
        *(_QWORD *)&v64 = sub_524FA0(v16, 2165563908LL, 0);
        *v15 = v64;
        v78 = v64;
        *(_QWORD *)((char *)v15 + 6) = v64 >> 48;
        break;
      case 5LL:
        *(_QWORD *)&v65 = sub_524FA0(v16, 2165563909LL, 0);
        *v15 = v65;
        v79 = v65;
        *(_QWORD *)((char *)v15 + 6) = v65 >> 48;
        break;
      default:
        return v80 - __readfsqword(0x28u);
    }
    return v80 - __readfsqword(0x28u);
  }
  if ( (_DWORD)a2 != 2 )
    return v80 - __readfsqword(0x28u);
  switch ( a3 )
  {
    case 0LL:
      result = sub_524FF0(a1 + 40, 2165563904LL, *a4, 0);
      break;
    case 1LL:
      result = sub_524FF0(a1 + 40, 2165563905LL, *a4, 0);
      break;
    case 2LL:
      result = sub_524FF0(a1 + 40, 2165563906LL, *a4, 0);
      break;
    case 3LL:
      result = sub_524FF0(a1 + 40, 2165563907LL, *a4, 0);
      break;
    case 4LL:
      result = sub_524FF0(a1 + 40, 2165563908LL, *a4, 0);
      break;
    case 5LL:
      result = sub_524FF0(a1 + 40, 2165563909LL, *a4, 0);
      break;
    default:
      return v80 - __readfsqword(0x28u);
  }
  return result;
}
