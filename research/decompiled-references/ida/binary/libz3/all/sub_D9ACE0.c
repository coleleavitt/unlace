double __fastcall sub_D9ACE0(int a1, __int64 *a2)
{
  __int64 v3; // rbx
  _OWORD *v4; // rax
  _OWORD *v5; // rax
  __int64 v6; // rdx
  char v7; // al
  unsigned int v8; // eax
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // edx
  __int64 *v15; // rax
  char *v16; // r13
  char *v17; // r15
  _DWORD *v18; // rdx
  _QWORD *v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rbp
  void *v25; // rdi
  char *v26; // rax
  _QWORD *v27; // r12
  _QWORD *v28; // r13
  __int64 v29; // r9
  int v30; // esi
  __int64 v31; // rax
  char *v32; // rcx
  __int64 v33; // rdx
  char *v34; // rdi
  char *i; // rax
  __int64 v36; // rdx
  double result; // xmm0_8
  _BYTE *v38; // rdi
  char *v39; // rcx
  char *v40; // rax
  __int64 v41; // rdx
  char *v42; // rbp
  char *v43; // r12
  __int64 v44; // r13
  void *v45; // rdi
  char *v46; // rax
  char *v47; // rbp
  char *v48; // r12
  __int64 v49; // r13
  void *v50; // rdi
  char *v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rsi
  unsigned int v54; // edx
  unsigned int v55; // eax
  size_t v56; // rbp
  __m128i *v57; // rax
  __m128i *v58; // r15
  __m128i *v59; // rdx
  const __m128i *v60; // rcx
  unsigned int v61; // ebp
  __int64 v62; // rax
  __m128i *v63; // r11
  __m128i *v64; // r10
  __int64 v65; // rax
  __m128i *v66; // rdx
  __m128i *v67; // rax
  unsigned int v68; // edx
  unsigned int v69; // ecx
  unsigned int v70; // ebp
  unsigned int *v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rbx
  char **exception; // r13
  int v75; // [rsp+10h] [rbp-198h]
  __int64 v76; // [rsp+10h] [rbp-198h]
  __int64 v77[4]; // [rsp+40h] [rbp-168h] BYREF
  int v78[2]; // [rsp+60h] [rbp-148h] BYREF
  void *v79; // [rsp+68h] [rbp-140h] BYREF
  __int64 v80; // [rsp+70h] [rbp-138h]
  int v81; // [rsp+78h] [rbp-130h]
  void *v82; // [rsp+80h] [rbp-128h] BYREF
  __int64 v83; // [rsp+88h] [rbp-120h]
  int v84; // [rsp+90h] [rbp-118h]
  char v85[24]; // [rsp+98h] [rbp-110h] BYREF
  char v86[24]; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v87; // [rsp+C8h] [rbp-E0h]
  void *v88; // [rsp+D0h] [rbp-D8h]
  void *ptr; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+E8h] [rbp-C0h]
  _BYTE v91[184]; // [rsp+F0h] [rbp-B8h] BYREF

  *(_QWORD *)v78 = *a2;
  v3 = *(_QWORD *)v78;
  v4 = (_OWORD *)sub_186B270(0x80u);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0;
  v79 = v4;
  v80 = 8;
  v81 = 0;
  v5 = (_OWORD *)sub_186B270(0x80u);
  v82 = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v83 = 8;
  v84 = 0;
  sub_16744A0(v85, v3);
  sub_1684300(v86, v3);
  v87 = 0;
  v6 = a2[9];
  v88 = nullptr;
  if ( v6 )
  {
    v7 = *(_BYTE *)(v6 + 3) >> 6;
    if ( v7 )
    {
      if ( v7 != 1 )
      {
LABEL_4:
        if ( v7 == 2 )
          v8 = *(_DWORD *)(v6 + 4) - 1;
        else
          v8 = *(_DWORD *)(v6 + 4);
        goto LABEL_6;
      }
    }
    else
    {
      do
      {
        v6 = *(_QWORD *)(v6 + 16);
        v7 = *(_BYTE *)(v6 + 3) >> 6;
      }
      while ( !v7 );
      if ( v7 != 1 )
        goto LABEL_4;
    }
    v8 = *(_DWORD *)(v6 + 4) + 1;
LABEL_6:
    v9 = v8;
    ptr = v91;
    v10 = 0;
    v90 = 0x1000000000LL;
    if ( !v8 )
      goto LABEL_20;
LABEL_10:
    v12 = *a2;
    if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
    {
      v11 = *(_QWORD *)(v12 + 864);
      goto LABEL_9;
    }
    v13 = a2[9];
    v14 = 17;
    while ( 1 )
    {
      if ( *(char *)(v13 + 3) >= 0 )
      {
        if ( *(_DWORD *)(v13 + 4) == (_DWORD)v10 )
        {
          v15 = (__int64 *)(v13 + 8);
LABEL_15:
          v11 = *v15;
LABEL_9:
          sub_D9A4C0((__int64)v78, (__int64)&ptr, v11);
          if ( ++v10 == v9 )
            goto LABEL_20;
          goto LABEL_10;
        }
      }
      else if ( *(_BYTE *)(v13 + 3) >> 6 != 2 )
      {
        v15 = (__int64 *)(*(_QWORD *)(v13 + 16) + 8 * v10);
        goto LABEL_15;
      }
      v13 = *(_QWORD *)(v13 + 16);
      if ( !--v14 )
      {
        sub_233F80((__int64 *)(v12 + 616), (_DWORD *)a2 + 18);
        v15 = (__int64 *)(*(_QWORD *)(a2[9] + 16) + 8 * v10);
        goto LABEL_15;
      }
    }
  }
  ptr = v91;
  v90 = 0x1000000000LL;
