__int64 __fastcall sub_378A40(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // ebp
  _QWORD *v9; // r13
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // r13
  unsigned __int16 v13; // dx
  unsigned int v14; // ebp
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r14
  char v18; // al
  unsigned int v19; // edx
  unsigned int v20; // eax
  _QWORD *v21; // rsi
  unsigned __int16 v22; // ax
  __int64 v23; // rdx
  _DWORD *v24; // rax
  char v25; // al
  _DWORD *v26; // rax
  int *v27; // rsi
  int v28; // eax
  _DWORD *v29; // rax
  __int64 v30; // rbp
  _DWORD *v31; // rax
  _DWORD *v32; // rax
  int *v33; // rdx
  int v34; // eax
  _DWORD *v35; // rax
  void *v36; // rax
  unsigned int v37; // edx
  unsigned int v38; // eax
  unsigned int v39; // edi
  char v40; // dl
  __int64 v41; // r9
  __int64 v42; // rcx
  int v43; // ebp
  __int64 *v44; // rcx
  __int64 v45; // rcx
  int v46; // eax
  unsigned int v47; // edx
  unsigned int v48; // ebp
  _QWORD *v49; // r13
  __int64 v50; // rbp
  __int64 *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rbp
  __int64 v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // rax
  __int64 k; // rax
  __int64 j; // rax
  __int64 v63; // rcx
  __int64 *v64; // rax
  __int64 v65; // rbp
  __int64 v66; // rax
  _QWORD *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 i; // rax
  void *v71; // rax
  void *v72; // rax
  void *v73; // rax
  void *v74; // rax
  void *exception; // rax
  void *v76; // rax
  __int64 v77; // [rsp+8h] [rbp-170h]
  __int64 *v78; // [rsp+8h] [rbp-170h]
  int v79; // [rsp+8h] [rbp-170h]
  __int64 *v80; // [rsp+8h] [rbp-170h]
  _QWORD *v81; // [rsp+18h] [rbp-160h]
  __int64 *ptr; // [rsp+30h] [rbp-148h]
  __int64 v83; // [rsp+38h] [rbp-140h]
  __int64 v84; // [rsp+40h] [rbp-138h] BYREF
  int v85; // [rsp+48h] [rbp-130h]

  v3 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v7 = *(_DWORD *)(a2 + 8);
    v8 = *(_DWORD *)(a2 + 12);
    if ( v7 >= v8 )
    {
      v65 = 2 * v8;
      v66 = sub_186B270(8 * v65);
      v7 = *(_DWORD *)(a2 + 8);
      v67 = *(_QWORD **)a2;
      v9 = (_QWORD *)v66;
      if ( v7 )
      {
        if ( v7 - 1 <= 2 || (_QWORD *)v66 == v67 + 1 )
        {
          for ( i = 0; i != v7; ++i )
            v9[i] = v67[i];
        }
        else
        {
          v68 = 0;
          do
          {
            *(__m128i *)&v9[v68] = _mm_loadu_si128((const __m128i *)&v67[v68]);
            v68 += 2;
          }
          while ( v68 != 2LL * (v7 >> 1) );
          if ( (v7 & 1) != 0 )
            v9[v7 & 0xFFFFFFFE] = v67[v7 & 0xFFFFFFFE];
        }
      }
      if ( v67 != (_QWORD *)(a2 + 16) && v67 )
      {
        sub_186B220(v67);
        v7 = *(_DWORD *)(a2 + 8);
      }
      *(_QWORD *)a2 = v9;
      *(_DWORD *)(a2 + 12) = v65;
    }
    else
    {
      v9 = *(_QWORD **)a2;
    }
    v9[v7] = v3;
    *(_DWORD *)(a2 + 8) = v7 + 1;
  }
  v10 = &v84;
  v84 = v3;
  v81 = (_QWORD *)(a2 + 16);
  ptr = &v84;
  v85 = 0;
  v83 = 0x1000000001LL;
  LODWORD(v11) = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v12 = &v10[2 * (unsigned int)v11];
      v13 = *(_WORD *)(v3 + 4);
      if ( v13 == 2 )
      {
        v37 = *(_DWORD *)(v3 + 72);
        v38 = *((_DWORD *)v12 + 2);
        v39 = v37 + *(_DWORD *)(v3 + 76) + 1;
        if ( v38 >= v39 )
        {
LABEL_167:
          exception = __cxa_allocate_exception(1u);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'is_non_qffplra_predicate::found, nullptr);
        }
        if ( v38 )
          goto LABEL_68;
        v17 = *(_QWORD *)(v3 + 24);
        v38 = 1;
        *((_DWORD *)v12 + 2) = 1;
        if ( *(_DWORD *)(v17 + 8) <= 1u )
        {
LABEL_71:
          v42 = (unsigned int)v83;
          v43 = HIDWORD(v83);
          if ( (unsigned int)v83 < HIDWORD(v83) )
            goto LABEL_72;
        }
        else
        {
          while ( 1 )
          {
            v40 = *(_BYTE *)(v17 + 6);
            if ( (v40 & 1) == 0 )
              break;
            if ( v38 >= v39 )
              goto LABEL_167;
            v37 = *(_DWORD *)(v3 + 72);
LABEL_68:
            v41 = v38 - 1;
            if ( v37 < v38 )
              v41 = (unsigned int)v41 - v37;
            ++v38;
            v17 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v41 + 80);
            *((_DWORD *)v12 + 2) = v38;
            if ( *(_DWORD *)(v17 + 8) <= 1u )
              goto LABEL_71;
          }
          *(_BYTE *)(v17 + 6) = v40 | 1;
          v47 = *(_DWORD *)(a2 + 8);
          v48 = *(_DWORD *)(a2 + 12);
          if ( v47 >= v48 )
          {
            v57 = 2 * v48;
            v58 = sub_186B270(8 * v57);
            v47 = *(_DWORD *)(a2 + 8);
            v59 = *(_QWORD **)a2;
            v49 = (_QWORD *)v58;
            if ( v47 )
            {
              if ( v47 - 1 <= 2 || (_QWORD *)v58 == v59 + 1 )
              {
                for ( j = 0; j != v47; ++j )
                  v49[j] = v59[j];
              }
              else
              {
                v60 = 0;
                do
                {
                  *(__m128i *)&v49[v60] = _mm_loadu_si128((const __m128i *)&v59[v60]);
                  v60 += 2;
                }
                while ( v60 != 2LL * (v47 >> 1) );
                if ( (v47 & 1) != 0 )
                  v49[v47 & 0xFFFFFFFE] = v59[v47 & 0xFFFFFFFE];
              }
            }
            if ( v59 && v59 != v81 )
            {
              sub_186B220(v59);
              v47 = *(_DWORD *)(a2 + 8);
            }
            *(_QWORD *)a2 = v49;
            *(_DWORD *)(a2 + 12) = v57;
          }
          else
          {
            v49 = *(_QWORD **)a2;
          }
          v42 = (unsigned int)v83;
          v43 = HIDWORD(v83);
          v49[v47] = v17;
          *(_DWORD *)(a2 + 8) = v47 + 1;
          if ( (unsigned int)v83 < HIDWORD(v83) )
            goto LABEL_72;
        }
        v50 = (unsigned int)(2 * v43);
        v10 = (__int64 *)sub_186B270(16 * v50);
        v51 = ptr;
        v52 = 0;
        v42 = (unsigned int)v83;
        if ( (_DWORD)v83 )
        {
          do
          {
            *(__m128i *)&v10[v52] = _mm_loadu_si128((const __m128i *)&ptr[v52]);
            v52 += 2;
          }
          while ( 2LL * (unsigned int)v83 != v52 );
        }
        if ( ptr != &v84 && ptr )
        {
LABEL_89:
          v78 = v10;
          sub_186B220(v51);
          v42 = (unsigned int)v83;
          v10 = v78;
        }
