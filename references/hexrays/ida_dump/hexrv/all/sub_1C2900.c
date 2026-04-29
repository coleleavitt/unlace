_DWORD *__fastcall sub_1C2900(_DWORD *a1, _QWORD *a2, __int64 a3, signed int a4, __int64 a5)
{
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // r15d
  unsigned int v10; // r8d
  __int64 v11; // rax
  unsigned __int16 v12; // r9
  __int64 v13; // rsi
  int v14; // r14d
  __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int16 v19; // r14
  __int16 v20; // r8
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  _DWORD *v26; // r15
  __int64 v27; // rax
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r8
  __int64 v33; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  size_t v37; // rax
  __int64 v38; // r10
  _DWORD *i; // r10
  int v40; // eax
  unsigned int v41; // r12d
  int v42; // r13d
  int v43; // eax
  __int64 v44; // rax
  __int64 *v45; // rbp
  __int64 v46; // r12
  __int64 v47; // rdi
  __int64 v48; // rbp
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // r14
  _DWORD *v54; // r13
  __int64 v55; // rbx
  _DWORD *v56; // [rsp+8h] [rbp-E0h]
  __int64 v57; // [rsp+8h] [rbp-E0h]
  char *v58; // [rsp+8h] [rbp-E0h]
  _DWORD *v59; // [rsp+8h] [rbp-E0h]
  __int16 v60; // [rsp+8h] [rbp-E0h]
  unsigned __int16 v61; // [rsp+8h] [rbp-E0h]
  __int64 v62; // [rsp+8h] [rbp-E0h]
  __int64 v64; // [rsp+18h] [rbp-D0h]
  unsigned int v65; // [rsp+20h] [rbp-C8h]
  __int16 v66; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v67; // [rsp+20h] [rbp-C8h]
  unsigned int v68; // [rsp+20h] [rbp-C8h]
  __int64 v71; // [rsp+38h] [rbp-B0h]
  __int64 v72; // [rsp+40h] [rbp-A8h] BYREF
  __int64 *v73; // [rsp+48h] [rbp-A0h]
  __int64 v74; // [rsp+50h] [rbp-98h] BYREF
  __int128 v75; // [rsp+58h] [rbp-90h]
  int v76; // [rsp+70h] [rbp-78h] BYREF
  __int64 *v77; // [rsp+78h] [rbp-70h]
  int v78; // [rsp+80h] [rbp-68h]
  _DWORD v79[4]; // [rsp+90h] [rbp-58h] BYREF
  int v80; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v81; // [rsp+A8h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v6 = *(_DWORD *)a3;
  v72 = 0;
  v73 = nullptr;
  if ( v6 == 3 )
  {
    sub_1C2320((__int64)a1, a2, *(_DWORD *)(a3 + 8), a4);
    goto LABEL_23;
  }
  if ( v6 > 3 )
  {
    if ( v6 != 4 )
      goto LABEL_51;
    v41 = a4 / 2;
    v42 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(
            a2,
            *(unsigned __int16 *)(a3 + 8),
            (unsigned int)(a4 / 2));
    v43 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, *(unsigned __int16 *)(a3 + 10), v41);
    if ( v42 != -1 && v43 != -1 )
    {
      LODWORD(v72) = 4;
      LODWORD(v73) = v42 | (v43 << 16);
    }
  }
  else
  {
    if ( v6 != 1 )
    {
      if ( v6 == 2 )
      {
        v7 = *(__int64 **)(a3 + 8);
        v74 = 0;
        v75 = 0;
        v8 = *v7;
        v64 = *v7 + 24 * v7[1];
        if ( v64 != *v7 )
        {
          while ( *(_DWORD *)v8 != 4 )
          {
            v76 = 0;
            copy_argloc(&v76, v8);
            v22 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 16));
            v78 = _mm_cvtsi128_si32(v22);
            v23 = sub_3346E0();
            sub_1C2900(v79, v23, v8, (unsigned int)_mm_extract_epi16(v22, 1), a5);
            copy_argloc(&v76, v79);
            cleanup_argloc(v79);
            if ( v76 == 2 )
            {
              v29 = v77;
              v30 = *v77;
              if ( 24 * v77[1] )
              {
                do
                {
                  *(_WORD *)(v30 + 16) += *(_WORD *)(v8 + 16);
                  v30 += 24;
                  v31 = *v29;
                  v32 = 24 * v29[1];
                  v33 = *v29 + v32;
                }
                while ( v30 != v33 );
                v34 = 0xAAAAAAAAAAAAAAABLL * (v32 >> 3);
                v67 = v34;
                if ( v34 )
                {
                  v35 = v74;
                  v36 = v34 + v75;
                  v37 = 0;
                  v38 = 24 * v75;
                  if ( *((_QWORD *)&v75 + 1) < v36 )
                  {
                    v71 = 24 * v75;
                    v62 = 24 * v29[1];
                    v74 = qvector_reserve(&v74, v74, v36, 24);
                    v35 = v74;
                    v38 = v71;
                    v32 = v62;
                    v37 = 24 * v75 - v71;
                  }
                  v58 = (char *)(v35 + v38);
                  memmove(&v58[v32], v58, v37);
                  for ( i = v58; v33 != v31; i = v59 + 6 )
                  {
                    *i = 0;
                    v59 = i;
                    copy_argloc(i, v31);
                    v40 = *(_DWORD *)(v31 + 16);
                    v31 += 24;
                    v59[4] = v40;
                  }
                  *(_QWORD *)&v75 = v67 + v75;
                }
              }
            }
            else if ( v76 == 4 )
            {
              v9 = (unsigned __int16)v77;
              v10 = (unsigned int)v77 >> 16;
              if ( !*(_BYTE *)(a2[12] + 145LL) )
              {
                v10 = (unsigned __int16)v77;
                v9 = (unsigned int)v77 >> 16;
              }
              v14 = *(unsigned __int16 *)(v8 + 18);
              v11 = v75;
              v12 = *(_WORD *)(v8 + 16);
              v13 = v74;
              LOWORD(v14) = (unsigned __int16)v14 >> 1;
              if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
              {
                v68 = v10;
                v61 = *(_WORD *)(v8 + 16);
                v74 = qvector_reserve(&v74, v74, v75 + 1, 24);
                v13 = v74;
                v10 = v68;
                v11 = v75;
                v12 = v61;
              }
              v15 = v13 + 24 * v11;
              v65 = v10;
              v16 = v12 | (v14 << 16);
              *(_QWORD *)v15 = 0;
              *(_QWORD *)(v15 + 8) = 0;
              *(_DWORD *)(v15 + 16) = 0xFFFF;
              *(_QWORD *)&v75 = v75 + 1;
              v56 = (_DWORD *)v15;
              cleanup_argloc(v15);
              *v56 = 3;
              v17 = v74;
              v56[2] = v65;
              v18 = v75;
              v56[4] = v16;
              v19 = *(_WORD *)(v8 + 16);
              v20 = *(_WORD *)(v8 + 18) >> 1;
              if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v18 + 1) )
              {
                v60 = *(_WORD *)(v8 + 18) >> 1;
                v74 = qvector_reserve(&v74, v17, v18 + 1, 24);
                v18 = v75;
                v17 = v74;
                v20 = v60;
              }
              v66 = v20;
              v21 = v17 + 24 * v18;
              *(_QWORD *)v21 = 0;
              *(_QWORD *)(v21 + 8) = 0;
              *(_DWORD *)(v21 + 16) = 0xFFFF;
              *(_QWORD *)&v75 = v75 + 1;
              v57 = v21;
              cleanup_argloc(v21);
              *(_DWORD *)v57 = 3;
              *(_DWORD *)(v57 + 8) = v9;
              *(_WORD *)(v57 + 16) = v66 + v19;
              *(_WORD *)(v57 + 18) = v66;
            }
            else
            {
              v79[0] = 0;
              copy_argloc(v79, &v76);
              v24 = v75;
              v25 = v74;
              v80 = v78;
              if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
              {
                v74 = qvector_reserve(&v74, v74, v75 + 1, 24);
                v24 = v75;
                v25 = v74;
              }
              v26 = (_DWORD *)(v25 + 24 * v24);
              *v26 = 0;
              copy_argloc(v26, v79);
              *(_QWORD *)&v75 = v75 + 1;
              v26[4] = v80;
              cleanup_argloc(v79);
            }
            v8 += 24;
            cleanup_argloc(&v76);
            if ( v8 == v64 )
              goto LABEL_37;
          }
          if ( !under_debugger )
            sub_37DDE0(51507);
