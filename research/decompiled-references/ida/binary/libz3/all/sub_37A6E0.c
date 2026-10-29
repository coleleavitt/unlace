__int64 __fastcall sub_37A6E0(_DWORD *a1, __int64 a2, __int64 a3)
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
  int *v27; // rax
  int v28; // esi
  __int16 v29; // si
  _DWORD *v30; // rdx
  __int64 v31; // rbp
  _DWORD *v32; // rax
  _DWORD *v33; // rax
  int *v34; // rax
  int v35; // edx
  __int16 v36; // si
  _DWORD *v37; // rdx
  void *v38; // rax
  unsigned int v39; // edx
  unsigned int v40; // eax
  unsigned int v41; // edi
  char v42; // dl
  __int64 v43; // r9
  __int64 v44; // rcx
  int v45; // ebp
  __int64 *v46; // rcx
  __int64 v47; // rcx
  int v48; // eax
  unsigned int v49; // edx
  unsigned int v50; // ebp
  _QWORD *v51; // r13
  __int64 v52; // rbp
  __int64 *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rbp
  __int64 v60; // rax
  _QWORD *v61; // rdi
  __int64 v62; // rax
  __int64 k; // rax
  __int64 j; // rax
  __int64 v65; // rcx
  __int64 *v66; // rax
  __int64 v67; // rbp
  __int64 v68; // rax
  _QWORD *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 i; // rax
  void *exception; // rax
  void *v74; // rax
  void *v75; // rax
  void *v76; // rax
  void *v77; // rax
  void *v78; // rax
  __int64 v79; // [rsp+10h] [rbp-168h]
  __int64 *v80; // [rsp+10h] [rbp-168h]
  int v81; // [rsp+10h] [rbp-168h]
  __int64 *v82; // [rsp+10h] [rbp-168h]
  _QWORD *v83; // [rsp+18h] [rbp-160h]
  __int64 *ptr; // [rsp+30h] [rbp-148h]
  __int64 v85; // [rsp+38h] [rbp-140h]
  __int64 v86; // [rsp+40h] [rbp-138h] BYREF
  int v87; // [rsp+48h] [rbp-130h]

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
      v67 = 2 * v8;
      v68 = sub_186B270(8 * v67);
      v7 = *(_DWORD *)(a2 + 8);
      v69 = *(_QWORD **)a2;
      v9 = (_QWORD *)v68;
      if ( v7 )
      {
        if ( v7 - 1 <= 2 || (_QWORD *)v68 == v69 + 1 )
        {
          for ( i = 0; i != v7; ++i )
            v9[i] = v69[i];
        }
        else
        {
          v70 = 0;
          do
          {
            *(__m128i *)&v9[v70] = _mm_loadu_si128((const __m128i *)&v69[v70]);
            v70 += 2;
          }
          while ( v70 != 2LL * (v7 >> 1) );
          if ( (v7 & 1) != 0 )
            v9[v7 & 0xFFFFFFFE] = v69[v7 & 0xFFFFFFFE];
        }
      }
      if ( v69 != (_QWORD *)(a2 + 16) && v69 )
      {
        sub_186B220(v69);
        v7 = *(_DWORD *)(a2 + 8);
      }
      *(_QWORD *)a2 = v9;
      *(_DWORD *)(a2 + 12) = v67;
    }
    else
    {
      v9 = *(_QWORD **)a2;
    }
    v9[v7] = v3;
    *(_DWORD *)(a2 + 8) = v7 + 1;
  }
  v10 = &v86;
  v86 = v3;
  v83 = (_QWORD *)(a2 + 16);
  ptr = &v86;
  v87 = 0;
  v85 = 0x1000000001LL;
  LODWORD(v11) = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v12 = &v10[2 * (unsigned int)v11];
      v13 = *(_WORD *)(v3 + 4);
      if ( v13 == 2 )
      {
        v39 = *(_DWORD *)(v3 + 72);
        v40 = *((_DWORD *)v12 + 2);
        v41 = v39 + *(_DWORD *)(v3 + 76) + 1;
        if ( v40 >= v41 )
        {
LABEL_159:
          exception = __cxa_allocate_exception(1u);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'is_non_qffp_predicate::found, nullptr);
        }
        if ( v40 )
          goto LABEL_71;
        v17 = *(_QWORD *)(v3 + 24);
        v40 = 1;
        *((_DWORD *)v12 + 2) = 1;
        if ( *(_DWORD *)(v17 + 8) <= 1u )
        {
LABEL_74:
          v44 = (unsigned int)v85;
          v45 = HIDWORD(v85);
          if ( (unsigned int)v85 < HIDWORD(v85) )
            goto LABEL_75;
        }
        else
        {
          while ( 1 )
          {
            v42 = *(_BYTE *)(v17 + 6);
            if ( (v42 & 1) == 0 )
              break;
            if ( v40 >= v41 )
              goto LABEL_159;
            v39 = *(_DWORD *)(v3 + 72);
LABEL_71:
            v43 = v40 - 1;
            if ( v39 < v40 )
              v43 = (unsigned int)v43 - v39;
            ++v40;
            v17 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v43 + 80);
            *((_DWORD *)v12 + 2) = v40;
            if ( *(_DWORD *)(v17 + 8) <= 1u )
              goto LABEL_74;
          }
          *(_BYTE *)(v17 + 6) = v42 | 1;
          v49 = *(_DWORD *)(a2 + 8);
          v50 = *(_DWORD *)(a2 + 12);
          if ( v49 >= v50 )
          {
            v59 = 2 * v50;
            v60 = sub_186B270(8 * v59);
            v49 = *(_DWORD *)(a2 + 8);
            v61 = *(_QWORD **)a2;
            v51 = (_QWORD *)v60;
            if ( v49 )
            {
              if ( v49 - 1 <= 2 || (_QWORD *)v60 == v61 + 1 )
              {
                for ( j = 0; j != v49; ++j )
                  v51[j] = v61[j];
              }
              else
              {
                v62 = 0;
                do
                {
                  *(__m128i *)&v51[v62] = _mm_loadu_si128((const __m128i *)&v61[v62]);
                  v62 += 2;
                }
                while ( 2LL * (v49 >> 1) != v62 );
                if ( (v49 & 1) != 0 )
                  v51[v49 & 0xFFFFFFFE] = v61[v49 & 0xFFFFFFFE];
              }
            }
            if ( v61 && v61 != v83 )
            {
              sub_186B220(v61);
              v49 = *(_DWORD *)(a2 + 8);
            }
            *(_QWORD *)a2 = v51;
            *(_DWORD *)(a2 + 12) = v59;
          }
          else
          {
            v51 = *(_QWORD **)a2;
          }
          v44 = (unsigned int)v85;
          v45 = HIDWORD(v85);
          v51[v49] = v17;
          *(_DWORD *)(a2 + 8) = v49 + 1;
          if ( (unsigned int)v85 < HIDWORD(v85) )
            goto LABEL_75;
        }
        v52 = (unsigned int)(2 * v45);
        v10 = (__int64 *)sub_186B270(16 * v52);
        v53 = ptr;
        v54 = 0;
        v44 = (unsigned int)v85;
        if ( (_DWORD)v85 )
        {
          do
          {
            *(__m128i *)&v10[v54] = _mm_loadu_si128((const __m128i *)&ptr[v54]);
            v54 += 2;
          }
          while ( v54 != 2LL * (unsigned int)v85 );
        }
