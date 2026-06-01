/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472418
// Address: 0x0000000000472418

//----- (0000000000472418) ----------------------------------------------------
__int64 __fastcall sub_472418(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  int v5; // w22
  int v6; // w0
  unsigned __int64 v7; // x23
  unsigned __int64 v8; // x26
  int v9; // w20
  char *v10; // x0
  unsigned __int64 v11; // x2
  __int64 v12; // x27
  char *v13; // x25
  char *v14; // x1
  size_t v15; // x28
  void *v16; // x0
  __int64 v17; // x23
  __int64 v18; // x27
  char *v19; // x20
  __int64 v20; // x25
  int v21; // w0
  size_t v22; // x20
  unsigned __int64 v23; // x3
  void *v25; // x0
  unsigned __int8 *v26; // x1
  size_t v27; // x2
  char *v29; // x0
  __int64 v30; // x27
  __int64 v31; // x25
  __int64 v32; // x1
  void *v33; // x0
  __int64 v34; // x1
  char *v35; // x2
  char *v36; // [xsp+68h] [xbp-38h]
  __int64 v37; // [xsp+78h] [xbp-28h] BYREF
  void *src; // [xsp+80h] [xbp-20h]
  size_t v39; // [xsp+88h] [xbp-18h]
  __int64 v40; // [xsp+90h] [xbp-10h]
  __int64 v41; // [xsp+98h] [xbp-8h]

  v5 = a2;
  v6 = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v6;
  v9 = v6;
  if ( v6 != v7 )
  {
    v37 = 0;
    src = nullptr;
    v39 = 0;
    v40 = 0;
    if ( v6 >= v7 )
    {
      if ( v6 <= v7 )
        goto LABEL_15;
      v10 = *(char **)a1;
      v11 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)a1 <= (unsigned __int64)&v37 && &v37 < (__int64 *)&v10[32 * v11] )
      {
        if ( v8 <= v11
          || (v10 = (char *)sub_491288(a1, *(void **)a1, v8, 0x20u),
              v7 = *(_QWORD *)(a1 + 8),
              *(_QWORD *)a1 = v10,
              v8 > v7) )
        {
          v34 = 32 * v7;
          while ( 1 )
          {
            v35 = &v10[v34];
            *(_QWORD *)&v10[v34] = 0;
            ++v7;
            v34 += 32;
            *((_QWORD *)v35 + 1) = 0;
            *((_QWORD *)v35 + 2) = 0;
            *((_QWORD *)v35 + 3) = 0;
            if ( v8 <= v7 )
              break;
            v10 = *(char **)a1;
          }
        }
      }
      else if ( v8 <= v11
             || (v10 = (char *)sub_491288(a1, *(void **)a1, v8, 0x20u),
                 v7 = *(_QWORD *)(a1 + 8),
                 *(_QWORD *)a1 = v10,
                 v8 > v7) )
      {
        v12 = 32 * v7;
        while ( 1 )
        {
          v13 = &v10[v12];
          *(_QWORD *)&v10[v12] = v37;
          v14 = &v10[v12 + 8];
          v36 = v14;
          *(_QWORD *)v14 = 0;
          *((_QWORD *)v14 + 1) = 0;
          *((_QWORD *)v14 + 2) = 0;
          v15 = v39;
          if ( v39 )
          {
            v16 = sub_491248(v39);
            *((_QWORD *)v13 + 1) = v16;
            ++v7;
            v12 += 32;
            *((_QWORD *)v36 + 2) = v15;
            memcpy(v16, src, v15);
            *((_QWORD *)v13 + 2) = v15;
            if ( v8 <= v7 )
              break;
          }
          else
          {
            ++v7;
            v12 += 32;
            if ( v8 <= v7 )
              break;
          }
          v10 = *(char **)a1;
        }
      }
    }
    else
    {
      v30 = 32LL * v6;
      v31 = v6;
      do
      {
        v32 = *(_QWORD *)a1 + v30;
        v33 = *(void **)(v32 + 8);
        if ( v33 )
        {
          *(_QWORD *)(v32 + 16) = 0;
          j__free(v33);
        }
        ++v31;
        v30 += 32;
      }
      while ( v7 != v31 );
    }
    *(_QWORD *)(a1 + 8) = v8;
    if ( src )
    {
      v39 = 0;
      j__free(src);
    }
  }
LABEL_15:
  if ( v9 > 0 )
  {
    v17 = 0;
    v18 = 32 * ((unsigned int)(v9 - 1) + 1LL);
    while ( 1 )
    {
      v19 = *(char **)a1;
      v20 = *(_QWORD *)a1 + v17;
      *(_DWORD *)&v19[v17] = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
      v21 = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
      v22 = v21;
      v23 = *(_QWORD *)(v20 + 16);
      if ( v21 > v23 )
        break;
      if ( v21 >= v23 )
        goto LABEL_19;
      *(_QWORD *)(v20 + 16) = v21;
      if ( v5 )
      {
LABEL_23:
        *(_DWORD *)(v20 + 4) = sub_48E5A8((unsigned __int8 **)a3, *(_QWORD *)(a3 + 8));
        v25 = *(void **)(v20 + 8);
        v26 = *(unsigned __int8 **)a3;
        v27 = *(_QWORD *)a3 + v22;
        if ( *(_QWORD *)(a3 + 8) >= v27 && (unsigned __int64)v26 <= v27 )
        {
          *(_QWORD *)a3 = v27;
          memcpy(v25, v26, v22);
        }
      }
LABEL_20:
      v17 += 32;
      if ( v17 == v18 )
        return v41 ^ _stack_chk_guard;
    }
    v29 = *(char **)(v20 + 8);
    if ( v22 > *(_QWORD *)(v20 + 24) )
    {
      v29 = (char *)sub_491288(v20 + 8, *(void **)(v20 + 8), v22, 1u);
      *(_QWORD *)(v20 + 8) = v29;
      v23 = *(_QWORD *)(v20 + 16);
    }
    memset(&v29[v23], 0, v22 - v23);
    *(_QWORD *)(v20 + 16) = v22;
LABEL_19:
    if ( v5 )
      goto LABEL_23;
    goto LABEL_20;
  }
  return v41 ^ _stack_chk_guard;
}
