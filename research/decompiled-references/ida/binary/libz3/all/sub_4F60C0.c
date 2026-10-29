char __fastcall sub_4F60C0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  unsigned int v6; // eax
  __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // r13
  char *v13; // rcx
  __int64 v14; // rdx
  __m128i v15; // xmm1
  __int64 v16; // rax
  char *v17; // rdi
  __int64 v18; // r14
  char *v19; // r12
  char *v20; // r15
  unsigned int v21; // edx
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  char *v29; // r12
  __int64 v30; // r15
  char *v31; // r13
  unsigned int v32; // edx
  _QWORD *v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rax
  char *v36; // rax
  char *v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // r12
  bool v41; // dl
  unsigned __int64 v42; // rax
  __int64 i; // rax
  char *v44; // rax
  __int64 v45; // r14
  __int64 v46; // r13
  __int64 v47; // r12
  __int64 *v48; // rbp
  char *v49; // r15
  __int64 v50; // rax
  char *v51; // rbx
  char *v52; // rax
  char *v53; // rdi
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // rax
  void **p_ptr; // [rsp+0h] [rbp-118h]
  char *v59; // [rsp+8h] [rbp-110h]
  _QWORD *v60; // [rsp+10h] [rbp-108h]
  __int64 v61; // [rsp+18h] [rbp-100h]
  char *v62; // [rsp+20h] [rbp-F8h]
  unsigned int v63; // [rsp+2Ch] [rbp-ECh]
  __int64 v65; // [rsp+38h] [rbp-E0h]
  void *ptr; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v67; // [rsp+48h] [rbp-D0h]
  char v68; // [rsp+50h] [rbp-C8h] BYREF
  void *v69; // [rsp+90h] [rbp-88h]
  unsigned __int64 v70; // [rsp+98h] [rbp-80h]
  char v71; // [rsp+A0h] [rbp-78h] BYREF

  v6 = *(_DWORD *)(a3 + 8);
  v7 = *(unsigned int *)(a1 + 8);
  v63 = v6;
  if ( v6 && (_DWORD)v7 )
  {
    v8 = (__int64 *)a1;
    v61 = 0;
    v59 = &v68;
    p_ptr = &ptr;
    v62 = &v71;
    while ( 1 )
    {
      v10 = 8 * v7;
      v11 = 0;
      v12 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v61);
      ptr = v59;
      v67 = 0x800000000LL;
      do
      {
        sub_557DA0(
          a2,
          *(_QWORD *)(*v8 + v11),
          v12,
          (_DWORD)p_ptr,
          a5,
          a6,
          (_DWORD)p_ptr,
          (_DWORD)v59,
          (_DWORD)v60,
          v61,
          (__int64)v62);
        v11 += 8;
      }
      while ( v10 != v11 );
      v13 = (char *)*v8;
      v14 = *((unsigned int *)v8 + 2);
      v69 = v62;
      v70 = 0x800000000LL;
      v60 = v8 + 2;
      if ( v13 != (char *)(v8 + 2) )
      {
        v15 = _mm_cvtsi32_si128(*((_DWORD *)v8 + 3));
        *v8 = (__int64)(v8 + 2);
        v69 = v13;
        *((_DWORD *)v8 + 3) = 8;
        v70 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), v15).m128i_u64[0];
        goto LABEL_8;
      }
      if ( (_DWORD)v14 )
        break;
      v16 = (unsigned int)v67;
      v17 = (char *)ptr;
      if ( (_DWORD)v67 )
        goto LABEL_9;
LABEL_47:
      LODWORD(v67) = 0;
      if ( v17 && v17 != v59 )
        sub_186B220(v17);
      v7 = *((unsigned int *)v8 + 2);
      v41 = (int)v61 + 1 < v63;
      LOBYTE(v6) = (_DWORD)v7 != 0;
      ++v61;
      if ( (_DWORD)v7 == 0 || !v41 )
        return v6;
    }
    v44 = v13;
    v65 = a2;
    v45 = 0;
    v46 = 8 * v14;
    LODWORD(v47) = 8;
    LODWORD(v14) = 0;
    v48 = v8;
    v49 = v62;
    while ( 1 )
    {
      v51 = &v44[v45];
      if ( (unsigned int)v14 >= (unsigned int)v47 )
      {
        v47 = (unsigned int)(2 * v47);
        v52 = (char *)sub_186B270(8 * v47);
        LODWORD(v14) = v70;
        v53 = (char *)v69;
        v49 = v52;
        if ( (_DWORD)v70 )
        {
          if ( (unsigned int)(v70 - 1) <= 2 || v52 == (char *)v69 + 8 )
          {
            v56 = 0;
            a6 = 8LL * (unsigned int)v70;
            do
            {
              *(_QWORD *)&v49[v56] = *(_QWORD *)&v53[v56];
              v56 += 8LL;
            }
            while ( a6 != v56 );
          }
          else
          {
            v54 = 0;
            v55 = 16LL * ((unsigned int)v70 >> 1);
            do
            {
              *(__m128i *)&v49[v54] = _mm_loadu_si128((const __m128i *)&v53[v54]);
              v54 += 16LL;
            }
            while ( v55 != v54 );
            if ( (v14 & 1) != 0 )
              *(_QWORD *)&v49[8 * (v14 & 0xFFFFFFFE)] = *(_QWORD *)&v53[8 * (v14 & 0xFFFFFFFE)];
          }
        }
        if ( v53 != v62 && v53 )
        {
          sub_186B220(v53);
          LODWORD(v14) = v70;
        }
        v69 = v49;
        HIDWORD(v70) = v47;
      }
      v50 = (unsigned int)v14;
      v45 += 8;
      v14 = (unsigned int)(v14 + 1);
      *(_QWORD *)&v49[8 * v50] = *(_QWORD *)v51;
      LODWORD(v70) = v14;
      if ( v46 == v45 )
        break;
      v44 = (char *)*v48;
    }
    v8 = v48;
    v13 = v49;
    a2 = v65;
