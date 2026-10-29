_BYTE *__fastcall sub_1A46980(__int64 a1, _BYTE *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *result; // rax
  __int64 v8; // rbx
  char v9; // dl
  __int64 *v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rcx
  __int64 *v13; // rax
  __int64 *v14; // rsi
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // dl
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 *v25; // rsi
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbp
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbp
  __int64 v39; // rbp
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __m128i v44; // xmm0
  unsigned __int64 v45; // rdi
  void *v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r12
  unsigned __int64 v50; // rbp
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // rax
  char v57; // dl
  _QWORD *v58; // rcx
  __int64 v59; // rsi
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // r13
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r13
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r13
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // rax
  __int64 v82; // rsi
  __int64 v83; // [rsp+0h] [rbp-D8h]
  __int64 v84; // [rsp+8h] [rbp-D0h]
  __m128i v85; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v86; // [rsp+20h] [rbp-B8h]
  _BYTE *v87; // [rsp+28h] [rbp-B0h]
  _BYTE *v88; // [rsp+30h] [rbp-A8h]
  unsigned __int64 *v89; // [rsp+38h] [rbp-A0h]
  __int64 v90; // [rsp+40h] [rbp-98h]
  __int64 v91; // [rsp+48h] [rbp-90h]
  __int64 *v92; // [rsp+50h] [rbp-88h]
  void **p_ptr; // [rsp+58h] [rbp-80h]
  unsigned __int64 v94; // [rsp+68h] [rbp-70h] BYREF
  void *ptr; // [rsp+70h] [rbp-68h] BYREF
  __int64 v96; // [rsp+78h] [rbp-60h]
  _BYTE v97[88]; // [rsp+80h] [rbp-58h] BYREF

  v88 = a2;
  v83 = 0;
  if ( *(char *)(a3 + 8) >= 0 )
    v83 = *(_QWORD *)(a3 + 360);
  p_ptr = &ptr;
  result = v97;
  v87 = v97;
  if ( v88 )
  {
    do
    {
      if ( (char)v88[8] >= 0 )
      {
        v8 = *((_QWORD *)v88 + 45);
        if ( v8 )
        {
          a4 = *(_BYTE *)(v8 + 8) & 0x7F;
          if ( (unsigned __int8)a4 == 24 || !(_BYTE)a4 )
          {
            v9 = *(_BYTE *)(a1 + 172);
            if ( v9 )
            {
              v10 = *(__int64 **)(a1 + 152);
              a5 = *(unsigned int *)(a1 + 164);
              v11 = 8 * a5;
              v12 = &v10[a5];
              if ( v10 != v12 )
              {
                v13 = *(__int64 **)(a1 + 152);
                if ( v8 == *v10 )
                {
LABEL_122:
                  v9 = 0;
LABEL_123:
                  a4 = *(unsigned int *)(a1 + 164);
                  v14 = &v10[a4];
                  goto LABEL_17;
                }
                while ( v12 != ++v13 )
                {
                  if ( v8 == *v13 )
                    goto LABEL_122;
                }
              }
              if ( (unsigned int)a5 < *(_DWORD *)(a1 + 160) )
              {
                a5 = (unsigned int)(a5 + 1);
                *(_DWORD *)(a1 + 164) = a5;
                *v12 = v8;
                a4 = *(unsigned int *)(a1 + 164);
                v82 = *(_QWORD *)(a1 + 152);
                v13 = (__int64 *)(v82 + v11);
                v14 = (__int64 *)(v82 + 8 * a4);
LABEL_17:
                if ( v14 != v13 && (unsigned __int64)*v13 >= 0xFFFFFFFFFFFFFFFELL )
                {
                  v15 = v13 + 1;
                  do
                  {
                    a4 = (unsigned __int64)v15;
                    if ( v14 == v15 )
                      break;
                    ++v15;
                  }
                  while ( *(_QWORD *)a4 >= 0xFFFFFFFFFFFFFFFELL );
                }
                if ( v9 )
                  sub_1A45F40(a1, v8, v8, a4, a5, a6);
                goto LABEL_24;
              }
            }
            v13 = (__int64 *)sub_2236760(a1 + 152, v8);
            v10 = *(__int64 **)(a1 + 152);
            if ( !*(_BYTE *)(a1 + 172) )
            {
              a4 = *(unsigned int *)(a1 + 160);
              v14 = &v10[a4];
              goto LABEL_17;
            }
            goto LABEL_123;
          }
          if ( (unsigned __int8)a4 > 0x12u )
          {
            a4 = ((_BYTE)a4 + 94) & 0x7F;
            if ( (unsigned __int8)a4 > 5u )
              goto LABEL_24;
          }
          else if ( ((1LL << a4) & 0x40182) == 0 )
          {
            goto LABEL_24;
          }
        }
      }
      v16 = *((__int64 **)v88 + 46);
      v92 = &v16[*((unsigned int *)v88 + 94)];
      if ( v16 != v92 )
      {
        v17 = v16;
        v18 = *v16;
        v89 = &v94;
        v19 = *(_QWORD *)(v18 + 8);
        if ( (v19 & 6) != 0 )
          goto LABEL_57;
        while ( 1 )
        {
LABEL_30:
          v20 = sub_B99AD0(v18);
          v21 = *(_BYTE *)(a1 + 172);
          v22 = v20;
          v23 = v20 + 48;
          if ( v22 )
            v22 = v23;
          v84 = a1 + 152;
          if ( !v21 )
            goto LABEL_63;
          a4 = *(_QWORD *)(a1 + 152);
          a5 = *(unsigned int *)(a1 + 164);
          v24 = 8 * a5;
          v25 = (unsigned __int64 *)(a4 + 8 * a5);
          if ( (unsigned __int64 *)a4 != v25 )
          {
            v26 = *(_QWORD **)(a1 + 152);
            if ( v22 == *(_QWORD *)a4 )
            {
LABEL_118:
              v21 = 0;
              goto LABEL_40;
            }
            while ( v25 != ++v26 )
            {
              if ( v22 == *v26 )
                goto LABEL_118;
            }
          }
          if ( (unsigned int)a5 < *(_DWORD *)(a1 + 160) )
          {
            a5 = (unsigned int)(a5 + 1);
            *(_DWORD *)(a1 + 164) = a5;
            *v25 = v22;
            a4 = *(_QWORD *)(a1 + 152);
            v26 = (_QWORD *)(a4 + v24);
          }
          else
          {
LABEL_63:
            v26 = (_QWORD *)sub_2236760(v84, v22);
            a4 = *(_QWORD *)(a1 + 152);
            if ( !*(_BYTE *)(a1 + 172) )
            {
              v27 = (_QWORD *)(a4 + 8LL * *(unsigned int *)(a1 + 160));
              goto LABEL_41;
            }
          }
LABEL_40:
          v27 = (_QWORD *)(a4 + 8LL * *(unsigned int *)(a1 + 164));
LABEL_41:
          if ( v27 != v26 )
          {
            a4 = *v26 + 2LL;
            if ( a4 <= 1 )
            {
              do
                ++v26;
              while ( v27 != v26 && *v26 >= 0xFFFFFFFFFFFFFFFELL );
            }
          }
          if ( v21 )
          {
            v30 = sub_B99AD0(v18);
            if ( v30 )
              v30 += 48;
            while ( 1 )
            {
              v33 = v83;
              if ( (unsigned __int8)sub_B91990(v30, v83, v28, v29, v31, v32) )
                break;
              v38 = *(_QWORD *)(sub_B8C1B0(v30) + 16);
              if ( (v38 & 4) != 0 )
                v30 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF8LL);
              else
                v30 = v38 & 0xFFFFFFFFFFFFFFF8LL;
            }
            v85.m128i_i64[0] = sub_B91570(v30, v83, v34, v35, v36, v37);
            v90 = a1 + 8;
            v41 = sub_B99AD0(v18);
            a4 = *(unsigned int *)(a1 + 20);
            if ( v41 )
              v41 += 48;
            v86 = v41;
            v42 = *(unsigned int *)(a1 + 16);
            v43 = v42 + 1;
            v44 = (__m128i)_mm_loadh_ps((const double *)v85.m128i_i64);
            if ( v42 + 1 > a4 )
            {
              v33 = a1 + 24;
              v85 = v44;
              sub_2237220(a1 + 8, a1 + 24, v43, 16);
              v42 = *(unsigned int *)(a1 + 16);
              v44 = _mm_load_si128(&v85);
            }
            v45 = v22;
            *(__m128i *)(*(_QWORD *)(a1 + 8) + 16 * v42) = v44;
            v46 = v87;
            ++*(_DWORD *)(a1 + 16);
            ptr = v46;
            v96 = 0x400000000LL;
            v91 = a1 + 24;
            while ( 1 )
            {
              v47 = sub_B946F0(v45, v33, v43, a4, a5, a6);
              v49 = v48;
              v94 = v47;
              if ( v48 != v47 )
              {
                do
                {
                  v50 = sub_B8EEF0(v89);
                  v51 = sub_B99AD0(v50);
                  v54 = *(_QWORD *)(v50 + 8);
                  v55 = v51;
                  v56 = v51 + 48;
                  if ( v55 )
                    v55 = v56;
                  if ( (v54 & 6) != 0 )
                  {
                    v65 = *(_QWORD *)a1;
                    if ( *(char *)(v50 + 29) < 0 )
                    {
                      v66 = sub_B8C660(v50);
                      v54 = *(_QWORD *)(v50 + 8) & 7LL;
                    }
                    else
                    {
                      v66 = *(_QWORD *)(v50 - 8);
                      LOBYTE(v54) = v54 & 7;
                    }
                    if ( !sub_1A42210(v65, v66, (unsigned __int8)v54 > 2u, v52, v53, a6) )
                    {
                      v33 = v50;
                      if ( !sub_1A42580(v65, v50, 0) )
                      {
                        v62 = v94;
                        if ( (v94 & 4) == 0 )
                          goto LABEL_102;
                        goto LABEL_90;
                      }
                    }
                  }
                  v57 = *(_BYTE *)(a1 + 172);
                  if ( !v57 )
                    goto LABEL_95;
                  v58 = *(_QWORD **)(a1 + 152);
                  v59 = *(unsigned int *)(a1 + 164);
                  a5 = (__int64)&v58[v59];
                  if ( v58 != (_QWORD *)a5 )
                  {
                    v60 = *(_QWORD **)(a1 + 152);
                    if ( v55 == *v58 )
                    {
LABEL_103:
                      v57 = 0;
                      goto LABEL_82;
                    }
                    while ( (_QWORD *)a5 != ++v60 )
                    {
                      if ( v55 == *v60 )
                        goto LABEL_103;
                    }
                  }
                  if ( (unsigned int)v59 < *(_DWORD *)(a1 + 160) )
                  {
                    *(_DWORD *)(a1 + 164) = v59 + 1;
                    *(_QWORD *)a5 = v55;
                    v58 = *(_QWORD **)(a1 + 152);
                    v60 = &v58[v59];
                  }
                  else
                  {
LABEL_95:
                    v60 = (_QWORD *)sub_2236760(v84, v55);
                    v58 = *(_QWORD **)(a1 + 152);
                    if ( !*(_BYTE *)(a1 + 172) )
                    {
                      v33 = *(unsigned int *)(a1 + 160);
                      a4 = (unsigned __int64)&v58[v33];
                      goto LABEL_83;
                    }
                  }
LABEL_82:
                  v33 = *(unsigned int *)(a1 + 164);
                  a4 = (unsigned __int64)&v58[v33];
LABEL_83:
                  if ( (_QWORD *)a4 != v60 && *v60 >= 0xFFFFFFFFFFFFFFFELL )
                  {
                    v61 = v60 + 1;
                    do
                    {
                      v33 = (__int64)v61;
                      if ( (_QWORD *)a4 == v61 )
                        break;
                      ++v61;
                    }
                    while ( *(_QWORD *)v33 >= 0xFFFFFFFFFFFFFFFELL );
                  }
                  if ( v57 )
                  {
                    v71 = sub_B99AD0(v50);
                    if ( v71 )
                      v71 += 48;
                    while ( 1 )
                    {
                      v33 = v83;
                      if ( (unsigned __int8)sub_B91990(v71, v83, v67, v68, v69, v70) )
                        break;
                      v76 = *(_QWORD *)(sub_B8C1B0(v71) + 16);
                      if ( (v76 & 4) != 0 )
                        v71 = *(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF8LL);
                      else
                        v71 = v76 & 0xFFFFFFFFFFFFFFF8LL;
                    }
                    v85.m128i_i64[0] = sub_B91570(v71, v83, v72, v73, v74, v75);
                    v77 = sub_B99AD0(v50);
                    v78 = *(unsigned int *)(a1 + 20);
                    if ( v77 )
                      v77 += 48;
                    v86 = v77;
                    v79 = *(unsigned int *)(a1 + 16);
                    v80 = (__m128i)_mm_loadh_ps((const double *)v85.m128i_i64);
                    if ( v79 + 1 > v78 )
                    {
                      v33 = v91;
                      v85 = v80;
                      sub_2237220(v90, v91, v79 + 1, 16);
                      v79 = *(unsigned int *)(a1 + 16);
                      v80 = _mm_load_si128(&v85);
                    }
                    *(__m128i *)(*(_QWORD *)(a1 + 8) + 16 * v79) = v80;
                    v81 = (unsigned int)v96;
                    a4 = HIDWORD(v96);
                    ++*(_DWORD *)(a1 + 16);
                    if ( v81 + 1 > a4 )
                    {
                      v33 = (__int64)v87;
                      sub_2237220(p_ptr, v87, v81 + 1, 8);
                      v81 = (unsigned int)v96;
                    }
                    *((_QWORD *)ptr + v81) = v55;
                    LODWORD(v96) = v96 + 1;
                  }
                  v62 = v94;
                  if ( (v94 & 4) == 0 )
                  {
LABEL_102:
                    v94 = 0;
                    v64 = 0;
                    continue;
                  }
LABEL_90:
                  v63 = v62 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( !v63 )
                    goto LABEL_102;
                  v64 = *(_QWORD *)(v63 + 8);
                  v94 = v64;
                }
                while ( v49 != v64 );
              }
              if ( !(_DWORD)v96 )
                break;
              v43 = (unsigned int)v96;
              v45 = *((_QWORD *)ptr + (unsigned int)v96 - 1);
              LODWORD(v96) = v96 - 1;
            }
            if ( ptr != v87 )
              free(ptr);
          }
          if ( v92 == ++v17 )
            break;
          while ( 1 )
          {
            v18 = *v17;
            v19 = *(_QWORD *)(*v17 + 8);
            if ( (v19 & 6) == 0 )
              break;
LABEL_57:
            v39 = *(_QWORD *)a1;
            if ( *(char *)(v18 + 29) < 0 )
            {
              v40 = sub_B8C660(v18);
              v19 = *(_QWORD *)(v18 + 8) & 7LL;
            }
            else
            {
              v40 = *(_QWORD *)(v18 - 8);
              LOBYTE(v19) = v19 & 7;
            }
            if ( sub_1A42210(v39, v40, (unsigned __int8)v19 > 2u, a4, a5, a6) || sub_1A42580(v39, v18, 0) )
              goto LABEL_30;
            if ( v92 == ++v17 )
              goto LABEL_24;
          }
        }
      }
LABEL_24:
      result = *(_BYTE **)v88;
      v88 = result;
    }
    while ( result );
  }
  return result;
}
