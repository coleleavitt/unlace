void __fastcall sub_613C60(__int64 a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v3; // r8
  __int64 v4; // rax
  __int32 v5; // r15d
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // rcx
  __m128i *v12; // rbx
  unsigned int v13; // r10d
  __int64 v14; // rcx
  __m128i *v15; // rbp
  __int64 v16; // r10
  __m128i *v17; // rdi
  __m128i *i; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  _OWORD *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __m128i *v24; // rax
  __m128i *v25; // r11
  __int64 v26; // rdx
  __m128i *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __m128i *j; // rax
  __int64 v31; // rdx
  __int64 **v32; // r13
  __int64 v33; // rax
  __int64 *v34; // rbp
  size_t v35; // rbx
  __int32 v36; // r10d
  __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rax
  __int64 *v40; // r9
  __int64 *v41; // rbx
  __int64 v42; // r11
  __int64 *v43; // r12
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 *v46; // rdx
  __int64 *v47; // rax
  __int64 v48; // rdx
  int v49; // esi
  __int64 v50; // rdx
  __int64 *v51; // r11
  __int64 *v52; // rax
  __int64 *v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __m128i *v57; // rax
  int v58; // edx
  __m128i *v59; // r11
  __int64 v60; // r10
  __int64 v61; // rsi
  void *v62; // r9
  __int64 v63; // r9
  const __m128i *v64; // r12
  unsigned __int64 v65; // r15
  __m128i *v66; // r13
  const __m128i *v67; // rbx
  __m128i *v68; // r10
  int v69; // r11d
  __int64 v70; // rdx
  __m128i *v71; // rsi
  __m128i *v72; // rdx
  __int64 v74; // [rsp+8h] [rbp-80h]
  unsigned int v75; // [rsp+8h] [rbp-80h]
  unsigned int v76; // [rsp+8h] [rbp-80h]
  size_t v77; // [rsp+8h] [rbp-80h]
  __m128i v78; // [rsp+10h] [rbp-78h] BYREF
  __int64 v79; // [rsp+20h] [rbp-68h]
  __int64 v80; // [rsp+28h] [rbp-60h]
  __int64 v81; // [rsp+30h] [rbp-58h]
  __int64 v82; // [rsp+38h] [rbp-50h]
  __m128i *v83; // [rsp+40h] [rbp-48h]
  int v84; // [rsp+4Ch] [rbp-3Ch]

  v2 = *(__int64 **)(a2 + 24);
  if ( v2 )
  {
    v3 = (__int64)&v2[*((unsigned int *)v2 - 1)];
    if ( (__int64 *)v3 != v2 )
    {
      while ( 1 )
      {
        v4 = *v2;
        v5 = *(_DWORD *)(*v2 + 56);
        if ( v5 )
          goto LABEL_4;
        v6 = *(_QWORD *)(v4 + 40);
        v7 = *(_QWORD *)(v6 + 16);
        v8 = *(unsigned int *)(v7 + 32);
        if ( (_DWORD)v8 )
        {
          v9 = *(_QWORD *)(v4 + 40);
          do
          {
            if ( *(_WORD *)(*(_QWORD *)(v9 + 32) + 4LL) )
              goto LABEL_4;
            v9 += 8;
          }
          while ( v6 + 8 * v8 != v9 );
        }
        v10 = *(_DWORD *)(v7 + 12);
        v11 = *(unsigned int *)(a1 + 112);
        v12 = *(__m128i **)(a1 + 104);
        v13 = v11 - 1;
        v14 = 16 * v11;
        v15 = (__m128i *)((char *)v12 + v14);
        v16 = 16LL * (v10 & v13);
        v17 = &v12[(unsigned __int64)v16 / 0x10];
        if ( v16 != v14 )
        {
          for ( i = &v12[(unsigned __int64)v16 / 0x10]; v15 != i; ++i )
          {
            v19 = i->m128i_i64[0];
            if ( i->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v19 + 12) == v10 && v7 == v19 )
                goto LABEL_28;
            }
            else if ( !v19 )
            {
              goto LABEL_17;
            }
          }
        }
        if ( v12 != v17 )
        {
          for ( j = *(__m128i **)(a1 + 104); v17 != j; ++j )
          {
            v31 = j->m128i_i64[0];
            if ( j->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v31 + 12) == v10 && v7 == v31 )
                goto LABEL_28;
            }
            else if ( !v31 )
            {
              break;
            }
          }
        }
