__int64 __fastcall sub_300E90(__int64 a1, __int64 a2, int *a3)
{
  char **exception; // r13
  __int64 v7; // r13
  int v8; // ecx
  __m128i *v9; // r12
  unsigned int v10; // edi
  int v11; // r10d
  size_t v12; // r13
  __m128i *v13; // rbp
  __int64 v14; // rdi
  __m128i *v15; // rsi
  __m128i *i; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int32 v19; // r8d
  __m128i *v20; // rax
  __m128i *v21; // rdi
  __int64 v22; // rdx
  void *v23; // r12
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rsi
  int v27; // eax
  void *v28; // rbx
  __int64 v29; // rsi
  __int64 result; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  char v33; // al
  char v34; // al
  char v35; // al
  int v36; // eax
  int v37; // eax
  void *v38; // r13
  int v39; // eax
  _QWORD *v40; // r13
  __int64 v41; // rax
  __int32 v42; // esi
  __m128i *v43; // rax
  __m128i v44; // xmm0
  __int64 v45; // rdx
  __int64 v46; // rdx
  void *v47; // r13
  __int64 v48; // rsi
  __int64 v49; // rdi
  bool v50; // zf
  unsigned int v51; // edx
  __int64 v52; // rax
  const __m128i *v53; // r12
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rdx
  const __m128i *v57; // rax
  const __m128i *v58; // rsi
  _QWORD *v59; // rdx
  __m128i v60; // xmm0
  char v61; // di
  __int64 v62; // rcx
  char v63; // di
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rsi
  int *v69; // rdx
  __m128i *v70; // rax
  int v71; // r9d
  __m128i *v72; // r10
  const __m128i *v73; // rcx
  int v74; // eax
  __m128i *v75; // r11
  __int64 v76; // rdx
  __m128i *v77; // rsi
  __m128i *v78; // rdx
  __int64 v79; // rax
  _QWORD *v80; // rax
  void *v81; // [rsp+0h] [rbp-D8h]
  int v82; // [rsp+0h] [rbp-D8h]
  int v83; // [rsp+0h] [rbp-D8h]
  int v84; // [rsp+8h] [rbp-D0h]
  int v85; // [rsp+8h] [rbp-D0h]
  __int64 v86; // [rsp+8h] [rbp-D0h]
  const __m128i *v87; // [rsp+10h] [rbp-C8h]
  int v88; // [rsp+10h] [rbp-C8h]
  _DWORD *v89; // [rsp+18h] [rbp-C0h]
  unsigned int v90; // [rsp+24h] [rbp-B4h]
  __int64 v91[4]; // [rsp+40h] [rbp-98h] BYREF
  __m128i v92; // [rsp+60h] [rbp-78h] BYREF
  __int64 v93; // [rsp+70h] [rbp-68h] BYREF
  __int64 v94; // [rsp+78h] [rbp-60h]
  __int64 v95; // [rsp+80h] [rbp-58h] BYREF
  __int64 v96; // [rsp+88h] [rbp-50h]
  __int32 v97; // [rsp+90h] [rbp-48h]

  v7 = *(unsigned int *)(a1 + 48);
  v8 = *(_DWORD *)(a2 + 12);
  v9 = *(__m128i **)(a1 + 40);
  v10 = v7 - 1;
  v11 = v7;
  v12 = 16 * v7;
  v13 = &v9[v12 / 0x10];
  v14 = 16LL * (v8 & v10);
  v15 = &v9[(unsigned __int64)v14 / 0x10];
  if ( v14 == v12 )
  {
LABEL_28:
    if ( v9 != v15 )
    {
      for ( i = v9; v15 != i; ++i )
      {
        v31 = i->m128i_i64[0];
        if ( i->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v31 + 12) == v8 && a2 == v31 )
            goto LABEL_19;
        }
        else if ( !v31 )
        {
          break;
        }
      }
    }
