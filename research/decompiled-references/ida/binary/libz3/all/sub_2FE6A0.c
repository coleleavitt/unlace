__int64 __fastcall sub_2FE6A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // ebp
  _QWORD *v9; // r12
  __int64 *v10; // r15
  __int64 *v11; // r15
  unsigned __int16 v12; // dx
  unsigned int v13; // ebp
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r12
  char v17; // al
  unsigned int v18; // edx
  unsigned int v19; // eax
  _QWORD *v20; // r9
  unsigned __int16 v21; // ax
  int *v22; // rax
  int v23; // eax
  void *v24; // rax
  int *v25; // rdx
  int v26; // esi
  void *v27; // rax
  unsigned int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // edi
  char v31; // dl
  __int64 v32; // r9
  __int64 v33; // rdx
  int v34; // ebp
  __int64 *v35; // rdx
  __int64 v36; // rdx
  int v37; // eax
  unsigned int v38; // edx
  unsigned int v39; // ebp
  _QWORD *v40; // r15
  __int64 v41; // rbp
  __int64 *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // rax
  _QWORD *v50; // rdi
  __int64 v51; // rax
  __int64 k; // rax
  __int64 v53; // rax
  __int64 j; // rax
  __int64 v55; // rdx
  __int64 *v56; // rax
  __int64 v57; // rbp
  __int64 v58; // rax
  _QWORD *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 i; // rax
  void *v64; // rax
  void *v65; // rax
  void *exception; // rax
  _QWORD *v67; // [rsp+8h] [rbp-160h]
  int v68; // [rsp+10h] [rbp-158h]
  _QWORD *v69; // [rsp+18h] [rbp-150h]
  __int64 *ptr; // [rsp+20h] [rbp-148h]
  __int64 v71; // [rsp+28h] [rbp-140h]
  __int64 v72; // [rsp+30h] [rbp-138h] BYREF
  int v73; // [rsp+38h] [rbp-130h]

  v4 = a3;
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
      v57 = 2 * v8;
      v58 = sub_186B270(8 * v57);
      v7 = *(_DWORD *)(a2 + 8);
      v59 = *(_QWORD **)a2;
      v9 = (_QWORD *)v58;
      if ( v7 )
      {
        if ( v7 - 1 <= 2 || (_QWORD *)v58 == v59 + 1 )
        {
          for ( i = 0; i != v7; ++i )
            v9[i] = v59[i];
        }
        else
        {
          v60 = 0;
          do
          {
            *(__m128i *)&v9[v60] = _mm_loadu_si128((const __m128i *)&v59[v60]);
            v60 += 2;
          }
          while ( v60 != 2LL * (v7 >> 1) );
          if ( (v7 & 1) != 0 )
            v9[v7 & 0xFFFFFFFE] = v59[v7 & 0xFFFFFFFE];
        }
      }
      if ( v59 != (_QWORD *)(a2 + 16) && v59 )
      {
        sub_186B220(v59);
        v7 = *(_DWORD *)(a2 + 8);
      }
      *(_QWORD *)a2 = v9;
      *(_DWORD *)(a2 + 12) = v57;
    }
    else
    {
      v9 = *(_QWORD **)a2;
    }
    v9[v7] = v4;
    *(_DWORD *)(a2 + 8) = v7 + 1;
  }
  v10 = &v72;
  v72 = v4;
  ptr = &v72;
  v73 = 0;
  v67 = (_QWORD *)(a2 + 16);
  v71 = 0x1000000001LL;
  result = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v11 = &v10[2 * (unsigned int)result];
      v12 = *(_WORD *)(v4 + 4);
      if ( v12 == 2 )
      {
        v28 = *(_DWORD *)(v4 + 72);
        v29 = *((_DWORD *)v11 + 2);
        v30 = v28 + *(_DWORD *)(v4 + 76) + 1;
        if ( v29 >= v30 )
        {
LABEL_137:
          exception = __cxa_allocate_exception(1u);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'opt::context::is_fd::found_fd, nullptr);
        }
        if ( v29 )
          goto LABEL_50;
        v16 = *(_QWORD *)(v4 + 24);
        v29 = 1;
        *((_DWORD *)v11 + 2) = 1;
        if ( *(_DWORD *)(v16 + 8) <= 1u )
        {
LABEL_53:
          v33 = (unsigned int)v71;
          v34 = HIDWORD(v71);
          if ( (unsigned int)v71 < HIDWORD(v71) )
            goto LABEL_54;
        }
        else
        {
          while ( 1 )
          {
            v31 = *(_BYTE *)(v16 + 6);
            if ( (v31 & 1) == 0 )
              break;
            if ( v29 >= v30 )
              goto LABEL_137;
            v28 = *(_DWORD *)(v4 + 72);
LABEL_50:
            v32 = v29 - 1;
            if ( v28 < v29 )
              v32 = (unsigned int)v32 - v28;
            ++v29;
            v16 = *(_QWORD *)(16LL * *(unsigned int *)(v4 + 20) + v4 + 8 * v32 + 80);
            *((_DWORD *)v11 + 2) = v29;
            if ( *(_DWORD *)(v16 + 8) <= 1u )
              goto LABEL_53;
          }
          *(_BYTE *)(v16 + 6) = v31 | 1;
          v38 = *(_DWORD *)(a2 + 8);
          v39 = *(_DWORD *)(a2 + 12);
          if ( v38 >= v39 )
          {
            v48 = 2 * v39;
            v49 = sub_186B270(8 * v48);
            v38 = *(_DWORD *)(a2 + 8);
            v50 = *(_QWORD **)a2;
            v40 = (_QWORD *)v49;
            if ( v38 )
            {
              if ( v38 - 1 <= 2 || (_QWORD *)v49 == v50 + 1 )
              {
                for ( j = 0; j != v38; ++j )
                  v40[j] = v50[j];
              }
              else
              {
                v51 = 0;
                do
                {
                  *(__m128i *)&v40[v51] = _mm_loadu_si128((const __m128i *)&v50[v51]);
                  v51 += 2;
                }
                while ( v51 != 2LL * (v38 >> 1) );
                if ( (v38 & 1) != 0 )
                  v40[v38 & 0xFFFFFFFE] = v50[v38 & 0xFFFFFFFE];
              }
            }
            if ( v50 != v67 && v50 )
            {
              sub_186B220(v50);
              v38 = *(_DWORD *)(a2 + 8);
            }
            *(_QWORD *)a2 = v40;
            *(_DWORD *)(a2 + 12) = v48;
          }
          else
          {
            v40 = *(_QWORD **)a2;
          }
          v34 = HIDWORD(v71);
          v40[v38] = v16;
          *(_DWORD *)(a2 + 8) = v38 + 1;
          v33 = (unsigned int)v71;
          if ( (unsigned int)v71 < HIDWORD(v71) )
            goto LABEL_54;
        }
        v41 = (unsigned int)(2 * v34);
        v10 = (__int64 *)sub_186B270(16 * v41);
        v42 = ptr;
        v43 = 0;
        v33 = (unsigned int)v71;
        if ( (_DWORD)v71 )
        {
          do
          {
            *(__m128i *)&v10[v43] = _mm_loadu_si128((const __m128i *)&ptr[v43]);
            v43 += 2;
          }
          while ( 2LL * (unsigned int)v71 != v43 );
        }
        if ( ptr && ptr != &v72 )
        {
LABEL_70:
          sub_186B220(v42);
          v33 = (unsigned int)v71;
        }
LABEL_71:
        ptr = v10;
        HIDWORD(v71) = v41;
LABEL_55:
        v35 = &v10[2 * v33];
        *v35 = v16;
        *((_DWORD *)v35 + 2) = 0;
        v36 = (unsigned int)v71;
        v37 = v71 + 1;
        goto LABEL_56;
      }
      if ( v12 > 2u )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      if ( v12 )
      {
        v65 = __cxa_allocate_exception(1u);
        __cxa_throw(v65, (struct type_info *)&`typeinfo for'opt::context::is_fd::found_fd, nullptr);
      }
      v13 = *(_DWORD *)(v4 + 24);
      v14 = *((_DWORD *)v11 + 2);
      if ( v14 < v13 )
      {
        while ( 1 )
        {
          v15 = v14++;
          v16 = *(_QWORD *)(v4 + 8 * v15 + 32);
          *((_DWORD *)v11 + 2) = v14;
          if ( *(_DWORD *)(v16 + 8) <= 1u )
            goto LABEL_17;
          v17 = *(_BYTE *)(v16 + 6);
          if ( (v17 & 1) == 0 )
            break;
LABEL_31:
          if ( v14 >= v13 )
          {
            result = (unsigned int)(v71 - 1);
            goto LABEL_33;
          }
        }
        *(_BYTE *)(v16 + 6) = v17 | 1;
        v18 = *(_DWORD *)(a2 + 8);
        v19 = *(_DWORD *)(a2 + 12);
        if ( v18 >= v19 )
        {
          v68 = 2 * v19;
          v45 = sub_186B270(16LL * v19);
          v18 = *(_DWORD *)(a2 + 8);
          v46 = *(_QWORD **)a2;
          v20 = (_QWORD *)v45;
          if ( v18 )
          {
            if ( v18 - 1 <= 2 || (_QWORD *)v45 == v46 + 1 )
            {
              for ( k = 0; k != v18; ++k )
                v20[k] = v46[k];
            }
            else
            {
              v47 = 0;
              do
              {
                *(__m128i *)&v20[v47] = _mm_loadu_si128((const __m128i *)&v46[v47]);
                v47 += 2;
              }
              while ( 2LL * (v18 >> 1) != v47 );
              if ( (v18 & 1) != 0 )
                v20[v18 & 0xFFFFFFFE] = v46[v18 & 0xFFFFFFFE];
            }
          }
          if ( v46 != v67 && v46 )
          {
            v69 = v20;
            sub_186B220(v46);
            v18 = *(_DWORD *)(a2 + 8);
            v20 = v69;
          }
          *(_QWORD *)a2 = v20;
          *(_DWORD *)(a2 + 12) = v68;
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
          v33 = (unsigned int)v71;
          if ( (unsigned int)v71 >= HIDWORD(v71) )
          {
            v41 = (unsigned int)(2 * HIDWORD(v71));
            v10 = (__int64 *)sub_186B270(16 * v41);
            v42 = ptr;
            v44 = 0;
            v33 = (unsigned int)v71;
            if ( (_DWORD)v71 )
            {
              do
              {
                *(__m128i *)&v10[v44] = _mm_loadu_si128((const __m128i *)&ptr[v44]);
                v44 += 2;
              }
              while ( v44 != 2LL * (unsigned int)v71 );
            }
            if ( ptr != &v72 && ptr )
              goto LABEL_70;
            goto LABEL_71;
          }
LABEL_54:
          v10 = ptr;
          goto LABEL_55;
        }
        if ( v21 > 2u )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( v21 )
        {
          v64 = __cxa_allocate_exception(1u);
          __cxa_throw(v64, (struct type_info *)&`typeinfo for'opt::context::is_fd::found_fd, nullptr);
        }
        if ( *(_DWORD *)(v16 + 24) )
        {
          v55 = (unsigned int)v71;
          if ( (unsigned int)v71 >= HIDWORD(v71) )
          {
            v10 = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v71)));
            v62 = 0;
            v55 = (unsigned int)v71;
            if ( (_DWORD)v71 )
            {
              do
              {
                *(__m128i *)&v10[v62] = _mm_loadu_si128((const __m128i *)&ptr[v62]);
                v62 += 2;
              }
              while ( 2LL * (unsigned int)v71 != v62 );
            }
            if ( ptr && ptr != &v72 )
            {
              sub_186B220(ptr);
              v55 = (unsigned int)v71;
            }
            ptr = v10;
            HIDWORD(v71) *= 2;
          }
          else
          {
            v10 = ptr;
          }
          v56 = &v10[2 * v55];
          *((_DWORD *)v56 + 2) = 0;
          v36 = (unsigned int)v71;
          *v56 = v16;
          v37 = v71 + 1;
