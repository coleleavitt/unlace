__int64 __fastcall sub_2F55C0(__int64 a1, __int64 a2)
{
  void *v2; // rax
  void *v3; // rax
  void *v4; // rax
  void *v5; // rax
  void *exception; // rax
  __int64 v7; // r14
  unsigned __int16 v8; // dx
  int v9; // esi
  _DWORD *v10; // rax
  unsigned int v11; // ebx
  __int64 *v13; // r15
  __int64 v14; // rax
  char *v15; // rbx
  bool v16; // cc
  unsigned int v17; // r13d
  unsigned int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rbp
  char v21; // al
  int v22; // edx
  _QWORD *v23; // r9
  unsigned __int16 v24; // ax
  _DWORD *v25; // rax
  __int64 v26; // rdx
  int *v27; // rdx
  int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // edi
  __int64 v32; // r13
  char v33; // dl
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 *v36; // rdx
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 *v40; // rdi
  __int64 *v41; // rax
  __int64 v42; // rdx
  int v43; // edx
  __int64 *v44; // r15
  __int64 v45; // rdx
  __int64 *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rbx
  char *v50; // rdi
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  char *v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 *v62; // rax
  __int64 v63; // rbx
  char *v64; // rdi
  unsigned __int64 v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // [rsp+18h] [rbp-1E0h]
  __int64 *v68; // [rsp+20h] [rbp-1D8h]
  __int64 v69; // [rsp+28h] [rbp-1D0h]
  _QWORD v70[16]; // [rsp+30h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-148h]
  __int64 v72; // [rsp+B8h] [rbp-140h]
  __int64 v73; // [rsp+C0h] [rbp-138h] BYREF
  int v74; // [rsp+C8h] [rbp-130h]

  v7 = a2;
  v8 = *(_WORD *)(a2 + 4);
  if ( !v8 )
  {
    v9 = *(_DWORD *)(a2 + 24);
    v10 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
    if ( v9 )
    {
      if ( !v10 )
        goto LABEL_5;
      if ( *v10 )
        goto LABEL_5;
      if ( v10[1] != 8 )
        goto LABEL_5;
      if ( v9 != 1 )
        goto LABEL_5;
      v39 = *(_QWORD *)(v7 + 32);
      if ( *(_WORD *)(v39 + 4) || *(_DWORD *)(v39 + 24) )
        goto LABEL_5;
      v10 = *(_DWORD **)(*(_QWORD *)(v39 + 16) + 24LL);
    }
    if ( !v10 || *v10 == -1 )
      return 1;
  }
LABEL_5:
  v68 = v70;
  v69 = 0x1000000000LL;
  if ( *(_DWORD *)(v7 + 8) > 1u )
  {
    v11 = *(_BYTE *)(v7 + 6) & 1;
    if ( (*(_BYTE *)(v7 + 6) & 1) != 0 )
      return v11;
    *(_BYTE *)(v7 + 6) |= 1u;
    v70[0] = v7;
    LODWORD(v69) = 1;
  }
  v13 = &v73;
  v73 = v7;
  ptr = &v73;
  v74 = 0;
  v72 = 0x1000000001LL;
  LODWORD(v14) = 0;
LABEL_10:
  v15 = (char *)&v13[2 * (unsigned int)v14];
  v16 = v8 <= 2u;
  if ( v8 == 2 )
  {
LABEL_35:
    v29 = *(_DWORD *)(v7 + 72);
    v30 = *((_DWORD *)v15 + 2);
    v31 = v29 + *(_DWORD *)(v7 + 76) + 1;
    if ( v30 >= v31 )
      goto LABEL_130;
    if ( v30 )
      goto LABEL_41;
    v32 = *(_QWORD *)(v7 + 24);
    v30 = 1;
    *((_DWORD *)v15 + 2) = 1;
    if ( *(_DWORD *)(v32 + 8) > 1u )
    {
      while ( 1 )
      {
        v33 = *(_BYTE *)(v32 + 6);
        if ( (v33 & 1) == 0 )
          break;
        if ( v30 >= v31 )
        {
LABEL_130:
          LODWORD(v72) = v72 - 1;
          exception = __cxa_allocate_exception(1u);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'opt::context::is_propositional_fn::found, nullptr);
        }
        v29 = *(_DWORD *)(v7 + 72);
LABEL_41:
        v34 = v30 - 1;
        if ( v29 < v30 )
          v34 = (unsigned int)v34 - v29;
        ++v30;
        v32 = *(_QWORD *)(16LL * *(unsigned int *)(v7 + 20) + v7 + 8 * v34 + 80);
        *((_DWORD *)v15 + 2) = v30;
        if ( *(_DWORD *)(v32 + 8) <= 1u )
          goto LABEL_44;
      }
      *(_BYTE *)(v32 + 6) = v33 | 1;
      v43 = v69;
      if ( (unsigned int)v69 >= HIDWORD(v69) )
      {
        v53 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v69)));
        v43 = v69;
        v44 = (__int64 *)v53;
        if ( (_DWORD)v69 )
        {
          if ( (unsigned int)(v69 - 1) <= 2 || (__int64 *)v53 == v68 + 1 )
          {
            v60 = 0;
            do
            {
              v44[v60] = v68[v60];
              ++v60;
            }
            while ( (unsigned int)v69 != v60 );
          }
          else
          {
            v54 = 0;
            do
            {
              *(__m128i *)&v44[v54] = _mm_loadu_si128((const __m128i *)&v68[v54]);
              v54 += 2;
            }
            while ( v54 != 2LL * ((unsigned int)v69 >> 1) );
            if ( (v69 & 1) != 0 )
              v44[(unsigned int)v69 & 0xFFFFFFFE] = v68[(unsigned int)v69 & 0xFFFFFFFE];
          }
        }
        if ( v68 && v68 != v70 )
        {
          sub_186B220(v68);
          v43 = v69;
        }
        v68 = v44;
        HIDWORD(v69) *= 2;
      }
      else
      {
        v44 = v68;
      }
      v44[v43] = v32;
      LODWORD(v69) = v43 + 1;
    }