LABEL_8:
    v18 = *(_QWORD *)(a1 + 32);
    if ( v18 )
      v19 = *(_DWORD *)(v18 - 4);
    else
      v19 = 0;
    if ( 3 * v11 < (unsigned int)(4 * (*(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 56))) )
    {
      v84 = v19;
      v12 = 16LL * (unsigned int)(2 * v11);
      v82 = 2 * v11;
      v70 = (__m128i *)sub_186B270(v12);
      v71 = v82;
      v19 = v84;
      v9 = v70;
      v72 = &v70[v12 / 0x10];
      if ( v82 )
      {
        do
        {
          v70->m128i_i64[0] = 0;
          ++v70;
          v70[-1].m128i_i32[2] = 0;
        }
        while ( v70 != v72 );
      }
      v73 = *(const __m128i **)(a1 + 40);
      v74 = v82 - 1;
      v13 = v72;
      v75 = (__m128i *)&v73[*(unsigned int *)(a1 + 48)];
      if ( v73 != v75 )
      {
        do
        {
          if ( v73->m128i_i64[0] > 1uLL )
          {
            v76 = 16LL * (*(_DWORD *)(v73->m128i_i64[0] + 12) & (unsigned int)v74);
            v77 = &v9[(unsigned __int64)v76 / 0x10];
            if ( v12 == v76 )
            {
LABEL_107:
              if ( v9 == v77 )
              {
LABEL_124:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v78 = v9;
              while ( v78->m128i_i64[0] )
              {
                if ( v77 == ++v78 )
                  goto LABEL_124;
              }
            }
            else
            {
              v78 = &v9[(unsigned __int64)v76 / 0x10];
              while ( v78->m128i_i64[0] )
              {
                if ( v72 == ++v78 )
                  goto LABEL_107;
              }
            }
            *v78 = _mm_loadu_si128(v73);
          }
          ++v73;
        }
        while ( v75 != v73 );
        v75 = *(__m128i **)(a1 + 40);
      }
      if ( v75 )
      {
        v88 = v82;
        v85 = v82 - 1;
        v83 = v19;
        sub_186B220(v75);
        v71 = v88;
        v74 = v85;
        v19 = v83;
      }
      v8 = *(_DWORD *)(a2 + 12);
      *(_QWORD *)(a1 + 40) = v9;
      *(_DWORD *)(a1 + 48) = v71;
      *(_DWORD *)(a1 + 56) = 0;
      v14 = 16LL * (v8 & (unsigned int)v74);
      v15 = &v9[(unsigned __int64)v14 / 0x10];
    }
    if ( v14 != v12 )
    {
      v20 = v15;
      v21 = nullptr;
      while ( 1 )
      {
        v22 = v20->m128i_i64[0];
        if ( v20->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v22 + 12) == v8 && a2 == v22 )
          {
            v20->m128i_i64[0] = a2;
            v20->m128i_i32[2] = v19;
            v79 = *(_QWORD *)a1;
            v86 = *(_QWORD *)a1;
            goto LABEL_68;
          }
        }
        else
        {
          if ( !v22 )
          {
            if ( v21 )
              goto LABEL_117;
            v21 = v20;
            goto LABEL_118;
          }
          v21 = v20;
        }
        if ( ++v20 == v13 )
          goto LABEL_39;
      }
    }
    v21 = nullptr;
    while ( 1 )
    {
LABEL_39:
      if ( v9 == v15 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v32 = v9->m128i_i64[0];
      if ( v9->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v32 + 12) == v8 && a2 == v32 )
        {
          v79 = *(_QWORD *)a1;
          v9->m128i_i64[0] = a2;
          v9->m128i_i32[2] = v19;
          v86 = v79;
          goto LABEL_68;
        }
      }
      else
      {
        if ( !v32 )
        {
          if ( v21 )
LABEL_117:
            --*(_DWORD *)(a1 + 56);
          else
            v21 = v9;
LABEL_118:
          v79 = *(_QWORD *)a1;
          v21->m128i_i64[0] = a2;
          v21->m128i_i32[2] = v19;
          v86 = v79;
          ++*(_DWORD *)(a1 + 52);
LABEL_68:
          *(_DWORD *)(a2 + 8) += 2;
          v92.m128i_i64[0] = a2;
          v92.m128i_i64[1] = v79;
          v38 = qword_1C7F2C0;
          v93 = 0;
          v94 = 0;
          v95 = 1;
          v96 = 0;
          if ( (a3[1] & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v93, a3);
          else
            LODWORD(v93) = *a3;
          if ( (a3[5] & 1) != 0 )
          {
            sub_182C690(v38, &v95, a3 + 4);
          }
          else
          {
            v39 = a3[4];
            BYTE4(v95) &= ~1u;
            LODWORD(v95) = v39;
          }
          v97 = 0;
          v40 = *(_QWORD **)(a1 + 32);
          if ( v40 )
          {
            v41 = *((unsigned int *)v40 - 1);
            if ( (_DWORD)v41 == *((_DWORD *)v40 - 2) )
            {
              v90 = (unsigned int)(3 * v41 + 1) >> 1;
              v51 = 56 * v90 + 8;
              if ( 56 * (int)v41 + 8 >= v51 || (unsigned int)v41 >= (unsigned int)(3 * v41 + 1) >> 1 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v91, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v91);
                sub_233E40((__int64)v91);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v52 = sub_186B270(v51);
              v53 = *(const __m128i **)(a1 + 32);
              v89 = (_DWORD *)v52;
              v54 = v52;
              v40 = (_QWORD *)(v52 + 8);
              if ( v53 )
              {
                v55 = v53[-1].m128i_u32[3];
                *(_DWORD *)(v54 + 4) = v55;
                v56 = 7 * v55;
                v57 = v53;
                v58 = (const __m128i *)((char *)v53 + 8 * v56);
                v59 = v40;
                if ( v58 != v53 )
                {
                  do
                  {
                    v60 = _mm_loadu_si128(v57);
                    v61 = *((_BYTE *)v59 + 20);
                    v57 = (const __m128i *)((char *)v57 + 56);
                    v59 += 7;
                    v57[-4].m128i_i64[1] = 0;
                    *(__m128i *)(v59 - 7) = v60;
                    *((_DWORD *)v59 - 10) = v57[-3].m128i_i32[2];
                    *((_BYTE *)v59 - 36) = v61 & 0xFC | v57[-3].m128i_i8[12] & 3;
                    v62 = v57[-2].m128i_i64[0];
                    v57[-2].m128i_i64[0] = 0;
                    v63 = *((_BYTE *)v59 - 20);
                    *(v59 - 4) = v62;
                    *((_DWORD *)v59 - 6) = v57[-2].m128i_i32[2];
                    *((_BYTE *)v59 - 20) = v63 & 0xFC | v57[-2].m128i_i8[12] & 3;
                    v64 = v57[-1].m128i_i64[0];
                    v57[-1].m128i_i64[0] = 0;
                    *(v59 - 2) = v64;
                    *((_DWORD *)v59 - 2) = v57[-1].m128i_i32[2];
                  }
                  while ( v58 != v57 );
                }
                v65 = v53[-1].m128i_u32[3];
                if ( (_DWORD)v65 )
                {
                  v87 = (const __m128i *)((char *)v53 + 56 * v65);
                  do
                  {
                    v81 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, &v53[1]);
                    sub_182CBA0(v81, &v53[2]);
                    v66 = v53->m128i_i64[0];
                    if ( v53->m128i_i64[0] )
                    {
                      v67 = v53->m128i_i64[1];
                      v50 = (*(_DWORD *)(v66 + 8))-- == 1;
                      if ( v50 )
                        sub_15D7BC0(v67, v66);
                    }
                    v53 = (const __m128i *)((char *)v53 + 56);
                  }
                  while ( v53 != v87 );
                  v53 = *(const __m128i **)(a1 + 32);
                }
                sub_186B220(&v53[-1].m128i_u64[1]);
                v43 = (__m128i *)&v40[7 * (unsigned int)v89[1]];
              }
              else
              {
                *(_DWORD *)(v52 + 4) = 0;
                v43 = (__m128i *)(v52 + 8);
              }
              *(_QWORD *)(a1 + 32) = v40;
              *v89 = v90;
              v42 = v97;
            }
            else
            {
              v42 = 0;
              v43 = (__m128i *)&v40[7 * v41];
            }
          }
          else
          {
            v80 = (_QWORD *)sub_186B270(0x78u);
            v40 = v80 + 1;
            *v80 = 2;
            v42 = v97;
            *(_QWORD *)(a1 + 32) = v80 + 1;
            v43 = (__m128i *)(v80 + 1);
          }
          v44 = _mm_load_si128(&v92);
          v43[3].m128i_i32[0] = v42;
          v92.m128i_i64[0] = 0;
          *v43 = v44;
          v43[1].m128i_i32[0] = v93;
          v43[1].m128i_i8[4] = BYTE4(v93) & 3 | v43[1].m128i_i8[4] & 0xFC;
          v45 = v94;
          v94 = 0;
          v43[1].m128i_i64[1] = v45;
          v43[2].m128i_i32[0] = v95;
          v43[2].m128i_i8[4] = BYTE4(v95) & 3 | v43[2].m128i_i8[4] & 0xFC;
          v46 = v96;
          v96 = 0;
          v43[2].m128i_i64[1] = v46;
          ++*((_DWORD *)v40 - 1);
          v47 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v93);
          sub_182CBA0(v47, &v95);
          v48 = v92.m128i_i64[0];
          if ( v92.m128i_i64[0] )
          {
            v49 = v92.m128i_i64[1];
            v50 = (*(_DWORD *)(v92.m128i_i64[0] + 8))-- == 1;
            if ( v50 )
              sub_15D7BC0(v49, v48);
          }
          v50 = (*(_DWORD *)(a2 + 8))-- == 1;
          if ( v50 )
            sub_15D7BC0(v86, a2);
LABEL_23:
          v27 = *a3;
          v28 = qword_1C7F2C0;
          v29 = a1 + 112;
          if ( *a3 )
            goto LABEL_24;
LABEL_47:
          v35 = *(_BYTE *)(a1 + 116);
          if ( (v35 & 1) != 0 )
          {
            sub_182C690(v28, v29, v29);
            v36 = *(unsigned __int8 *)(a1 + 132);
            if ( (v36 & 1) != 0 )
              goto LABEL_92;
LABEL_49:
            result = v36 & 0xFFFFFFFE;
            *(_BYTE *)(a1 + 132) = result;
          }
          else
          {
            *(_BYTE *)(a1 + 116) = v35 & 0xFE;
            v36 = *(unsigned __int8 *)(a1 + 132);
            if ( (v36 & 1) == 0 )
              goto LABEL_49;
LABEL_92:
            v68 = a1 + 128;
            v69 = (int *)(a1 + 128);
            return sub_182C690(v28, v68, v69);
          }
          return result;
        }
        v21 = v9;
      }
      ++v9;
    }
  }
  i = &v9[(unsigned __int64)v14 / 0x10];
  while ( 1 )
  {
    v17 = i->m128i_i64[0];
    if ( i->m128i_i64[0] > 1uLL )
      break;
    if ( !v17 )
      goto LABEL_8;
LABEL_5:
    if ( v13 == ++i )
      goto LABEL_28;
  }
  if ( *(_DWORD *)(v17 + 12) != v8 || a2 != v17 )
    goto LABEL_5;