LABEL_17:
        v74 = v3;
        v20 = sub_186B270(0x18u);
        v78 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(unsigned __int64)v20);
        v21 = (_OWORD *)sub_186B270(0x40u);
        *(_QWORD *)(v20 + 8) = 8;
        *(_QWORD *)v20 = v21;
        v3 = v74;
        v22 = *(unsigned int *)(a1 + 112);
        *v21 = 0;
        v21[1] = 0;
        v21[2] = 0;
        v21[3] = 0;
        LODWORD(v21) = 4 * (*(_DWORD *)(a1 + 116) + *(_DWORD *)(a1 + 120));
        *(_DWORD *)(v20 + 16) = 0;
        if ( 3 * (int)v22 < (unsigned int)v21 )
        {
          v80 = v74;
          LODWORD(v79) = 2 * v22;
          v77 = 16LL * (unsigned int)(2 * v22);
          v57 = (__m128i *)sub_186B270(v77);
          v58 = v79;
          v14 = v77;
          v3 = v80;
          v12 = v57;
          v59 = &v57[v77 / 0x10];
          if ( (_DWORD)v79 )
          {
            if ( (v77 & 0x10) == 0 || (*v57 = 0, ++v57, v59 != v57) )
            {
              do
              {
                *v57 = 0;
                v57 += 2;
                v57[-1] = 0;
              }
              while ( v59 != v57 );
            }
          }
          v15 = v59;
          v75 = v58 - 1;
          v60 = *(_QWORD *)(a1 + 104);
          v61 = 16LL * *(unsigned int *)(a1 + 112);
          v62 = (void *)(v60 + v61);
          if ( v60 != v60 + v61 )
          {
            v63 = (__int64)v2;
            v64 = (const __m128i *)(v60 + v61);
            v65 = v7;
            v66 = v12;
            v67 = *(const __m128i **)(a1 + 104);
            v68 = v59;
            v69 = v58;
            do
            {
              if ( v67->m128i_i64[0] > 1uLL )
              {
                v70 = 16LL * (*(_DWORD *)(v67->m128i_i64[0] + 12) & v75);
                v71 = &v66[(unsigned __int64)v70 / 0x10];
                if ( v14 == v70 )
                {
LABEL_124:
                  if ( v66 == v71 )
                  {
LABEL_136:
                    v84 = v69;
                    v83 = v68;
                    v82 = v63;
                    v81 = v3;
                    LODWORD(v80) = 0;
                    v79 = v6;
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v72 = v66;
                  while ( v72->m128i_i64[0] )
                  {
                    if ( v71 == ++v72 )
                      goto LABEL_136;
                  }
                }
                else
                {
                  v72 = &v66[(unsigned __int64)v70 / 0x10];
                  while ( v72->m128i_i64[0] )
                  {
                    if ( v15 == ++v72 )
                      goto LABEL_124;
                  }
                }
                *v72 = _mm_loadu_si128(v67);
              }
              ++v67;
            }
            while ( v64 != v67 );
            v12 = v66;
            v7 = v65;
            v5 = 0;
            v2 = (__int64 *)v63;
            v15 = v68;
            v58 = v69;
            v62 = *(void **)(a1 + 104);
          }
          if ( v62 )
          {
            v81 = v3;
            LODWORD(v80) = v58;
            v79 = v14;
            sub_186B220(v62);
            v3 = v81;
            v58 = v80;
            v14 = v79;
          }
          *(_QWORD *)(a1 + 104) = v12;
          *(_DWORD *)(a1 + 112) = v58;
          *(_DWORD *)(a1 + 120) = 0;
        }
        else
        {
          v23 = v22 - 1;
          v12 = *(__m128i **)(a1 + 104);
          v14 = 16 * v22;
          v75 = v23;
          v15 = (__m128i *)((char *)v12 + v14);
        }
        v10 = *(_DWORD *)(v7 + 12);
        v16 = 16LL * (v10 & v75);
        v17 = &v12[(unsigned __int64)v16 / 0x10];
        if ( v16 == v14 )
        {
          v25 = nullptr;
LABEL_102:
          if ( v17 == v12 )
          {
LABEL_27:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v24 = v12;
          while ( 1 )
          {
            v56 = v24->m128i_i64[0];
            if ( v24->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v56 + 12) == v10 && v7 == v56 )
                goto LABEL_139;
            }
            else
            {
              if ( !v56 )
              {
                if ( v25 )
                  --*(_DWORD *)(a1 + 120);
                else
                  v25 = v24;
                goto LABEL_135;
              }
              v25 = v24;
            }
            if ( v17 == ++v24 )
              goto LABEL_27;
          }
        }
        v24 = &v12[(unsigned __int64)v16 / 0x10];
        v25 = nullptr;
        while ( 1 )
        {
          v26 = v24->m128i_i64[0];
          if ( v24->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v26 + 12) == v10 && v7 == v26 )
          {
LABEL_139:
            *v24 = _mm_load_si128(&v78);
            goto LABEL_28;
          }
LABEL_23:
          if ( ++v24 == v15 )
            goto LABEL_102;
        }
        if ( v26 )
          break;
        if ( v25 )
          --*(_DWORD *)(a1 + 120);
        else
          v25 = v24;
LABEL_135:
        *v25 = _mm_load_si128(&v78);
        ++*(_DWORD *)(a1 + 116);
LABEL_28:
        if ( v16 == v14 )
        {
LABEL_36:
          while ( v12 != v17 )
          {
            v29 = v12->m128i_i64[0];
            if ( v12->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v29 + 12) == v10 && v7 == v29 )
              {
                v27 = v12;
                goto LABEL_54;
              }
            }
            else if ( !v29 )
            {
              break;
            }
            ++v12;
          }
