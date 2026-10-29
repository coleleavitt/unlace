__int64 __fastcall sub_379A20(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // ebp
  _QWORD *v8; // r13
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r13
  unsigned __int16 v12; // dx
  unsigned int v13; // ebp
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r14
  char v17; // al
  unsigned int v18; // edx
  unsigned int v19; // eax
  _QWORD *v20; // r9
  unsigned __int16 v21; // ax
  int *v22; // rax
  __int64 v23; // rax
  int v24; // edi
  int *v25; // rax
  int v26; // ebp
  __int64 v27; // rax
  int v28; // edx
  _QWORD *v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // eax
  unsigned int v32; // edi
  char v33; // dl
  __int64 v34; // r9
  __int64 v35; // rcx
  int v36; // ebp
  __int64 *v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // edx
  unsigned int v41; // ebp
  _QWORD *v42; // r13
  __int64 v43; // rbp
  __int64 *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // rax
  _QWORD *v52; // rdi
  __int64 v53; // rax
  _DWORD *v54; // rdx
  _QWORD *v55; // rax
  _DWORD *v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  _DWORD *v59; // rcx
  _QWORD *v60; // rax
  _DWORD *v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 k; // rax
  __int64 j; // rax
  __int64 v66; // rcx
  __int64 *v67; // rax
  __int64 v68; // rbp
  __int64 v69; // rax
  _QWORD *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 i; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rax
  _QWORD *exception; // rax
  int v78; // [rsp+0h] [rbp-168h]
  __int64 *v79; // [rsp+0h] [rbp-168h]
  int v80; // [rsp+0h] [rbp-168h]
  __int64 *v81; // [rsp+0h] [rbp-168h]
  _QWORD *v82; // [rsp+8h] [rbp-160h]
  _QWORD *v83; // [rsp+18h] [rbp-150h]
  __int64 *ptr; // [rsp+20h] [rbp-148h]
  __int64 v85; // [rsp+28h] [rbp-140h]
  __int64 v86; // [rsp+30h] [rbp-138h] BYREF
  int v87; // [rsp+38h] [rbp-130h]

  v3 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 12);
    if ( v6 >= v7 )
    {
      v68 = 2 * v7;
      v69 = sub_186B270(8 * v68);
      v6 = *(_DWORD *)(a2 + 8);
      v70 = *(_QWORD **)a2;
      v8 = (_QWORD *)v69;
      if ( v6 )
      {
        if ( v6 - 1 <= 2 || (_QWORD *)v69 == v70 + 1 )
        {
          for ( i = 0; i != v6; ++i )
            v8[i] = v70[i];
        }
        else
        {
          v71 = 0;
          do
          {
            *(__m128i *)&v8[v71] = _mm_loadu_si128((const __m128i *)&v70[v71]);
            v71 += 2;
          }
          while ( v71 != 2LL * (v6 >> 1) );
          if ( (v6 & 1) != 0 )
            v8[v6 & 0xFFFFFFFE] = v70[v6 & 0xFFFFFFFE];
        }
      }
      if ( v70 != (_QWORD *)(a2 + 16) && v70 )
      {
        sub_186B220(v70);
        v6 = *(_DWORD *)(a2 + 8);
      }
      *(_QWORD *)a2 = v8;
      *(_DWORD *)(a2 + 12) = v68;
    }
    else
    {
      v8 = *(_QWORD **)a2;
    }
    v8[v6] = v3;
    *(_DWORD *)(a2 + 8) = v6 + 1;
  }
  v9 = &v86;
  v86 = v3;
  ptr = &v86;
  v87 = 0;
  v82 = (_QWORD *)(a2 + 16);
  v85 = 0x1000000001LL;
  LODWORD(v10) = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v11 = &v9[2 * (unsigned int)v10];
      v12 = *(_WORD *)(v3 + 4);
      if ( v12 == 2 )
      {
        v30 = *(_DWORD *)(v3 + 72);
        v31 = *((_DWORD *)v11 + 2);
        v32 = v30 + *(_DWORD *)(v3 + 76) + 1;
        if ( v31 >= v32 )
        {
LABEL_152:
          exception = __cxa_allocate_exception(8u);
          *exception = &off_1C64CB0;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'is_non_fp_qfnra_predicate::found,
            (void (*)(void *))sub_3799D0);
        }
        if ( v31 )
          goto LABEL_44;
        v16 = *(_QWORD *)(v3 + 24);
        v31 = 1;
        *((_DWORD *)v11 + 2) = 1;
        if ( *(_DWORD *)(v16 + 8) <= 1u )
        {
LABEL_47:
          v35 = (unsigned int)v85;
          v36 = HIDWORD(v85);
          if ( (unsigned int)v85 < HIDWORD(v85) )
            goto LABEL_48;
        }
        else
        {
          while ( 1 )
          {
            v33 = *(_BYTE *)(v16 + 6);
            if ( (v33 & 1) == 0 )
              break;
            if ( v31 >= v32 )
              goto LABEL_152;
            v30 = *(_DWORD *)(v3 + 72);
LABEL_44:
            v34 = v31 - 1;
            if ( v30 < v31 )
              v34 = (unsigned int)v34 - v30;
            ++v31;
            v16 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v34 + 80);
            *((_DWORD *)v11 + 2) = v31;
            if ( *(_DWORD *)(v16 + 8) <= 1u )
              goto LABEL_47;
          }
          *(_BYTE *)(v16 + 6) = v33 | 1;
          v40 = *(_DWORD *)(a2 + 8);
          v41 = *(_DWORD *)(a2 + 12);
          if ( v40 >= v41 )
          {
            v50 = 2 * v41;
            v51 = sub_186B270(8 * v50);
            v40 = *(_DWORD *)(a2 + 8);
            v52 = *(_QWORD **)a2;
            v42 = (_QWORD *)v51;
            if ( v40 )
            {
              if ( v40 - 1 <= 2 || (_QWORD *)v51 == v52 + 1 )
              {
                for ( j = 0; j != v40; ++j )
                  v42[j] = v52[j];
              }
              else
              {
                v53 = 0;
                do
                {
                  *(__m128i *)&v42[v53] = _mm_loadu_si128((const __m128i *)&v52[v53]);
                  v53 += 2;
                }
                while ( v53 != 2LL * (v40 >> 1) );
                if ( (v40 & 1) != 0 )
                  v42[v40 & 0xFFFFFFFE] = v52[v40 & 0xFFFFFFFE];
              }
            }
            if ( v52 != v82 && v52 )
            {
              sub_186B220(v52);
              v40 = *(_DWORD *)(a2 + 8);
            }
            *(_QWORD *)a2 = v42;
            *(_DWORD *)(a2 + 12) = v50;
          }
          else
          {
            v42 = *(_QWORD **)a2;
          }
          v35 = (unsigned int)v85;
          v36 = HIDWORD(v85);
          v42[v40] = v16;
          *(_DWORD *)(a2 + 8) = v40 + 1;
          if ( (unsigned int)v85 < HIDWORD(v85) )
            goto LABEL_48;
        }
        v43 = (unsigned int)(2 * v36);
        v9 = (__int64 *)sub_186B270(16 * v43);
        v44 = ptr;
        v45 = 0;
        v35 = (unsigned int)v85;
        if ( (_DWORD)v85 )
        {
          do
          {
            *(__m128i *)&v9[v45] = _mm_loadu_si128((const __m128i *)&ptr[v45]);
            v45 += 2;
          }
          while ( v45 != 2LL * (unsigned int)v85 );
        }