LABEL_19:
  v23 = qword_1C7F2C0;
  v24 = *(_QWORD *)(a1 + 32) + 56LL * i->m128i_u32[2];
  v25 = *a3;
  v26 = v24 + 16;
  if ( *a3 )
  {
    if ( *(_DWORD *)(v24 + 16) )
    {
      if ( (*(_BYTE *)(v24 + 36) & 1) != 0 || *(_DWORD *)(v24 + 32) != 1 || (a3[5] & 1) != 0 || a3[4] != 1 )
      {
        sub_1851D20(qword_1C7F2C0, v26, a3, v24 + 16);
      }
      else
      {
        sub_1831A80(qword_1C7F2C0, v26, a3, v24 + 16);
        sub_182CBA0(v23, v24 + 32);
        *(_BYTE *)(v24 + 36) &= ~1u;
        *(_DWORD *)(v24 + 32) = 1;
      }
    }
    else
    {
      if ( (a3[1] & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v26, a3);
      }
      else
      {
        *(_BYTE *)(v24 + 20) &= ~1u;
        *(_DWORD *)(v24 + 16) = v25;
      }
      if ( (a3[5] & 1) != 0 )
      {
        sub_182C690(v23, v24 + 32, a3 + 4);
      }
      else
      {
        v37 = a3[4];
        *(_BYTE *)(v24 + 36) &= ~1u;
        *(_DWORD *)(v24 + 32) = v37;
      }
    }
    goto LABEL_23;
  }
  v33 = *(_BYTE *)(v24 + 20);
  if ( (v33 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v26, v24 + 16);
  else
    *(_BYTE *)(v24 + 20) = v33 & 0xFE;
  v34 = *(_BYTE *)(v24 + 36);
  if ( (v34 & 1) != 0 )
  {
    sub_182C690(v23, v24 + 32, v24 + 32);
    goto LABEL_23;
  }
  v29 = a1 + 112;
  *(_BYTE *)(v24 + 36) = v34 & 0xFE;
  v27 = *a3;
  v28 = qword_1C7F2C0;
  if ( !*a3 )
    goto LABEL_47;
LABEL_24:
  if ( *(_DWORD *)(a1 + 112) )
  {
    if ( (*(_BYTE *)(a1 + 132) & 1) != 0 || *(_DWORD *)(a1 + 128) != 1 || (a3[5] & 1) != 0 || a3[4] != 1 )
    {
      return sub_1851D20(v28, v29, a3, v29);
    }
    else
    {
      sub_1831A80(v28, v29, a3, v29);
      result = sub_182CBA0(v28, a1 + 128);
      *(_BYTE *)(a1 + 132) &= ~1u;
      *(_DWORD *)(a1 + 128) = 1;
    }
  }
  else
  {
    if ( (a3[1] & 1) != 0 )
    {
      sub_182C690(v28, v29, a3);
    }
    else
    {
      *(_BYTE *)(a1 + 116) &= ~1u;
      *(_DWORD *)(a1 + 112) = v27;
    }
    if ( (a3[5] & 1) != 0 )
    {
      v69 = a3 + 4;
      v68 = a1 + 128;
      return sub_182C690(v28, v68, v69);
    }
    result = (unsigned int)a3[4];
    *(_BYTE *)(a1 + 132) &= ~1u;
    *(_DWORD *)(a1 + 128) = result;
  }
  return result;
}

