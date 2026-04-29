_DWORD *__fastcall sub_1C6F80(_DWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
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
  __int64 v17; // rdx
  __int16 v18; // r14
  __int16 v19; // r8
  _QWORD *v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rsi
  _DWORD *v25; // r15
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r8
  __int64 v31; // r14
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  size_t v35; // rax
  __int64 v36; // r10
  _DWORD *i; // r10
  int v38; // eax
  unsigned int v39; // r12d
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 *v43; // rbp
  __int64 v44; // r12
  __int64 v45; // rdi
  __int64 v46; // rbp
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // r13
  __int64 v50; // r14
  _DWORD *v51; // r13
  _QWORD *v52; // rbx
  _DWORD *v53; // [rsp+8h] [rbp-E0h]
  _QWORD *v54; // [rsp+8h] [rbp-E0h]
  _DWORD *v55; // [rsp+8h] [rbp-E0h]
  __int16 v56; // [rsp+8h] [rbp-E0h]
  unsigned __int16 v57; // [rsp+8h] [rbp-E0h]
  __int64 v58; // [rsp+8h] [rbp-E0h]
  __int64 v60; // [rsp+18h] [rbp-D0h]
  unsigned int v61; // [rsp+20h] [rbp-C8h]
  __int16 v62; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v63; // [rsp+20h] [rbp-C8h]
  unsigned int v64; // [rsp+20h] [rbp-C8h]
  _QWORD *v65; // [rsp+28h] [rbp-C0h]
  __int64 v67; // [rsp+38h] [rbp-B0h]
  _QWORD *v68; // [rsp+50h] [rbp-98h] BYREF
  __int128 v69; // [rsp+58h] [rbp-90h]
  int v70; // [rsp+70h] [rbp-78h] BYREF
  __int64 *v71; // [rsp+78h] [rbp-70h]
  int v72; // [rsp+80h] [rbp-68h]
  _DWORD v73[4]; // [rsp+90h] [rbp-58h] BYREF
  int v74; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v75; // [rsp+A8h] [rbp-40h]

  v65 = a2;
  v75 = __readfsqword(0x28u);
  v6 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 == 3 )
  {
    sub_1C69A0((__int64)a1, a2, *(_DWORD *)(a3 + 8), a4);
    goto LABEL_22;
  }
  if ( v6 > 3 )
  {
    if ( v6 != 4 )
      goto LABEL_46;
    v39 = (int)a4 / 2;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(
      a2,
      *(unsigned __int16 *)(a3 + 8),
      (unsigned int)((int)a4 / 2));
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 176LL))(a2, *(unsigned __int16 *)(a3 + 10), v39);
  }
  else if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      v7 = *(__int64 **)(a3 + 8);
      v68 = nullptr;
      v69 = 0;
      v8 = *v7;
      v60 = *v7 + 24 * v7[1];
      if ( v60 != *v7 )
      {
        while ( *(_DWORD *)v8 != 4 )
        {
          v70 = 0;
          copy_argloc();
          v21 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 16));
          v72 = _mm_cvtsi128_si32(v21);
          v22 = sub_339CA0(&v70);
          sub_1C6F80(v73, v22, v8, (unsigned int)_mm_extract_epi16(v21, 1), a5);
          a2 = v73;
          copy_argloc();
          cleanup_argloc();
          if ( v70 == 2 )
          {
            v27 = v71;
            v28 = *v71;
            if ( 24 * v71[1] )
            {
              do
              {
                *(_WORD *)(v28 + 16) += *(_WORD *)(v8 + 16);
                v28 += 24;
                v29 = *v27;
                v30 = 24 * v27[1];
                v31 = *v27 + v30;
              }
              while ( v28 != v31 );
              v32 = 0xAAAAAAAAAAAAAAABLL * (v30 >> 3);
              v63 = v32;
              if ( v32 )
              {
                v33 = (__int64)v68;
                v34 = v32 + v69;
                v35 = 0;
                v36 = 24 * v69;
                if ( *((_QWORD *)&v69 + 1) < v34 )
                {
                  v67 = 24 * v69;
                  v58 = 24 * v27[1];
                  v68 = (_QWORD *)qvector_reserve((__int64)&v68, (__int64)v68, v34, 24);
                  v33 = (__int64)v68;
                  v36 = v67;
                  v30 = v58;
                  v35 = 24 * v69 - v67;
                }
                a2 = (_QWORD *)(v33 + v36);
                memmove((char *)a2 + v30, a2, v35);
                for ( i = a2; v31 != v29; i = v55 + 6 )
                {
                  *i = 0;
                  a2 = (_QWORD *)v29;
                  v55 = i;
                  copy_argloc();
                  v38 = *(_DWORD *)(v29 + 16);
                  v29 += 24;
                  v55[4] = v38;
                }
                *(_QWORD *)&v69 = v63 + v69;
              }
            }
          }
          else if ( v70 == 4 )
          {
            v9 = (unsigned __int16)v71;
            v10 = (unsigned int)v71 >> 16;
            if ( !*(_BYTE *)(v65[12] + 145LL) )
            {
              v10 = (unsigned __int16)v71;
              v9 = (unsigned int)v71 >> 16;
            }
            v14 = *(unsigned __int16 *)(v8 + 18);
            v11 = v69;
            v12 = *(_WORD *)(v8 + 16);
            v13 = (__int64)v68;
            LOWORD(v14) = (unsigned __int16)v14 >> 1;
            if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v69 + 1) )
            {
              v64 = v10;
              v57 = *(_WORD *)(v8 + 16);
              v68 = (_QWORD *)qvector_reserve((__int64)&v68, (__int64)v68, v69 + 1, 24);
              v13 = (__int64)v68;
              v10 = v64;
              v11 = v69;
              v12 = v57;
            }
            v15 = v13 + 24 * v11;
            v61 = v10;
            v16 = v12 | (v14 << 16);
            *(_QWORD *)v15 = 0;
            *(_QWORD *)(v15 + 8) = 0;
            *(_DWORD *)(v15 + 16) = 0xFFFF;
            *(_QWORD *)&v69 = v69 + 1;
            v53 = (_DWORD *)v15;
            cleanup_argloc();
            *v53 = 3;
            a2 = v68;
            v53[2] = v61;
            v17 = v69;
            v53[4] = v16;
            v18 = *(_WORD *)(v8 + 16);
            v19 = *(_WORD *)(v8 + 18) >> 1;
            if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v17 + 1) )
            {
              v56 = *(_WORD *)(v8 + 18) >> 1;
              v68 = (_QWORD *)qvector_reserve((__int64)&v68, (__int64)a2, v17 + 1, 24);
              v17 = v69;
              a2 = v68;
              v19 = v56;
            }
            v62 = v19;
            v20 = &a2[3 * v17];
            *v20 = 0;
            v20[1] = 0;
            *((_DWORD *)v20 + 4) = 0xFFFF;
            *(_QWORD *)&v69 = v69 + 1;
            v54 = v20;
            cleanup_argloc();
            *(_DWORD *)v54 = 3;
            *((_DWORD *)v54 + 2) = v9;
            *((_WORD *)v54 + 8) = v62 + v18;
            *((_WORD *)v54 + 9) = v62;
          }
          else
          {
            v73[0] = 0;
            copy_argloc();
            v23 = v69;
            v24 = (__int64)v68;
            v74 = v72;
            if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v69 + 1) )
            {
              v68 = (_QWORD *)qvector_reserve((__int64)&v68, (__int64)v68, v69 + 1, 24);
              v23 = v69;
              v24 = (__int64)v68;
            }
            v25 = (_DWORD *)(v24 + 24 * v23);
            a2 = v73;
            *v25 = 0;
            copy_argloc();
            *(_QWORD *)&v69 = v69 + 1;
            v25[4] = v74;
            cleanup_argloc();
          }
          v8 += 24;
          cleanup_argloc();
          if ( v8 == v60 )
            goto LABEL_34;
        }
        if ( !under_debugger )
          sub_383060(51507);
