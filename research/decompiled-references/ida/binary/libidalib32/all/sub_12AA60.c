unsigned __int64 __fastcall sub_12AA60(__int64 a1, __int64 *a2, int a3)
{
  const char *v3; // r15
  const char *v4; // r13
  void (__fastcall **v6)(__int64 *, __int64, int *); // rax
  _QWORD *v8; // rcx
  __int64 v9; // rbp
  size_t v10; // r14
  char *v11; // rax
  const void *v12; // rsi
  __int64 srclang_parser; // rax
  __int64 v14; // rbp
  void (__fastcall *v15)(void **); // rax
  void (__fastcall **v17)(__int64 *, __int64, const char **); // rax
  __int64 v18; // r14
  __int64 v19; // r12
  const char *v20; // rsi
  const char *v21; // rdx
  char *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rax
  char *v25; // rdx
  __int64 v26; // rax
  unsigned __int8 v27; // al
  __int64 v28; // r12
  size_t v29; // r14
  void *v30; // r13
  void (__fastcall *v31)(__int64 *, __int64, _QWORD); // [rsp+0h] [rbp-B8h]
  unsigned __int8 v32; // [rsp+8h] [rbp-B0h]
  __int64 v33; // [rsp+8h] [rbp-B0h]
  int v34; // [rsp+1Ch] [rbp-9Ch] BYREF
  const char *v35; // [rsp+20h] [rbp-98h] BYREF
  size_t v36; // [rsp+28h] [rbp-90h]
  size_t v37; // [rsp+30h] [rbp-88h]
  const char *v38; // [rsp+40h] [rbp-78h] BYREF
  __int128 v39; // [rsp+48h] [rbp-70h]
  void *dest; // [rsp+60h] [rbp-58h] BYREF
  __int128 v41; // [rsp+68h] [rbp-50h]
  unsigned __int64 v42; // [rsp+78h] [rbp-40h]

  v3 = nullptr;
  v4 = s1;
  v6 = (void (__fastcall **)(__int64 *, __int64, int *))*a2;
  v42 = __readfsqword(0x28u);
  v34 = 0;
  (*v6)(a2, 19, &v34);
  v8 = *(_QWORD **)(a1 + 160);
  v37 = 0;
  v9 = *v8 + 24LL * v34;
  v10 = *(_QWORD *)(v9 + 8);
  if ( v10 )
  {
    v11 = (char *)qalloc_or_throw();
    v12 = *(const void **)v9;
    v37 = v10;
    v4 = v11;
    memcpy(v11, v12, v10);
    v3 = v4;
  }
  srclang_parser = find_srclang_parser();
  v14 = srclang_parser;
  if ( !srclang_parser )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  if ( a3 == 19 )
  {
    v38 = nullptr;
    v39 = 0;
    sub_1262D0((__int64 *)&v38, *(_DWORD *)(srclang_parser + 24));
    v21 = s1;
    if ( (_QWORD)v39 )
      v21 = v38;
    (*(void (__fastcall **)(__int64 *, __int64, const char *))(*a2 + 8))(a2, 20, v21);
    dest = nullptr;
    v35 = v3;
    v36 = v10;
    v41 = 0;
    v32 = sub_126420((__int64 *)&dest, (__int64)&v35);
    (*(void (__fastcall **)(__int64 *, __int64, void **))(*a2 + 104))(a2, 23, &dest);
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a2 + 16))(a2, 23, v32);
    v22 = (char *)dest;
    if ( dest )
    {
      v23 = v41;
      if ( (_QWORD)v41 )
      {
        v24 = 0;
        do
        {
          v25 = &v22[24 * v24];
          if ( *(_QWORD *)v25 )
          {
            *((_QWORD *)v25 + 1) = 0;
            v33 = v24;
            qfree();
            v22 = (char *)dest;
            v24 = v33;
          }
          ++v24;
        }
        while ( v23 != v24 );
      }
      *(_QWORD *)&v41 = 0;
      qfree();
    }
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree();
    }
  }
  else if ( a3 == -1 )
  {
    v26 = *a2;
    v35 = v3;
    v36 = v10;
    v31 = *(void (__fastcall **)(__int64 *, __int64, _QWORD))(v26 + 16);
    v27 = sub_126420(nullptr, (__int64)&v35);
    v31(a2, 23, v27);
  }
  (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 13, (*(_DWORD *)(v14 + 8) & 1) == 0);
  (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 21, *(_QWORD *)(v14 + 48) != 0);
  (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 22, *(_QWORD *)(v14 + 56) != 0);
  dest = nullptr;
  v41 = 0;
  v15 = *(void (__fastcall **)(void **))(v14 + 48);
  if ( !v15 )
  {
    (*(void (__fastcall **)(__int64 *, __int64, void **))(*a2 + 8))(a2, 21, &dest);
    if ( a3 != 23 )
      goto LABEL_10;
LABEL_16:
    v35 = v3;
    v36 = v10;
    if ( (unsigned __int8)sub_126420(nullptr, (__int64)&v35) )
    {
      v17 = (void (__fastcall **)(__int64 *, __int64, const char **))*a2;
      LODWORD(v38) = 0;
      (*v17)(a2, 23, &v38);
      v18 = qword_252E60;
      v19 = qword_252E60 + 48 * xmmword_252E68;
      if ( qword_252E60 != v19 )
      {
        while ( 1 )
        {
          v20 = s1;
          if ( *(_QWORD *)(v18 + 8) )
            v20 = *(const char **)v18;
          if ( !strcmp(v4, v20) )
            break;
          v18 += 48;
          if ( v19 == v18 )
            goto LABEL_25;
        }
        if ( v18 != v19 && (unsigned __int64)(int)v38 < *(_QWORD *)(v18 + 32) )
        {
          v28 = *(_QWORD *)(v18 + 24) + 48LL * (int)v38;
          v29 = *(_QWORD *)(v28 + 32);
          if ( v29 )
          {
            v30 = (void *)qalloc_or_throw();
            memcpy(v30, *(const void **)(v28 + 24), v29);
            if ( v29 != 1 )
            {
              if ( *((_QWORD *)&v41 + 1) < v29 )
                dest = (void *)qvector_reserve();
              *(_QWORD *)&v41 = v29;
              memmove(dest, v30, v29 - 1);
              *((char *)dest + v29 - 1) = 0;
            }
            if ( v30 )
              qfree();
          }
        }
      }
LABEL_25:
      (*(void (__fastcall **)(__int64 *, __int64, void **))(*a2 + 8))(a2, 21, &dest);
    }
    goto LABEL_10;
  }
  if ( a3 == -1 )
    goto LABEL_12;
  v15(&dest);
  (*(void (__fastcall **)(__int64 *, __int64, void **))(*a2 + 8))(a2, 21, &dest);
  if ( a3 == 23 )
    goto LABEL_16;
LABEL_10:
  if ( dest )
  {
    *(_QWORD *)&v41 = 0;
    qfree();
  }
LABEL_12:
  --*(_DWORD *)(v14 + 12);
  if ( v3 )
    qfree();
  return v42 - __readfsqword(0x28u);
}

