__int64 __fastcall sub_C84300(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  _QWORD *v5; // rbp
  __int64 result; // rax
  _QWORD *v7; // r12
  __int64 v8; // rbx
  _DWORD *v9; // rax
  __int64 v10; // r15
  unsigned int v11; // edx
  unsigned int v12; // r13d
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  int v20; // edi
  __m128i *v21; // r13
  unsigned int v22; // r9d
  __int64 v23; // rcx
  __int64 *v24; // r15
  int v25; // esi
  __int64 v26; // r9
  __m128i *v27; // r8
  __m128i *v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // r13d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r13
  __int64 v36; // rax
  _QWORD *v37; // rdi
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __m128i *v41; // rax
  int v42; // r10d
  __m128i *v43; // r8
  const __m128i *v44; // rax
  __m128i *v45; // r11
  __int64 v46; // rdx
  __m128i *v47; // rsi
  __m128i *v48; // rdx
  __int64 i; // rax
  unsigned int v50; // eax
  int v51; // edi
  __m128i *v52; // r13
  int v53; // r9d
  __int64 v54; // r8
  __int64 *v55; // r15
  int v56; // esi
  __int64 v57; // r9
  __m128i *v58; // r10
  __m128i *v59; // rax
  __int64 *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rax
  __m128i *v63; // rax
  int v64; // r10d
  __m128i *v65; // rcx
  const __m128i *v66; // rax
  __m128i *v67; // r11
  __int64 v68; // rdx
  __m128i *v69; // rsi
  __m128i *v70; // rdx
  char **exception; // rbx
  __int64 v72; // rdx
  _QWORD *v73; // [rsp+8h] [rbp-80h]
  size_t v74; // [rsp+8h] [rbp-80h]
  unsigned int v75; // [rsp+8h] [rbp-80h]
  size_t v76; // [rsp+8h] [rbp-80h]
  int v77; // [rsp+8h] [rbp-80h]
  int v78; // [rsp+10h] [rbp-78h]
  size_t v79; // [rsp+10h] [rbp-78h]
  int v80; // [rsp+10h] [rbp-78h]
  size_t v81; // [rsp+10h] [rbp-78h]
  int v82; // [rsp+20h] [rbp-68h]
  int v83; // [rsp+20h] [rbp-68h]
  __int64 v84[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( *(_WORD *)(a2 + 4) || (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v3 != -1 )
  {
    v4 = *(_DWORD **)(sub_15D1F10(a2) + 24);
    if ( !v4 || *v4 != 5 )
      sub_161A90();
  }
  v5 = (_QWORD *)(a2 + 32);
  result = 8LL * *(unsigned int *)(a2 + 24);
  v7 = (_QWORD *)(a2 + 32 + result);
  if ( result )
  {
    while ( 1 )
    {
      v8 = *v5;
      if ( *(_WORD *)(*v5 + 4LL) )
        goto LABEL_13;
      if ( *(_DWORD *)(v8 + 24) )
        goto LABEL_13;
      v9 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
      if ( v9 )
      {
        if ( *v9 != -1 )
          goto LABEL_13;
      }
      v18 = *(_DWORD **)(sub_15D1F10(*v5) + 24);
      if ( !v18 || *v18 != 5 )
        goto LABEL_13;
      v19 = *(unsigned int *)(a1 + 40);
      v20 = *(_DWORD *)(a1 + 48);
      if ( 3 * (int)v19 < (unsigned int)(4 * (v20 + *(_DWORD *)(a1 + 44))) )
      {
        v78 = 2 * v19;
        v74 = 16LL * (unsigned int)(2 * v19);
        v41 = (__m128i *)sub_186B270(v74);
        v23 = v74;
        v42 = v78;
        v21 = v41;
        v43 = &v41[v74 / 0x10];
        if ( v78 )
        {
          do
          {
            v41->m128i_i64[0] = 0;
            ++v41;
            v41[-1].m128i_i32[2] = 0;
          }
          while ( v41 != v43 );
        }
        v44 = *(const __m128i **)(a1 + 32);
        v22 = v78 - 1;
        v24 = (__int64 *)v43;
        v45 = (__m128i *)&v44[*(unsigned int *)(a1 + 40)];
        if ( v44 != v45 )
        {
          do
          {
            if ( v44->m128i_i64[0] > 1uLL )
            {
              v46 = 16LL * (*(_DWORD *)(v44->m128i_i64[0] + 12) & v22);
              v47 = &v21[(unsigned __int64)v46 / 0x10];
              if ( v74 == v46 )
              {
LABEL_69:
                if ( v21 == v47 )
                {
LABEL_123:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v48 = v21;
                while ( v48->m128i_i64[0] )
                {
                  if ( v47 == ++v48 )
                    goto LABEL_123;
                }
              }
              else
              {
                v48 = &v21[(unsigned __int64)v46 / 0x10];
                while ( v48->m128i_i64[0] )
                {
                  if ( v43 == ++v48 )
                    goto LABEL_69;
                }
              }
              *v48 = _mm_loadu_si128(v44);
            }
            ++v44;
          }
          while ( v45 != v44 );
          v45 = *(__m128i **)(a1 + 32);
        }
        if ( v45 )
        {
          v82 = v78;
          v79 = v74;
          v75 = v42 - 1;
          sub_186B220(v45);
          v42 = v82;
          v23 = v79;
          v22 = v75;
        }
        *(_QWORD *)(a1 + 32) = v21;
        v20 = 0;
        *(_DWORD *)(a1 + 40) = v42;
        *(_DWORD *)(a1 + 48) = 0;
      }
      else
      {
        v21 = *(__m128i **)(a1 + 32);
        v22 = v19 - 1;
        v23 = 16 * v19;
        v24 = (__int64 *)((char *)v21->m128i_i64 + v23);
      }
      v25 = *(_DWORD *)(v8 + 12);
      v26 = 16LL * (v25 & v22);
      v27 = &v21[(unsigned __int64)v26 / 0x10];
      if ( v26 != v23 )
      {
        v28 = &v21[(unsigned __int64)v26 / 0x10];
        v29 = nullptr;
        while ( 1 )
        {
          v30 = v28->m128i_i64[0];
          if ( v28->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v30 + 12) == v25 && v8 == v30 )
            {
              v29 = (__int64 *)v28;
              goto LABEL_81;
            }
          }
          else
          {
            if ( !v30 )
            {
              if ( v29 )
                goto LABEL_79;
              v29 = (__int64 *)v28;
              goto LABEL_80;
            }
            v29 = (__int64 *)v28;
          }
          if ( ++v28 == (__m128i *)v24 )
            goto LABEL_51;
        }
      }
      v29 = nullptr;
      while ( 1 )
      {
LABEL_51:
        if ( v27 == v21 )
        {
LABEL_136:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v40 = v21->m128i_i64[0];
        if ( v21->m128i_i64[0] > 1uLL )
          break;
        if ( !v40 )
        {
          if ( v29 )
LABEL_79:
            *(_DWORD *)(a1 + 48) = v20 - 1;
          else
            v29 = (__int64 *)v21;
LABEL_80:
          *v29 = v8;
          *((_DWORD *)v29 + 2) = 0;
          ++*(_DWORD *)(a1 + 44);
          goto LABEL_81;
        }
        v29 = (__int64 *)v21;
LABEL_50:
        ++v21;
      }
      if ( *(_DWORD *)(v40 + 12) != v25 || v8 != v40 )
        goto LABEL_50;
      v29 = (__int64 *)v21;
LABEL_81:
      ++*((_DWORD *)v29 + 2);
      v50 = *(_DWORD *)(a1 + 64);
      v51 = *(_DWORD *)(a1 + 72);
      if ( 3 * v50 < 4 * (v51 + *(_DWORD *)(a1 + 68)) )
      {
        v80 = 2 * v50;
        v76 = 32LL * v50;
        v63 = (__m128i *)sub_186B270(v76);
        v54 = v76;
        v64 = v80;
        v52 = v63;
        v65 = &v63[v76 / 0x10];
        if ( v80 )
        {
          do
          {
            v63->m128i_i64[0] = 0;
            ++v63;
            v63[-1].m128i_i32[2] = 0;
          }
          while ( v63 != v65 );
        }
        v66 = *(const __m128i **)(a1 + 56);
        v53 = v80 - 1;
        v55 = (__int64 *)v65;
        v67 = (__m128i *)&v66[*(unsigned int *)(a1 + 64)];
        if ( v66 != v67 )
        {
          do
          {
            if ( v66->m128i_i64[0] > 1uLL )
            {
              v68 = 16LL * (*(_DWORD *)(v66->m128i_i64[0] + 12) & (unsigned int)v53);
              v69 = &v52[(unsigned __int64)v68 / 0x10];
              if ( v76 == v68 )
              {
LABEL_109:
                if ( v52 == v69 )
                {
LABEL_122:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v70 = v52;
                while ( v70->m128i_i64[0] )
                {
                  if ( v69 == ++v70 )
                    goto LABEL_122;
                }
              }
              else
              {
                v70 = &v52[(unsigned __int64)v68 / 0x10];
                while ( v70->m128i_i64[0] )
                {
                  if ( v65 == ++v70 )
                    goto LABEL_109;
                }
              }
              *v70 = _mm_loadu_si128(v66);
            }
            ++v66;
          }
          while ( v67 != v66 );
          v67 = *(__m128i **)(a1 + 56);
        }
        if ( v67 )
        {
          v83 = v80;
          v81 = v76;
          v77 = v64 - 1;
          sub_186B220(v67);
          v64 = v83;
          v54 = v81;
          v53 = v77;
        }
        *(_QWORD *)(a1 + 56) = v52;
        v51 = 0;
        *(_DWORD *)(a1 + 64) = v64;
        *(_DWORD *)(a1 + 72) = 0;
      }
      else
      {
        v52 = *(__m128i **)(a1 + 56);
        v53 = v50 - 1;
        v54 = 16LL * v50;
        v55 = (__int64 *)((char *)v52->m128i_i64 + v54);
      }
      v56 = *(_DWORD *)(v8 + 12);
      v57 = 16LL * (v56 & (unsigned int)v53);
      v58 = &v52[(unsigned __int64)v57 / 0x10];
      if ( v57 != v54 )
      {
        v59 = &v52[(unsigned __int64)v57 / 0x10];
        v60 = nullptr;
        while ( 1 )
        {
          v61 = v59->m128i_i64[0];
          if ( v59->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v61 + 12) == v56 && v8 == v61 )
            {
              v60 = (__int64 *)v59;
              goto LABEL_121;
            }
          }
          else
          {
            if ( !v61 )
            {
              if ( v60 )
                goto LABEL_119;
              v60 = (__int64 *)v59;
              goto LABEL_120;
            }
            v60 = (__int64 *)v59;
          }
          if ( ++v59 == (__m128i *)v55 )
            goto LABEL_94;
        }
      }
      v60 = nullptr;
LABEL_94:
      while ( 2 )
      {
        if ( v58 == v52 )
          goto LABEL_136;
        v62 = v52->m128i_i64[0];
        if ( v52->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v62 + 12) == v56 && v8 == v62 )
          {
            v60 = (__int64 *)v52;
            goto LABEL_121;
          }
          goto LABEL_93;
        }
        if ( v62 )
        {
          v60 = (__int64 *)v52;
LABEL_93:
          ++v52;
          continue;
        }
        break;
      }
      if ( v60 )
LABEL_119:
        *(_DWORD *)(a1 + 72) = v51 - 1;
      else
        v60 = (__int64 *)v52;
LABEL_120:
      *v60 = v8;
      *((_DWORD *)v60 + 2) = 0;
      ++*(_DWORD *)(a1 + 68);
LABEL_121:
      ++*((_DWORD *)v60 + 2);
LABEL_13:
      result = *(unsigned __int8 *)(v8 + 6);
      if ( (result & 1) != 0 )
      {
        if ( v7 == ++v5 )
          return result;
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 16);
        *(_BYTE *)(v8 + 6) = result | 1;
        v11 = *(_DWORD *)(v10 + 8);
        v12 = *(_DWORD *)(v10 + 12);
        if ( v11 >= v12 )
        {
          v35 = 2 * v12;
          v36 = sub_186B270(8 * v35);
          v11 = *(_DWORD *)(v10 + 8);
          v37 = *(_QWORD **)v10;
          v13 = (_QWORD *)v36;
          if ( v11 )
          {
            if ( v11 - 1 <= 2 || (_QWORD *)v36 == v37 + 1 )
            {
              for ( i = 0; i != v11; ++i )
                v13[i] = v37[i];
            }
            else
            {
              v38 = 0;
              do
              {
                *(__m128i *)&v13[v38] = _mm_loadu_si128((const __m128i *)&v37[v38]);
                v38 += 2;
              }
              while ( 2LL * (v11 >> 1) != v38 );
              if ( (v11 & 1) != 0 )
                v13[v11 & 0xFFFFFFFE] = v37[v11 & 0xFFFFFFFE];
            }
          }
          if ( v37 != (_QWORD *)(v10 + 16) && v37 )
          {
            v73 = v13;
            sub_186B220(v37);
            v11 = *(_DWORD *)(v10 + 8);
            v13 = v73;
          }
          *(_QWORD *)v10 = v13;
          *(_DWORD *)(v10 + 12) = v35;
        }
        else
        {
          v13 = *(_QWORD **)v10;
        }
        v13[v11] = v8;
        *(_DWORD *)(v10 + 8) = v11 + 1;
        v14 = *(_QWORD **)(a1 + 24);
        if ( v14 )
        {
          v15 = *((_DWORD *)v14 - 1);
          if ( v15 == *((_DWORD *)v14 - 2) )
          {
            v31 = (3 * v15 + 1) >> 1;
            v32 = 8 * v31 + 8;
            if ( 8 * v15 + 8 >= (unsigned int)v32 || v15 >= v31 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_161A10(v84, "Overflow encountered when expanding vector", v72);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v84);
              sub_233E40((__int64)v84);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v33 = (unsigned int *)sub_186B300(v14 - 1, v32);
            v34 = v33[1];
            v14 = v33 + 2;
            *v33 = v31;
            *(_QWORD *)(a1 + 24) = v33 + 2;
            LODWORD(v33) = v34;
            v17 = &v14[v34];
            result = (unsigned int)((_DWORD)v33 + 1);
          }
          else
          {
            v16 = v15;
            result = v15 + 1;
            v17 = &v14[v16];
          }
        }
        else
        {
          v39 = (_QWORD *)sub_186B270(0x18u);
          v14 = v39 + 1;
          *v39 = 2;
          result = 1;
          *(_QWORD *)(a1 + 24) = v14;
          v17 = v14;
        }
        ++v5;
        *v17 = v8;
        *((_DWORD *)v14 - 1) = result;
        if ( v7 == v5 )
          return result;
      }
    }
  }
  return result;
}

