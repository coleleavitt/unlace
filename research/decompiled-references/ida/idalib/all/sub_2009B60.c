void __fastcall sub_2009B60(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rbp
  __int64 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  const char *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  const char *v11; // rdi
  __int64 *v12; // rdi
  size_t v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  const char *v16; // rdi
  bool v17; // r14
  bool v18; // r8
  __int64 v19; // r13
  size_t v20; // r9
  size_t v21; // r8
  __int64 v22; // r12
  bool v23; // bl
  int v24; // eax
  int v25; // eax
  int v26; // eax
  const void *v27; // rbp
  size_t v28; // r15
  __int64 v29; // rdx
  size_t v30; // [rsp+0h] [rbp-120h]
  const char *s2; // [rsp+10h] [rbp-110h]
  size_t v33; // [rsp+20h] [rbp-100h]
  size_t v34; // [rsp+20h] [rbp-100h]
  size_t v35; // [rsp+20h] [rbp-100h]
  size_t v36; // [rsp+28h] [rbp-F8h]
  size_t v37; // [rsp+28h] [rbp-F8h]
  size_t v38; // [rsp+28h] [rbp-F8h]
  const char *v39; // [rsp+38h] [rbp-E8h]
  char *s; // [rsp+40h] [rbp-E0h]
  __m128i v41; // [rsp+48h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-C8h] BYREF
  __m128i v43; // [rsp+68h] [rbp-B8h] BYREF
  _QWORD v44[2]; // [rsp+78h] [rbp-A8h] BYREF
  __int16 v45; // [rsp+88h] [rbp-98h]
  void *v46[2]; // [rsp+98h] [rbp-88h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-78h] BYREF
  void *v48; // [rsp+B8h] [rbp-68h]
  __int64 v49; // [rsp+C8h] [rbp-58h] BYREF
  char *v50; // [rsp+D8h] [rbp-48h]
  bool v51; // [rsp+E0h] [rbp-40h]

  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || !a3 )
    return;
  v4 = 0;
  v5 = sub_1105E80();
  v6 = sub_21BB380(v5, 3328);
  v8 = (const char *)(**(_QWORD **)(v7 + 8)
                    + *(unsigned int *)(*(_QWORD *)(v7 + 32) + 80LL * (unsigned int)(*(_DWORD *)(v6 + 40) - 1) + 4));
  s2 = v8;
  if ( v8 )
    v4 = strlen(v8);
  v9 = sub_21BB380(v5, 3329);
  v30 = 0;
  v11 = (const char *)(**(_QWORD **)(v10 + 8)
                     + *(unsigned int *)(*(_QWORD *)(v10 + 32) + 80LL * (unsigned int)(*(_DWORD *)(v9 + 40) - 1) + 4));
  v39 = v11;
  if ( v11 )
    v30 = strlen(v11);
  v12 = v5;
  v13 = 0;
  v14 = sub_21BB380(v12, 299);
  v16 = (const char *)(**(_QWORD **)(v15 + 8)
                     + *(unsigned int *)(*(_QWORD *)(v15 + 32) + 80LL * (unsigned int)(*(_DWORD *)(v14 + 40) - 1) + 4));
  if ( v16 )
    v13 = strlen(v16);
  sub_112C630((__int64)v46, a2, a3);
  v17 = v51;
  s = v50;
  v18 = v50 != nullptr;
  v19 = *(_QWORD *)a1 + 32LL;
  if ( v19 != *(_QWORD *)(a1 + 8) )
  {
    v20 = v4;
    v21 = v13;
    v22 = *(_QWORD *)(a1 + 8);
    v23 = v50 != nullptr;
    while ( 1 )
    {
      v27 = *(const void **)v19;
      v28 = *(_QWORD *)(v19 + 8);
      if ( !v17 )
        goto LABEL_24;
      if ( v28 >= v20 )
      {
        if ( !v20 )
          goto LABEL_24;
        v36 = v21;
        v33 = v20;
        v24 = memcmp(*(const void **)v19, s2, v20);
        v20 = v33;
        v21 = v36;
        if ( !v24 )
          goto LABEL_24;
      }
      if ( v28 != v30 )
        goto LABEL_18;
      if ( v28 )
      {
        v37 = v20;
        v34 = v21;
        v25 = memcmp(v27, v39, v28);
        v20 = v37;
        v21 = v34;
        v17 = v25 != 0;
      }
      else
      {
LABEL_24:
        v17 = 0;
      }
LABEL_18:
      if ( v23 && v28 >= v21 )
      {
        v23 = 0;
        if ( v21 )
        {
          v38 = v20;
          v35 = v21;
          v26 = memcmp(v27, v16, v21);
          v20 = v38;
          v21 = v35;
          v23 = v26 != 0;
        }
      }
      v19 += 32;
      if ( v22 == v19 )
      {
        v4 = v20;
        v18 = v23;
        break;
      }
    }
  }
  if ( v18 )
  {
    v29 = -1;
    v43.m128i_i64[0] = (__int64)v44;
    if ( s )
      v29 = (__int64)&s[strlen(s)];
    sub_2007F10(&v43, s, v29);
    sub_11343C0(a1, (const __m128i *)(*(_QWORD *)a1 + 32LL), &v43);
    if ( (_QWORD *)v43.m128i_i64[0] != v44 )
      operator delete((void *)v43.m128i_i64[0]);
  }
  if ( v17 )
  {
    v43.m128i_i64[1] = v4;
    v43.m128i_i64[0] = (__int64)s2;
    v44[0] = v46;
    v45 = 1029;
    sub_2253560(&v41, &v43);
    sub_11343C0(a1, (const __m128i *)(*(_QWORD *)a1 + 32LL), &v41);
    if ( (__int64 *)v41.m128i_i64[0] != &v42 )
      operator delete((void *)v41.m128i_i64[0]);
  }
  if ( v48 != &v49 )
    operator delete(v48);
  if ( v46[0] != &v47 )
    operator delete(v46[0]);
}