LABEL_53:
          BUG();
        }
LABEL_37:
        v44 = qalloc_or_throw(24);
        *(_QWORD *)v44 = 0;
        v45 = (__int64 *)v44;
        *(_OWORD *)(v44 + 8) = 0;
        v46 = v75;
        if ( (_QWORD)v75 )
        {
          v51 = qalloc_or_throw(24 * v75);
          *v45 = v51;
          v52 = v51;
          v53 = 0;
          v45[2] = v46;
          while ( 1 )
          {
            v54 = (_DWORD *)(24 * v53 + v52);
            v55 = v74 + 24 * v53;
            *v54 = 0;
            copy_argloc(v54, v55);
            ++v53;
            v54[4] = *(_DWORD *)(v55 + 16);
            if ( v46 == v53 )
              break;
            v52 = *v45;
          }
          v45[1] = v46;
        }
        if ( v45 )
        {
          LODWORD(v72) = 2;
          v73 = v45;
        }
        v47 = v74;
        if ( v74 )
        {
          v48 = v75;
          if ( (_QWORD)v75 )
          {
            v49 = 0;
            do
            {
              v50 = 3 * v49++;
              cleanup_argloc(v47 + 8 * v50);
              v47 = v74;
            }
            while ( v48 != v49 );
          }
          *(_QWORD *)&v75 = 0;
          qfree(v47);
        }
        goto LABEL_22;
      }
LABEL_51:
      if ( !under_debugger )
        sub_37DDE0(51112);
      goto LABEL_53;
    }
    v27 = *(_QWORD *)(a3 + 8);
    LODWORD(v72) = 1;
    v73 = (__int64 *)(v27 - a5);
  }
LABEL_22:
  *a1 = 0;
  copy_argloc(a1, &v72);
LABEL_23:
  cleanup_argloc(&v72);
  return a1;
}