LABEL_20:
  v16 = (char *)v82;
  v17 = (char *)v82 + 16 * (unsigned int)v83;
  if ( v82 != v17 )
  {
    while ( *(_QWORD *)v16 <= 1u )
    {
      v16 += 16;
      if ( v17 == v16 )
        goto LABEL_53;
    }
    if ( v17 != v16 )
    {
      v18 = *(_DWORD **)v16;
      v19 = nullptr;
      do
      {
        if ( *v18 < (unsigned int)v87 && (*((_DWORD *)v88 + (*v18 >> 5)) & (1 << *v18)) != 0 )
        {
          if ( v19 )
          {
            v20 = *((_DWORD *)v19 - 1);
            if ( v20 == *((_DWORD *)v19 - 2) )
            {
              v68 = (3 * v20 + 1) >> 1;
              v69 = 8 * v68 + 8;
              v70 = v68;
              if ( 8 * v20 + 8 >= v69 || v20 >= v68 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v77, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v77);
                sub_233E40((__int64)v77);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v71 = (unsigned int *)sub_186B300(v19 - 1, v69);
              v72 = v71[1];
              v19 = v71 + 2;
              *v71 = v70;
              LODWORD(v71) = v72;
              v23 = &v19[v72];
              v18 = *(_DWORD **)v16;
              v22 = (_DWORD)v71 + 1;
            }
            else
            {
              v21 = v20;
              v22 = v20 + 1;
              v23 = &v19[v21];
            }
          }
          else
          {
            v73 = (_QWORD *)sub_186B270(0x18u);
            *v73 = 2;
            v18 = *(_DWORD **)v16;
            v22 = 1;
            v19 = v73 + 1;
            v23 = v19;
          }
          v24 = *((_QWORD *)v16 + 1);
          *v23 = v18;
          *((_DWORD *)v19 - 1) = v22;
          if ( v24 )
          {
            v25 = *(void **)(v24 + 24);
            if ( v25 )
              sub_186B220(v25);
            if ( *(_QWORD *)v24 )
              sub_186B220(*(void **)v24);
            sub_186B220((void *)v24);
          }
        }
        v26 = v16 + 16;
        if ( v17 == v16 + 16 )
          break;
        while ( 1 )
        {
          v18 = *(_DWORD **)v26;
          v16 = v26;
          if ( *(_QWORD *)v26 > 1u )
            break;
          v26 += 16;
          if ( v17 == v26 )
            goto LABEL_42;
        }
      }
      while ( v17 != v26 );
LABEL_42:
      if ( !v19 )
        goto LABEL_53;
      v27 = v19;
      v28 = &v19[*((unsigned int *)v19 - 1)];
      if ( v28 == v19 )
        goto LABEL_52;
      while ( 1 )
      {
LABEL_44:
        v29 = *v27;
        v30 = *(_DWORD *)(*v27 + 12LL);
        v31 = 16LL * (unsigned int)v83;
        v32 = (char *)v82 + v31;
        v33 = 16LL * (v30 & (unsigned int)(v83 - 1));
        v34 = (char *)v82 + v33;
        if ( v33 != v31 )
        {
          for ( i = (char *)v82 + v33; v32 != i; i += 16 )
          {
            v36 = *(_QWORD *)i;
            if ( *(_QWORD *)i > 1u )
            {
              if ( *(_DWORD *)(v36 + 12) == v30 && v29 == v36 )
              {
LABEL_102:
                v53 = i + 16;
                if ( v32 == i + 16 )
                  v53 = v82;
                v54 = HIDWORD(v83) - 1;
                if ( *v53 )
                {
                  *(_QWORD *)i = 1;
                  HIDWORD(v83) = v54;
                  v55 = v84 + 1;
                  if ( v54 < 0x40 )
                    v54 = 64;
                  ++v84;
                  if ( v54 < v55 && !(unsigned __int8)sub_186AF10(v34) )
                  {
                    v75 = v83;
                    v56 = 16LL * (unsigned int)v83;
                    v57 = (__m128i *)sub_186B270(v56);
                    v58 = v57;
                    v59 = &v57[v56 / 0x10];
                    if ( v75 )
                    {
                      if ( (v56 & 0x10) == 0 || (*v57 = 0, ++v57, v57 != v59) )
                      {
                        do
                        {
                          *v57 = 0;
                          v57 += 2;
                          v57[-1] = 0;
                        }
                        while ( v57 != v59 );
                      }
                    }
                    v60 = (const __m128i *)v82;
                    v61 = v83 - 1;
                    v62 = 16LL * (unsigned int)v83;
                    v63 = (__m128i *)((char *)v82 + v62);
                    v76 = v62;
                    v64 = &v58[(unsigned __int64)v62 / 0x10];
                    if ( v82 != (char *)v82 + v62 )
                    {
                      do
                      {
                        if ( v60->m128i_i64[0] > 1uLL )
                        {
                          v65 = 16LL * (*(_DWORD *)(v60->m128i_i64[0] + 12) & v61);
                          v66 = &v58[(unsigned __int64)v65 / 0x10];
                          if ( v76 == v65 )
                          {
LABEL_133:
                            if ( v58 == v66 )
                            {
LABEL_142:
                              sub_1872CE0("");
                              sub_1873130(114, 213);
                            }
                            v67 = v58;
                            while ( v67->m128i_i64[0] )
                            {
                              if ( v66 == ++v67 )
                                goto LABEL_142;
                            }
                          }
                          else
                          {
                            v67 = &v58[(unsigned __int64)v65 / 0x10];
                            while ( v67->m128i_i64[0] )
                            {
                              if ( v64 == ++v67 )
                                goto LABEL_133;
                            }
                          }
                          *v67 = _mm_loadu_si128(v60);
                        }
                        ++v60;
                      }
                      while ( v63 != v60 );
                      v63 = (__m128i *)v82;
                    }
                    if ( v63 )
                      sub_186B220(v63);
                    v82 = v58;
                    v84 = 0;
                  }
                  goto LABEL_51;
                }
                ++v27;
                *(_QWORD *)i = 0;
                HIDWORD(v83) = v54;
                if ( v28 != v27 )
                  goto LABEL_44;
LABEL_52:
                sub_186B220(v19 - 1);
                goto LABEL_53;
              }
            }
            else if ( !v36 )
            {
              goto LABEL_51;
            }
          }
        }
        if ( v82 != v34 )
          break;
LABEL_51:
        if ( v28 == ++v27 )
          goto LABEL_52;
      }
      i = (char *)v82;
      while ( 1 )
      {
        v52 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v52 + 12) == v30 && v29 == v52 )
            goto LABEL_102;
        }
        else if ( !v52 )
        {
          if ( v28 == ++v27 )
            goto LABEL_52;
          goto LABEL_44;
        }
        i += 16;
        if ( v34 == i )
          goto LABEL_51;
      }
    }
  }