LABEL_83:
        if ( v53 != &v86 && v53 )
        {
          v80 = v10;
          sub_186B220(v53);
          v44 = (unsigned int)v85;
          v10 = v80;
        }
        ptr = v10;
        HIDWORD(v85) = v52;
LABEL_76:
        v46 = &v10[2 * v44];
        *v46 = v17;
        *((_DWORD *)v46 + 2) = 0;
        v47 = (unsigned int)v85;
        v48 = v85 + 1;
        goto LABEL_77;
      }
      if ( v13 > 2u )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      if ( v13 )
      {
        v77 = __cxa_allocate_exception(1u);
        __cxa_throw(v77, (struct type_info *)&`typeinfo for'is_non_qffp_predicate::found, nullptr);
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
LABEL_41:
          if ( v15 >= v14 )
          {
            LODWORD(v11) = v85 - 1;
            goto LABEL_43;
          }
        }
        *(_BYTE *)(v17 + 6) = v18 | 1;
        v19 = *(_DWORD *)(a2 + 8);
        v20 = *(_DWORD *)(a2 + 12);
        if ( v19 >= v20 )
        {
          v81 = 2 * v20;
          v56 = sub_186B270(16LL * v20);
          v19 = *(_DWORD *)(a2 + 8);
          v57 = *(_QWORD **)a2;
          v21 = (_QWORD *)v56;
          if ( v19 )
          {
            if ( v19 - 1 <= 2 || (_QWORD *)v56 == v57 + 1 )
            {
              for ( k = 0; k != v19; ++k )
                v21[k] = v57[k];
            }
            else
            {
              v58 = 0;
              do
              {
                *(__m128i *)&v21[v58] = _mm_loadu_si128((const __m128i *)&v57[v58]);
                v58 += 2;
              }
              while ( 2LL * (v19 >> 1) != v58 );
              if ( (v19 & 1) != 0 )
                v21[v19 & 0xFFFFFFFE] = v57[v19 & 0xFFFFFFFE];
            }
          }
          if ( v57 != v83 && v57 )
          {
            sub_186B220(v57);
            v19 = *(_DWORD *)(a2 + 8);
          }
          *(_QWORD *)a2 = v21;
          *(_DWORD *)(a2 + 12) = v81;
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
          v44 = (unsigned int)v85;
          if ( (unsigned int)v85 >= HIDWORD(v85) )
          {
            v52 = (unsigned int)(2 * HIDWORD(v85));
            v10 = (__int64 *)sub_186B270(16 * v52);
            v53 = ptr;
            v55 = 0;
            v44 = (unsigned int)v85;
            if ( (_DWORD)v85 )
            {
              do
              {
                *(__m128i *)&v10[v55] = _mm_loadu_si128((const __m128i *)&ptr[v55]);
                v55 += 2;
              }
              while ( v55 != 2LL * (unsigned int)v85 );
            }
            goto LABEL_83;
          }
LABEL_75:
          v10 = ptr;
          goto LABEL_76;
        }
        if ( v22 > 2u )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( v22 )
        {
          v76 = __cxa_allocate_exception(1u);
          __cxa_throw(v76, (struct type_info *)&`typeinfo for'is_non_qffp_predicate::found, nullptr);
        }
        if ( *(_DWORD *)(v17 + 24) )
        {
          v65 = (unsigned int)v85;
          if ( (unsigned int)v85 >= HIDWORD(v85) )
          {
            v10 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v85)));
            v71 = 0;
            v65 = (unsigned int)v85;
            if ( (_DWORD)v85 )
            {
              do
              {
                *(__m128i *)&v10[v71] = _mm_loadu_si128((const __m128i *)&ptr[v71]);
                v71 += 2;
              }
              while ( 2LL * (unsigned int)v85 != v71 );
            }
            if ( ptr != &v86 && ptr )
            {
              v82 = v10;
              sub_186B220(ptr);
              v65 = (unsigned int)v85;
              v10 = v82;
            }
            ptr = v10;
            HIDWORD(v85) *= 2;
          }
          else
          {
            v10 = ptr;
          }
          v66 = &v10[2 * v65];
          *((_DWORD *)v66 + 2) = 0;
          v47 = (unsigned int)v85;
          *v66 = v17;
          v48 = v85 + 1;