LABEL_56:
        if ( v44 && v44 != &v86 )
        {
          v79 = v9;
          sub_186B220(v44);
          v35 = (unsigned int)v85;
          v9 = v79;
        }
        ptr = v9;
        HIDWORD(v85) = v43;
LABEL_49:
        v37 = &v9[2 * v35];
        *v37 = v16;
        *((_DWORD *)v37 + 2) = 0;
        v38 = (unsigned int)v85;
        v39 = v85 + 1;
        goto LABEL_50;
      }
      if ( v12 > 2u )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      if ( v12 )
      {
        v75 = __cxa_allocate_exception(8u);
        *v75 = &off_1C64CB0;
        __cxa_throw(
          v75,
          (struct type_info *)&`typeinfo for'is_non_fp_qfnra_predicate::found,
          (void (*)(void *))sub_3799D0);
      }
      v13 = *(_DWORD *)(v3 + 24);
      v14 = *((_DWORD *)v11 + 2);
      if ( v14 < v13 )
      {
        while ( 1 )
        {
          v15 = v14++;
          v16 = *(_QWORD *)(v3 + 8 * v15 + 32);
          *((_DWORD *)v11 + 2) = v14;
          if ( *(_DWORD *)(v16 + 8) <= 1u )
            goto LABEL_17;
          v17 = *(_BYTE *)(v16 + 6);
          if ( (v17 & 1) == 0 )
            break;
LABEL_27:
          if ( v14 >= v13 )
          {
            LODWORD(v10) = v85 - 1;
            goto LABEL_29;
          }
        }
        *(_BYTE *)(v16 + 6) = v17 | 1;
        v18 = *(_DWORD *)(a2 + 8);
        v19 = *(_DWORD *)(a2 + 12);
        if ( v18 >= v19 )
        {
          v80 = 2 * v19;
          v47 = sub_186B270(16LL * v19);
          v18 = *(_DWORD *)(a2 + 8);
          v48 = *(_QWORD **)a2;
          v20 = (_QWORD *)v47;
          if ( v18 )
          {
            if ( v18 - 1 <= 2 || (_QWORD *)v47 == v48 + 1 )
            {
              for ( k = 0; k != v18; ++k )
                v20[k] = v48[k];
            }
            else
            {
              v49 = 0;
              do
              {
                *(__m128i *)&v20[v49] = _mm_loadu_si128((const __m128i *)&v48[v49]);
                v49 += 2;
              }
              while ( 2LL * (v18 >> 1) != v49 );
              if ( (v18 & 1) != 0 )
                v20[v18 & 0xFFFFFFFE] = v48[v18 & 0xFFFFFFFE];
            }
          }
          if ( v48 != v82 && v48 )
          {
            v83 = v20;
            sub_186B220(v48);
            v18 = *(_DWORD *)(a2 + 8);
            v20 = v83;
          }
          *(_QWORD *)a2 = v20;
          *(_DWORD *)(a2 + 12) = v80;
        }
        else
        {
          v20 = *(_QWORD **)a2;
        }
        v20[v18] = v16;
        *(_DWORD *)(a2 + 8) = v18 + 1;
LABEL_17:
        v21 = *(_WORD *)(v16 + 4);
        if ( v21 == 2 )
        {
          v35 = (unsigned int)v85;
          if ( (unsigned int)v85 >= HIDWORD(v85) )
          {
            v43 = (unsigned int)(2 * HIDWORD(v85));
            v9 = (__int64 *)sub_186B270(16 * v43);
            v44 = ptr;
            v46 = 0;
            v35 = (unsigned int)v85;
            if ( (_DWORD)v85 )
            {
              do
              {
                *(__m128i *)&v9[v46] = _mm_loadu_si128((const __m128i *)&ptr[v46]);
                v46 += 2;
              }
              while ( v46 != 2LL * (unsigned int)v85 );
            }
            goto LABEL_56;
          }
LABEL_48:
          v9 = ptr;
          goto LABEL_49;
        }
        if ( v21 > 2u )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( v21 )
        {
          v74 = __cxa_allocate_exception(8u);
          *v74 = &off_1C64CB0;
          __cxa_throw(
            v74,
            (struct type_info *)&`typeinfo for'is_non_fp_qfnra_predicate::found,
            (void (*)(void *))sub_3799D0);
        }
        if ( *(_DWORD *)(v16 + 24) )
        {
          v66 = (unsigned int)v85;
          if ( (unsigned int)v85 >= HIDWORD(v85) )
          {
            v9 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v85)));
            v72 = 0;
            v66 = (unsigned int)v85;
            if ( (_DWORD)v85 )
            {
              do
              {
                *(__m128i *)&v9[v72] = _mm_loadu_si128((const __m128i *)&ptr[v72]);
                v72 += 2;
              }
              while ( 2LL * (unsigned int)v85 != v72 );
            }
            if ( ptr != &v86 && ptr )
            {
              v81 = v9;
              sub_186B220(ptr);
              v66 = (unsigned int)v85;
              v9 = v81;
            }
            ptr = v9;
            HIDWORD(v85) *= 2;
          }
          else
          {
            v9 = ptr;
          }
          v67 = &v9[2 * v66];
          *((_DWORD *)v67 + 2) = 0;
          v38 = (unsigned int)v85;
          *v67 = v16;
          v39 = v85 + 1;
