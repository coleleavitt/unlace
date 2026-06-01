__int64 __fastcall sub_DDEA40(__int64 a1, __int64 a2, __int64 *a3, const __m128i *a4)
{
  unsigned int *v6; // rbp
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 *v10; // rcx
  int v11; // edi
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *i; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  int v19; // eax
  _OWORD *v20; // rax
  __int64 v21; // r8
  __m128i v22; // xmm2
  __int64 v23; // rcx
  __m128i *v24; // rbx
  __int32 v25; // r11d
  __int64 v26; // rcx
  __m128i *v27; // r12
  int v28; // esi
  __int64 v29; // r11
  __m128i *v30; // rdi
  __m128i *v31; // rax
  __m128i *v32; // rcx
  __int64 v33; // rdx
  unsigned int v34; // edx
  __int64 v35; // r15
  __m128i v36; // xmm1
  __m128i *v37; // rbx
  __int32 v38; // r9d
  __int64 v39; // r8
  __m128i *v40; // r12
  int v41; // ecx
  __int64 v42; // rax
  __m128i *v43; // rdi
  __m128i *v44; // rax
  __m128i *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __m128i *v50; // rax
  __int32 v51; // edx
  __m128i *v52; // r10
  const __m128i *v53; // r15
  __int64 v54; // rsi
  __m128i *v55; // r9
  __int64 *v56; // rdi
  __m128i *v57; // rax
  __m128i *v58; // r12
  unsigned int *v59; // r13
  __m128i *v60; // rbx
  const __m128i *v61; // rbp
  __int32 v62; // r10d
  __int64 v63; // rdx
  __m128i *v64; // rsi
  __m128i *v65; // rdx
  __m128i v66; // xmm1
  __m128i *v67; // rax
  __int32 v68; // esi
  __m128i *v69; // r11
  const __m128i *v70; // rcx
  __int32 v71; // eax
  __int64 v72; // rdi
  __m128i *v73; // r10
  __int64 v74; // rdx
  __m128i *v75; // rsi
  __m128i *v76; // rdx
  __m128i v77; // xmm0
  int v78; // r12d
  __int64 v79; // rax
  _OWORD *v80; // rax
  __m128i v81; // [rsp+0h] [rbp-A8h] BYREF
  const __m128i *v82; // [rsp+18h] [rbp-90h]
  __m128i v83; // [rsp+20h] [rbp-88h] BYREF
  __m128i v84; // [rsp+30h] [rbp-78h] BYREF
  __m128i v85; // [rsp+40h] [rbp-68h] BYREF
  __int64 v86; // [rsp+50h] [rbp-58h]
  __m128i *v87; // [rsp+58h] [rbp-50h]
  __int64 *v88; // [rsp+60h] [rbp-48h]
  __int32 v89; // [rsp+6Ch] [rbp-3Ch]

  v6 = *(unsigned int **)(a1 + 40);
  v81.m128i_i64[0] = a2;
  if ( !v6 )
  {
    v78 = *(_DWORD *)(a1 + 12);
    v79 = sub_17E9C90(*(_QWORD *)(a2 + 8), 40);
    *(_DWORD *)v79 = v78;
    v6 = (unsigned int *)v79;
    *(_QWORD *)(v79 + 8) = 0;
    v80 = (_OWORD *)sub_186B270(0x80u);
    *v80 = 0;
    v80[1] = 0;
    v80[2] = 0;
    v80[3] = 0;
    v80[4] = 0;
    v80[5] = 0;
    v80[6] = 0;
    v80[7] = 0;
    *((_QWORD *)v6 + 2) = v80;
    *((_QWORD *)v6 + 3) = 8;
    v6[8] = 0;
    *(_QWORD *)(a1 + 40) = v6;
  }
  result = *v6;
  if ( !(_DWORD)result )
  {
    if ( a4 )
      ++a4->m128i_i32[2];
    *((_QWORD *)v6 + 1) = a4;
    return result;
  }
  if ( (_DWORD)result != 1 )
  {
    v82 = a4;
    while ( 1 )
    {
      v8 = *a3;
      v9 = v6[6];
      v10 = *((__int64 **)v6 + 2);
      v11 = *(_DWORD *)(*a3 + 12);
      v12 = v9 - 1;
      v9 *= 16;
      v13 = (__int64 *)((char *)v10 + v9);
      v14 = 16LL * (v11 & v12);
      v15 = &v10[(unsigned __int64)v14 / 8];
      if ( v14 != v9 )
      {
        for ( i = &v10[(unsigned __int64)v14 / 8]; v13 != i; i += 2 )
        {
          v17 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v17 + 12) == v11 && v8 == v17 )
              goto LABEL_28;
          }
          else if ( !v17 )
          {
            goto LABEL_17;
          }
        }
      }
      for ( ; v15 != v10; v10 += 2 )
      {
        v49 = *v10;
        if ( (unsigned __int64)*v10 > 1 )
        {
          if ( *(_DWORD *)(v49 + 12) == v11 && v8 == v49 )
          {
            i = v10;
LABEL_28:
            v6 = (unsigned int *)i[1];
            goto LABEL_29;
          }
        }
        else if ( !v49 )
        {
          break;
        }
      }