LABEL_8:
    v16 = (unsigned int)v67;
    v17 = (char *)ptr;
    *((_DWORD *)v8 + 2) = 0;
    if ( (_DWORD)v16 )
    {
LABEL_9:
      LODWORD(v18) = *((_DWORD *)v8 + 3);
      v19 = v17;
      v20 = &v17[8 * v16];
      v21 = 0;
      do
      {
        if ( v21 < (unsigned int)v18 )
        {
          v22 = *v8;
        }
        else
        {
          v18 = (unsigned int)(2 * v18);
          v25 = sub_186B270(8 * v18);
          v21 = *((_DWORD *)v8 + 2);
          v26 = (_QWORD *)*v8;
          v22 = v25;
          if ( v21 )
          {
            if ( v21 - 1 <= 2 || (_QWORD *)v25 == v26 + 1 )
            {
              for ( i = 0; i != v21; ++i )
                *(_QWORD *)(v22 + i * 8) = v26[i];
            }
            else
            {
              v27 = 0;
              a6 = 16LL * (v21 >> 1);
              do
              {
                *(__m128i *)(v22 + v27) = _mm_loadu_si128((const __m128i *)&v26[v27 / 8]);
                v27 += 16LL;
              }
              while ( v27 != a6 );
              if ( (v21 & 1) != 0 )
              {
                v28 = v21 & 0xFFFFFFFE;
                a6 = v26[v28];
                *(_QWORD *)(v22 + 8 * v28) = a6;
              }
            }
          }
          if ( v26 && v60 != v26 )
          {
            sub_186B220(v26);
            v21 = *((_DWORD *)v8 + 2);
          }
          *v8 = v22;
          *((_DWORD *)v8 + 3) = v18;
        }
        v23 = *(_QWORD *)v19;
        v24 = v21;
        v19 += 8;
        ++v21;
        *(_QWORD *)(v22 + 8 * v24) = v23;
        *((_DWORD *)v8 + 2) = v21;
      }
      while ( v19 != v20 );
      v13 = (char *)v69;
      v14 = (unsigned int)v70;
    }
    LODWORD(v67) = 0;
    if ( (_DWORD)v14 )
    {
      v29 = &v13[8 * v14];
      LODWORD(v30) = HIDWORD(v67);
      v31 = v13;
      v32 = 0;
      do
      {
        if ( v32 < (unsigned int)v30 )
        {
          v33 = ptr;
        }
        else
        {
          v30 = (unsigned int)(2 * v30);
          v36 = (char *)sub_186B270(8 * v30);
          v32 = v67;
          v37 = (char *)ptr;
          v33 = v36;
          if ( (_DWORD)v67 )
          {
            if ( (unsigned int)(v67 - 1) <= 2 || v36 == (char *)ptr + 8 )
            {
              v42 = 0;
              a6 = 8LL * (unsigned int)v67;
              do
              {
                v33[v42 / 8] = *(_QWORD *)&v37[v42];
                v42 += 8LL;
              }
              while ( v42 != a6 );
            }
            else
            {
              v38 = 0;
              v39 = 16LL * ((unsigned int)v67 >> 1);
              do
              {
                *(__m128i *)&v33[v38 / 8] = _mm_loadu_si128((const __m128i *)&v37[v38]);
                v38 += 16LL;
              }
              while ( v39 != v38 );
              if ( (v32 & 1) != 0 )
                v33[v32 & 0xFFFFFFFE] = *(_QWORD *)&v37[8 * (v32 & 0xFFFFFFFE)];
            }
          }
          if ( v37 != v59 && v37 )
          {
            v60 = v33;
            sub_186B220(v37);
            v32 = v67;
            v33 = v60;
          }
          ptr = v33;
          HIDWORD(v67) = v30;
        }
        v34 = *(_QWORD *)v31;
        v35 = v32;
        v31 += 8;
        ++v32;
        v33[v35] = v34;
        LODWORD(v67) = v32;
      }
      while ( v29 != v31 );
      v13 = (char *)v69;
      if ( !v69 || v69 == v62 )
        goto LABEL_44;
    }
    else if ( !v13 || v13 == v62 )
    {
LABEL_46:
      v17 = (char *)ptr;
      goto LABEL_47;
    }
    sub_186B220(v13);
    v32 = v67;
LABEL_44:
    v40 = 0;
    if ( v32 )
    {
      do
        sub_553300(a2, *((_QWORD *)ptr + v40++));
      while ( (unsigned int)v40 < (unsigned int)v67 );
    }
    goto LABEL_46;
  }
  return v6;
}

