char *__fastcall sub_793DC0(__int64 a1, unsigned int a2, int a3, unsigned int a4, char a5, __int64 a6)
{
  unsigned int v9; // ebx
  unsigned int v10; // eax
  bool v11; // cl
  unsigned __int8 v12; // r13
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdi
  char v16; // bl
  __int64 v17; // rax
  __int64 v18; // rbp
  char *v19; // r13
  size_t v20; // r12
  __int64 v21; // r13
  __int64 v22; // r12
  char *v23; // rbp
  void *v24; // rdi
  void *v25; // rdi
  unsigned __int16 *v27; // rax
  __int64 v28; // rdx
  unsigned __int16 *i; // r8
  unsigned __int8 v30; // al
  char *v31; // rdi
  size_t v32; // rbp
  size_t v33; // rdx
  __int64 v34; // rsi
  unsigned int v35; // edi
  __int64 v36; // rax
  __int64 (*v37)(); // r9
  char v38; // bp
  char *v39; // rcx
  const void *v40; // rsi
  int v41; // eax
  char *v42; // rdi
  char *v43; // rbp
  __int64 v44; // rsi
  __int64 v45; // rdi
  char v46; // al
  __int64 v47; // rcx
  __int64 (*v48)(); // r9
  char v49; // al
  __int64 v50; // rbp
  __int64 v51; // rbx
  char *v52; // rdx
  char *v53; // rax
  void *v54; // rdi
  __int64 v55; // rax
  char *v56; // rbp
  char *v57; // rax
  void *v58; // rsi
  void *v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rax
  void *v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rdx
  char *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdi
  __m128i v68; // xmm0
  bool v71; // [rsp+8h] [rbp-F0h]
  unsigned int v72; // [rsp+8h] [rbp-F0h]
  char v74; // [rsp+Ch] [rbp-ECh]
  __int64 v75; // [rsp+10h] [rbp-E8h]
  char *src; // [rsp+18h] [rbp-E0h]
  char *srca; // [rsp+18h] [rbp-E0h]
  char *srcd; // [rsp+18h] [rbp-E0h]
  char *srcb; // [rsp+18h] [rbp-E0h]
  unsigned int srcc; // [rsp+18h] [rbp-E0h]
  void *srce; // [rsp+18h] [rbp-E0h]
  unsigned int v82; // [rsp+20h] [rbp-D8h]
  char v83; // [rsp+20h] [rbp-D8h]
  int v84; // [rsp+24h] [rbp-D4h]
  unsigned __int8 v85; // [rsp+28h] [rbp-D0h]
  unsigned __int16 *v86; // [rsp+28h] [rbp-D0h]
  unsigned __int16 *v87; // [rsp+30h] [rbp-C8h]
  __int64 v88; // [rsp+30h] [rbp-C8h]
  unsigned __int16 *v89; // [rsp+30h] [rbp-C8h]
  unsigned __int8 v91; // [rsp+3Bh] [rbp-BDh]
  unsigned __int32 v92; // [rsp+3Ch] [rbp-BCh]
  void *ptr; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v94; // [rsp+48h] [rbp-B0h]
  void *s; // [rsp+60h] [rbp-98h] BYREF
  __int128 v96; // [rsp+68h] [rbp-90h]
  void *v97; // [rsp+80h] [rbp-78h] BYREF
  __int128 v98; // [rsp+88h] [rbp-70h]
  void *v99; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v100; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v101; // [rsp+B8h] [rbp-40h]

  v9 = a2;
  v101 = __readfsqword(0x28u);
  v84 = a4 - a2;
  v10 = a2 + a3;
  v11 = a4 >= a2 + a3 || a2 >= a4;
  v12 = v11;
  if ( a6 )
  {
    v13 = *(_QWORD *)(a6 + 8);
    if ( v13 )
    {
      v75 = *(_QWORD *)(v13 + 1544);
      v71 = v75 != a1;
    }
    else
    {
      v75 = a1;
      v71 = 0;
    }
    ptr = nullptr;
    v94 = 0;
    v12 = v71 || v11;
    if ( v71 || v11 )
    {
      v14 = *(_DWORD *)(a6 + 24);
      if ( v14 == 1 )
      {
        v83 = a5 | (2 * v71);
        v10 = a2;
      }
      else
      {
        v82 = a4 + a3;
        if ( v14 != 2 )
          goto LABEL_7;
        s = nullptr;
        v96 = 0;
        *(_WORD *)(v75 + 45) = 5;
        *(_DWORD *)(v75 + 48) = _byteswap_ulong(a4);
        v97 = nullptr;
        v98 = 0;
        sub_723E90(*(_QWORD *)v75, (unsigned __int16 *)(v75 + 45));
        v91 = v12;
LABEL_38:
        sub_720F20(*(_QWORD *)v75);
        for ( i = v27; v27; i = v27 )
        {
          srca = (char *)v27 - 1;
          if ( v27 == (unsigned __int16 *)((char *)&dword_0 + 1) )
            break;
          if ( *((_BYTE *)i + 2) != 46 )
            break;
          v28 = v82;
          v92 = _byteswap_ulong(*(_DWORD *)((char *)i + 3));
          if ( v92 >= v82 )
            break;
          if ( *i <= 5u )
          {
            if ( !under_debugger )
              interr(2095);
            goto LABEL_101;
          }
          v30 = *((_BYTE *)i + 7);
          v31 = (char *)s;
          *(_QWORD *)&v96 = 0;
          v85 = v30;
          v32 = *i + 3LL;
          v33 = v32;
          if ( *((_QWORD *)&v96 + 1) < v32 )
          {
            v89 = i;
            s = (void *)qvector_reserve(&s, s, v32, 1);
            i = v89;
            v33 = v32 - v96;
            v31 = (char *)s + v96;
          }
          v87 = i;
          memset(v31, 0, v33);
          *(_QWORD *)&v96 = v32;
          memcpy(s, srca, v32);
          v34 = *(_QWORD *)a6;
          v35 = v85;
          v36 = *v87;
          if ( (_DWORD)v36 == 7 )
          {
            v47 = *((unsigned __int8 *)v87 + 8);
          }
          else
          {
            if ( (_DWORD)v36 != 10 )
            {
              v37 = *(__int64 (**)())(v34 + 24);
              v38 = 0;
              if ( v37 != sub_417500 )
              {
                v86 = v87;
                v49 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, char *))v37)(a6, v92, v35, srca);
                goto LABEL_67;
              }
              goto LABEL_48;
            }
            v47 = _byteswap_ulong(*((_DWORD *)v87 + 2));
          }
          v48 = *(__int64 (**)())(v34 + 16);
          v38 = 0;
          if ( v48 != sub_4174F0 )
          {
            v86 = v87;
            v49 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64))v48)(a6, v92, v35, v47);