LABEL_17:
      v18 = sub_17E9C90(*(_QWORD *)(v81.m128i_i64[0] + 8), 40);
      v19 = *v6;
      *(_QWORD *)(v18 + 8) = 0;
      *(_DWORD *)v18 = v19 - 1;
      v20 = (_OWORD *)sub_186B270(0x80u);
      v21 = *a3;
      *v20 = 0;
      v20[1] = 0;
      v20[2] = 0;
      v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v18);
      v20[3] = 0;
      v20[4] = 0;
      v20[5] = 0;
      v20[6] = 0;
      v20[7] = 0;
      *(_QWORD *)(v18 + 16) = v20;
      *(_DWORD *)(v18 + 32) = 0;
      *(_QWORD *)(v18 + 24) = 8;
      v23 = v6[6];
      if ( 3 * (int)v23 < 4 * (v6[7] + v6[8]) )
      {
        v86 = v21;
        v84.m128i_i32[0] = 2 * v23;
        v83.m128i_i64[0] = 16LL * (unsigned int)(2 * v23);
        v85 = v22;
        v50 = (__m128i *)sub_186B270(v83.m128i_u64[0]);
        v51 = v84.m128i_i32[0];
        v26 = v83.m128i_i64[0];
        v21 = v86;
        v22 = _mm_load_si128(&v85);
        v24 = v50;
        v52 = (__m128i *)((char *)v50 + v83.m128i_i64[0]);
        if ( v84.m128i_i32[0] )
        {
          if ( (v83.m128i_i8[0] & 0x10) == 0 || (++v50, *v24 = 0, v50 != v52) )
          {
            do
            {
              *v50 = 0;
              v50 += 2;
              v50[-1] = 0;
            }
            while ( v50 != v52 );
          }
        }
        v53 = *((const __m128i **)v6 + 2);
        v25 = v51 - 1;
        v27 = v52;
        v54 = v6[6];
        v55 = (__m128i *)&v53[v54];
        if ( v53 != &v53[v54] )
        {
          v56 = a3;
          v57 = v52;
          v58 = v24;
          v59 = v6;
          v60 = v52;
          v61 = &v53[v54];
          v62 = v51;
          do
          {
            while ( v53->m128i_i64[0] <= 1uLL )
            {
              if ( v61 == ++v53 )
                goto LABEL_80;
            }
            v63 = 16LL * (*(_DWORD *)(v53->m128i_i64[0] + 12) & (unsigned int)v25);
            v64 = &v58[(unsigned __int64)v63 / 0x10];
            if ( v26 == v63 )
            {
LABEL_84:
              if ( v58 == v64 )
              {
LABEL_92:
                v89 = v62;
                v88 = v56;
                v87 = v57;
                v85.m128i_i64[0] = v26;
                LODWORD(v86) = v25;
                v84.m128i_i64[0] = v21;
                v83 = v22;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v65 = v58;
              while ( v65->m128i_i64[0] )
              {
                if ( v64 == ++v65 )
                  goto LABEL_92;
              }
            }
            else
            {
              v65 = &v58[(unsigned __int64)v63 / 0x10];
              while ( v65->m128i_i64[0] )
              {
                if ( v60 == ++v65 )
                  goto LABEL_84;
              }
            }
            v66 = _mm_loadu_si128(v53++);
            *v65 = v66;
          }
          while ( v61 != v53 );
LABEL_80:
          v6 = v59;
          a3 = v56;
          v24 = v58;
          v51 = v62;
          v55 = *((__m128i **)v6 + 2);
          v27 = v57;
        }
        if ( v55 )
        {
          LODWORD(v87) = v51;
          v85.m128i_i64[0] = v26;
          LODWORD(v86) = v25;
          v83.m128i_i64[0] = v21;
          v84 = v22;
          sub_186B220(v55);
          v51 = (int)v87;
          v26 = v85.m128i_i64[0];
          v25 = v86;
          v22 = _mm_load_si128(&v84);
          v21 = v83.m128i_i64[0];
        }
        *((_QWORD *)v6 + 2) = v24;
        v6[6] = v51;
        v6[8] = 0;
      }
      else
      {
        v24 = *((__m128i **)v6 + 2);
        v25 = v23 - 1;
        v26 = 16 * v23;
        v27 = (__m128i *)((char *)v24 + v26);
      }
      v28 = *(_DWORD *)(v21 + 12);
      v29 = 16LL * (v28 & (unsigned int)v25);
      v30 = &v24[(unsigned __int64)v29 / 0x10];
      if ( v29 != v26 )
      {
        v31 = &v24[(unsigned __int64)v29 / 0x10];
        v32 = nullptr;
        while ( 1 )
        {
          v33 = v31->m128i_i64[0];
          if ( v31->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v33 + 12) == v28 && v21 == v33 )
            {
              *v31 = v22;
              goto LABEL_64;
            }
          }
          else
          {
            if ( !v33 )
            {
              if ( v32 )
                goto LABEL_90;
              v32 = v31;
              goto LABEL_91;
            }
            v32 = v31;
          }
          if ( ++v31 == v27 )
            goto LABEL_44;
        }
      }
      v32 = nullptr;
      while ( 1 )
      {
LABEL_44:
        if ( v30 == v24 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v47 = v24->m128i_i64[0];
        if ( v24->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v47 + 12) == v28 && v21 == v47 )
        {
          *v24 = v22;
          goto LABEL_64;
        }
LABEL_43:
        ++v24;
      }
      if ( v47 )
        break;
      if ( v32 )
