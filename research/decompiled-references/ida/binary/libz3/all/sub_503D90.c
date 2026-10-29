__int64 __fastcall sub_503D90(__int64 *a1, _QWORD *a2)
{
  char **v2; // r13
  char **v3; // r13
  char **v4; // r13
  char **exception; // rbx
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // r13
  __int64 result; // rax
  __int64 v13; // rsi
  int v14; // edi
  unsigned int v15; // r13d
  unsigned int v16; // ebx
  _QWORD *v17; // rdx
  int v18; // r15d
  _QWORD *v19; // rdx
  __int64 v20; // rbp
  unsigned int *v21; // rax
  __int64 v22; // rsi
  unsigned int *v23; // rcx
  unsigned int *v24; // rbp
  unsigned int v25; // eax
  int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int *v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // r14
  int v32; // r15d
  unsigned int v33; // r15d
  unsigned int v34; // r13d
  __int64 v35; // rbx
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  _DWORD *v38; // rcx
  int v39; // r9d
  unsigned int *v40; // rbx
  int v41; // esi
  __int64 v42; // rax
  unsigned int v43; // r8d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // r8
  unsigned int v47; // r15d
  unsigned int j; // edx
  unsigned int v49; // r10d
  size_t v50; // rsi
  unsigned int *v51; // rax
  unsigned int v52; // r13d
  _QWORD *v53; // rax
  unsigned int v54; // edx
  size_t v55; // rsi
  unsigned int v56; // r14d
  unsigned int *v57; // rax
  unsigned int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned int i; // edx
  unsigned int v62; // r13d
  unsigned int v63; // edx
  size_t v64; // rsi
  unsigned int v65; // r15d
  unsigned int *v66; // rax
  unsigned int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // [rsp+0h] [rbp-98h]
  _QWORD *v72; // [rsp+0h] [rbp-98h]
  _QWORD *v73; // [rsp+0h] [rbp-98h]
  int v74; // [rsp+0h] [rbp-98h]
  unsigned int v75; // [rsp+0h] [rbp-98h]
  unsigned int v76; // [rsp+0h] [rbp-98h]
  __int64 v77; // [rsp+0h] [rbp-98h]
  _QWORD *v78; // [rsp+0h] [rbp-98h]
  _QWORD *v79; // [rsp+8h] [rbp-90h]
  __int64 v80; // [rsp+8h] [rbp-90h]
  unsigned int v81; // [rsp+8h] [rbp-90h]
  unsigned int v82; // [rsp+8h] [rbp-90h]
  unsigned int v83; // [rsp+8h] [rbp-90h]
  _QWORD *v84; // [rsp+10h] [rbp-88h]
  int v85; // [rsp+10h] [rbp-88h]
  unsigned int v86; // [rsp+10h] [rbp-88h]
  __int64 v87; // [rsp+10h] [rbp-88h]
  unsigned int v88; // [rsp+10h] [rbp-88h]
  _QWORD *v89; // [rsp+18h] [rbp-80h]
  unsigned int v90; // [rsp+18h] [rbp-80h]
  unsigned int v91; // [rsp+24h] [rbp-74h]
  __int64 *v92; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v93; // [rsp+48h] [rbp-50h]

  v8 = *a1;
  if ( *a1 )
  {
    v9 = (_DWORD *)*a1;
    v10 = *(unsigned int *)(v8 - 4);
    while ( v9 != (_DWORD *)(v8 + 4 * v10) )
    {
      if ( *v9++ )
      {
        v92 = a1;
        goto LABEL_12;
      }
    }
  }
  result = a1[1];
  if ( !result )
    return result;
  v13 = result + 4LL * *(unsigned int *)(result - 4);
  do
  {
    if ( result == v13 )
      return result;
    v14 = *(_DWORD *)result;
    result += 4;
  }
  while ( !v14 );
  v92 = a1;
  if ( v8 )
  {
    LODWORD(v10) = *(_DWORD *)(v8 - 4);
LABEL_12:
    v15 = 32 * v10;
    v71 = a2;
    HIDWORD(v93) = v15;
    LODWORD(v93) = 0;
    sub_313A20(&v92);
    v92 = a1;
    v16 = v93;
    v17 = v71;
  }
  else
  {
    v78 = a2;
    v15 = 0;
    v93 = 0;
    sub_313A20(&v92);
    v92 = a1;
    v16 = v93;
    v17 = v78;
  }
  v72 = v17;
  v93 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v15), 224).m128i_u64[0];
  sub_313A20(&v92);
  v18 = v93;
  v19 = v72;
  if ( (_DWORD)v93 == v16 )
  {
    v24 = nullptr;
    goto LABEL_51;
  }
  v20 = *v72;
  v21 = (unsigned int *)(sub_186B270(0x10u) + 8);
  v22 = *a1;
  v19 = v72;
  *((_QWORD *)v21 - 1) = 2;
  v23 = (unsigned int *)(v20 + 4LL * v16);
  v24 = v21;
  while ( 1 )
  {
    ++v16;
    *v21 = *v23;
    ++*(v24 - 1);
    if ( v16 != v15 )
      break;
    while ( 1 )
    {
      if ( v22 )
      {
        v25 = v16 >> 5;
        if ( v16 >> 5 < *(_DWORD *)(v22 - 4) )
          goto LABEL_48;
      }
LABEL_31:
      if ( v18 == v16 )
        goto LABEL_51;
LABEL_32:
      v29 = (unsigned int *)(*v19 + 4LL * v16);
      v30 = *(v24 - 1);
      if ( (_DWORD)v30 == *(v24 - 2) )
        break;
      ++v16;
      v24[v30] = *v29;
      ++*(v24 - 1);
      if ( v16 != v15 )
        goto LABEL_16;
    }
    v43 = (unsigned int)(3 * v30 + 1) >> 1;
    v44 = 4 * v43 + 8;
    if ( 4 * (int)v30 + 8 >= (unsigned int)v44 || (unsigned int)v30 >= v43 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)&v92, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v92);
      sub_233E40((__int64)&v92);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v84 = v19;
    v80 = *v19 + 4LL * v16;
    v75 = (unsigned int)(3 * v30 + 1) >> 1;
    v45 = (unsigned int *)sub_186B300(v24 - 2, v44);
    v24 = v45 + 2;
    v22 = *a1;
    v23 = (unsigned int *)v80;
    v19 = v84;
    *v45 = v75;
    v21 = &v45[v45[1] + 2];
  }
