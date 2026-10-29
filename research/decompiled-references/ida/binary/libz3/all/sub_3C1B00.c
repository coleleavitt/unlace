__int64 __fastcall sub_3C1B00(_QWORD *a1, char **a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // ebp
  char *v9; // r13
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int16 v12; // si
  __int64 *v13; // r13
  unsigned int v14; // ebp
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r15
  char v18; // al
  unsigned int v19; // edx
  unsigned int v20; // eax
  char *v21; // r9
  __int16 v22; // ax
  __int64 v23; // rbp
  int v24; // eax
  _DWORD *v25; // rdx
  void *v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // edi
  char v30; // dl
  __int64 v31; // r9
  __int64 v32; // rcx
  int v33; // ebp
  __int64 *v34; // rcx
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // edx
  unsigned int v38; // ebp
  char *v39; // r13
  __int64 v40; // rbp
  __int64 *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r15
  int v44; // eax
  _DWORD *v45; // rdx
  void *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  char *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rbp
  __int64 v52; // rax
  char *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbp
  __int64 v58; // rax
  char *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  void *exception; // rax
  __int64 *v66; // [rsp+8h] [rbp-160h]
  int v67; // [rsp+8h] [rbp-160h]
  __int64 *v68; // [rsp+8h] [rbp-160h]
  char *v69; // [rsp+18h] [rbp-150h]
  __int64 *ptr; // [rsp+20h] [rbp-148h]
  __int64 v71; // [rsp+28h] [rbp-140h]
  __int64 v72; // [rsp+30h] [rbp-138h] BYREF
  int v73; // [rsp+38h] [rbp-130h]

  v3 = a3;
  if ( *(_DWORD *)(a3 + 8) > 1u )
  {
    result = *(unsigned __int8 *)(a3 + 6);
    if ( (result & 1) != 0 )
      return result;
    *(_BYTE *)(a3 + 6) = result | 1;
    v7 = *((_DWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 3);
    if ( v7 >= v8 )
    {
      v57 = 2 * v8;
      v58 = sub_186B270(8 * v57);
      v7 = *((_DWORD *)a2 + 2);
      v59 = *a2;
      v9 = (char *)v58;
      if ( v7 )
      {
        if ( v7 - 1 <= 2 || (char *)v58 == v59 + 8 )
        {
          v64 = 0;
          do
          {
            *(_QWORD *)&v9[v64] = *(_QWORD *)&v59[v64];
            v64 += 8;
          }
          while ( v64 != 8LL * v7 );
        }
        else
        {
          v60 = 0;
          do
          {
            *(__m128i *)&v9[v60] = _mm_loadu_si128((const __m128i *)&v59[v60]);
            v60 += 16;
          }
          while ( v60 != 16LL * (v7 >> 1) );
          if ( (v7 & 1) != 0 )
            *(_QWORD *)&v9[8 * (v7 & 0xFFFFFFFE)] = *(_QWORD *)&v59[8 * (v7 & 0xFFFFFFFE)];
        }
      }
      if ( v59 != (char *)(a2 + 2) && v59 )
      {
        sub_186B220(v59);
        v7 = *((_DWORD *)a2 + 2);
      }
      *a2 = v9;
      *((_DWORD *)a2 + 3) = v57;
    }
    else
    {
      v9 = *a2;
    }
    *(_QWORD *)&v9[8 * v7] = v3;
    *((_DWORD *)a2 + 2) = v7 + 1;
  }
  v10 = &v72;
  v72 = v3;
  ptr = &v72;
  v73 = 0;
  v71 = 0x1000000001LL;
  LODWORD(v11) = 0;
LABEL_8:
  while ( 2 )
  {
    v12 = *(_WORD *)(v3 + 4);
    v13 = &v10[2 * (unsigned int)v11];
    if ( v12 == 1 )
    {
      LODWORD(v71) = v11;
      if ( !(_DWORD)v11 )
        break;
      goto LABEL_13;
    }
    if ( v12 == 2 )
    {
      v27 = *(_DWORD *)(v3 + 72);
      v28 = *((_DWORD *)v13 + 2);
      v29 = v27 + *(_DWORD *)(v3 + 76) + 1;
      if ( v28 >= v29 )
      {
LABEL_123:
        exception = __cxa_allocate_exception(1u);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'tb::clause::non_constructor, nullptr);
      }
      if ( v28 )
        goto LABEL_41;
      v17 = *(_QWORD *)(v3 + 24);
      v28 = 1;
      *((_DWORD *)v13 + 2) = 1;
      if ( *(_DWORD *)(v17 + 8) <= 1u )
      {
LABEL_44:
        v32 = (unsigned int)v71;
        v33 = HIDWORD(v71);
        if ( (unsigned int)v71 < HIDWORD(v71) )
          goto LABEL_45;
LABEL_51:
        v40 = (unsigned int)(2 * v33);
        v10 = (__int64 *)sub_186B270(16 * v40);
        v41 = ptr;
        v42 = 0;
        v32 = (unsigned int)v71;
        if ( (_DWORD)v71 )
        {
          do
          {
            *(__m128i *)&v10[v42] = _mm_loadu_si128((const __m128i *)&ptr[v42]);
            v42 += 2;
          }
          while ( 2LL * (unsigned int)v71 != v42 );
        }
        if ( ptr && ptr != &v72 )
          goto LABEL_55;
        goto LABEL_56;
      }
      while ( 1 )
      {
        v30 = *(_BYTE *)(v17 + 6);
        if ( (v30 & 1) == 0 )
          break;
        if ( v28 >= v29 )
          goto LABEL_123;
        v27 = *(_DWORD *)(v3 + 72);
LABEL_41:
        v31 = v28 - 1;
        if ( v27 < v28 )
          v31 = (unsigned int)v31 - v27;
        ++v28;
        v17 = *(_QWORD *)(16LL * *(unsigned int *)(v3 + 20) + v3 + 8 * v31 + 80);
        *((_DWORD *)v13 + 2) = v28;
        if ( *(_DWORD *)(v17 + 8) <= 1u )
          goto LABEL_44;
      }
      *(_BYTE *)(v17 + 6) = v30 | 1;
      v37 = *((_DWORD *)a2 + 2);
      v38 = *((_DWORD *)a2 + 3);
      if ( v37 < v38 )
      {
        v39 = *a2;
        goto LABEL_50;
      }
      v51 = 2 * v38;
      v52 = sub_186B270(8 * v51);
      v37 = *((_DWORD *)a2 + 2);
      v53 = *a2;
      v39 = (char *)v52;
      if ( v37 )
      {
        if ( v37 - 1 <= 2 || (char *)v52 == v53 + 8 )
        {
          v55 = 0;
          do
          {
            *(_QWORD *)&v39[v55] = *(_QWORD *)&v53[v55];
            v55 += 8;
          }
          while ( 8LL * v37 != v55 );
          if ( v53 )
          {
LABEL_88:
            if ( v53 != (char *)(a2 + 2) )
            {
              sub_186B220(v53);
              v37 = *((_DWORD *)a2 + 2);
            }
          }
LABEL_90:
          *a2 = v39;
          *((_DWORD *)a2 + 3) = v51;
LABEL_50:
          v32 = (unsigned int)v71;
          v33 = HIDWORD(v71);
          *(_QWORD *)&v39[8 * v37] = v17;
          *((_DWORD *)a2 + 2) = v37 + 1;
          if ( (unsigned int)v71 < HIDWORD(v71) )
            goto LABEL_45;
          goto LABEL_51;
        }
        v54 = 0;
        do
        {
          *(__m128i *)&v39[v54] = _mm_loadu_si128((const __m128i *)&v53[v54]);
          v54 += 16;
        }
        while ( v54 != 16LL * (v37 >> 1) );
        if ( (v37 & 1) != 0 )
          *(_QWORD *)&v39[8 * (v37 & 0xFFFFFFFE)] = *(_QWORD *)&v53[8 * (v37 & 0xFFFFFFFE)];
      }
      if ( v53 )
        goto LABEL_88;
      goto LABEL_90;
    }
    if ( v12 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    v14 = *(_DWORD *)(v3 + 24);
    v15 = *((_DWORD *)v13 + 2);
    if ( v15 < v14 )
    {
      while ( 1 )
      {
        v16 = v15++;
        v17 = *(_QWORD *)(v3 + 8 * v16 + 32);
        *((_DWORD *)v13 + 2) = v15;
        if ( *(_DWORD *)(v17 + 8) > 1u )
        {
          v18 = *(_BYTE *)(v17 + 6);
          if ( (v18 & 1) != 0 )
            goto LABEL_29;
          *(_BYTE *)(v17 + 6) = v18 | 1;
          v19 = *((_DWORD *)a2 + 2);
          v20 = *((_DWORD *)a2 + 3);
          if ( v19 >= v20 )
          {
            v67 = 2 * v20;
            v48 = sub_186B270(16LL * v20);
            v19 = *((_DWORD *)a2 + 2);
            v49 = *a2;
            v21 = (char *)v48;
            if ( v19 )
            {
              if ( v19 - 1 <= 2 || (char *)v48 == v49 + 8 )
              {
                v56 = 0;
                do
                {
                  *(_QWORD *)&v21[v56] = *(_QWORD *)&v49[v56];
                  v56 += 8;
                }
                while ( v56 != 8LL * v19 );
              }
              else
              {
                v50 = 0;
                do
                {
                  *(__m128i *)&v21[v50] = _mm_loadu_si128((const __m128i *)&v49[v50]);
                  v50 += 16;
                }
                while ( 16LL * (v19 >> 1) != v50 );
                if ( (v19 & 1) != 0 )
                  *(_QWORD *)&v21[8 * (v19 & 0xFFFFFFFE)] = *(_QWORD *)&v49[8 * (v19 & 0xFFFFFFFE)];
              }
            }
            if ( v49 != (char *)(a2 + 2) && v49 )
            {
              v69 = v21;
              sub_186B220(v49);
              v19 = *((_DWORD *)a2 + 2);
              v21 = v69;
            }
            *a2 = v21;
            *((_DWORD *)a2 + 3) = v67;
          }
          else
          {
            v21 = *a2;
          }
          *(_QWORD *)&v21[8 * v19] = v17;
          *((_DWORD *)a2 + 2) = v19 + 1;
        }
        v22 = *(_WORD *)(v17 + 4);
        if ( v22 != 1 )
        {
          if ( v22 == 2 )
          {
            v32 = (unsigned int)v71;
            if ( (unsigned int)v71 >= HIDWORD(v71) )
            {
              v40 = (unsigned int)(2 * HIDWORD(v71));
              v10 = (__int64 *)sub_186B270(16 * v40);
              v41 = ptr;
              v47 = 0;
              v32 = (unsigned int)v71;
              if ( (_DWORD)v71 )
              {
                do
                {
                  *(__m128i *)&v10[v47] = _mm_loadu_si128((const __m128i *)&ptr[v47]);
                  v47 += 2;
                }
                while ( v47 != 2LL * (unsigned int)v71 );
              }
              if ( ptr != &v72 )
              {
                if ( !ptr )
                {
                  ptr = v10;
                  HIDWORD(v71) *= 2;
                  goto LABEL_46;
                }
LABEL_55:
                v66 = v10;
                sub_186B220(v41);
                v32 = (unsigned int)v71;
                v10 = v66;
              }
LABEL_56:
              ptr = v10;
              HIDWORD(v71) = v40;
LABEL_46:
              v34 = &v10[2 * v32];
              *v34 = v17;
              *((_DWORD *)v34 + 2) = 0;
              v35 = (unsigned int)v71;
              v36 = v71 + 1;
              goto LABEL_47;
            }
LABEL_45:
            v10 = ptr;
            goto LABEL_46;
          }
          if ( v22 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( *(_DWORD *)(v17 + 24) )
          {
            v61 = (unsigned int)v71;
            if ( (unsigned int)v71 >= HIDWORD(v71) )
            {
              v10 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v71)));
              v63 = 0;
              v61 = (unsigned int)v71;
              if ( (_DWORD)v71 )
              {
                do
                {
                  *(__m128i *)&v10[v63] = _mm_loadu_si128((const __m128i *)&ptr[v63]);
                  v63 += 2;
                }
                while ( 2LL * (unsigned int)v71 != v63 );
              }
              if ( ptr && ptr != &v72 )
              {
                v68 = v10;
                sub_186B220(ptr);
                v61 = (unsigned int)v71;
                v10 = v68;
              }
              ptr = v10;
              HIDWORD(v71) *= 2;
            }
            else
            {
              v10 = ptr;
            }
            v62 = &v10[2 * v61];
            *((_DWORD *)v62 + 2) = 0;
            v35 = (unsigned int)v71;
            *v62 = v17;
            v36 = v71 + 1;
LABEL_47:
            LODWORD(v71) = v36;
            LODWORD(v11) = v36 - 1;
            v3 = v10[2 * v35];
            goto LABEL_8;
          }
          if ( !(unsigned __int8)sub_15D26C0(*a1, v17) )
          {
            v43 = *(_QWORD *)(v17 + 16);
            v44 = sub_15F0200(a1 + 1);
            v45 = *(_DWORD **)(v43 + 24);
            if ( !v45 || v44 != *v45 || v45[1] )
            {
              v46 = __cxa_allocate_exception(1u);
              __cxa_throw(v46, (struct type_info *)&`typeinfo for'tb::clause::non_constructor, nullptr);
            }
          }
        }
        v15 = *((_DWORD *)v13 + 2);
LABEL_29:
        if ( v15 >= v14 )
        {
          LODWORD(v11) = v71 - 1;
          break;
        }
      }
    }
    LODWORD(v71) = v11;
    if ( !(unsigned __int8)sub_15D26C0(*a1, v3) )
    {
      v23 = *(_QWORD *)(v3 + 16);
      v24 = sub_15F0200(a1 + 1);
      v25 = *(_DWORD **)(v23 + 24);
      if ( !v25 || v24 != *v25 || v25[1] )
      {
        v26 = __cxa_allocate_exception(1u);
        __cxa_throw(v26, (struct type_info *)&`typeinfo for'tb::clause::non_constructor, nullptr);
      }
    }
    LODWORD(v11) = v71;
    v10 = ptr;
    if ( (_DWORD)v71 )
    {
LABEL_13:
      v11 = (unsigned int)(v11 - 1);
      v3 = v10[2 * v11];
      continue;
    }
    break;
  }
  result = (__int64)&v72;
  if ( v10 != &v72 )
  {
    if ( v10 )
      return sub_186B220(v10);
  }
  return result;
}

