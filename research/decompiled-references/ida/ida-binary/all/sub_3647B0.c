unsigned __int64 __fastcall sub_3647B0(__int64 a1, __int64 *a2, int a3, double a4)
{
  const char *v4; // r15
  const char *v5; // r13
  void (__fastcall **v7)(__int64 *, __int64, int *); // rax
  _QWORD *v9; // rcx
  __int64 v10; // rbp
  size_t v11; // r14
  char *v12; // rax
  const void *v13; // rsi
  __int64 srclang_parser; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbp
  const char *v18; // rsi
  void (__fastcall *v19)(void **); // rax
  void (__fastcall **v21)(__int64 *, __int64, const char **); // rax
  __int64 v22; // r14
  __int64 v23; // r12
  const char *v24; // rsi
  const char *v25; // rdx
  const char *v26; // rsi
  char *v27; // rcx
  const char *v28; // rax
  char *v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int8 v32; // al
  __int64 v33; // r12
  size_t v34; // r14
  void *v35; // rax
  const void *v36; // rsi
  const void *v37; // r13
  void (__fastcall *v38)(__int64 *, __int64, _QWORD); // [rsp+0h] [rbp-B8h]
  unsigned __int8 v39; // [rsp+8h] [rbp-B0h]
  const char *v40; // [rsp+8h] [rbp-B0h]
  int v41; // [rsp+1Ch] [rbp-9Ch] BYREF
  const char *v42; // [rsp+20h] [rbp-98h] BYREF
  size_t v43; // [rsp+28h] [rbp-90h]
  size_t v44; // [rsp+30h] [rbp-88h]
  const char *v45; // [rsp+40h] [rbp-78h] BYREF
  __int128 v46; // [rsp+48h] [rbp-70h]
  void *dest; // [rsp+60h] [rbp-58h] BYREF
  __int128 v48; // [rsp+68h] [rbp-50h]
  unsigned __int64 v49; // [rsp+78h] [rbp-40h]

  v4 = nullptr;
  v5 = &s1;
  v7 = (void (__fastcall **)(__int64 *, __int64, int *))*a2;
  v49 = __readfsqword(0x28u);
  v41 = 0;
  (*v7)(a2, 19, &v41);
  v9 = *(_QWORD **)(a1 + 160);
  v44 = 0;
  v10 = *v9 + 24LL * v41;
  v11 = *(_QWORD *)(v10 + 8);
  if ( v11 )
  {
    v12 = (char *)qalloc_or_throw(*(_QWORD *)(v10 + 8));
    v13 = *(const void **)v10;
    v44 = v11;
    v5 = v12;
    memcpy(v12, v13, v11);
    v4 = v5;
  }
  srclang_parser = find_srclang_parser(v5, 1);
  v17 = srclang_parser;
  if ( !srclang_parser )
  {
    if ( !under_debugger )
      interr(41114, 1, v15, v16, a4);
    BUG();
  }
  if ( a3 == 19 )
  {
    v45 = nullptr;
    v46 = 0;
    sub_34BA00((__int64 *)&v45, *(_DWORD *)(srclang_parser + 24));
    v25 = &s1;
    if ( (_QWORD)v46 )
      v25 = v45;
    (*(void (__fastcall **)(__int64 *, __int64, const char *))(*a2 + 8))(a2, 20, v25);
    dest = nullptr;
    v42 = v4;
    v43 = v11;
    v48 = 0;
    v39 = sub_34BB50((__int64)&dest, (__int64)&v42);
    (*(void (__fastcall **)(__int64 *, __int64, void **))(*a2 + 104))(a2, 23, &dest);
    v26 = (_BYTE *)(&dword_14 + 3);
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD))(*a2 + 16))(a2, 23, v39);
    v27 = (char *)dest;
    if ( dest )
    {
      v26 = (const char *)v48;
      if ( (_QWORD)v48 )
      {
        v28 = nullptr;
        do
        {
          v29 = &v27[24 * (_QWORD)v28];
          v30 = *(_QWORD *)v29;
          if ( *(_QWORD *)v29 )
          {
            *((_QWORD *)v29 + 1) = 0;
            v40 = v28;
            qfree(v30, v26);
            v27 = (char *)dest;
            v28 = v40;
          }
          ++v28;
        }
        while ( v26 != v28 );
      }
      *(_QWORD *)&v48 = 0;
      qfree(v27, v26);
    }
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45, v26);
    }
  }
  else if ( a3 == -1 )
  {
    v31 = *a2;
    v42 = v4;
    v43 = v11;
    v38 = *(void (__fastcall **)(__int64 *, __int64, _QWORD))(v31 + 16);
    v32 = sub_34BB50(0, (__int64)&v42);
    v38(a2, 23, v32);
  }
  (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 13, (*(_DWORD *)(v17 + 8) & 1) == 0);
  (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 21, *(_QWORD *)(v17 + 48) != 0);
  v18 = (_BYTE *)(&dword_14 + 2);
  (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 22, *(_QWORD *)(v17 + 56) != 0);
  dest = nullptr;
  v48 = 0;
  v19 = *(void (__fastcall **)(void **))(v17 + 48);
  if ( !v19 )
  {
    v18 = (_BYTE *)(&dword_14 + 1);
    (*(void (__fastcall **)(__int64 *, __int64, void **))(*a2 + 8))(a2, 21, &dest);
    if ( a3 != 23 )
      goto LABEL_10;
LABEL_16:
    v18 = (const char *)&v42;
    v42 = v4;
    v43 = v11;
    if ( (unsigned __int8)sub_34BB50(0, (__int64)&v42) )
    {
      v21 = (void (__fastcall **)(__int64 *, __int64, const char **))*a2;
      LODWORD(v45) = 0;
      (*v21)(a2, 23, &v45);
      v22 = qword_8CF0B0;
      v23 = qword_8CF0B0 + 48 * xmmword_8CF0B8;
      if ( qword_8CF0B0 != v23 )
      {
        while ( 1 )
        {
          v24 = &s1;
          if ( *(_QWORD *)(v22 + 8) )
            v24 = *(const char **)v22;
          if ( !strcmp(v5, v24) )
            break;
          v22 += 48;
          if ( v23 == v22 )
            goto LABEL_25;
        }
        if ( v22 != v23 && (unsigned __int64)(int)v45 < *(_QWORD *)(v22 + 32) )
        {
          v33 = *(_QWORD *)(v22 + 24) + 48LL * (int)v45;
          v34 = *(_QWORD *)(v33 + 32);
          if ( v34 )
          {
            v35 = (void *)qalloc_or_throw(*(_QWORD *)(v33 + 32));
            v36 = *(const void **)(v33 + 24);
            v37 = v35;
            memcpy(v35, v36, v34);
            if ( v34 != 1 )
            {
              if ( *((_QWORD *)&v48 + 1) < v34 )
                dest = (void *)qvector_reserve(&dest, dest, v34, 1);
              v36 = v37;
              *(_QWORD *)&v48 = v34;
              memmove(dest, v37, v34 - 1);
              *((char *)dest + v34 - 1) = 0;
            }
            if ( v37 )
              qfree(v37, (const char *)v36);
          }
        }
      }
LABEL_25:
      v18 = (_BYTE *)(&dword_14 + 1);
      (*(void (__fastcall **)(__int64 *, __int64, void **))(*a2 + 8))(a2, 21, &dest);
    }
    goto LABEL_10;
  }
  if ( a3 == -1 )
    goto LABEL_12;
  v19(&dest);
  v18 = (_BYTE *)(&dword_14 + 1);
  (*(void (__fastcall **)(__int64 *, __int64, void **))(*a2 + 8))(a2, 21, &dest);
  if ( a3 == 23 )
    goto LABEL_16;
LABEL_10:
  if ( dest )
  {
    *(_QWORD *)&v48 = 0;
    qfree(dest, v18);
  }
LABEL_12:
  --*(_DWORD *)(v17 + 12);
  if ( v4 )
    qfree(v4, v18);
  return v49 - __readfsqword(0x28u);
}