LABEL_50:
          LODWORD(v85) = v39;
          LODWORD(v10) = v39 - 1;
          v3 = v9[2 * v38];
          continue;
        }
        v22 = *(int **)(*(_QWORD *)(v16 + 16) + 24LL);
        if ( !v22 || *v22 == -1 )
        {
          v23 = sub_15D1F10(v16);
          v24 = a1[12];
          if ( v24 != -1 )
          {
            v54 = *(_DWORD **)(v23 + 24);
            if ( (!v54 || v24 != *v54 || v54[1] > 1u) && *(_QWORD *)(*(_QWORD *)a1 + 840LL) != v23 )
            {
              v55 = __cxa_allocate_exception(8u);
              *v55 = &off_1C64CB0;
              __cxa_throw(
                v55,
                (struct type_info *)&`typeinfo for'is_non_fp_qfnra_predicate::found,
                (void (*)(void *))sub_3799D0);
            }
            goto LABEL_26;
          }
        }
        else
        {
          v78 = *v22;
          if ( *v22 != a1[12] )
            sub_C2A74();
          v23 = sub_15D1F10(v16);
          v24 = a1[12];
          if ( v78 != v24 )
          {
            if ( v78 )
            {
              v76 = __cxa_allocate_exception(8u);
              *v76 = &off_1C64CB0;
              __cxa_throw(
                v76,
                (struct type_info *)&`typeinfo for'is_non_fp_qfnra_predicate::found,
                (void (*)(void *))sub_3799D0);
            }
LABEL_26:
            v14 = *((_DWORD *)v11 + 2);
            goto LABEL_27;
          }
        }
        v56 = *(_DWORD **)(v23 + 24);
        if ( !v56 || v24 != *v56 || v56[1] > 1u )
        {
          v57 = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 24LL);
          if ( !v57 || *(_DWORD *)(v57 + 4) != 42 )
          {
            v58 = __cxa_allocate_exception(8u);
            *v58 = &off_1C64CB0;
            __cxa_throw(
              v58,
              (struct type_info *)&`typeinfo for'is_non_fp_qfnra_predicate::found,
              (void (*)(void *))sub_3799D0);
          }
        }
        goto LABEL_26;
      }
      break;
    }
LABEL_29:
    LODWORD(v85) = v10;
    v25 = *(int **)(*(_QWORD *)(v3 + 16) + 24LL);
    if ( v25 )
    {
      v26 = *v25;
      if ( *v25 != -1 )
      {
        if ( v26 != a1[12] )
          sub_C2A74();
        v27 = sub_15D1F10(v3);
        v28 = a1[12];
        if ( v26 != v28 )
        {
          if ( v26 )
          {
            v29 = __cxa_allocate_exception(8u);
            *v29 = &off_1C64CB0;
            __cxa_throw(
              v29,
              (struct type_info *)&`typeinfo for'is_non_fp_qfnra_predicate::found,
              (void (*)(void *))sub_3799D0);
          }
          goto LABEL_36;
        }
        goto LABEL_105;
      }
    }
    v27 = sub_15D1F10(v3);
    v28 = a1[12];
    if ( v28 == -1 )
    {
LABEL_105:
      v61 = *(_DWORD **)(v27 + 24);
      if ( !v61 || v28 != *v61 || v61[1] > 1u )
      {
        v62 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 24LL);
        if ( !v62 || *(_DWORD *)(v62 + 4) != 42 )
        {
          v63 = __cxa_allocate_exception(8u);
          *v63 = &off_1C64CB0;
          __cxa_throw(
            v63,
            (struct type_info *)&`typeinfo for'is_non_fp_qfnra_predicate::found,
            (void (*)(void *))sub_3799D0);
        }
      }
      goto LABEL_36;
    }
    v59 = *(_DWORD **)(v27 + 24);
    if ( (!v59 || v28 != *v59 || v59[1] > 1u) && *(_QWORD *)(*(_QWORD *)a1 + 840LL) != v27 )
    {
      v60 = __cxa_allocate_exception(8u);
      *v60 = &off_1C64CB0;
      __cxa_throw(
        v60,
        (struct type_info *)&`typeinfo for'is_non_fp_qfnra_predicate::found,
        (void (*)(void *))sub_3799D0);
    }
LABEL_36:
    v9 = ptr;
    if ( (_DWORD)v85 )
    {
      v10 = (unsigned int)(v85 - 1);
      v3 = ptr[2 * v10];
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