LABEL_16:
  if ( !v22 )
  {
    while ( (v16 & 0x1F) != 0 )
    {
      if ( ++v16 == v15 )
        goto LABEL_31;
    }
    if ( v16 == v15 )
      goto LABEL_31;
    v25 = v16 >> 5;
    v26 = *(_DWORD *)(4LL * (v16 >> 5));
    goto LABEL_24;
  }
  while ( 1 )
  {
    v25 = v16 >> 5;
    if ( v16 >> 5 < *(_DWORD *)(v22 - 4) && (*(_DWORD *)(v22 + 4LL * v25) & (1 << (v16 & 0x1F))) != 0 )
      break;
    if ( (v16 & 0x1F) == 0 )
      break;
    if ( v15 == ++v16 )
    {
      v25 = v15 >> 5;
      if ( v15 >> 5 >= *(_DWORD *)(v22 - 4) )
        goto LABEL_31;
      goto LABEL_48;
    }
  }
  if ( v25 >= *(_DWORD *)(v22 - 4) )
  {
    if ( v15 == v16 )
      goto LABEL_31;
    goto LABEL_23;
  }
LABEL_48:
  v26 = *(_DWORD *)(v22 + 4LL * v25);
  if ( (v26 & (1 << v16)) != 0 )
    goto LABEL_31;
  if ( v15 != v16 )
  {
    while ( 1 )
    {
LABEL_24:
      if ( v26 )
      {
        if ( v16 == v15 )
          goto LABEL_31;
        v27 = v16 >> 5;
        if ( v22 )
        {
          if ( (unsigned int)v27 < *(_DWORD *)(v22 - 4) )
          {
            if ( (*(_DWORD *)(v22 + 4 * v27) & (1 << v16)) == 0 && ++v16 == v15 )
              goto LABEL_31;
          }
          else if ( v15 == ++v16 )
          {
            goto LABEL_31;
          }
          do
          {
            v28 = v16 >> 5;
            if ( (unsigned int)v28 < *(_DWORD *)(v22 - 4) && (*(_DWORD *)(v22 + 4 * v28) & (1 << (v16 & 0x1F))) != 0 )
              break;
            if ( (v16 & 0x1F) == 0 )
              break;
            ++v16;
          }
          while ( v15 != v16 );
        }
        else
        {
          do
            ++v16;
          while ( v16 != v15 && (v16 & 0x1F) != 0 );
        }
        goto LABEL_31;
      }
      v16 += 32;
      ++v25;
      if ( v16 == v15 )
        goto LABEL_31;
LABEL_23:
      v26 = *(_DWORD *)(v22 + 4LL * v25);
    }
  }
  if ( v18 != v16 )
    goto LABEL_32;