LABEL_53:
  result = sub_D9EA60(&v79, &v82);
  v38 = ptr;
  v39 = (char *)ptr + 8 * (unsigned int)v90;
  v40 = (char *)ptr;
  if ( ptr != v39 )
  {
    do
    {
      v41 = *(_QWORD *)v40;
      v40 += 8;
      *(_BYTE *)(v41 + 6) &= ~1u;
    }
    while ( v40 != v39 );
  }
  LODWORD(v90) = 0;
  if ( v38 != v91 && v38 )
    sub_186B220(v38);
  v42 = (char *)v79;
  v43 = (char *)v79 + 16 * (unsigned int)v80;
  if ( v79 != v43 )
  {
    while ( *(_QWORD *)v42 <= 1u )
    {
      v42 += 16;
      if ( v43 == v42 )
        goto LABEL_72;
    }
    while ( v43 != v42 )
    {
      v44 = *((_QWORD *)v42 + 1);
      if ( v44 )
      {
        v45 = *(void **)(v44 + 24);
        if ( v45 )
          sub_186B220(v45);
        if ( *(_QWORD *)v44 )
          sub_186B220(*(void **)v44);
        sub_186B220((void *)v44);
      }
      v46 = v42 + 16;
      if ( v43 == v42 + 16 )
        break;
      while ( 1 )
      {
        v42 = v46;
        if ( *(_QWORD *)v46 > 1u )
          break;
        v46 += 16;
        if ( v43 == v46 )
          goto LABEL_72;
      }
    }
  }
LABEL_72:
  v47 = (char *)v82;
  v48 = (char *)v82 + 16 * (unsigned int)v83;
  if ( v82 != v48 )
  {
    while ( *(_QWORD *)v47 <= 1u )
    {
      v47 += 16;
      if ( v48 == v47 )
        goto LABEL_86;
    }
    while ( v48 != v47 )
    {
      v49 = *((_QWORD *)v47 + 1);
      if ( v49 )
      {
        v50 = *(void **)(v49 + 24);
        if ( v50 )
          sub_186B220(v50);
        if ( *(_QWORD *)v49 )
          sub_186B220(*(void **)v49);
        sub_186B220((void *)v49);
      }
      v51 = v47 + 16;
      if ( v48 == v47 + 16 )
        break;
      while ( 1 )
      {
        v47 = v51;
        if ( *(_QWORD *)v51 > 1u )
          break;
        v51 += 16;
        if ( v48 == v51 )
          goto LABEL_86;
      }
    }
  }
LABEL_86:
  if ( v88 )
    sub_186B220(v88);
  if ( v82 )
    sub_186B220(v82);
  if ( v79 )
    sub_186B220(v79);
  return result;
}