LABEL_48:
        BUG();
      }
LABEL_34:
      v40 = qalloc_or_throw(24, (__int64)a2, a3, a4);
      *(_QWORD *)v40 = 0;
      v43 = (__int64 *)v40;
      *(_OWORD *)(v40 + 8) = 0;
      v44 = v69;
      if ( (_QWORD)v69 )
      {
        v48 = qalloc_or_throw(24 * v69, (__int64)a2, v41, v42);
        *v43 = v48;
        v49 = v48;
        v50 = 0;
        v43[2] = v44;
        while ( 1 )
        {
          v51 = (_DWORD *)(24 * v50 + v49);
          v52 = &v68[3 * v50];
          *v51 = 0;
          copy_argloc();
          ++v50;
          v51[4] = *((_DWORD *)v52 + 4);
          if ( v44 == v50 )
            break;
          v49 = *v43;
        }
        v43[1] = v44;
      }
      v45 = (__int64)v68;
      if ( v68 )
      {
        v46 = v69;
        if ( (_QWORD)v69 )
        {
          v47 = 0;
          do
          {
            ++v47;
            cleanup_argloc();
            v45 = (__int64)v68;
          }
          while ( v46 != v47 );
        }
        *(_QWORD *)&v69 = 0;
        qfree(v45);
      }
      goto LABEL_21;
    }
LABEL_46:
    if ( !under_debugger )
      sub_383060(51112);
    goto LABEL_48;
  }
LABEL_21:
  *a1 = 0;
  copy_argloc();
LABEL_22:
  cleanup_argloc();
  return a1;
}