LABEL_51:
  v31 = (_QWORD *)a1[1];
  v73 = v19;
  v92 = a1 + 1;
  if ( v31 )
  {
    v32 = *((_DWORD *)v31 - 1);
    LODWORD(v93) = 0;
    v33 = 32 * v32;
    HIDWORD(v93) = v33;
  }
  else
  {
    v33 = 0;
    v93 = 0;
  }
  sub_313A20(&v92);
  v92 = a1 + 1;
  v34 = v93;
  v79 = v73;
  v93 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v33), 224).m128i_u64[0];
  result = sub_313A20(&v92);
  v74 = v93;
  if ( (_DWORD)v93 != v34 )
  {
    v35 = *v79;
    v36 = (_QWORD *)sub_186B270(0x10u);
    v31 = (_QWORD *)a1[1];
    v37 = v79;
    *v36 = 2;
    v38 = (_DWORD *)(v35 + 4LL * v34);
    v39 = v74;
    v40 = (unsigned int *)(v36 + 1);
    result = (__int64)(v36 + 1);
    while ( 1 )
    {
      ++v34;
      *(_DWORD *)result = *v38;
      ++*(v40 - 1);
      if ( v34 != v33 )
        break;
      if ( !v31 )
        goto LABEL_71;
      result = v34 >> 5;
      if ( (unsigned int)result >= *((_DWORD *)v31 - 1) )
        goto LABEL_71;
LABEL_91:
      v41 = *((_DWORD *)v31 + (unsigned int)result);
      if ( (v41 & (1 << v34)) != 0 )
        goto LABEL_71;
      if ( v33 != v34 )
      {
LABEL_64:
        while ( !v41 )
        {
          v34 += 32;
          result = (unsigned int)(result + 1);
          if ( v34 == v33 )
            goto LABEL_71;
LABEL_63:
          v41 = *((_DWORD *)v31 + (unsigned int)result);
        }
        if ( v34 != v33 )
        {
          result = v34 >> 5;
          if ( !v31 )
          {
            if ( v33 != ++v34 )
            {
              do
              {
                if ( (v34 & 0x1F) == 0 )
                  break;
                ++v34;
              }
              while ( v34 != v33 );
            }
            goto LABEL_71;
          }
          if ( (unsigned int)result < *((_DWORD *)v31 - 1) )
          {
            if ( (*((_DWORD *)v31 + result) & (1 << v34)) != 0 || (++v34, v34 != v33) )
            {
              do
              {
LABEL_69:
                result = v34 >> 5;
                if ( (unsigned int)result < *((_DWORD *)v31 - 1)
                  && (*((_DWORD *)v31 + result) & (1 << (v34 & 0x1F))) != 0 )
                {
                  break;
                }
                if ( (v34 & 0x1F) == 0 )
                  break;
                ++v34;
              }
              while ( v33 != v34 );
            }
          }
          else if ( v33 != ++v34 )
          {
            goto LABEL_69;
          }
        }
LABEL_71:
        if ( v34 == v39 )
          goto LABEL_94;
        goto LABEL_72;
      }
      if ( v34 == v39 )
      {
LABEL_94:
        v46 = *a1;
        if ( *a1 )
          goto LABEL_95;
LABEL_96:
        if ( v24 )
          goto LABEL_97;
        if ( v31 )
        {
LABEL_149:
          *((_DWORD *)v31 - 1) = 0;
          if ( !v40 )
            return result;
LABEL_130:
          if ( *(v40 - 1) )
          {
            v90 = *v40;
            v88 = *v40 >> 5;
            if ( !v31 )
            {
              v62 = (*v40 >> 5) + 1;
              v70 = (_QWORD *)sub_186B270(0x10u);
              v31 = v70 + 1;
              *v70 = 2;
              a1[1] = (__int64)(v70 + 1);
              v83 = 0;
              v91 = 0;
              goto LABEL_140;
            }
            v83 = 0;
            for ( i = *v40 >> 5; ; i = v90 >> 5 )
            {
              v62 = i + 1;
              v91 = *((_DWORD *)v31 - 1);
              if ( i >= v91 )
              {
LABEL_140:
                while ( 1 )
                {
                  v67 = *((_DWORD *)v31 - 2);
                  if ( v67 >= v62 )
                    break;
                  v63 = (3 * v67 + 1) >> 1;
                  v64 = 4 * v63 + 8;
                  v65 = v63;
                  if ( 4 * v67 + 8 >= (unsigned int)v64 || v67 >= v63 )
                  {
                    v2 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)&v92, "Overflow encountered when expanding vector");
                    *v2 = (char *)off_1C63128;
                    sub_2333C0(v2 + 1, &v92);
                    sub_233E40((__int64)&v92);
                    __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v66 = (unsigned int *)sub_186B300(v31 - 1, v64);
                  v31 = v66 + 2;
                  *v66 = v65;
                  a1[1] = (__int64)(v66 + 2);
                }
                *((_DWORD *)v31 - 1) = v62;
                v68 = 4LL * v62;
                v69 = 4LL * v91;
                if ( v69 != v68 )
                  memset((char *)v31 + v69, 0, v68 - v69);
              }
              ++v83;
              *((_DWORD *)v31 + v88) |= 1 << v90;
              if ( v83 >= *(v40 - 1) )
                break;
              v90 = v40[v83];
              v88 = v90 >> 5;
            }
          }
          result = sub_186B220(v40 - 2);
          if ( v24 )
            return sub_186B220(v24 - 2);
        }
        else if ( v40 )
        {
          goto LABEL_130;
        }
        return result;
      }
LABEL_72:
      v38 = (_DWORD *)(*v37 + 4LL * v34);
      v42 = *(v40 - 1);
      if ( (_DWORD)v42 == *(v40 - 2) )
      {
        v49 = (unsigned int)(3 * v42 + 1) >> 1;
        v50 = 4 * v49 + 8;
        if ( 4 * (int)v42 + 8 >= (unsigned int)v50 || (unsigned int)v42 >= v49 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v92, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, &v92);
          sub_233E40((__int64)&v92);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v89 = v37;
        v85 = v39;
        v82 = (unsigned int)(3 * v42 + 1) >> 1;
        v77 = *v37 + 4LL * v34;
        v51 = (unsigned int *)sub_186B300(v40 - 2, v50);
        v40 = v51 + 2;
        v31 = (_QWORD *)a1[1];
        v38 = (_DWORD *)v77;
        v39 = v85;
        *v51 = v82;
        v37 = v89;
        result = (__int64)&v51[v51[1] + 2];
      }
      else
      {
        result = (__int64)&v40[v42];
      }
    }
    if ( v31 )
    {
      do
      {
        result = v34 >> 5;
        if ( (unsigned int)result < *((_DWORD *)v31 - 1)
          && (*((_DWORD *)v31 + (unsigned int)result) & (1 << (v34 & 0x1F))) != 0
          || (v34 & 0x1F) == 0 )
        {
          if ( (unsigned int)result < *((_DWORD *)v31 - 1) )
            goto LABEL_91;
          if ( v33 == v34 )
            goto LABEL_71;
          goto LABEL_63;
        }
        ++v34;
      }
      while ( v33 != v34 );
      result = v33 >> 5;
      if ( (unsigned int)result < *((_DWORD *)v31 - 1) )
        goto LABEL_91;
    }
    else
    {
      if ( (v34 & 0x1F) == 0 )
        goto LABEL_86;
      while ( ++v34 != v33 )
      {
        if ( (v34 & 0x1F) == 0 )
        {
LABEL_86:
          if ( v34 != v33 )
          {
            result = v34 >> 5;
            v41 = *(_DWORD *)(4 * result);
            goto LABEL_64;
          }
          goto LABEL_71;
        }
      }
    }
    goto LABEL_71;
  }
  v46 = *a1;
  v40 = nullptr;
  if ( *a1 )
  {
LABEL_95:
    *(_DWORD *)(v46 - 4) = 0;
    goto LABEL_96;
  }
  if ( v24 )
  {
LABEL_97:
    if ( *(v24 - 1) )
    {
      v81 = *v24;
      v76 = *v24 >> 5;
      if ( !v46 )
      {
        v52 = (*v24 >> 5) + 1;
        v53 = (_QWORD *)sub_186B270(0x10u);
        v46 = (__int64)(v53 + 1);
        *v53 = 2;
        v47 = 0;
        *a1 = (__int64)(v53 + 1);
        v86 = 0;
        goto LABEL_113;
      }
      v47 = 0;
      for ( j = *v24 >> 5; ; j = v81 >> 5 )
      {
        v52 = j + 1;
        v86 = *(_DWORD *)(v46 - 4);
        if ( j >= v86 )
        {
LABEL_113:
          while ( 1 )
          {
            v58 = *(_DWORD *)(v46 - 8);
            if ( v58 >= v52 )
              break;
            v54 = (3 * v58 + 1) >> 1;
            v55 = 4 * v54 + 8;
            v56 = v54;
            if ( 4 * v58 + 8 >= (unsigned int)v55 || v58 >= v54 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v92, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, &v92);
              sub_233E40((__int64)&v92);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v57 = (unsigned int *)sub_186B300((void *)(v46 - 8), v55);
            v46 = (__int64)(v57 + 2);
            *v57 = v56;
            *a1 = (__int64)(v57 + 2);
          }
          *(_DWORD *)(v46 - 4) = v52;
          v59 = 4LL * v52;
          v60 = 4LL * v86;
          if ( v60 != v59 )
          {
            v87 = v46;
            memset((void *)(v46 + v60), 0, v59 - v60);
            v46 = v87;
          }
        }
        ++v47;
        *(_DWORD *)(v46 + 4LL * v76) |= 1 << v81;
        if ( v47 >= *(v24 - 1) )
          break;
        v81 = v24[v47];
        v76 = v81 >> 5;
      }
    }
    v31 = (_QWORD *)a1[1];
    if ( v31 )
    {
      *((_DWORD *)v31 - 1) = 0;
      if ( v40 )
        goto LABEL_130;
    }
    else if ( v40 )
    {
      goto LABEL_130;
    }
    return sub_186B220(v24 - 2);
  }
  if ( v31 )
    goto LABEL_149;
  return result;
}