LABEL_143:
          BUG();
        }
        v27 = v17;
        while ( 1 )
        {
          while ( 1 )
          {
            v28 = v27->m128i_i64[0];
            if ( v27->m128i_i64[0] > 1uLL )
              break;
            if ( !v28 )
              goto LABEL_143;
            if ( ++v27 == v15 )
              goto LABEL_36;
          }
          if ( *(_DWORD *)(v28 + 12) == v10 && v7 == v28 )
            break;
          if ( ++v27 == v15 )
            goto LABEL_36;
        }
LABEL_54:
        v32 = (__int64 **)v27->m128i_i64[1];
        v33 = *((unsigned int *)v32 + 2);
        v76 = 2 * v33;
        if ( 3 * (int)v33 < (unsigned int)(4 * (*((_DWORD *)v32 + 4) + *((_DWORD *)v32 + 3))) )
        {
          v78.m128i_i64[0] = v3;
          v35 = 8LL * v76;
          v38 = (__int64 *)sub_186B270(v35);
          v3 = v78.m128i_i64[0];
          v34 = v38;
          if ( v76 )
          {
            memset(v38, 0, v35);
            v3 = v78.m128i_i64[0];
          }
          v37 = (__int64)&v34[v35 / 8];
          v36 = v76 - 1;
          v39 = *((unsigned int *)v32 + 2);
          v40 = &(*v32)[v39];
          if ( *v32 != v40 )
          {
            v41 = *v32;
            v42 = (__int64)v2;
            v43 = v34;
            v44 = (__int64)&(*v32)[v39];
            do
            {
              while ( (unsigned __int64)*v41 <= 1 )
              {
                if ( (__int64 *)v44 == ++v41 )
                  goto LABEL_67;
              }
              v45 = *(_DWORD *)(*v41 + 12) & (unsigned int)v36;
              v46 = &v43[v45];
              if ( v76 == v45 )
              {
LABEL_79:
                if ( v43 == v46 )
                {
LABEL_95:
                  v82 = v37;
                  LODWORD(v81) = v76 - 1;
                  v80 = v42;
                  v79 = v3;
                  v78.m128i_i32[0] = v5;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v47 = v43;
                while ( *v47 )
                {
                  if ( v46 == ++v47 )
                    goto LABEL_95;
                }
              }
              else
              {
                v47 = &v43[v45];
                while ( *v47 )
                {
                  if ( (__int64 *)v37 == ++v47 )
                    goto LABEL_79;
                }
              }
              v48 = *v41++;
              *v47 = v48;
            }
            while ( (__int64 *)v44 != v41 );
LABEL_67:
            v35 = 8LL * v76;
            v40 = *v32;
            v34 = v43;
            v2 = (__int64 *)v42;
          }
          if ( v40 )
          {
            v80 = v3;
            v79 = v37;
            v78.m128i_i32[0] = v76 - 1;
            sub_186B220(v40);
            v3 = v80;
            v37 = v79;
            v36 = v78.m128i_i32[0];
          }
          *v32 = v34;
          *((_DWORD *)v32 + 4) = 0;
          *((_DWORD *)v32 + 2) = v76;
        }
        else
        {
          v34 = *v32;
          v35 = 8 * v33;
          v36 = v33 - 1;
          v5 = *((_DWORD *)v32 + 4);
          v37 = (__int64)&(*v32)[v33];
        }
        v49 = *(_DWORD *)(v6 + 12);
        v50 = 8LL * (v49 & (unsigned int)v36);
        v51 = &v34[(unsigned __int64)v50 / 8];
        if ( v50 != v35 )
        {
          v52 = &v34[(unsigned __int64)v50 / 8];
          v53 = nullptr;
          while ( 1 )
          {
            v54 = *v52;
            if ( (unsigned __int64)*v52 > 1 )
            {
              if ( *(_DWORD *)(v54 + 12) == v49 && v6 == v54 )
              {
                *v52 = v6;
                goto LABEL_4;
              }
            }
            else
            {
              if ( !v54 )
              {
                if ( v53 )
                  goto LABEL_93;
                v53 = v52;
                goto LABEL_94;
              }
              v53 = v52;
            }
            if ( ++v52 == (__int64 *)v37 )
              goto LABEL_87;
          }
        }
        v53 = nullptr;
LABEL_87:
        while ( 2 )
        {
          if ( v51 == v34 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v55 = *v34;
          if ( (unsigned __int64)*v34 > 1 )
          {
            if ( *(_DWORD *)(v55 + 12) == v49 && v6 == v55 )
            {
              *v34 = v6;
              goto LABEL_4;
            }
            goto LABEL_86;
          }
          if ( v55 )
          {
            v53 = v34;
LABEL_86:
            ++v34;
            continue;
          }
          break;
        }
        if ( v53 )
LABEL_93:
          *((_DWORD *)v32 + 4) = v5 - 1;
        else
          v53 = v34;
LABEL_94:
        *v53 = v6;
        ++*((_DWORD *)v32 + 3);
LABEL_4:
        if ( (__int64 *)v3 == ++v2 )
          return;
      }
      v25 = v24;
      goto LABEL_23;
    }
  }
}