LABEL_90:
        --v6[8];
      else
        v32 = v24;
LABEL_91:
      *v32 = v22;
      ++v6[7];
LABEL_64:
      if ( *a3 )
        ++*(_DWORD *)(*a3 + 8);
      v6 = (unsigned int *)v18;
LABEL_29:
      ++a3;
      if ( *v6 == 1 )
      {
        a4 = v82;
        goto LABEL_31;
      }
    }
    v32 = v24;
    goto LABEL_43;
  }
LABEL_31:
  v34 = v6[6];
  v35 = *a3;
  v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a3, (__m128i)(unsigned __int64)a4);
  if ( 3 * v34 < 4 * (v6[7] + v6[8]) )
  {
    LODWORD(v82) = 2 * v34;
    v83 = v36;
    v81.m128i_i64[0] = 32LL * v34;
    v67 = (__m128i *)sub_186B270(v81.m128i_u64[0]);
    v68 = (int)v82;
    v39 = v81.m128i_i64[0];
    v36 = _mm_load_si128(&v83);
    v37 = v67;
    v69 = (__m128i *)((char *)v67 + v81.m128i_i64[0]);
    if ( (_DWORD)v82 )
    {
      if ( (v81.m128i_i8[0] & 0x10) == 0 || (*v67 = 0, ++v67, v67 != v69) )
      {
        do
        {
          *v67 = 0;
          v67 += 2;
          v67[-1] = 0;
        }
        while ( v67 != v69 );
      }
    }
    v70 = *((const __m128i **)v6 + 2);
    v38 = v68 - 1;
    v40 = v69;
    v71 = v68;
    v72 = v6[6];
    v73 = (__m128i *)&v70[v72];
    if ( v70 != &v70[v72] )
    {
      do
      {
        while ( v70->m128i_i64[0] <= 1uLL )
        {
          if ( v73 == ++v70 )
            goto LABEL_108;
        }
        v74 = 16LL * (*(_DWORD *)(v70->m128i_i64[0] + 12) & (unsigned int)v38);
        v75 = &v37[(unsigned __int64)v74 / 0x10];
        if ( v39 == v74 )
        {
LABEL_112:
          if ( v37 == v75 )
          {
LABEL_127:
            v87 = v69;
            v85.m128i_i32[0] = v71;
            v86 = v39;
            v84.m128i_i32[0] = v38;
            v83.m128i_i64[0] = (__int64)v73;
            v82 = v70;
            v81 = v36;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v76 = v37;
          while ( v76->m128i_i64[0] )
          {
            if ( v75 == ++v76 )
              goto LABEL_127;
          }
        }
        else
        {
          v76 = &v37[(unsigned __int64)v74 / 0x10];
          while ( v76->m128i_i64[0] )
          {
            if ( v69 == ++v76 )
              goto LABEL_112;
          }
        }
        v77 = _mm_loadu_si128(v70++);
        *v76 = v77;
      }
      while ( v73 != v70 );
LABEL_108:
      v73 = *((__m128i **)v6 + 2);
      v68 = v71;
    }
    if ( v73 )
    {
      v84.m128i_i32[0] = v68;
      v83.m128i_i64[0] = v39;
      LODWORD(v82) = v38;
      v81 = v36;
      sub_186B220(v73);
      v68 = v84.m128i_i32[0];
      v39 = v83.m128i_i64[0];
      v38 = (int)v82;
      v36 = _mm_load_si128(&v81);
    }
    *((_QWORD *)v6 + 2) = v37;
    v6[6] = v68;
    v6[8] = 0;
  }
  else
  {
    v37 = *((__m128i **)v6 + 2);
    v38 = v34 - 1;
    v39 = 16LL * v34;
    v40 = (__m128i *)((char *)v37 + v39);
  }
  v41 = *(_DWORD *)(v35 + 12);
  v42 = 16LL * (v41 & (unsigned int)v38);
  v43 = &v37[(unsigned __int64)v42 / 0x10];
  if ( v42 != v39 )
  {
    v44 = &v37[(unsigned __int64)v42 / 0x10];
    v45 = nullptr;
    while ( 1 )
    {
      v46 = v44->m128i_i64[0];
      if ( v44->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v46 + 12) == v41 && v35 == v46 )
        {
          *v44 = v36;
          goto LABEL_118;
        }
      }
      else
      {
        if ( !v46 )
        {
          if ( v45 )
            goto LABEL_123;
          v45 = v44;
          goto LABEL_124;
        }
        v45 = v44;
      }
      if ( ++v44 == v40 )
        goto LABEL_51;
    }
  }
  v45 = nullptr;
  while ( 1 )
  {
LABEL_51:
    if ( v43 == v37 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v48 = v37->m128i_i64[0];
    if ( v37->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v48 + 12) == v41 && v35 == v48 )
    {
      *v37 = v36;
      goto LABEL_118;
    }
LABEL_50:
    ++v37;
  }
  if ( v48 )
  {
    v45 = v37;
    goto LABEL_50;
  }
  if ( v45 )
LABEL_123:
    --v6[8];
  else
    v45 = v37;
LABEL_124:
  *v45 = v36;
  ++v6[7];
LABEL_118:
  result = *a3;
  if ( *a3 )
    ++*(_DWORD *)(result + 8);
  if ( a4 )
    ++a4->m128i_i32[2];
  return result;
}

