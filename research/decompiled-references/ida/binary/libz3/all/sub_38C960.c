__int64 __fastcall sub_38C960(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // r13
  _OWORD *v6; // rax
  _OWORD *v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // r14
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __m128i *v15; // rbp
  __int32 v16; // r10d
  __int64 v17; // rcx
  __int64 *v18; // r12
  int v19; // esi
  __int64 v20; // r10
  __m128i *v21; // rdi
  __int64 *m128i_i64; // rax
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v29; // rcx
  __int64 v30; // r8
  __m128i v31; // xmm0
  __m128i *v32; // rbp
  __int32 v33; // r11d
  __int64 v34; // rcx
  __m128i *v35; // r12
  int v36; // esi
  __int64 v37; // r11
  __m128i *v38; // rdi
  __m128i *v39; // rax
  __m128i *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int32 v44; // edx
  size_t v45; // r10
  const __m128i *v46; // r14
  __int64 v47; // rdi
  __m128i *v48; // r9
  __m128i *v49; // rax
  __m128i *v50; // r12
  const __m128i *v51; // rbp
  __int64 v52; // r9
  __int64 *v53; // r13
  __m128i *v54; // rbx
  __int32 v55; // r10d
  __int64 v56; // rdx
  __m128i *v57; // rsi
  __m128i *v58; // rdx
  __m128i v59; // xmm1
  __int64 v60; // rax
  __int32 v61; // r11d
  __m128i *v62; // r8
  const __m128i *v63; // r14
  __int64 v64; // rdi
  __m128i *v65; // r9
  __m128i *v66; // r12
  const __m128i *v67; // rbp
  __int64 v68; // rax
  __m128i *v69; // rdx
  __m128i *v70; // rax
  __m128i v71; // xmm0
  __int64 v72; // [rsp+8h] [rbp-B0h]
  __int64 *v73; // [rsp+10h] [rbp-A8h]
  __int64 v74; // [rsp+18h] [rbp-A0h]
  size_t v75; // [rsp+20h] [rbp-98h]
  __int64 v76; // [rsp+20h] [rbp-98h]
  size_t v77; // [rsp+20h] [rbp-98h]
  __int32 v78; // [rsp+20h] [rbp-98h]
  __m128i v79; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v80; // [rsp+40h] [rbp-78h]
  __int64 v81; // [rsp+48h] [rbp-70h]
  __m128i v82; // [rsp+50h] [rbp-68h] BYREF
  __int64 v83; // [rsp+60h] [rbp-58h]
  __m128i *v84; // [rsp+68h] [rbp-50h]
  __int64 v85; // [rsp+70h] [rbp-48h]
  __int32 v86; // [rsp+7Ch] [rbp-3Ch]

  v2 = a1;
  v80 = a2;
  v3 = (_QWORD *)sub_186B270(0x88u);
  v4 = a2[1];
  v5 = (__int64)v3;
  *v3 = &off_1C4DD50;
  v3[1] = v4;
  v6 = (_OWORD *)sub_186B270(0x80u);
  *(_DWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 16) = v6;
  *(_QWORD *)(v5 + 24) = 8;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v5 + 40) = v7;
  *(_QWORD *)(v5 + 48) = 8;
  *(_DWORD *)(v5 + 56) = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  *(_QWORD *)(v5 + 64) = sub_1434DE0(v4, 0);
  v74 = v5 + 72;
  sub_1694970(v5 + 72, v4);
  v8 = *(unsigned int *)(a1 + 24);
  v9 = *(__int64 **)(a1 + 16);
  *(_DWORD *)(v5 + 128) = 0;
  *(_BYTE *)(v5 + 132) = 0;
  v8 *= 16;
  v10 = (__int64 *)((char *)v9 + v8);
  if ( v9 != (__int64 *)((char *)v9 + v8) )
  {
    while ( (unsigned __int64)*v9 <= 1 )
    {
      v9 += 2;
      if ( v10 == v9 )
        goto LABEL_34;
    }
    if ( v10 != v9 )
    {
      v73 = v10;
      v83 = a1;
      while ( 1 )
      {
        v11 = v80;
        v72 = v9[1];
        if ( *v80 == v80[1] )
        {
          v13 = *v9;
        }
        else
        {
          v12 = sub_15CFF50(v80, v9[1]);
          v13 = *v9;
          v72 = v12;
          if ( *v11 != v11[1] )
            v13 = sub_15CFF50(v11, v13);
        }
        v14 = *(unsigned int *)(v5 + 24);
        if ( 3 * (int)v14 < (unsigned int)(4 * (*(_DWORD *)(v5 + 28) + *(_DWORD *)(v5 + 32))) )
        {
          v79.m128i_i32[0] = 2 * v14;
          v77 = 16LL * (unsigned int)(2 * v14);
          v60 = sub_186B270(v77);
          v17 = v77;
          v61 = v79.m128i_i32[0];
          v15 = (__m128i *)v60;
          v62 = (__m128i *)(v77 + v60);
          if ( v79.m128i_i32[0] )
          {
            if ( (v77 & 0x10) == 0 || (v60 += 16, *(_OWORD *)(v60 - 16) = 0, v62 != (__m128i *)v60) )
            {
              do
              {
                v60 += 32;
                *(_OWORD *)(v60 - 32) = 0;
                *(_OWORD *)(v60 - 16) = 0;
              }
              while ( v62 != (__m128i *)v60 );
            }
          }
          v63 = *(const __m128i **)(v5 + 16);
          v16 = v61 - 1;
          v18 = (__int64 *)v62;
          v64 = *(unsigned int *)(v5 + 24);
          v65 = (__m128i *)&v63[v64];
          if ( v63 != &v63[v64] )
          {
            v66 = v15;
            v67 = &v63[v64];
            do
            {
              while ( v63->m128i_i64[0] <= 1uLL )
              {
                if ( v67 == ++v63 )
                  goto LABEL_90;
              }
              v68 = 16LL * (*(_DWORD *)(v63->m128i_i64[0] + 12) & (unsigned int)v16);
              v69 = &v66[(unsigned __int64)v68 / 0x10];
              if ( v77 == v68 )
              {
LABEL_94:
                if ( v66 == v69 )
                {
LABEL_107:
                  LODWORD(v84) = v61;
                  v82.m128i_i64[0] = v5;
                  v81 = (__int64)v62;
                  v79.m128i_i64[0] = v77;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v70 = v66;
                while ( v70->m128i_i64[0] )
                {
                  if ( v69 == ++v70 )
                    goto LABEL_107;
                }
              }
              else
              {
                v70 = &v66[(unsigned __int64)v68 / 0x10];
                while ( v70->m128i_i64[0] )
                {
                  if ( v62 == ++v70 )
                    goto LABEL_94;
                }
              }
              v71 = _mm_loadu_si128(v63++);
              *v70 = v71;
            }
            while ( v67 != v63 );
LABEL_90:
            v65 = *(__m128i **)(v5 + 16);
            v15 = v66;
            v18 = (__int64 *)v62;
          }
          if ( v65 )
          {
            LODWORD(v81) = v61;
            v79.m128i_i64[0] = v77;
            v78 = v61 - 1;
            sub_186B220(v65);
            v61 = v81;
            v17 = v79.m128i_i64[0];
            v16 = v78;
          }
          *(_QWORD *)(v5 + 16) = v15;
          *(_DWORD *)(v5 + 24) = v61;
          *(_DWORD *)(v5 + 32) = 0;
        }
        else
        {
          v15 = *(__m128i **)(v5 + 16);
          v16 = v14 - 1;
          v17 = 16 * v14;
          v18 = (__int64 *)((char *)v15->m128i_i64 + v17);
        }
        v19 = *(_DWORD *)(v13 + 12);
        v20 = 16LL * (v19 & (unsigned int)v16);
        v21 = &v15[(unsigned __int64)v20 / 0x10];
        if ( v20 != v17 )
        {
          m128i_i64 = v15[(unsigned __int64)v20 / 0x10].m128i_i64;
          v23 = nullptr;
          while ( 1 )
          {
            v24 = *m128i_i64;
            if ( (unsigned __int64)*m128i_i64 > 1 )
            {
              if ( *(_DWORD *)(v24 + 12) == v19 && v13 == v24 )
              {
                *m128i_i64 = v13;
                m128i_i64[1] = v72;
                goto LABEL_38;
              }
            }
            else
            {
              if ( !v24 )
              {
                if ( v23 )
                  goto LABEL_101;
                v23 = m128i_i64;
                goto LABEL_102;
              }
              v23 = m128i_i64;
            }
            m128i_i64 += 2;
            if ( m128i_i64 == v18 )
              goto LABEL_23;
          }
        }
        v23 = nullptr;
        while ( 1 )
        {
LABEL_23:
          if ( v21 == v15 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v25 = v15->m128i_i64[0];
          if ( v15->m128i_i64[0] > 1uLL )
            break;
          if ( !v25 )
          {
            if ( v23 )
LABEL_101:
              --*(_DWORD *)(v5 + 32);
            else
              v23 = (__int64 *)v15;
LABEL_102:
            *v23 = v13;
            v23[1] = v72;
            ++*(_DWORD *)(v5 + 28);
            goto LABEL_38;
          }
          v23 = (__int64 *)v15;
LABEL_22:
          ++v15;
        }
        if ( *(_DWORD *)(v25 + 12) != v19 || v13 != v25 )
          goto LABEL_22;
        v15->m128i_i64[0] = v13;
        v15->m128i_i64[1] = v72;
LABEL_38:
        v29 = *(unsigned int *)(v5 + 48);
        v30 = *(_QWORD *)(v72 + 16);
        v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v30, (__m128i)(unsigned __int64)v13);
        if ( 3 * (int)v29 < (unsigned int)(4 * (*(_DWORD *)(v5 + 52) + *(_DWORD *)(v5 + 56))) )
        {
          v81 = *(_QWORD *)(v72 + 16);
          v79.m128i_i32[0] = 2 * v29;
          v75 = 16LL * (unsigned int)(2 * v29);
          v82 = v31;
          v43 = sub_186B270(v75);
          v44 = v79.m128i_i32[0];
          v34 = v75;
          v30 = v81;
          v31 = _mm_load_si128(&v82);
          v32 = (__m128i *)v43;
          v45 = v75 + v43;
          if ( v79.m128i_i32[0] )
          {
            if ( (v75 & 0x10) == 0 || (v43 += 16, *(_OWORD *)(v43 - 16) = 0, v43 != v45) )
            {
              do
              {
                v43 += 32;
                *(_OWORD *)(v43 - 32) = 0;
                *(_OWORD *)(v43 - 16) = 0;
              }
              while ( v43 != v45 );
            }
          }
          v46 = *(const __m128i **)(v5 + 40);
          v33 = v44 - 1;
          v35 = (__m128i *)v45;
          v47 = *(unsigned int *)(v5 + 48);
          v48 = (__m128i *)&v46[v47];
          if ( v46 != &v46[v47] )
          {
            v49 = (__m128i *)v45;
            v50 = v32;
            v51 = &v46[v47];
            v52 = v5;
            v53 = v9;
            v54 = (__m128i *)v45;
            v55 = v44;
            do
            {
              while ( v46->m128i_i64[0] <= 1uLL )
              {
                if ( v51 == ++v46 )
                  goto LABEL_68;
              }
              v56 = 16LL * (*(_DWORD *)(v46->m128i_i64[0] + 12) & (unsigned int)v33);
              v57 = &v50[(unsigned __int64)v56 / 0x10];
              if ( v75 == v56 )
              {
LABEL_72:
                if ( v50 == v57 )
                {
LABEL_106:
                  v86 = v55;
                  v85 = v52;
                  v84 = v49;
                  v82.m128i_i64[0] = v75;
                  LODWORD(v81) = v33;
                  v79.m128i_i64[0] = v30;
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v58 = v50;
                while ( v58->m128i_i64[0] )
                {
                  if ( v57 == ++v58 )
                    goto LABEL_106;
                }
              }
              else
              {
                v58 = &v50[(unsigned __int64)v56 / 0x10];
                while ( v58->m128i_i64[0] )
                {
                  if ( v54 == ++v58 )
                    goto LABEL_72;
                }
              }
              v59 = _mm_loadu_si128(v46++);
              *v58 = v59;
            }
            while ( v51 != v46 );
LABEL_68:
            v9 = v53;
            v5 = v52;
            v48 = *(__m128i **)(v52 + 40);
            v32 = v50;
            v44 = v55;
            v35 = v49;
          }
          if ( v48 )
          {
            LODWORD(v84) = v44;
            v82.m128i_i64[0] = v75;
            LODWORD(v81) = v33;
            v76 = v30;
            v79 = v31;
            sub_186B220(v48);
            v44 = (int)v84;
            v34 = v82.m128i_i64[0];
            v33 = v81;
            v31 = _mm_load_si128(&v79);
            v30 = v76;
          }
          *(_QWORD *)(v5 + 40) = v32;
          *(_DWORD *)(v5 + 48) = v44;
          *(_DWORD *)(v5 + 56) = 0;
        }
        else
        {
          v32 = *(__m128i **)(v5 + 40);
          v33 = v29 - 1;
          v34 = 16 * v29;
          v35 = (__m128i *)((char *)v32 + v34);
        }
        v36 = *(_DWORD *)(v30 + 12);
        v37 = 16LL * (v36 & (unsigned int)v33);
        v38 = &v32[(unsigned __int64)v37 / 0x10];
        if ( v37 != v34 )
        {
          v39 = &v32[(unsigned __int64)v37 / 0x10];
          v40 = nullptr;
          while ( 1 )
          {
            v41 = v39->m128i_i64[0];
            if ( v39->m128i_i64[0] > 1uLL )
            {
              if ( *(_DWORD *)(v41 + 12) == v36 && v30 == v41 )
              {
                *v39 = v31;
                goto LABEL_28;
              }
            }
            else
            {
              if ( !v41 )
              {
                if ( v40 )
                  goto LABEL_104;
                v40 = v39;
                goto LABEL_105;
              }
              v40 = v39;
            }
            if ( ++v39 == v35 )
              goto LABEL_51;
          }
        }
        v40 = nullptr;
LABEL_51:
        while ( 2 )
        {
          if ( v38 == v32 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v42 = v32->m128i_i64[0];
          if ( v32->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v42 + 12) == v36 && v30 == v42 )
            {
              *v32 = v31;
              goto LABEL_28;
            }
            goto LABEL_50;
          }
          if ( v42 )
          {
            v40 = v32;
LABEL_50:
            ++v32;
            continue;
          }
          break;
        }
        if ( v40 )
LABEL_104:
          --*(_DWORD *)(v5 + 56);
        else
          v40 = v32;
LABEL_105:
        *v40 = v31;
        ++*(_DWORD *)(v5 + 52);
LABEL_28:
        sub_1692DB0(v74, v13, v72, 0, 0);
        ++*(_DWORD *)(v13 + 8);
        ++*(_DWORD *)(v72 + 8);
        v26 = v9 + 2;
        if ( v73 != v9 + 2 )
        {
          while ( 1 )
          {
            v9 = v26;
            if ( (unsigned __int64)*v26 > 1 )
              break;
            v26 += 2;
            if ( v73 == v26 )
              goto LABEL_33;
          }
          if ( v73 != v26 )
            continue;
        }
LABEL_33:
        v2 = v83;
        break;
      }
    }
  }
LABEL_34:
  if ( *(_BYTE *)(v2 + 132) )
  {
    v27 = *(_QWORD *)(v5 + 64);
    *(_BYTE *)(v5 + 132) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 24LL))(v27, v74);
  }
  return v5;
}