LABEL_90:
        ptr = v10;
        HIDWORD(v83) = v50;
LABEL_73:
        v44 = &v10[2 * v42];
        *v44 = v17;
        *((_DWORD *)v44 + 2) = 0;
        v45 = (unsigned int)v83;
        v46 = v83 + 1;
        goto LABEL_74;
      }
      if ( v13 > 2u )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      if ( v13 )
      {
        v73 = __cxa_allocate_exception(1u);
        __cxa_throw(v73, (struct type_info *)&`typeinfo for'is_non_qffplra_predicate::found, nullptr);
      }
      v14 = *(_DWORD *)(v3 + 24);
      v15 = *((_DWORD *)v12 + 2);
      if ( v15 < v14 )
      {
        while ( 1 )
        {
          v16 = v15++;
          v17 = *(_QWORD *)(v3 + 8 * v16 + 32);
          *((_DWORD *)v12 + 2) = v15;
          if ( *(_DWORD *)(v17 + 8) <= 1u )
            goto LABEL_17;
          v18 = *(_BYTE *)(v17 + 6);
          if ( (v18 & 1) == 0 )
            break;
LABEL_39:
          if ( v15 >= v14 )
          {
            LODWORD(v11) = v83 - 1;
            goto LABEL_41;
          }
        }
        *(_BYTE *)(v17 + 6) = v18 | 1;
        v19 = *(_DWORD *)(a2 + 8);
        v20 = *(_DWORD *)(a2 + 12);
        if ( v19 >= v20 )
        {
          v79 = 2 * v20;
          v54 = sub_186B270(16LL * v20);
          v19 = *(_DWORD *)(a2 + 8);
          v55 = *(_QWORD **)a2;
          v21 = (_QWORD *)v54;
          if ( v19 )
          {
            if ( v19 - 1 <= 2 || (_QWORD *)v54 == v55 + 1 )
            {
              for ( k = 0; k != v19; ++k )
                v21[k] = v55[k];
            }
            else
            {
              v56 = 0;
              do
              {
                *(__m128i *)&v21[v56] = _mm_loadu_si128((const __m128i *)&v55[v56]);
                v56 += 2;
              }
              while ( 2LL * (v19 >> 1) != v56 );
              if ( (v19 & 1) != 0 )
                v21[v19 & 0xFFFFFFFE] = v55[v19 & 0xFFFFFFFE];
            }
          }
          if ( v55 != v81 && v55 )
          {
            sub_186B220(v55);
            v19 = *(_DWORD *)(a2 + 8);
          }
          *(_QWORD *)a2 = v21;
          *(_DWORD *)(a2 + 12) = v79;
        }
        else
        {
          v21 = *(_QWORD **)a2;
        }
        v21[v19] = v17;
        *(_DWORD *)(a2 + 8) = v19 + 1;
LABEL_17:
        v22 = *(_WORD *)(v17 + 4);
        if ( v22 == 2 )
        {
          v42 = (unsigned int)v83;
          if ( (unsigned int)v83 >= HIDWORD(v83) )
          {
            v50 = (unsigned int)(2 * HIDWORD(v83));
            v10 = (__int64 *)sub_186B270(16 * v50);
            v51 = ptr;
            v53 = 0;
            v42 = (unsigned int)v83;
            if ( (_DWORD)v83 )
            {
              do
              {
                *(__m128i *)&v10[v53] = _mm_loadu_si128((const __m128i *)&ptr[v53]);
                v53 += 2;
              }
              while ( v53 != 2LL * (unsigned int)v83 );
            }
            if ( ptr && ptr != &v84 )
              goto LABEL_89;
            goto LABEL_90;
          }
LABEL_72:
          v10 = ptr;
          goto LABEL_73;
        }
        if ( v22 > 2u )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( v22 )
        {
          v72 = __cxa_allocate_exception(1u);
          __cxa_throw(v72, (struct type_info *)&`typeinfo for'is_non_qffplra_predicate::found, nullptr);
        }
        if ( *(_DWORD *)(v17 + 24) )
        {
          v63 = (unsigned int)v83;
          if ( (unsigned int)v83 >= HIDWORD(v83) )
          {
            v10 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v83)));
            v69 = 0;
            v63 = (unsigned int)v83;
            if ( (_DWORD)v83 )
            {
              do
              {
                *(__m128i *)&v10[v69] = _mm_loadu_si128((const __m128i *)&ptr[v69]);
                v69 += 2;
              }
              while ( 2LL * (unsigned int)v83 != v69 );
            }
            if ( ptr != &v84 && ptr )
            {
              v80 = v10;
              sub_186B220(ptr);
              v63 = (unsigned int)v83;
              v10 = v80;
            }
            ptr = v10;
            HIDWORD(v83) *= 2;
          }
          else
          {
            v10 = ptr;
          }
          v64 = &v10[2 * v63];
          *((_DWORD *)v64 + 2) = 0;
          v45 = (unsigned int)v83;
          *v64 = v17;
          v46 = v83 + 1;