LABEL_67:
            v38 = v49;
            v36 = *v86;
          }
LABEL_48:
          v39 = (char *)s;
          if ( (_QWORD)v96 != v36 + 3 || (v40 = srca, srcd = (char *)s, v41 = memcmp(s, v40, v36 + 3), v39 = srcd, v41) )
            sub_723E90(*(_QWORD *)v75, (unsigned __int16 *)(v39 + 1));
          if ( v38 )
          {
            v55 = v98;
            if ( *((_QWORD *)&v98 + 1) < (unsigned __int64)(v98 + 1) )
            {
              srce = *((void **)&v98 + 1);
              v61 = qvector_reserve(&v97, 0, v98 + 1, 24);
              v62 = v97;
              v56 = (char *)v61;
              v63 = *((_QWORD *)&v98 + 1);
              v64 = v61;
              *((_QWORD *)&v98 + 1) = srce;
              v65 = (char *)v97;
              v66 = v98 - 1;
              if ( (__int64)v98 - 1 >= 0 )
              {
                do
                {
                  v67 = *(_QWORD *)v65;
                  v68 = _mm_loadu_si128((const __m128i *)(v65 + 8));
                  v64 += 24;
                  v65 += 24;
                  *((_QWORD *)v65 - 3) = 0;
                  *(_QWORD *)(v64 - 24) = v67;
                  *(__m128i *)(v64 - 16) = v68;
                  *((_QWORD *)v65 - 1) = 0;
                }
                while ( v66-- != 0 );
                v62 = v97;
              }
              qfree(v62);
              v97 = v56;
              v55 = v98;
              *((_QWORD *)&v98 + 1) = v63;
            }
            else
            {
              v56 = (char *)v97;
            }
            v57 = &v56[24 * v55];
            *(_QWORD *)v57 = 0;
            v58 = s;
            *(_OWORD *)(v57 + 8) = 0;
            *(_QWORD *)&v98 = v98 + 1;
            v59 = *(void **)v57;
            *(_QWORD *)v57 = v58;
            v60 = *((_QWORD *)v57 + 1);
            s = v59;
            *((_QWORD *)v57 + 1) = v96;
            *(_QWORD *)&v96 = v60;
            *((_QWORD *)v57 + 2) = *((_QWORD *)&v96 + 1);
            *((_QWORD *)&v96 + 1) = 0;
            goto LABEL_38;
          }
          v91 = 0;
          sub_720F20(*(_QWORD *)v75);
        }
        v42 = (char *)v97;
        if ( v91 )
        {
          if ( v97 )
            goto LABEL_71;
          if ( s )
          {
            *(_QWORD *)&v96 = 0;
            qfree(s);
          }
          goto LABEL_7;
        }
        srcb = (char *)v97 + 24 * v98;
        if ( srcb != v97 )
        {
          v43 = (char *)v97;
          do
          {
            v44 = *(_QWORD *)v43;
            v45 = *(_QWORD *)v75;
            if ( *(_BYTE *)(*(_QWORD *)v75 + 5988LL)
              && (v88 = *(_QWORD *)v43, v46 = must_journal(v45, v44, v28), v44 = v88, v46) )
            {
              v99 = nullptr;
              v100 = 0;
              if ( (unsigned __int8)sub_71A170(v45, (_WORD *)(v88 + 1), (__int64)&v99) )
                add_undo_record(1, v99, v100);
              if ( v99 )
              {
                *(_QWORD *)&v100 = 0;
                qfree(v99);
              }
            }
            else
            {
              sub_71A170(v45, (_WORD *)(v44 + 1), 0);
            }
            v43 += 24;
          }
          while ( srcb != v43 );
          v42 = (char *)v97;
        }
        if ( v42 )
        {
LABEL_71:
          if ( (_QWORD)v98 )
          {
            srcc = v9;
            v50 = 0;
            v51 = v98;
            v52 = v42;
            do
            {
              v53 = &v52[24 * v50];
              v54 = *(void **)v53;
              if ( *(_QWORD *)v53 )
              {
                *((_QWORD *)v53 + 1) = 0;
                qfree(v54);
                v52 = (char *)v97;
              }
              ++v50;
            }
            while ( v51 != v50 );
            v9 = srcc;
            v42 = v52;
          }
          *(_QWORD *)&v98 = 0;
          qfree(v42);
          if ( s )
          {
            *(_QWORD *)&v96 = 0;
            qfree(s);
          }
          if ( !v91 )
            goto LABEL_8;
LABEL_7:
          sub_792B80((char *)v75, a4, v82);
          goto LABEL_8;
        }
        if ( s )
        {
          *(_QWORD *)&v96 = 0;
          qfree(s);
        }
