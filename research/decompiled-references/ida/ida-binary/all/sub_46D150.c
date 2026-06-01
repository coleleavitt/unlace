void __fastcall sub_46D150(
        char *a1,
        int a2,
        QT::QWidget ***a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  void (*v13)(); // rax
  QT::QWidget **v15; // rbx
  __m128i v16; // xmm2
  QT::QWidget *v17; // r12
  QT::QWidget *v18; // rdx
  QT::QWidget *v19; // r13
  QT::QWidget *i; // rbp
  __int64 *v21; // rax
  __int64 v22; // rdi
  __m128i v23; // xmm3
  __m128i v24; // xmm4
  QT::QWidget *v25; // r12
  QT::QWidget *v26; // rdx
  QT::QWidget *v27; // r13
  QT::QWidget *j; // rbp
  __int64 *v29; // rax
  __int64 v30; // rdi
  __m128i v31; // xmm5
  QT::QWidget *v32; // rbp
  __m128i v33; // xmm0
  QT::QWidget *v34; // rdi
  __m128i v35; // xmm6
  QT::QWidget *v36; // r14
  QT::QWidget *v37; // rdi
  QT::QWidget *v38; // r13
  QT::QWidget *k; // r12
  _QWORD *v40; // rbp
  __int64 v41; // rdi
  __int64 v42; // rdi
  __m128i v43; // xmm7
  QT::QWidget *v44; // rdi
  __int64 v45; // r12
  __int64 v46; // rbp
  _QWORD *v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rdi
  QT::QWidget *v50; // rdx
  __int64 v51; // rbp
  __int64 v52; // rbx
  __int64 *v53; // rax
  __int64 v54; // rdi
  QT::QWidget *v55; // rdx
  __int64 v56; // rbp
  __int64 v57; // rbx
  __int64 *v58; // rax
  __int64 v59; // rdi
  __m128i v60; // [rsp+0h] [rbp-B8h] BYREF
  QT::QWidget *v61; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v62; // [rsp+18h] [rbp-A0h] BYREF
  QT::QWidget *v63; // [rsp+28h] [rbp-90h]
  __m128i v64; // [rsp+30h] [rbp-88h] BYREF
  QT::QWidget *v65; // [rsp+40h] [rbp-78h]
  __m128i v66; // [rsp+48h] [rbp-70h] BYREF
  QT::QWidget *v67; // [rsp+58h] [rbp-60h]
  __m128i v68; // [rsp+60h] [rbp-58h] BYREF
  char v69; // [rsp+70h] [rbp-48h]
  int v70; // [rsp+74h] [rbp-44h]
  char v71; // [rsp+78h] [rbp-40h]
  unsigned __int64 v72; // [rsp+88h] [rbp-30h]

  v72 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0:
      sub_349050((__int64)&v61, (__int64)a1);
      v15 = *a3;
      if ( v15 )
      {
        v16 = _mm_loadu_si128(&v62);
        v17 = v61;
        v61 = nullptr;
        v62 = 0;
        v18 = *v15;
        v60 = v16;
        if ( v18 )
        {
          v19 = v15[1];
          if ( v19 )
          {
            for ( i = nullptr; i != v19; i = (QT::QWidget *)((char *)i + 1) )
            {
              v21 = (__int64 *)((char *)v18 + 24 * (_QWORD)i);
              v22 = *v21;
              if ( *v21 )
              {
                v21[1] = 0;
                qfree(v22, a1);
                v18 = *v15;
              }
            }
          }
          v15[1] = nullptr;
          qfree(v18, a1);
        }
        v23 = _mm_load_si128(&v60);
        *v15 = v17;
        *(__m128i *)(v15 + 1) = v23;
        v24 = _mm_load_si128(&v64);
        v25 = v63;
        v64 = 0;
        v63 = nullptr;
        v26 = v15[3];
        v60 = v24;
        if ( v26 )
        {
          v27 = v15[4];
          if ( v27 )
          {
            for ( j = nullptr; j != v27; j = (QT::QWidget *)((char *)j + 1) )
            {
              v29 = (__int64 *)((char *)v26 + 24 * (_QWORD)j);
              v30 = *v29;
              if ( *v29 )
              {
                v29[1] = 0;
                qfree(v30, a1);
                v26 = v15[3];
              }
            }
          }
          v15[4] = nullptr;
          qfree(v26, a1);
        }
        v31 = _mm_load_si128(&v60);
        v15[3] = v25;
        *((__m128i *)v15 + 2) = v31;
        v32 = v65;
        v33 = _mm_loadu_si128(&v66);
        v65 = nullptr;
        v66 = 0;
        v34 = v15[6];
        if ( v34 )
        {
          v15[7] = nullptr;
          v60 = v33;
          qfree(v34, a1);
          v33 = _mm_load_si128(&v60);
        }
        *(__m128i *)(v15 + 7) = v33;
        v15[6] = v32;
        v35 = _mm_load_si128(&v68);
        v36 = v67;
        v68 = 0;
        v67 = nullptr;
        v37 = v15[9];
        v60 = v35;
        if ( v37 )
        {
          v38 = v15[10];
          if ( v38 )
          {
            for ( k = nullptr; k != v38; k = (QT::QWidget *)((char *)k + 1) )
            {
              v40 = (_QWORD *)((char *)v37 + 80 * (_QWORD)k);
              v41 = v40[4];
              if ( v41 )
              {
                v40[5] = 0;
                qfree(v41, a1);
              }
              v42 = v40[1];
              if ( v42 )
              {
                v40[2] = 0;
                qfree(v42, a1);
              }
              v37 = v15[9];
            }
          }
          v15[10] = nullptr;
          qfree(v37, a1);
        }
        v43 = _mm_load_si128(&v60);
        v15[9] = v36;
        *((__m128i *)v15 + 5) = v43;
        *((_BYTE *)v15 + 96) = v69;
        *((_DWORD *)v15 + 25) = v70;
        *((_BYTE *)v15 + 104) = v71;
      }
      v44 = v67;
      if ( v67 )
      {
        v45 = v68.m128i_i64[0];
        if ( v68.m128i_i64[0] )
        {
          v46 = 0;
          do
          {
            v47 = (_QWORD *)((char *)v44 + 80 * v46);
            v48 = v47[4];
            if ( v48 )
            {
              v47[5] = 0;
              qfree(v48, a1);
            }
            v49 = v47[1];
            if ( v49 )
            {
              v47[2] = 0;
              qfree(v49, a1);
            }
            ++v46;
            v44 = v67;
          }
          while ( v45 != v46 );
        }
        v68.m128i_i64[0] = 0;
        qfree(v44, a1);
      }
      if ( v65 )
      {
        v66.m128i_i64[0] = 0;
        qfree(v65, a1);
      }
      v50 = v63;
      if ( v63 )
      {
        v51 = v64.m128i_i64[0];
        if ( v64.m128i_i64[0] )
        {
          v52 = 0;
          do
          {
            v53 = (__int64 *)((char *)v50 + 24 * v52);
            v54 = *v53;
            if ( *v53 )
            {
              v53[1] = 0;
              qfree(v54, a1);
              v50 = v63;
            }
            ++v52;
          }
          while ( v51 != v52 );
        }
        v64.m128i_i64[0] = 0;
        qfree(v50, a1);
      }
      v55 = v61;
      if ( v61 )
      {
        v56 = v62.m128i_i64[0];
        if ( v62.m128i_i64[0] )
        {
          v57 = 0;
          do
          {
            v58 = (__int64 *)((char *)v55 + 24 * v57);
            v59 = *v58;
            if ( *v58 )
            {
              v58[1] = 0;
              qfree(v59, a1);
              v55 = v61;
            }
            ++v57;
          }
          while ( v56 != v57 );
        }
        v62.m128i_i64[0] = 0;
        qfree(v55, a1);
      }
      break;
    case 1:
      sub_345B90((__int64)a1, (__int64)*a3[1]);
      break;
    case 2:
      v13 = *(void (**)())(*(_QWORD *)a1 + 416LL);
      if ( v13 != nullsub_223 )
        goto LABEL_60;
      break;
    case 3:
      v13 = *(void (**)())(*(_QWORD *)a1 + 424LL);
      if ( v13 != nullsub_224 )
LABEL_60:
        v13();
      break;
    case 4:
      sub_346190((QT::QWidget *)a1, *(_DWORD *)a3[1]);
      break;
    case 5:
      sub_347670((__int64)a1, *(_DWORD *)a3[1], a5, a6, a7, a8, a9, a10, a11, a12);
      break;
    case 6:
      sub_346040((QT::QObject *)a1);
      break;
    case 7:
      sub_346060(
        *(double *)a5.m128_u64,
        a6,
        a7,
        a8,
        a9,
        a10,
        a11,
        a12,
        (__int64)a1,
        (unsigned __int64)*a3[1],
        *(unsigned int *)a3[2],
        a4);
      break;
    case 8:
      sub_346C60((QT::QWidget **)a1, (__int64 *)a3[1], *(double *)a5.m128_u64, *(double *)a6.m128_u64);
      break;
    default:
      return;
  }
}
