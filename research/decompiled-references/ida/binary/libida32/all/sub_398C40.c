__int64 __fastcall sub_398C40(__int64 *a1, const char *a2, int a3)
{
  const char *v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // rbp
  char *v8; // rax
  char *v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r14
  char *v13; // r15
  char v14; // bp
  const char *v15; // r15
  unsigned int v16; // ebx
  bool v17; // bp
  int v18; // eax
  unsigned __int8 v19; // r14
  size_t v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdi
  size_t v24; // rbx
  const char *v25; // rsi
  int v26; // ebx
  __int64 v27; // rdi
  _QWORD *v28; // rdx
  int v29; // ebp
  unsigned __int8 v30; // al
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  size_t v35; // r14
  void *v36; // r15
  const char *v37; // rsi
  size_t v38; // rax
  size_t v39; // r12
  size_t v40; // rbp
  const char *v41; // rsi
  __int64 v42; // rdi
  __m128i *v43; // rax
  size_t v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // ebx
  unsigned int v47; // eax
  unsigned int v48; // ebx
  unsigned int v49; // eax
  int v50; // ebp
  char **v51; // r14
  char *v52; // r15
  char **v53; // rbp
  __int64 v54; // rax
  const char *v55; // [rsp+8h] [rbp-C0h]
  char v56; // [rsp+10h] [rbp-B8h]
  __int64 v57; // [rsp+10h] [rbp-B8h]
  char v58; // [rsp+10h] [rbp-B8h]
  char *s; // [rsp+18h] [rbp-B0h]
  char *sa; // [rsp+18h] [rbp-B0h]
  void *v61; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v62; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  __int128 v64; // [rsp+48h] [rbp-80h]
  _BYTE v65[16]; // [rsp+60h] [rbp-68h] BYREF
  char v66[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v67; // [rsp+88h] [rbp-40h]

  v4 = a2;
  v5 = *a1;
  v67 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v5 + 1336);
  if ( a3 == 1 && *(_BYTE *)(v5 + 156) && !(unsigned __int8)sub_615160(v5, 45, 16) )
    return 1;
  if ( a2 )
  {
    v8 = strchr(a2, 58);
    v55 = v8;
    v9 = v8;
    if ( v8 )
    {
      v10 = (_DWORD)v8 - (_DWORD)a2;
      v11 = v10 + 1;
      v4 = v65;
      if ( (unsigned __int64)v10 >= 0x10 )
        v11 = 16;
      qstrncpy(v65, a2, v11);
      v55 = v9 + 1;
    }
    if ( a3 == 1 && *(_BYTE *)(*a1 + 156) )
    {
      if ( !sub_6141A0(*a1, 1, v66, 16) )
        v66[0] = 0;
      ptr = nullptr;
      v64 = 0;
      v35 = strlen(v66);
      ptr = (void *)qvector_reserve(&ptr, 0, v35 + 1, 1);
      *(_QWORD *)&v64 = v35 + 1;
      memmove(ptr, v66, v35);
      *((_BYTE *)ptr + v35) = 0;
      v36 = ptr;
      v37 = (const char *)ptr;
      if ( !(_QWORD)v64 )
        v37 = haystack;
      if ( strcasecmp(v4, v37) )
      {
        if ( v36 )
        {
          *(_QWORD *)&v64 = 0;
          qfree(v36);
        }
        return 1;
      }
      if ( v36 )
      {
        *(_QWORD *)&v64 = 0;
        qfree(v36);
      }
    }
    v56 = 0;
    if ( !*(_QWORD *)(v7 + 40) )
    {
      v56 = sub_398820(*a1, (__int64)v4, a3);
      if ( !v56 )
        goto LABEL_71;
    }
    v12 = *(_QWORD *)(a1[2] + 24);
    s = (char *)v12;
    v13 = *(char **)v12;
    if ( *(_QWORD *)v12 )
    {
      while ( 1 )
      {
        v14 = *v13;
        v15 = &v13[*v13 == 45];
        if ( !strcasecmp(v4, v15) )
          break;
        v13 = *(char **)(v12 + 8);
        v12 += 8;
        if ( !v13 )
          goto LABEL_76;
      }
      v16 = (v12 - (__int64)s) >> 3;
      if ( v16 != -1 )
      {
        v17 = v14 == 45;
        if ( !v56 )
        {
          if ( sub_375980(2u, v16, 0) >= 0 )
            goto LABEL_74;
          goto LABEL_94;
        }
LABEL_15:
        v18 = *(_DWORD *)(*a1 + 152);
        if ( v18 == 2 )
        {
          v19 = 0;
        }
        else
        {
          if ( !v18 )
          {
            if ( !under_debugger )
              interr(1392);
            goto LABEL_116;
          }
          v19 = 1;
        }
        v57 = *a1;
        v20 = strlen(v15);
        v21 = 16;
        if ( v20 <= 0x10 )
          v21 = v20;
        sub_6160D0(v57, 1, v15, v21);
        sub_5E4A10(*(_DWORD *)(*a1 + 1480) + 40);
        v22 = *a1;
        if ( *(_DWORD *)(*a1 + 152) == 2 )
        {
          sub_612F90(v22, 1);
LABEL_22:
          if ( sub_375980(2u, v16, v19) >= 0 )
          {
            v23 = *a1;
            v56 = 1;
            if ( *(_DWORD *)(*a1 + 152) != 2 || (v54 = a1[2], !*(_DWORD *)(v54 + 4)) )
            {
LABEL_24:
              sub_506B70(v23, 0);
              if ( !sub_6141A0(*a1, 1, v66, 16) )
                v66[0] = 0;
              ptr = nullptr;
              v64 = 0;
              v24 = strlen(v66);
              ptr = (void *)qvector_reserve(&ptr, 0, v24 + 1, 1);
              *(_QWORD *)&v64 = v24 + 1;
              memmove(ptr, v66, v24);
              *((_BYTE *)ptr + v24) = 0;
              v25 = (const char *)ptr;
              if ( !(_QWORD)v64 )
                v25 = haystack;
              sa = (char *)ptr;
              v26 = strcasecmp(v15, v25);
              if ( sa )
              {
                *(_QWORD *)&v64 = 0;
                qfree(sa);
              }
              if ( v26 )
                sub_365330();
              if ( !v17 )
              {
                v44 = strlen(v15);
                v45 = 16;
                if ( v44 <= 0x10 )
                  v45 = v44;
                sub_6160D0(*a1, 1, v15, v45);
              }
              if ( a3 == 3 )
              {
                *(_BYTE *)(*a1 + 156) = 1;
                v46 = sub_614FB0(*a1, 20);
                v47 = sub_614FB0(*a1, 19);
                sub_3A1A90(a1, v47, v46, 40);
                v48 = sub_614FB0(*a1, 20);
                v49 = sub_614FB0(*a1, 19);
                sub_3A1A90(a1, v49, v48, 200);
              }
              if ( byte_2CA15CB )
                goto LABEL_43;
              v27 = *a1;
              v28 = *(_QWORD **)(a1[2] + 40);
              if ( *v28 )
              {
                v29 = 0;
                do
                  ++v29;
                while ( v28[v29] );
                if ( (unsigned __int8)sub_614FB0(v27, 8) < v29 )
                {
LABEL_39:
                  v30 = sub_614FB0(*a1, 8);
                  v31 = *(_QWORD **)(a1[2] + 40);
                  v32 = (__int64)&v31[v30 + 1];
                  while ( *v31 )
                  {
                    if ( ++v31 == (_QWORD *)v32 )
                    {
                      sub_395D40(a1, v30);
                      break;
                    }
                  }
LABEL_43:
                  sub_4B4170(*a1);
                  if ( v56 )
                  {
                    v33 = *a1;
                    if ( a3 == 1 && *(_DWORD *)(v33 + 152) != 2 )
                      sub_375320((__int64)"set_processor_type() is called too early!");
                    sub_663600(v33);
                    if ( !v55 || sub_375980(9u, v55, 1) >= 0 )
                    {
                      if ( !byte_2CA15CB )
                        init_plugins(64);
                      return 1;
                    }
                  }
                  else if ( !v55 || sub_375980(9u, v55, 1) >= 0 )
                  {
                    return 1;
                  }
                  sub_375320((__int64)"Processor module '%s' did not accept the option string '%s'", v15, v55);
                }
              }
              else
              {
                sub_614FB0(v27, 8);
              }
              sub_615AB0(*a1, 8, 0);
              goto LABEL_39;
            }
            sub_616920(v23, 3, 2, (~*(_BYTE *)(v54 + 8) & 6) == 0);
            sub_5ED560(a1, 0);
LABEL_74:
            v23 = *a1;
            goto LABEL_24;
          }
LABEL_94:
          v42 = *a1;
          goto LABEL_78;
        }
        if ( (unsigned __int8)sub_61B4F0(v22, 0) )
          goto LABEL_22;
        if ( !under_debugger )
          interr(1394);
LABEL_116:
        BUG();
      }
      v4 = v15;
    }
LABEL_76:
    v42 = *a1;
    if ( *(_DWORD *)(*a1 + 152) != 2 )
    {
      if ( !v56 )
      {
LABEL_78:
        v61 = nullptr;
        v62 = 0;
        if ( a3 != 3 && *(_BYTE *)(v42 + 156) )
        {
          if ( !sub_6141A0(v42, 1, v66, 16) )
            v66[0] = 0;
          ptr = nullptr;
          v64 = 0;
          v38 = strlen(v66);
          v39 = v38 + 1;
          v40 = v38;
          ptr = (void *)qvector_reserve(&ptr, 0, v38 + 1, 1);
          *(_QWORD *)&v64 = v39;
          memmove(ptr, v66, v40);
          *((_BYTE *)ptr + v40) = 0;
          sub_3573A0((char **)&v61);
          if ( ptr )
          {
            *(_QWORD *)&v64 = 0;
            qfree(ptr);
          }
        }
        else
        {
          if ( *(_DWORD *)(v42 + 152) == 2 )
          {
            ptr = nullptr;
            v64 = 0;
LABEL_67:
            sub_3573A0((char **)&ptr);
            v41 = haystack;
            if ( a3 != 1 )
              sub_375400();
            if ( (_QWORD)v64 )
              v41 = (const char *)ptr;
            sub_396160((__int64)&unk_22B285A, v41);
          }
          v43 = (__m128i *)qvector_reserve(&v61, 0, 54, 1);
          v61 = v43;
          *(_QWORD *)&v62 = 54;
          *v43 = _mm_load_si128((const __m128i *)&xmmword_2383730);
          v43[1] = _mm_load_si128((const __m128i *)&xmmword_2383740);
          v43[2] = _mm_load_si128((const __m128i *)&xmmword_2383750);
          *(__int64 *)((char *)&v43[2].m128i_i64[1] + 5) = 0x726F737365636F72LL;
          *((_BYTE *)v61 + 53) = 0;
        }
        ptr = nullptr;
        v64 = 0;
        goto LABEL_67;
      }
      goto LABEL_106;
    }
    v50 = *(_DWORD *)(*(_QWORD *)(v42 + 1480) + 1552LL);
    sub_6634C0(v42);
    *((_BYTE *)a1 + 2233) = 1;
    LODWORD(ptr) = v50;
    netnode_kill((int)&ptr);
    if ( !(unsigned __int8)sub_398820(*a1, (__int64)v4, a3) )
    {
LABEL_71:
      if ( a3 == 1 )
        sub_396160(0);
      return 0;
    }
    v51 = *(char ***)(a1[2] + 24);
    v52 = *v51;
    v53 = v51;
    if ( !*v51 )
      goto LABEL_106;
    while ( 1 )
    {
      v58 = *v52;
      v15 = &v52[*v52 == 45];
      if ( !strcasecmp(v4, v15) )
        break;
      v52 = v53[1];
      ++v53;
      if ( !v52 )
        goto LABEL_106;
    }
    v16 = v53 - v51;
    if ( v16 == -1 )
    {
LABEL_106:
      if ( !under_debugger )
        interr(1395);
      goto LABEL_116;
    }
    v17 = v58 == 45;
    goto LABEL_15;
  }
  return 0;
}

