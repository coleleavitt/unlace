_BYTE *__fastcall sub_4F7040(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbp
  int v4; // eax
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned int v14; // r12d
  unsigned int v15; // eax
  __int64 v16; // r14
  unsigned int v17; // r13d
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // edx
  __int64 v22; // r13
  __int64 v23; // r12
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r14
  char *v27; // rax
  char *v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // r13
  _QWORD *v32; // r15
  __int64 v33; // rax
  __m128i v34; // xmm1
  __int64 v35; // rdx
  __int64 *v36; // r14
  __int64 *v37; // rbx
  __int64 v38; // r12
  unsigned int v39; // edx
  __int64 v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rdi
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 *v50; // rbp
  unsigned int v51; // edx
  _QWORD *v52; // r12
  __int64 v53; // rcx
  __int64 v54; // rax
  char *v55; // rax
  char *v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rbx
  _BYTE *result; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rsi
  __int64 j; // rax
  _QWORD *v65; // rdx
  unsigned __int64 v66; // r14
  __int64 v67; // r15
  __int64 v68; // r12
  __int64 *i; // rbx
  __int64 v70; // rdx
  __int64 *v71; // rbp
  char *v72; // rdi
  unsigned __int64 v73; // rdx
  __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  __int64 v76; // r9
  __int64 v78; // [rsp+10h] [rbp-158h]
  __int64 v79; // [rsp+28h] [rbp-140h]
  _QWORD *v80; // [rsp+28h] [rbp-140h]
  __int64 v82; // [rsp+38h] [rbp-130h]
  _BYTE *ptr; // [rsp+40h] [rbp-128h]
  unsigned int v84; // [rsp+48h] [rbp-120h]
  unsigned int v85; // [rsp+4Ch] [rbp-11Ch]
  _BYTE v86[64]; // [rsp+50h] [rbp-118h] BYREF
  void *v87; // [rsp+90h] [rbp-D8h]
  __int64 v88; // [rsp+98h] [rbp-D0h]
  _BYTE v89[64]; // [rsp+A0h] [rbp-C8h] BYREF
  void *v90; // [rsp+E0h] [rbp-88h]
  unsigned __int64 v91; // [rsp+E8h] [rbp-80h]
  _BYTE v92[120]; // [rsp+F0h] [rbp-78h] BYREF

  v3 = (__int64 *)a1;
  v4 = *(_DWORD *)(a3 + 8);
  ptr = v86;
  v85 = 8;
  v87 = v89;
  v79 = 0;
  v88 = 0x800000000LL;
  v82 = (unsigned int)(v4 - 1);
  if ( v4 )
  {
    v84 = 0;
    if ( *(_DWORD *)(a1 + 8) )
    {
      do
      {
        v5 = 0;
        do
        {
          v9 = v84;
          v10 = sub_552E90(a2, *(_QWORD *)(*v3 + 8 * v5));
          if ( v84 < v85 )
          {
            v6 = (__int64)ptr;
          }
          else
          {
            v9 = v84;
            v6 = sub_186B270(16LL * v85);
            if ( v84 )
            {
              if ( v84 - 1 <= 2 || (_BYTE *)v6 == ptr + 8 )
              {
                v48 = 0;
                do
                {
                  *(_QWORD *)(v6 + v48) = *(_QWORD *)&ptr[v48];
                  v48 += 8;
                }
                while ( v48 != 8LL * v84 );
              }
              else
              {
                v11 = 0;
                do
                {
                  *(__m128i *)(v6 + v11) = _mm_loadu_si128((const __m128i *)&ptr[v11]);
                  v11 += 16;
                }
                while ( v11 != 16LL * (v84 >> 1) );
                if ( (v84 & 1) != 0 )
                  *(_QWORD *)(v6 + 8LL * (v84 & 0xFFFFFFFE)) = *(_QWORD *)&ptr[8 * (v84 & 0xFFFFFFFE)];
              }
            }
            if ( ptr && ptr != v86 )
            {
              v78 = v6;
              sub_186B220(ptr);
              v9 = v84;
              v6 = v78;
            }
            ptr = (_BYTE *)v6;
            v85 *= 2;
          }
          v7 = v9;
          v8 = v9 + 1;
          ++v5;
          *(_QWORD *)(v6 + 8 * v7) = v10;
          v84 = v8;
        }
        while ( (unsigned int)v5 < *((_DWORD *)v3 + 2) );
        v12 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v79);
        if ( v8 )
        {
          v13 = 0;
          v14 = 0;
          while ( 1 )
          {
            if ( (unsigned __int8)sub_553E00(a2, *(_QWORD *)(v6 + 8 * v13), v12) )
            {
              if ( v14 != (_DWORD)v13 )
                *(_QWORD *)&ptr[8 * v14] = *(_QWORD *)&ptr[8 * v13];
              ++v14;
              if ( v8 == ++v13 )
              {
LABEL_26:
                v15 = v8;
                if ( v8 != v14 )
                {
                  if ( v8 >= v14 )
                  {
                    if ( v14 < v8 )
                    {
                      v84 = v14;
                      v15 = v14;
                    }
                  }
                  else
                  {
                    LODWORD(v16) = v85;
                    v17 = v8;
                    do
                    {
                      if ( v15 < (unsigned int)v16 )
                      {
                        v18 = (__int64)ptr;
                      }
                      else
                      {
                        v16 = (unsigned int)(2 * v16);
                        v18 = sub_186B270(8 * v16);
                        v15 = v84;
                        if ( v84 )
                        {
                          if ( v84 - 1 <= 2 || (_BYTE *)v18 == ptr + 8 )
                          {
                            v59 = 0;
                            do
                            {
                              *(_QWORD *)(v18 + v59) = *(_QWORD *)&ptr[v59];
                              v59 += 8;
                            }
                            while ( 8LL * v84 != v59 );
                          }
                          else
                          {
                            v20 = 0;
                            do
                            {
                              *(__m128i *)(v18 + v20) = _mm_loadu_si128((const __m128i *)&ptr[v20]);
                              v20 += 16;
                            }
                            while ( 16LL * (v84 >> 1) != v20 );
                            if ( (v84 & 1) != 0 )
                              *(_QWORD *)(v18 + 8LL * (v84 & 0xFFFFFFFE)) = *(_QWORD *)&ptr[8 * (v84 & 0xFFFFFFFE)];
                          }
                        }
                        if ( ptr != v86 && ptr )
                        {
                          sub_186B220(ptr);
                          v15 = v84;
                        }
                        ptr = (_BYTE *)v18;
                        v85 = v16;
                      }
                      v19 = v15;
                      ++v17;
                      ++v15;
                      *(_QWORD *)(v18 + 8 * v19) = 0;
                      v84 = v15;
                    }
                    while ( v17 != v14 );
                  }
                }
                if ( v15 )
                {
                  v21 = v88;
                  LODWORD(v22) = HIDWORD(v88);
                  v23 = 0;
                  do
                  {
                    v26 = *(_QWORD *)&ptr[8 * v23];
                    if ( v21 < (unsigned int)v22 )
                    {
                      v24 = v87;
                    }
                    else
                    {
                      v22 = (unsigned int)(2 * v22);
                      v27 = (char *)sub_186B270(8 * v22);
                      v21 = v88;
                      v28 = (char *)v87;
                      v24 = v27;
                      if ( (_DWORD)v88 )
                      {
                        if ( (unsigned int)(v88 - 1) <= 2 || v27 == (char *)v87 + 8 )
                        {
                          v46 = 0;
                          v47 = 8LL * (unsigned int)v88;
                          do
                          {
                            v24[v46 / 8] = *(_QWORD *)&v28[v46];
                            v46 += 8LL;
                          }
                          while ( v47 != v46 );
                        }
                        else
                        {
                          v29 = 0;
                          v30 = 16LL * ((unsigned int)v88 >> 1);
                          do
                          {
                            *(__m128i *)&v24[v29 / 8] = _mm_loadu_si128((const __m128i *)&v28[v29]);
                            v29 += 16LL;
                          }
                          while ( v30 != v29 );
                          if ( (v21 & 1) != 0 )
                            v24[v21 & 0xFFFFFFFE] = *(_QWORD *)&v28[8 * (v21 & 0xFFFFFFFE)];
                        }
                      }
                      if ( v28 != v89 && v28 )
                      {
                        sub_186B220(v28);
                        v21 = v88;
                      }
                      v87 = v24;
                      v15 = v84;
                      HIDWORD(v88) = v22;
                    }
                    v25 = v21;
                    ++v23;
                    ++v21;
                    v24[v25] = v26;
                    LODWORD(v88) = v21;
                  }
                  while ( (unsigned int)v23 < v15 );
                }
                break;
              }
            }
            else
            {
              sub_553300(a2, *(_QWORD *)&ptr[8 * v13++]);
              if ( v8 == v13 )
                goto LABEL_26;
            }
            v6 = (__int64)ptr;
          }
        }
        if ( v82 == v79 )
          break;
        v84 = 0;
        ++v79;
      }
      while ( *((_DWORD *)v3 + 2) );
    }
  }
  v31 = (__int64 *)*v3;
  v32 = v3 + 2;
  v90 = v92;
  v91 = 0x800000000LL;
  v33 = *((unsigned int *)v3 + 2);
  if ( v31 != v3 + 2 )
  {
    v34 = _mm_cvtsi32_si128(*((_DWORD *)v3 + 3));
    *v3 = (__int64)v32;
    v90 = v31;
    *((_DWORD *)v3 + 3) = 8;
    v91 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v33), v34).m128i_u64[0];
    goto LABEL_65;
  }
  if ( (_DWORD)v33 )
  {
    v80 = v3 + 2;
    v65 = v31;
    v66 = 0;
    v68 = 8 * v33;
    v31 = (__int64 *)v92;
    LODWORD(v33) = 0;
    v67 = v68;
    LODWORD(v68) = 8;
    for ( i = v3; ; v65 = (_QWORD *)*i )
    {
      v71 = &v65[v66 / 8];
      if ( (unsigned int)v33 >= (unsigned int)v68 )
      {
        v68 = (unsigned int)(2 * v68);
        v33 = sub_186B270(8 * v68);
        v72 = (char *)v90;
        v31 = (__int64 *)v33;
        LODWORD(v33) = v91;
        if ( (_DWORD)v91 )
        {
          if ( (unsigned int)(v91 - 1) <= 2 || v31 == (__int64 *)((char *)v90 + 8) )
          {
            v75 = 0;
            v76 = 8LL * (unsigned int)v91;
            do
            {
              v31[v75 / 8] = *(_QWORD *)&v72[v75];
              v75 += 8LL;
            }
            while ( v76 != v75 );
          }
          else
          {
            v73 = 0;
            v74 = 16LL * ((unsigned int)v91 >> 1);
            do
            {
              *(__m128i *)&v31[v73 / 8] = _mm_loadu_si128((const __m128i *)&v72[v73]);
              v73 += 16LL;
            }
            while ( v74 != v73 );
            if ( (v33 & 1) != 0 )
              v31[(unsigned int)v33 & 0xFFFFFFFE] = *(_QWORD *)&v72[8 * (v33 & 0xFFFFFFFE)];
          }
        }
        if ( v72 != v92 && v72 )
        {
          sub_186B220(v72);
          LODWORD(v33) = v91;
        }
        v90 = v31;
        HIDWORD(v91) = v68;
      }
      v70 = (unsigned int)v33;
      v66 += 8LL;
      v33 = (unsigned int)(v33 + 1);
      v31[v70] = *v71;
      LODWORD(v91) = v33;
      if ( v67 == v66 )
        break;
    }
    v32 = v80;
    v3 = i;
LABEL_65:
    v35 = (unsigned int)v88;
    *((_DWORD *)v3 + 2) = 0;
    v36 = (__int64 *)v87;
    if ( !(_DWORD)v35 )
      goto LABEL_88;
    goto LABEL_66;
  }
  v35 = (unsigned int)v88;
  v36 = (__int64 *)v87;
  if ( !(_DWORD)v88 )
    goto LABEL_113;