LABEL_56:
          LODWORD(v71) = v37;
          result = (unsigned int)(v37 - 1);
          v4 = v10[2 * v36];
          continue;
        }
        v22 = *(int **)(*(_QWORD *)(v16 + 16) + 24LL);
        if ( v22 )
        {
          v23 = *v22;
          if ( v23 && *((_DWORD *)a1 + 4) != v23 && v23 != *((_DWORD *)a1 + 18) )
          {
            if ( v23 != -1 )
              goto LABEL_26;
LABEL_29:
            if ( !(unsigned __int8)sub_15D2CB0(*a1, v16) )
            {
              v53 = sub_15D1F10(v16);
              if ( !(unsigned __int8)sub_1673B10(a1 + 9, v53) )
              {
LABEL_26:
                v24 = __cxa_allocate_exception(1u);
                __cxa_throw(v24, (struct type_info *)&`typeinfo for'opt::context::is_fd::found_fd, nullptr);
              }
            }
          }
        }
        else if ( *((_DWORD *)a1 + 4) != -1 && *((_DWORD *)a1 + 18) != -1 )
        {
          goto LABEL_29;
        }
        v14 = *((_DWORD *)v11 + 2);
        goto LABEL_31;
      }
      break;
    }
LABEL_33:
    LODWORD(v71) = result;
    v25 = *(int **)(*(_QWORD *)(v4 + 16) + 24LL);
    if ( v25 )
    {
      v26 = *v25;
      if ( !*v25 )
        goto LABEL_42;
    }
    else
    {
      v26 = -1;
    }
    if ( *((_DWORD *)a1 + 4) != v26 && v26 != *((_DWORD *)a1 + 18) )
    {
      if ( *(_WORD *)(v4 + 4)
        || *(_DWORD *)(v4 + 24)
        || v25 && *v25 != -1
        || !(unsigned __int8)sub_15D2CB0(*a1, v4) && (v61 = sub_15D1F10(v4), !(unsigned __int8)sub_1673B10(a1 + 9, v61)) )
      {
        v27 = __cxa_allocate_exception(1u);
        __cxa_throw(v27, (struct type_info *)&`typeinfo for'opt::context::is_fd::found_fd, nullptr);
      }
      result = (unsigned int)v71;
    }
LABEL_42:
    v10 = ptr;
    if ( (_DWORD)result )
    {
      result = (unsigned int)(result - 1);
      v4 = ptr[2 * result];
      continue;
    }
    break;
  }
  if ( ptr )
  {
    result = (__int64)&v72;
    if ( ptr != &v72 )
      return sub_186B220(ptr);
  }
  return result;
}