LABEL_8:
        if ( a5 )
        {
          if ( v71 )
          {
            v83 = 3;
            v12 = v71;
          }
          else
          {
            v83 = 1;
          }
          v10 = v9;
        }
        else
        {
          v83 = 2 * v71;
          v10 = v9;
        }
      }
    }
    else
    {
      if ( *(_DWORD *)(a6 + 24) != 1 )
      {
        if ( !under_debugger )
          interr(2139);
LABEL_101:
        BUG();
      }
      v83 = a5;
    }
  }
  else
  {
    ptr = nullptr;
    v94 = 0;
    v75 = a1;
    v83 = a5;
    if ( v11 )
      v10 = a2;
  }
  *(_DWORD *)(a1 + 48) = _byteswap_ulong(v10);
  v15 = *(_QWORD *)a1;
  *(_WORD *)(a1 + 45) = 5;
  sub_723E90(v15, (unsigned __int16 *)(a1 + 45));
  src = nullptr;
  v74 = v12;
  v72 = v9 + (a3 & -v12);
  do
  {
    v16 = sub_792DD0(a1, (__int64 *)&ptr, v72, v74, a6);
    v17 = v94;
    if ( (_QWORD)v94 )
    {
      if ( a5 )
      {
        sub_793720((char *)a1, (__int64 **)&ptr);
        v17 = v94;
      }
      v18 = 0;
      v19 = (char *)ptr + 48 * v17 - 48;
      v20 = *((_QWORD *)v19 + 1);
      if ( v20 )
      {
        v18 = qalloc_or_throw(*((_QWORD *)v19 + 1), (const char *)&ptr);
        memcpy((void *)v18, *(const void **)v19, v20);
      }
      sub_793770(v75, (__int64)&ptr, v84, v83, (_QWORD *)a6);
      src += v94;
      sub_723E90(*(_QWORD *)a1, (unsigned __int16 *)(v18 + 1));
      if ( v18 )
        qfree((void *)v18);
      v21 = v94;
      if ( (_QWORD)v94 )
      {
        v22 = 0;
        do
        {
          v23 = (char *)ptr + 48 * v22;
          v24 = *((void **)v23 + 3);
          if ( v24 )
          {
            *((_QWORD *)v23 + 4) = 0;
            qfree(v24);
          }
          v25 = *(void **)v23;
          if ( *(_QWORD *)v23 )
          {
            *((_QWORD *)v23 + 1) = 0;
            qfree(v25);
          }
          ++v22;
        }
        while ( v21 != v22 );
      }
    }
    *(_QWORD *)&v94 = 0;
  }
  while ( v16 );
  if ( ptr )
    qfree(ptr);
  return src;
}

