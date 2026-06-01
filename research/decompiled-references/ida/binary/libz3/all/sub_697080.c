__int64 __fastcall sub_697080(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, __m128 a5)
{
  __int64 v5; // rax
  int v6; // edx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 *v9; // rax
  __int64 *v10; // r12
  __int64 *v11; // rbp
  int v12; // r8d
  __int64 v13; // r15
  unsigned int v14; // r9d
  __int64 v15; // r14
  int v16; // ecx
  size_t v17; // rbx
  __int64 *v18; // r13
  unsigned int v19; // esi
  __int64 v20; // rax
  __int64 *v21; // r9
  __int64 *v22; // rax
  __int64 *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rdx
  _DWORD *v26; // r14
  _DWORD *v27; // r15
  __int64 v28; // r8
  unsigned int v29; // esi
  __int64 v30; // rax
  __int64 *v31; // rdi
  __int64 *i; // rax
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned int v36; // esi
  unsigned int *v37; // rbp
  unsigned int *v38; // r15
  __int64 v39; // rax
  unsigned int *v40; // r13
  unsigned int *v41; // rbp
  __int64 v42; // rax
  _QWORD *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v50; // rbp
  _QWORD *v51; // rcx
  __int64 v52; // rax
  unsigned int *v53; // rax
  __int64 v54; // rdx
  unsigned int v55; // esi
  __int64 *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r13
  __int64 *v59; // rax
  unsigned int v60; // r9d
  __int64 *v61; // r8
  __int64 *v62; // rax
  __int64 *v63; // rax
  __int64 *v64; // r15
  __int64 v65; // rdx
  __int64 *v66; // rsi
  __int64 *v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rbp
  __int64 v70; // rdi
  void *v71; // r14
  char *v72; // rbp
  void (__fastcall *v73)(void *, _QWORD); // rax
  size_t v74; // rax
  __m128i v75; // xmm5
  _QWORD *v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  __m128i v79; // [rsp+0h] [rbp-C8h] BYREF
  void *v80; // [rsp+10h] [rbp-B8h]
  __int64 v81; // [rsp+18h] [rbp-B0h]
  __int64 *v82; // [rsp+20h] [rbp-A8h]
  __int64 *v83; // [rsp+28h] [rbp-A0h]
  __int64 *v84; // [rsp+30h] [rbp-98h]
  int v85; // [rsp+3Ch] [rbp-8Ch]
  __int64 *v86; // [rsp+40h] [rbp-88h]
  unsigned int v87; // [rsp+48h] [rbp-80h]
  unsigned int v88; // [rsp+4Ch] [rbp-7Ch]
  unsigned int *v89; // [rsp+50h] [rbp-78h] BYREF
  unsigned int *v90; // [rsp+58h] [rbp-70h] BYREF
  __int64 v91; // [rsp+60h] [rbp-68h] BYREF
  __int64 v92; // [rsp+68h] [rbp-60h] BYREF
  __m128i v93; // [rsp+70h] [rbp-58h] BYREF
  __int64 v94; // [rsp+80h] [rbp-48h] BYREF
  __int64 v95; // [rsp+88h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 4408);
  v82 = a3;
  v6 = *(_DWORD *)(a2 + 4456);
  v81 = a1;
  v80 = (void *)a2;
  v87 = a4;
  if ( v5 )
    v7 = *(_DWORD *)(v5 - 4);
  else
    v7 = 0;
  if ( v6 != v7 )
  {
    v8 = sub_692550((__int64)v80, a5);
    if ( v8 != 1 )
    {
      sub_180B130(v80);
      if ( (unsigned __int8)sub_186A530(*(double *)a5.m128_u64) )
      {
        sub_186A4C0(*(double *)a5.m128_u64);
        v69 = sub_180B150(v80, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v70 = sub_17F35B0(v69, v8);
        std::operator<<<std::char_traits<char>>();
        sub_186A500(v70, "\n");
      }
      else
      {
        v50 = sub_180B150(v80, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_17F35B0(v50, v8);
        std::operator<<<std::char_traits<char>>();
      }
      v51 = (_QWORD *)v81;
      v52 = *((_QWORD *)v80 + 1);
      *(_QWORD *)(v81 + 8) = 0;
      *v51 = v52;
      return v81;
    }
  }
  sub_6927C0((__int64)v80, a2, a5);
  if ( !*((_BYTE *)v80 + 3280) )
  {
    v9 = (__int64 *)sub_186B270(0x40u);
    *(_OWORD *)v9 = 0;
    v10 = v9;
    *((_OWORD *)v9 + 1) = 0;
    *((_OWORD *)v9 + 2) = 0;
    *((_OWORD *)v9 + 3) = 0;
    v11 = (__int64 *)v82[1];
    if ( v11 )
    {
      v83 = &v11[*((unsigned int *)v11 - 1)];
      if ( v83 != v11 )
      {
        v79.m128i_i32[0] = 0;
        v12 = 0;
        v13 = 8;
        while ( 1 )
        {
          v14 = 2 * v13;
          v15 = *v11;
          if ( 3 * (int)v13 >= (unsigned int)(4 * (v12 + v79.m128i_i32[0])) )
          {
            v16 = v13 - 1;
            v17 = 8LL * (unsigned int)v13;
            v18 = &v10[v17 / 8];
            goto LABEL_11;
          }
          v58 = v14;
          LODWORD(v84) = 2 * v13;
          v17 = 8LL * v14;
          v59 = (__int64 *)sub_186B270(v17);
          v60 = 2 * v13;
          v61 = v59;
          if ( 2 * (_DWORD)v13 )
            break;
          v63 = &v10[v13];
          v18 = v61;
          v16 = -1;
          if ( v10 != v63 )
            goto LABEL_91;
LABEL_99:
          if ( v10 )
          {
            LODWORD(v86) = v60;
            v85 = v16;
            v84 = v61;
            sub_186B220(v10);
            v60 = (unsigned int)v86;
            v16 = v85;
            v61 = v84;
          }
          v10 = v61;
          v13 = v60;
          v12 = 0;
LABEL_11:
          v19 = *(_DWORD *)(v15 + 12);
          v20 = 8LL * (v16 & v19);
          v21 = &v10[(unsigned __int64)v20 / 8];
          if ( v20 == v17 )
          {
            v23 = nullptr;
LABEL_19:
            if ( v10 != v21 )
            {
              v22 = v10;
              do
              {
                while ( 1 )
                {
                  v25 = *v22;
                  if ( (unsigned __int64)*v22 <= 1 )
                    break;
                  if ( *(_DWORD *)(v25 + 12) == v19 && v15 == v25 )
                    goto LABEL_108;
                  if ( v21 == ++v22 )
                    goto LABEL_27;
                }
                if ( !v25 )
                  goto LABEL_70;
                v23 = v22++;
              }
              while ( v21 != v22 );
            }
LABEL_27:
            v85 = v16;
            LODWORD(v84) = v12;
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v22 = &v10[(unsigned __int64)v20 / 8];
          v23 = nullptr;
          while ( 1 )
          {
            while ( 1 )
            {
              v24 = *v22;
              if ( (unsigned __int64)*v22 <= 1 )
                break;
              if ( *(_DWORD *)(v24 + 12) == v19 && v15 == v24 )
              {
LABEL_108:
                *v22 = v15;
                goto LABEL_73;
              }
              if ( ++v22 == v18 )
                goto LABEL_19;
            }
            if ( !v24 )
              break;
            v23 = v22++;
            if ( v22 == v18 )
              goto LABEL_19;
          }
LABEL_70:
          if ( v23 )
            --v12;
          else
            v23 = v22;
          *v23 = v15;
          ++v79.m128i_i32[0];
LABEL_73:
          if ( v83 == ++v11 )
            goto LABEL_28;
        }
        v62 = (__int64 *)memset(v59, 0, 8 * v58);
        v60 = (unsigned int)v84;
        v61 = v62;
        v63 = &v10[v13];
        v16 = (_DWORD)v84 - 1;
        v18 = &v61[v17 / 8];
LABEL_91:
        v64 = v10;
        do
        {
          while ( (unsigned __int64)*v64 <= 1 )
          {
            if ( ++v64 == v63 )
              goto LABEL_99;
          }
          v65 = 8LL * (*(_DWORD *)(*v64 + 12) & (unsigned int)v16);
          v66 = &v61[(unsigned __int64)v65 / 8];
          if ( v17 == v65 )
          {
LABEL_102:
            if ( v61 == v66 )
            {
LABEL_107:
              v88 = v60;
              v86 = v63;
              v85 = v16;
              v84 = v61;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v67 = v61;
            while ( *v67 )
            {
              if ( v66 == ++v67 )
                goto LABEL_107;
            }
          }
          else
          {
            v67 = &v61[(unsigned __int64)v65 / 8];
            while ( *v67 )
            {
              if ( ++v67 == v18 )
                goto LABEL_102;
            }
          }
          v68 = *v64++;
          *v67 = v68;
        }
        while ( v64 != v63 );
        goto LABEL_99;
      }
    }
    v79.m128i_i32[0] = 0;
    v17 = 64;
    v16 = 7;
LABEL_28:
    v89 = nullptr;
    v26 = *((_DWORD **)v80 + 562);
    if ( !v26 )
      goto LABEL_39;
    v27 = &v26[4 * *(v26 - 1)];
    if ( v27 == v26 )
      goto LABEL_39;
    do
    {
      if ( v79.m128i_i32[0] )
      {
        while ( 1 )
        {
LABEL_31:
          v28 = *(_QWORD *)v26;
          v29 = *(_DWORD *)(*(_QWORD *)v26 + 12LL);
          v30 = 8LL * (v16 & v29);
          v31 = &v10[(unsigned __int64)v30 / 8];
          if ( v30 != v17 )
          {
            for ( i = &v10[(unsigned __int64)v30 / 8]; &v10[v17 / 8] != i; ++i )
            {
              v33 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v33 + 12) == v29 && v28 == v33 )
                  goto LABEL_75;
              }
              else if ( !v33 )
              {
                goto LABEL_38;
              }
            }
          }
          v56 = v10;
          if ( v31 != v10 )
            break;
LABEL_38:
          v26 += 4;
          if ( v27 == v26 )
            goto LABEL_39;
        }
        while ( 1 )
        {
          v57 = *v56;
          if ( (unsigned __int64)*v56 > 1 )
          {
            if ( *(_DWORD *)(v57 + 12) == v29 && v28 == v57 )
              break;
          }
          else if ( !v57 )
          {
            v26 += 4;
            if ( v27 == v26 )
              goto LABEL_39;
            goto LABEL_31;
          }
          if ( v31 == ++v56 )
            goto LABEL_38;
        }
      }
LABEL_75:
      v53 = v89;
      if ( !v89 || (v54 = *(v89 - 1), (_DWORD)v54 == *(v89 - 2)) )
      {
        LODWORD(v83) = v16;
        sub_2FD3F0(&v89);
        v53 = v89;
        v16 = (int)v83;
        v54 = *(v89 - 1);
      }
      v55 = v26[2];
      v26 += 4;
      v53[v54] = v55;
      ++*(v53 - 1);
    }
    while ( v27 != v26 );
LABEL_39:
    v90 = nullptr;
    LODWORD(v83) = sub_11C7A80((char *)v80 + 96, &v89, &v90, v87);
    v34 = *((_QWORD *)v80 + 1);
    v35 = *((_QWORD *)v80 + 424);
    v95 = 0;
    v94 = v34;
    v79 = (__m128i)(unsigned __int64)v34;
    if ( v35 )
      v36 = 2 * *(_DWORD *)(v35 - 4);
    else
      v36 = 0;
    v84 = &v94;
    sub_6907A0(&v94, v36);
    sub_7E6B80((char *)v80 + 4480, &v94);
    if ( v90 )
    {
      v37 = &v90[*(v90 - 1)];
      if ( v37 != v90 )
      {
        v38 = v90;
        do
        {
          v39 = *(_QWORD *)(v95 + 8LL * *v38);
          v91 = v39;
          if ( v39 )
            ++*(_DWORD *)(v39 + 8);
          v93 = _mm_load_si128(&v79);
          sub_68D130((unsigned int **)&v93.m128i_i64[1], &v91);
          ++v38;
          v34 = v93.m128i_i64[0];
          v79 = _mm_load_si128(&v93);
        }
        while ( v37 != v38 );
      }
    }
    sub_2FCDE0(v82);
    v40 = v89;
    if ( v89 )
    {
      v41 = &v89[*(v89 - 1)];
      if ( v41 != v89 )
      {
        do
        {
          v42 = *(_QWORD *)(v95 + 16LL * *v40);
          if ( v42 )
          {
            ++*(_DWORD *)(v42 + 8);
            v92 = v42;
            sub_68D130((unsigned int **)v82 + 1, &v92);
          }
          ++v40;
        }
        while ( v41 != v40 );
      }
    }
    if ( (_DWORD)v83 == -1 )
    {
      v76 = (_QWORD *)v81;
      v77 = *((_QWORD *)v80 + 1);
      *(_QWORD *)(v81 + 8) = 0;
      *v76 = v77;
      v78 = *(_QWORD *)(v77 + 864);
      v92 = v78;
      if ( v78 )
        ++*(_DWORD *)(v78 + 8);
    }
    else
    {
      if ( (_DWORD)v83 != 1 )
      {
        if ( !v90 || !*(v90 - 1) )
        {
          v71 = v80;
          v72 = *((char **)v80 + 487);
          v73 = *(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v80 + 56LL);
          if ( (char *)v73 == (char *)&sub_698C60 )
          {
            v74 = strlen(*((const char **)v80 + 487));
            sub_68D370((char **)v71 + 597, 0, *((_QWORD *)v71 + 598), v72, v74);
          }
          else
          {
            v73(v80, *((_QWORD *)v80 + 487));
          }
        }
        v75 = _mm_load_si128(&v79);
        v79 = 0;
        *(__m128i *)v81 = v75;
        goto LABEL_57;
      }
      v43 = (_QWORD *)v81;
      v44 = *((_QWORD *)v80 + 1);
      *(_QWORD *)(v81 + 8) = 0;
      *v43 = v44;
      v45 = *(_QWORD *)(v44 + 856);
      v92 = v45;
      if ( v45 )
        ++*(_DWORD *)(v45 + 8);
    }
    sub_68D130((unsigned int **)(v81 + 8), &v92);
    v79 = _mm_srli_si128(_mm_load_si128(&v79), 8);
LABEL_57:
    sub_2334C0(v84);
    v93.m128i_i64[0] = v34;
    v93.m128i_i64[1] = v79.m128i_i64[0];
    sub_2334C0(v93.m128i_i64);
    if ( v90 )
      sub_186B220(v90 - 2);
    if ( v89 )
      sub_186B220(v89 - 2);
    if ( v10 )
      sub_186B220(v10);
    return v81;
  }
  v46 = *((_QWORD *)v80 + 1);
  v47 = v81;
  *(_QWORD *)v81 = v46;
  v48 = *(_QWORD *)(v46 + 864);
  *(_QWORD *)(v47 + 8) = 0;
  v94 = v48;
  if ( v48 )
    ++*(_DWORD *)(v48 + 8);
  sub_68D130((unsigned int **)(v81 + 8), &v94);
  return v81;
}