LABEL_44:
    v35 = (unsigned int)v72;
    if ( (unsigned int)v72 >= HIDWORD(v72) )
    {
      v49 = (unsigned int)(2 * HIDWORD(v72));
      v13 = (__int64 *)sub_186B270(16 * v49);
      v50 = (char *)ptr;
      v51 = 0;
      v35 = (unsigned int)v72;
      v52 = 16LL * (unsigned int)v72;
      if ( (_DWORD)v72 )
      {
        do
        {
          *(__m128i *)&v13[v51 / 8] = _mm_loadu_si128((const __m128i *)&v50[v51]);
          v51 += 16LL;
        }
        while ( v51 != v52 );
      }
      if ( v50 && v50 != (char *)&v73 )
      {
        sub_186B220(v50);
        v35 = (unsigned int)v72;
      }
      ptr = v13;
      HIDWORD(v72) = v49;
    }
    else
    {
      v13 = (__int64 *)ptr;
    }
    v36 = &v13[2 * v35];
    *v36 = v32;
    *((_DWORD *)v36 + 2) = 0;
    v37 = (unsigned int)v72;
    v38 = v72 + 1;
    goto LABEL_47;
  }
  while ( 1 )
  {
    if ( !v16 )
    {
      sub_1872CE0("");
      sub_1873130(114, 100);
    }
    if ( v8 )
    {
      v2 = __cxa_allocate_exception(1u);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'opt::context::is_propositional_fn::found, nullptr);
    }
    v17 = *(_DWORD *)(v7 + 24);
    v18 = *((_DWORD *)v15 + 2);
    if ( v18 < v17 )
    {
      while ( 1 )
      {
        v19 = v18++;
        v20 = *(_QWORD *)(v7 + 8 * v19 + 32);
        *((_DWORD *)v15 + 2) = v18;
        if ( *(_DWORD *)(v20 + 8) > 1u )
        {
          v21 = *(_BYTE *)(v20 + 6);
          if ( (v21 & 1) != 0 )
            goto LABEL_26;
          *(_BYTE *)(v20 + 6) = v21 | 1;
          v22 = v69;
          if ( (unsigned int)v69 >= HIDWORD(v69) )
          {
            v47 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v69)));
            v22 = v69;
            v23 = (_QWORD *)v47;
            if ( (_DWORD)v69 )
            {
              if ( (unsigned int)(v69 - 1) <= 2 || (__int64 *)v47 == v68 + 1 )
              {
                v59 = 0;
                do
                {
                  v23[v59] = v68[v59];
                  ++v59;
                }
                while ( (unsigned int)v69 != v59 );
              }
              else
              {
                v48 = 0;
                do
                {
                  *(__m128i *)&v23[v48] = _mm_loadu_si128((const __m128i *)&v68[v48]);
                  v48 += 2;
                }
                while ( v48 != 2LL * ((unsigned int)v69 >> 1) );
                if ( (v69 & 1) != 0 )
                  v23[(unsigned int)v69 & 0xFFFFFFFE] = v68[(unsigned int)v69 & 0xFFFFFFFE];
              }
            }
            if ( v68 != v70 && v68 )
            {
              v67 = v23;
              sub_186B220(v68);
              v22 = v69;
              v23 = v67;
            }
            v68 = v23;
            HIDWORD(v69) *= 2;
          }
          else
          {
            v23 = v68;
          }
          v23[v22] = v20;
          LODWORD(v69) = v22 + 1;
        }
        v24 = *(_WORD *)(v20 + 4);
        if ( v24 == 2 )
        {
          v45 = (unsigned int)v72;
          if ( (unsigned int)v72 >= HIDWORD(v72) )
          {
            v55 = (unsigned int)(2 * HIDWORD(v72));
            v13 = (__int64 *)sub_186B270(16 * v55);
            v56 = (char *)ptr;
            v57 = 0;
            v45 = (unsigned int)v72;
            v58 = 16LL * (unsigned int)v72;
            if ( (_DWORD)v72 )
            {
              do
              {
                *(__m128i *)&v13[v57 / 8] = _mm_loadu_si128((const __m128i *)&v56[v57]);
                v57 += 16LL;
              }
              while ( v58 != v57 );
            }
            if ( v56 != (char *)&v73 && v56 )
            {
              sub_186B220(v56);
              v45 = (unsigned int)v72;
            }
            ptr = v13;
            HIDWORD(v72) = v55;
          }
          else
          {
            v13 = (__int64 *)ptr;
          }
          v46 = &v13[2 * v45];
          *v46 = v20;
          *((_DWORD *)v46 + 2) = 0;
          v37 = (unsigned int)v72;
          v38 = v72 + 1;
LABEL_47:
          LODWORD(v72) = v38;
          LODWORD(v14) = v38 - 1;
          v7 = v13[2 * v37];
          v8 = *(_WORD *)(v7 + 4);
          goto LABEL_10;
        }
        if ( v24 > 2u )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( v24 )
        {
          v3 = __cxa_allocate_exception(1u);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'opt::context::is_propositional_fn::found, nullptr);
        }
        if ( *(_DWORD *)(v20 + 24) )
        {
          v61 = (unsigned int)v72;
          if ( (unsigned int)v72 >= HIDWORD(v72) )
          {
            v63 = (unsigned int)(2 * HIDWORD(v72));
            v13 = (__int64 *)sub_186B270(16 * v63);
            v64 = (char *)ptr;
            v65 = 0;
            v61 = (unsigned int)v72;
            v66 = 16LL * (unsigned int)v72;
            if ( (_DWORD)v72 )
            {
              do
              {
                *(__m128i *)&v13[v65 / 8] = _mm_loadu_si128((const __m128i *)&v64[v65]);
                v65 += 16LL;
              }
              while ( v65 != v66 );
            }
            if ( v64 && v64 != (char *)&v73 )
            {
              sub_186B220(v64);
              v61 = (unsigned int)v72;
            }
            ptr = v13;
            HIDWORD(v72) = v63;
          }
          else
          {
            v13 = (__int64 *)ptr;
          }
          v62 = &v13[2 * v61];
          *((_DWORD *)v62 + 2) = 0;
          v37 = (unsigned int)v72;
          *v62 = v20;
          v38 = v37 + 1;
          goto LABEL_47;
        }
        v25 = *(_DWORD **)(*(_QWORD *)(v20 + 16) + 24LL);
        if ( v25 && (unsigned int)(*v25 + 1) > 1 )
        {
          v4 = __cxa_allocate_exception(1u);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'opt::context::is_propositional_fn::found, nullptr);
        }
        v18 = *((_DWORD *)v15 + 2);