LABEL_74:
          LODWORD(v83) = v46;
          LODWORD(v11) = v46 - 1;
          v3 = v10[2 * v45];
          continue;
        }
        v23 = sub_15D1F10(v17);
        if ( v23 != *(_QWORD *)(*(_QWORD *)a1 + 840LL) )
        {
          v24 = *(_DWORD **)(v23 + 24);
          if ( !v24 || a1[12] != *v24 || v24[1] > 1u )
          {
            v77 = v23;
            v25 = sub_1673B10(a1 + 2, v23);
            v23 = v77;
            if ( !v25 )
            {
              v26 = *(_DWORD **)(v77 + 24);
              if ( !v26 || *v26 != 5 || v26[1] )
              {
                v74 = __cxa_allocate_exception(1u);
                __cxa_throw(v74, (struct type_info *)&`typeinfo for'is_non_qffplra_predicate::found, nullptr);
              }
            }
          }
        }
        v27 = *(int **)(*(_QWORD *)(v17 + 16) + 24LL);
        if ( v27 )
        {
          v28 = *v27;
          if ( !*v27
            || v28 == a1[12]
            || a1[2] == v28
            || v28 == 5
            || !*(_WORD *)(v17 + 4) && !*(_DWORD *)(v17 + 24) && *v27 == -1 )
          {
LABEL_38:
            v15 = *((_DWORD *)v12 + 2);
            goto LABEL_39;
          }
        }
        else if ( a1[12] == -1 || a1[2] == -1 || !*(_WORD *)(v17 + 4) && !*(_DWORD *)(v17 + 24) )
        {
          goto LABEL_38;
        }
        v29 = *(_DWORD **)(v23 + 24);
        if ( !v29 || *v29 != 5 || v29[1] )
        {
          v76 = __cxa_allocate_exception(1u);
          __cxa_throw(v76, (struct type_info *)&`typeinfo for'is_non_qffplra_predicate::found, nullptr);
        }
        goto LABEL_38;
      }
      break;
    }
LABEL_41:
    LODWORD(v83) = v11;
    v30 = sub_15D1F10(v3);
    if ( v30 != *(_QWORD *)(*(_QWORD *)a1 + 840LL) )
    {
      v31 = *(_DWORD **)(v30 + 24);
      if ( (!v31 || a1[12] != *v31 || v31[1] > 1u) && !(unsigned __int8)sub_1673B10(a1 + 2, v30) )
      {
        v32 = *(_DWORD **)(v30 + 24);
        if ( !v32 || *v32 != 5 || v32[1] )
        {
          v71 = __cxa_allocate_exception(1u);
          __cxa_throw(v71, (struct type_info *)&`typeinfo for'is_non_qffplra_predicate::found, nullptr);
        }
      }
    }
    v33 = *(int **)(*(_QWORD *)(v3 + 16) + 24LL);
    if ( v33 )
    {
      v34 = *v33;
      if ( !*v33
        || v34 == a1[12]
        || a1[2] == v34
        || v34 == 5
        || !*(_WORD *)(v3 + 4) && !*(_DWORD *)(v3 + 24) && v34 == -1 )
      {
        goto LABEL_60;
      }
    }
    else if ( a1[12] == -1 || a1[2] == -1 || !*(_WORD *)(v3 + 4) && !*(_DWORD *)(v3 + 24) )
    {
      goto LABEL_60;
    }
    v35 = *(_DWORD **)(v30 + 24);
    if ( !v35 || *v35 != 5 || v35[1] )
    {
      v36 = __cxa_allocate_exception(1u);
      __cxa_throw(v36, (struct type_info *)&`typeinfo for'is_non_qffplra_predicate::found, nullptr);
    }
LABEL_60:
    result = (unsigned int)v83;
    v10 = ptr;
    if ( (_DWORD)v83 )
    {
      v11 = (unsigned int)(v83 - 1);
      v3 = ptr[2 * v11];
      continue;
    }
    break;
  }
  if ( ptr )
  {
    result = (__int64)&v84;
    if ( ptr != &v84 )
      return sub_186B220(ptr);
  }
  return result;
}

