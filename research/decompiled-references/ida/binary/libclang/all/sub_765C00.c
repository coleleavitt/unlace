__int64 __fastcall sub_765C00(__int64 a1, __int64 a2, const void *a3, size_t a4)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v8; // r14
  size_t v9; // r12
  size_t v10; // rdx
  size_t v11; // r12
  size_t v12; // rdx
  size_t v13; // r12
  size_t v14; // rdx
  size_t v15; // r12
  size_t v16; // rdx
  size_t v18; // r12
  size_t v19; // rdx
  size_t v20; // r12
  size_t v21; // rdx
  size_t v22; // r12
  size_t v23; // rdx

  v5 = 0x6DB6DB6DB6DB6DB7LL * ((a2 - a1) >> 4);
  v6 = a1;
  if ( v5 >> 2 <= 0 )
  {
LABEL_29:
    if ( v5 != 2 )
    {
      if ( v5 != 3 )
      {
        if ( v5 != 1 )
          return a2;
        goto LABEL_45;
      }
      v18 = *(_QWORD *)(v6 + 8);
      v19 = v18;
      if ( a4 <= v18 )
        v19 = a4;
      if ( (!v19 || !memcmp(a3, *(const void **)v6, v19)) && a4 == v18 )
        return v6;
      v6 += 112;
    }
    v20 = *(_QWORD *)(v6 + 8);
    v21 = v20;
    if ( a4 <= v20 )
      v21 = a4;
    if ( (!v21 || !memcmp(a3, *(const void **)v6, v21)) && a4 == v20 )
      return v6;
    v6 += 112;
LABEL_45:
    v22 = *(_QWORD *)(v6 + 8);
    v23 = v22;
    if ( a4 <= v22 )
      v23 = a4;
    if ( !v23 || !memcmp(a3, *(const void **)v6, v23) )
    {
      if ( a4 != v22 )
        return a2;
      return v6;
    }
    return a2;
  }
  v8 = a1 + 448 * (v5 >> 2);
  while ( 1 )
  {
    v15 = *(_QWORD *)(v6 + 8);
    v16 = a4;
    if ( v15 <= a4 )
      v16 = *(_QWORD *)(v6 + 8);
    if ( (!v16 || !memcmp(a3, *(const void **)v6, v16)) && v15 == a4 )
      return v6;
    v9 = *(_QWORD *)(v6 + 120);
    v10 = a4;
    if ( v9 <= a4 )
      v10 = *(_QWORD *)(v6 + 120);
    if ( (!v10 || !memcmp(a3, *(const void **)(v6 + 112), v10)) && v9 == a4 )
    {
      v6 += 112;
      return v6;
    }
    v11 = *(_QWORD *)(v6 + 232);
    v12 = a4;
    if ( v11 <= a4 )
      v12 = *(_QWORD *)(v6 + 232);
    if ( (!v12 || !memcmp(a3, *(const void **)(v6 + 224), v12)) && v11 == a4 )
    {
      v6 += 224;
      return v6;
    }
    v13 = *(_QWORD *)(v6 + 344);
    v14 = a4;
    if ( v13 <= a4 )
      v14 = *(_QWORD *)(v6 + 344);
    if ( (!v14 || !memcmp(a3, *(const void **)(v6 + 336), v14)) && v13 == a4 )
    {
      v6 += 336;
      return v6;
    }
    v6 += 448;
    if ( v6 == v8 )
    {
      v5 = 0x6DB6DB6DB6DB6DB7LL * ((a2 - v6) >> 4);
      goto LABEL_29;
    }
  }
}