LABEL_26:
        if ( v18 >= v17 )
        {
          LODWORD(v14) = v72 - 1;
          break;
        }
      }
    }
    v26 = *(_QWORD *)(v7 + 16);
    LODWORD(v72) = v14;
    v27 = *(int **)(v26 + 24);
    if ( v27 )
    {
      v28 = *v27;
      if ( v28 && (*(_WORD *)(v7 + 4) || *(_DWORD *)(v7 + 24) || v28 != -1) )
        goto LABEL_129;
    }
    else if ( *(_WORD *)(v7 + 4) || *(_DWORD *)(v7 + 24) )
    {
LABEL_129:
      v5 = __cxa_allocate_exception(1u);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'opt::context::is_propositional_fn::found, nullptr);
    }
    if ( !(_DWORD)v14 )
      break;
    v14 = (unsigned int)(v14 - 1);
    v7 = *((_QWORD *)ptr + 2 * v14);
    v8 = *(_WORD *)(v7 + 4);
    v15 = (char *)ptr + 16 * (unsigned int)v14;
    v16 = v8 <= 2u;
    if ( v8 == 2 )
      goto LABEL_35;
  }
  if ( ptr && ptr != &v73 )
    sub_186B220(ptr);
  v11 = 1;
  v40 = &v68[(unsigned int)v69];
  if ( v68 != v40 )
  {
    v41 = v68;
    do
    {
      v42 = *v41++;
      *(_BYTE *)(v42 + 6) &= ~1u;
    }
    while ( v40 != v41 );
    v40 = v68;
  }
  if ( v68 && v68 != v70 )
    sub_186B220(v40);
  return v11;
}