LABEL_77:
          LODWORD(v85) = v48;
          LODWORD(v11) = v48 - 1;
          v3 = v10[2 * v47];
          continue;
        }
        v23 = sub_15D1F10(v17);
        if ( v23 != *(_QWORD *)(*(_QWORD *)a1 + 840LL) )
        {
          v24 = *(_DWORD **)(v23 + 24);
          if ( !v24 || a1[12] != *v24 || v24[1] > 1u )
          {
            v79 = v23;
            v25 = sub_1673B10(a1 + 2, v23);
            v23 = v79;
            if ( !v25 )
            {
              v26 = *(_DWORD **)(v79 + 24);
              if ( !v26 || *v26 != 5 || v26[1] )
              {
                v78 = __cxa_allocate_exception(1u);
                __cxa_throw(v78, (struct type_info *)&`typeinfo for'is_non_qffp_predicate::found, nullptr);
              }
            }
          }
        }
        v27 = *(int **)(*(_QWORD *)(v17 + 16) + 24LL);
        if ( v27 )
        {
          v28 = *v27;
          if ( !*v27 )
          {
LABEL_40:
            v15 = *((_DWORD *)v12 + 2);
            goto LABEL_41;
          }
        }
        else
        {
          v28 = -1;
        }
        if ( a1[12] != v28 && v28 != a1[2] )
        {
          v29 = *(_WORD *)(v17 + 4);
          if ( v29 || *(_DWORD *)(v17 + 24) || v27 && *v27 != -1 )
          {
            v30 = *(_DWORD **)(v23 + 24);
            if ( !v30 || *v30 != 5 || v29 != 0 || v27 == nullptr || v30[1] || *v27 != 5 || v27[1] )
            {
              v75 = __cxa_allocate_exception(1u);
              __cxa_throw(v75, (struct type_info *)&`typeinfo for'is_non_qffp_predicate::found, nullptr);
            }
          }
        }
        goto LABEL_40;
      }
      break;
    }
