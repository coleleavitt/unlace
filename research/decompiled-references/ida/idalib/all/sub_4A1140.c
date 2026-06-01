unsigned __int64 __fastcall sub_4A1140(__int64 a1, int a2, unsigned __int32 a3, int a4, unsigned __int32 a5, char a6)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rdx
  _QWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rbx
  unsigned int *v19; // r10
  char *v20; // r13
  unsigned int *v21; // r15
  unsigned int v22; // r8d
  _QWORD *v23; // rdi
  unsigned int *v24; // r14
  char *v25; // rax
  char *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v29; // rax
  char *v30; // rdx
  int v31; // eax
  char *v32; // rdi
  unsigned int v34; // r11d
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // eax
  __int64 v47; // [rsp+20h] [rbp-A8h]
  __int64 v48; // [rsp+30h] [rbp-98h]
  unsigned int v50; // [rsp+3Ch] [rbp-8Ch]
  unsigned int v51; // [rsp+48h] [rbp-80h]
  __int32 dbctx_id; // [rsp+4Ch] [rbp-7Ch]
  __m128i v53[2]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v54; // [rsp+88h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  dbctx_id = -1;
  if ( get_dbctx_qty() )
    dbctx_id = get_dbctx_id();
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 48LL * a4;
  v10 = v8 + v9 + 752;
  v11 = *(_QWORD *)(v8 + v9 + 760);
  if ( !v11 )
    goto LABEL_47;
  v12 = v10;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_QWORD *)(v11 + 24);
      if ( *(_DWORD *)(v11 + 32) < a5 )
        break;
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v13 )
        goto LABEL_8;
    }
    v11 = *(_QWORD *)(v11 + 24);
  }
  while ( v14 );
LABEL_8:
  if ( v12 == v10 || a5 < *(_DWORD *)(v12 + 32) )
  {
LABEL_47:
    v38 = 48LL * a2;
    v39 = v8 + v38 + 752;
    v40 = *(_QWORD *)(v8 + v38 + 760);
    v12 = v39;
    if ( !v40 )
      goto LABEL_54;
    do
    {
      while ( 1 )
      {
        v41 = *(_QWORD *)(v40 + 16);
        v42 = *(_QWORD *)(v40 + 24);
        if ( *(_DWORD *)(v40 + 32) < a3 )
          break;
        v12 = v40;
        v40 = *(_QWORD *)(v40 + 16);
        if ( !v41 )
          goto LABEL_52;
      }
      v40 = *(_QWORD *)(v40 + 24);
    }
    while ( v42 );
LABEL_52:
    if ( v12 == v39 || a3 < *(_DWORD *)(v12 + 32) )
    {
LABEL_54:
      v53[0].m128i_i32[0] = dbctx_id;
      sub_46A5E0(v53[0].m128i_i32);
      return v54 - __readfsqword(0x28u);
    }
    v43 = a2;
    a3 = a5;
    a2 = a4;
    a4 = v43;
  }
  v48 = *(_QWORD *)(switch_dbctx(*(int *)(a1 + 4LL * a2 + 16)) + 1672);
  v15 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL * a2 + 744);
  v53[1] = 0;
  v53[0].m128i_i32[0] = a3;
  v53[0].m128i_i64[1] = 0;
  v17 = sub_49E800(v15, v53);
  if ( v53[0].m128i_i64[1] )
    qfree((void *)v53[0].m128i_i64[1]);
  v18 = *(_QWORD *)(v17 + 48);
  if ( v18 )
  {
    v20 = (char *)qalloc_or_throw(4 * v18);
    memcpy(v20, *(const void **)(v17 + 40), 4 * v18);
    v19 = *(unsigned int **)(v12 + 40);
    v21 = &v19[*(_QWORD *)(v12 + 48)];
    if ( v21 != v19 )
    {
LABEL_14:
      v22 = *v19;
      v23 = *(_QWORD **)(a1 + 8);
      if ( a4 == 2 || a2 == a4 )
      {
        if ( !under_debugger )
          interr(1950);
        BUG();
      }
      v24 = v19 + 1;
      v47 = 48LL * a4 + 32;
      while ( 1 )
      {
        if ( !v22 )
          goto LABEL_36;
        v16 = (__int64)v23 + v47;
        v25 = (char *)v23[6 * a4 + 5];
        if ( !v25 )
          goto LABEL_36;
        v26 = (char *)v23 + v47;
        do
        {
          while ( 1 )
          {
            v27 = *((_QWORD *)v25 + 2);
            v28 = *((_QWORD *)v25 + 3);
            if ( *((_DWORD *)v25 + 8) < v22 )
              break;
            v26 = v25;
            v25 = *((char **)v25 + 2);
            if ( !v27 )
              goto LABEL_23;
          }
          v25 = *((char **)v25 + 3);
        }
        while ( v28 );
LABEL_23:
        if ( v26 != (char *)v16
          && v22 >= *((_DWORD *)v26 + 8)
          && (v16 = a2, v29 = *v23 + 12LL * *((_QWORD *)v26 + 5), *(_DWORD *)(v29 + 4LL * a2)) )
        {
          v16 = 4LL * a2;
          v30 = &v20[4 * v18];
          v31 = *(_DWORD *)(v29 + v16);
          if ( v20 != v30 )
          {
            v32 = v20;
            while ( v31 != *(_DWORD *)v32 )
            {
              v32 += 4;
              if ( v30 == v32 )
                goto LABEL_39;
            }
            if ( v32 != v30 )
            {
              --v18;
              memmove(v32, v32 + 4, v30 - v32 - 4);
              if ( v24 == v21 )
                break;
              goto LABEL_40;
            }
          }
        }
        else
        {
LABEL_36:
          if ( v18 )
          {
            v34 = *(_DWORD *)&v20[4 * v18-- - 4];
          }
          else
          {
            v51 = v22;
            v50 = sub_64CF10(v48, 0, 1, v16);
            sub_652780(v48, 0, v50, a3);
            v35 = *(_QWORD *)(v17 + 48);
            v36 = *(_QWORD *)(v17 + 40);
            v34 = v50;
            v22 = v51;
            if ( *(_QWORD *)(v17 + 56) < (unsigned __int64)(v35 + 1) )
            {
              v37 = qvector_reserve(v17 + 40, v36, v35 + 1, 4);
              *(_QWORD *)(v17 + 40) = v37;
              v36 = v37;
              v22 = v51;
              v35 = *(_QWORD *)(v17 + 48);
              v34 = v50;
            }
            *(_DWORD *)(v36 + 4 * v35) = v34;
            ++*(_QWORD *)(v17 + 48);
            v23 = *(_QWORD **)(a1 + 8);
          }
          sub_4A0820((__int64)v23, a2, a4, v34, v22, a6);
        }
LABEL_39:
        if ( v24 == v21 )
          break;
LABEL_40:
        v22 = *v24;
        v23 = *(_QWORD **)(a1 + 8);
        ++v24;
      }
    }
    if ( v20 )
      qfree(v20);
  }
  else
  {
    v19 = *(unsigned int **)(v12 + 40);
    v20 = nullptr;
    v21 = &v19[*(_QWORD *)(v12 + 48)];
    if ( v21 != v19 )
      goto LABEL_14;
  }
  if ( dbctx_id != -1 && dbctx_id < (unsigned __int64)get_dbctx_qty() && (unsigned __int8)sub_3FB5F0() )
    switch_dbctx(dbctx_id);
  return v54 - __readfsqword(0x28u);
}
