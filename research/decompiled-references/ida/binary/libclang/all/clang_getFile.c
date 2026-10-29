__int64 __fastcall clang_getFile(__int64 a1, const char *a2)
{
  __int64 v2; // rbp
  int v3; // eax
  _QWORD *v5; // r12
  _QWORD **v6; // rbx
  _QWORD **v7; // r13
  _QWORD *v8; // rbp
  _QWORD *v9; // r15
  char v10; // al
  unsigned __int8 (__fastcall *v11)(_QWORD *, char *); // rcx
  __int64 *v12; // r14
  __int64 *i; // rax
  __int64 *v14; // rcx
  char *v15; // rax
  char *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // rbp
  _QWORD *v30; // rcx
  _BYTE *v31; // rbx
  char v32; // bp
  pthread_mutex_t *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rsi
  bool v41; // cf
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r14
  _QWORD *v44; // rax
  _QWORD *v45; // r8
  _QWORD *v46; // rbp
  char *v47; // rax
  _QWORD *v48; // rsi
  __int64 v49; // rdi
  __int64 *v50; // [rsp+8h] [rbp-90h]
  __int64 *v51; // [rsp+8h] [rbp-90h]
  __int64 v52; // [rsp+8h] [rbp-90h]
  __int64 v53; // [rsp+8h] [rbp-90h]
  char *v54; // [rsp+8h] [rbp-90h]
  _QWORD *v55; // [rsp+8h] [rbp-90h]
  char *v56; // [rsp+18h] [rbp-80h]
  _QWORD *v57; // [rsp+20h] [rbp-78h] BYREF
  _QWORD *v58; // [rsp+28h] [rbp-70h] BYREF
  __int64 v59; // [rsp+30h] [rbp-68h] BYREF
  char v60; // [rsp+38h] [rbp-60h]
  _QWORD *v61; // [rsp+40h] [rbp-58h] BYREF
  char v62; // [rsp+48h] [rbp-50h]
  void *v63; // [rsp+50h] [rbp-48h] BYREF

  if ( a1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    v3 = 0;
    if ( a2 )
      v3 = strlen(a2);
    sub_C7CB00((unsigned int)&v59, v2, (_DWORD)a2, v3, 0, 1, 1);
    if ( (v60 & 1) == 0 )
    {
      v62 = 1;
      v61 = (_QWORD *)v59;
      return v59;
    }
    v5 = (_QWORD *)v59;
    v59 = 0;
    if ( v5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, char *))(*v5 + 48LL))(v5, &byte_4AE4FBB) )
      {
        v6 = (_QWORD **)v5[1];
        v7 = (_QWORD **)v5[2];
        if ( v6 != v7 )
        {
          v8 = nullptr;
          do
          {
            v9 = *v6;
            *v6 = nullptr;
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, int *))(*v9 + 48LL))(v9, &dword_4AE4FBC) )
            {
              if ( !v8 )
                goto LABEL_37;
              v10 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v8 + 48LL))(v8, &byte_4AE4FBB);
              v11 = *(unsigned __int8 (__fastcall **)(_QWORD *, char *))(*v9 + 48LL);
              if ( !v10 )
              {
                if ( !v11(v9, &byte_4AE4FBB) )
                {
                  v27 = operator new(0x20u);
                  v57 = v8;
                  *(_QWORD *)(v27 + 8) = 0;
                  v28 = v27;
                  v27 += 8;
                  *(_QWORD *)(v27 + 8) = 0;
                  *(_QWORD *)(v27 + 16) = 0;
                  *(_QWORD *)(v27 - 8) = &off_49D93B0;
                  v52 = v27;
                  sub_6255A0(v27, (__int64 *)&v57);
                  v29 = (__int64)v57;
                  v30 = *(_QWORD **)(v28 + 16);
                  if ( *(_QWORD **)(v28 + 24) == v30 )
                  {
                    v58 = v9;
                    sub_6255A0(v52, (__int64 *)&v58);
                    v38 = (__int64)v58;
                    if ( v29 )
                    {
                      v53 = (__int64)v58;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
                      v38 = v53;
                    }
                    if ( v38 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
                  }
                  else
                  {
                    *v30 = v9;
                    *(_QWORD *)(v28 + 16) += 8LL;
                    if ( v29 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
                  }
                  v8 = (_QWORD *)v28;
                  goto LABEL_26;
                }
                v15 = (char *)v9[1];
                v16 = (char *)v9[2];
                v56 = v15;
                if ( v16 == (char *)v9[3] )
                {
                  v39 = (v16 - v15) >> 3;
                  if ( v39 == 0xFFFFFFFFFFFFFFFLL )
                    std::__throw_length_error("vector::_M_realloc_insert");
                  v40 = 1;
                  if ( v39 )
                    v40 = v39;
                  v41 = __CFADD__(v40, v39);
                  v42 = v40 + v39;
                  if ( v41 )
                  {
                    v43 = 0xFFFFFFFFFFFFFFFLL;
                  }
                  else
                  {
                    if ( v42 > 0xFFFFFFFFFFFFFFFLL )
                      v42 = 0xFFFFFFFFFFFFFFFLL;
                    v43 = v42;
                  }
                  v54 = (char *)v9[2];
                  v44 = (_QWORD *)operator new(v43 * 8);
                  *v44 = v8;
                  v45 = v44;
                  v46 = v44 + 1;
                  v47 = v56;
                  if ( v56 != v54 )
                  {
                    v48 = v46;
                    do
                    {
                      v49 = *(_QWORD *)v47;
                      v47 += 8;
                      *v48++ = v49;
                      *((_QWORD *)v47 - 1) = 0;
                    }
                    while ( v54 != v47 );
                    v46 = (_QWORD *)((char *)v46 + v54 - v56);
                  }
                  if ( v56 )
                  {
                    v55 = v45;
                    operator delete(v56, v9[3] - (_QWORD)v56);
                    v45 = v55;
                  }
                  v9[1] = v45;
                  v9[2] = v46;
                  v9[3] = &v45[v43];
                }
                else if ( v15 == v16 )
                {
                  *(_QWORD *)v15 = v8;
                  v9[2] += 8LL;
                }
                else
                {
                  v17 = v9[1];
                  v18 = *((_QWORD *)v16 - 1);
                  *((_QWORD *)v16 - 1) = 0;
                  *(_QWORD *)v16 = v18;
                  v19 = v9[2];
                  v20 = v19 + 8;
                  v21 = (__int64 *)(v19 - 8);
                  v9[2] = v20;
                  v22 = ((__int64)v21 - v17) >> 3;
                  if ( (__int64)v21 - v17 > 0 )
                  {
                    do
                    {
                      v23 = *(v21 - 1);
                      v24 = *v21--;
                      *v21 = 0;
                      v21[1] = v23;
                      if ( v24 )
                      {
                        v51 = v21;
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
                        v21 = v51;
                      }
                      --v22;
                    }
                    while ( v22 );
                  }
                  v25 = *(_QWORD *)v56;
                  *(_QWORD *)v56 = v8;
                  if ( v25 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
                }
LABEL_37:
                v8 = v9;
                goto LABEL_26;
              }
              if ( !v11(v9, &byte_4AE4FBB) )
              {
                v26 = (_QWORD *)v8[2];
                if ( v26 == (_QWORD *)v8[3] )
                {
                  v61 = v9;
                  sub_6255A0((__int64)(v8 + 1), (__int64 *)&v61);
                  if ( v61 )
                    (*(void (__fastcall **)(_QWORD *))(*v61 + 8LL))(v61);
                }
                else
                {
                  *v26 = v9;
                  v8[2] += 8LL;
                }
                goto LABEL_26;
              }
              v12 = (__int64 *)v9[2];
              for ( i = (__int64 *)v9[1]; v12 != i; ++i )
              {
                v14 = (__int64 *)v8[2];
                if ( v14 == (__int64 *)v8[3] )
                {
                  v50 = i;
                  sub_6255A0((__int64)(v8 + 1), i);
                  i = v50;
                }
                else
                {
                  *v14 = *i;
                  *i = 0;
                  v8[2] += 8LL;
                }
              }
            }
            (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
LABEL_26:
            ++v6;
          }
          while ( v7 != v6 );
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, int *))(*v5 + 48LL))(v5, &dword_4AE4FBC);
      }
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      if ( (v60 & 1) != 0 )
      {
        if ( v59 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 8LL))(v59);
      }
    }
    return 0;
  }
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v31 = (_BYTE *)qword_4AD21C8;
  v32 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
    v32 = *v31 == 50;
  sub_5FF1E0((__int64 *)&v63, "clang_getFile", 0xDu, v32);
  v33 = (pthread_mutex_t *)v63;
  if ( !v63 )
    return 0;
  v34 = *((_QWORD *)v63 + 21);
  if ( (unsigned __int64)(*((_QWORD *)v63 + 20) - v34) <= 0x15 )
  {
    sub_26240F0((char *)v63 + 136, "called with a bad TU: ", 22);
  }
  else
  {
    *(__m128i *)v34 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
    *(_QWORD *)(v34 + 14) = 0x203A555420646162LL;
    *(&v33[4].__align + 1) += 22;
  }
  sub_5FF0F0((__int64)(&v33[3].__align + 2), "<NULL TU>");
  if ( v33->__lock-- != 1 )
    return 0;
  sub_60C330(v33, (__int64 (*)())"<NULL TU>", v35, v36);
  operator delete(v33, 0xC0u);
  return 0;
}