LABEL_66:
  v37 = &v36[v35];
  LODWORD(v38) = *((_DWORD *)v3 + 3);
  v39 = 0;
  do
  {
    if ( v39 < (unsigned int)v38 )
    {
      v40 = *v3;
    }
    else
    {
      v38 = (unsigned int)(2 * v38);
      v43 = sub_186B270(8 * v38);
      v39 = *((_DWORD *)v3 + 2);
      v44 = (_QWORD *)*v3;
      v40 = v43;
      if ( v39 )
      {
        if ( v39 - 1 <= 2 || (_QWORD *)v43 == v44 + 1 )
        {
          for ( j = 0; j != v39; ++j )
            *(_QWORD *)(v40 + j * 8) = v44[j];
        }
        else
        {
          v45 = 0;
          do
          {
            *(__m128i *)(v40 + v45 * 8) = _mm_loadu_si128((const __m128i *)&v44[v45]);
            v45 += 2;
          }
          while ( 2LL * (v39 >> 1) != v45 );
          if ( (v39 & 1) != 0 )
            *(_QWORD *)(v40 + 8LL * (v39 & 0xFFFFFFFE)) = v44[v39 & 0xFFFFFFFE];
        }
      }
      if ( v44 && v32 != v44 )
      {
        sub_186B220(v44);
        v39 = *((_DWORD *)v3 + 2);
      }
      *v3 = v40;
      *((_DWORD *)v3 + 3) = v38;
    }
    v41 = *v36;
    v42 = v39;
    ++v36;
    ++v39;
    *(_QWORD *)(v40 + 8 * v42) = v41;
    *((_DWORD *)v3 + 2) = v39;
  }
  while ( v36 != v37 );
  v31 = (__int64 *)v90;
  v33 = (unsigned int)v91;