LABEL_43:
    LODWORD(v85) = v11;
    v31 = sub_15D1F10(v3);
    if ( v31 != *(_QWORD *)(*(_QWORD *)a1 + 840LL) )
    {
      v32 = *(_DWORD **)(v31 + 24);
      if ( (!v32 || a1[12] != *v32 || v32[1] > 1u) && !(unsigned __int8)sub_1673B10(a1 + 2, v31) )
      {
        v33 = *(_DWORD **)(v31 + 24);
        if ( !v33 || *v33 != 5 || v33[1] )
        {
          v74 = __cxa_allocate_exception(1u);
          __cxa_throw(v74, (struct type_info *)&`typeinfo for'is_non_qffp_predicate::found, nullptr);
        }
      }
    }
    v34 = *(int **)(*(_QWORD *)(v3 + 16) + 24LL);
    if ( v34 )
    {
      v35 = *v34;
      if ( !*v34 )
        goto LABEL_63;
    }
    else
    {
      v35 = -1;
    }
    if ( a1[12] != v35 && v35 != a1[2] )
    {
      v36 = *(_WORD *)(v3 + 4);
      if ( v36 || *(_DWORD *)(v3 + 24) || v34 && *v34 != -1 )
      {
        v37 = *(_DWORD **)(v31 + 24);
        if ( !v37 || *v37 != 5 || v34 == nullptr || v37[1] != 0 || v36 || *v34 != 5 || v34[1] )
        {
          v38 = __cxa_allocate_exception(1u);
          __cxa_throw(v38, (struct type_info *)&`typeinfo for'is_non_qffp_predicate::found, nullptr);
        }
      }
    }
LABEL_63:
    v10 = ptr;
    if ( (_DWORD)v85 )
    {
      v11 = (unsigned int)(v85 - 1);
      v3 = ptr[2 * v11];
      continue;
    }
    break;
  }
  result = (__int64)&v86;
  if ( ptr != &v86 )
  {
    if ( ptr )
      return sub_186B220(ptr);
  }
  return result;
}