LABEL_88:
  LODWORD(v88) = 0;
  if ( (_DWORD)v33 )
  {
    LODWORD(v49) = HIDWORD(v88);
    v50 = &v31[v33];
    v51 = 0;
    do
    {
      if ( v51 < (unsigned int)v49 )
      {
        v52 = v87;
      }
      else
      {
        v49 = (unsigned int)(2 * v49);
        v55 = (char *)sub_186B270(8 * v49);
        v51 = v88;
        v56 = (char *)v87;
        v52 = v55;
        if ( (_DWORD)v88 )
        {
          if ( (unsigned int)(v88 - 1) <= 2 || v55 == (char *)v87 + 8 )
          {
            v62 = 0;
            v63 = 8LL * (unsigned int)v88;
            do
            {
              v52[v62 / 8] = *(_QWORD *)&v56[v62];
              v62 += 8LL;
            }
            while ( v62 != v63 );
          }
          else
          {
            v57 = 0;
            v58 = 16LL * ((unsigned int)v88 >> 1);
            do
            {
              *(__m128i *)&v52[v57 / 8] = _mm_loadu_si128((const __m128i *)&v56[v57]);
              v57 += 16LL;
            }
            while ( v57 != v58 );
            if ( (v51 & 1) != 0 )
              v52[v51 & 0xFFFFFFFE] = *(_QWORD *)&v56[8 * (v51 & 0xFFFFFFFE)];
          }
        }
        if ( v56 && v56 != v89 )
        {
          sub_186B220(v56);
          v51 = v88;
        }
        v87 = v52;
        HIDWORD(v88) = v49;
      }
      v53 = *v31;
      v54 = v51;
      ++v31;
      ++v51;
      v52[v54] = v53;
      LODWORD(v88) = v51;
    }
    while ( v50 != v31 );
    v31 = (__int64 *)v90;
    if ( !v90 || v90 == v92 )
      goto LABEL_110;
    goto LABEL_109;
  }
  if ( v31 != (__int64 *)v92 && v31 )
  {
LABEL_109:
    sub_186B220(v31);
    v51 = v88;
LABEL_110:
    v60 = 0;
    if ( v51 )
    {
      do
        sub_553300(a2, *((_QWORD *)v87 + v60++));
      while ( (unsigned int)v60 < (unsigned int)v88 );
    }
  }
  v36 = (__int64 *)v87;
LABEL_113:
  LODWORD(v88) = 0;
  if ( v36 != (__int64 *)v89 && v36 )
    sub_186B220(v36);
  result = v86;
  if ( ptr != v86 )
  {
    if ( ptr )
      return (_BYTE *)sub_186B220(ptr);
  }
  return result;
}

