/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89B74
// Address: 0x0000000000089B74

//----- (0000000000089B74) ----------------------------------------------------
_BYTE *__fastcall sub_89B74(__int64 a1, __int64 a2, const void *a3, int a4)
{
  _BYTE *v8; // x20
  __int64 v9; // x26
  unsigned __int64 v10; // x27
  char **v11; // x25
  char *v12; // x0
  __int64 v13; // x8
  char *v14; // x26
  __int64 v15; // x29
  char *v16; // x22
  __int64 v17; // x28
  __int64 v18; // x29
  char *v19; // x27
  char *v20; // x9
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  __int128 v27; // q0
  void *v28; // x0
  void *v29; // x0
  char *v30; // x27
  size_t v31; // x0
  unsigned __int64 v32; // x25
  size_t v33; // x23
  void **v34; // x24
  void *v35; // x0
  char *v36; // x8
  __int64 v38; // [xsp+8h] [xbp-68h]

  v8 = qalloc((void *)(unsigned int)(a4 + 1));
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 240);
    v10 = *(_QWORD *)(a1 + 248);
    v11 = (char **)(a1 + 232);
    if ( v10 >= v9 + 1 )
    {
      v16 = *v11;
    }
    else
    {
      v12 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 232), nullptr, v9 + 1, 0x48u);
      v14 = *(char **)(a1 + 232);
      v13 = *(_QWORD *)(a1 + 240);
      v15 = *(_QWORD *)(a1 + 248);
      v16 = v12;
      *(_QWORD *)(a1 + 248) = v10;
      v17 = v13 - 1;
      if ( v13 - 1 >= 0 )
      {
        v38 = v15;
        v18 = 0;
        do
        {
          v19 = &v14[v18];
          v20 = &v16[v18];
          *(_QWORD *)v20 = *(_QWORD *)&v14[v18];
          v21 = *(_QWORD *)&v14[v18 + 8];
          *(_QWORD *)v19 = 0;
          *((_QWORD *)v20 + 1) = v21;
          v22 = *(_QWORD *)&v14[v18 + 16];
          *((_QWORD *)v19 + 1) = 0;
          *((_QWORD *)v20 + 2) = v22;
          v23 = *(_QWORD *)&v14[v18 + 24];
          *((_QWORD *)v19 + 2) = 0;
          *((_QWORD *)v20 + 3) = v23;
          v24 = *(_QWORD *)&v14[v18 + 32];
          *((_QWORD *)v19 + 3) = 0;
          *((_QWORD *)v20 + 4) = v24;
          v25 = *(_QWORD *)&v14[v18 + 40];
          *((_QWORD *)v19 + 4) = 0;
          *((_QWORD *)v20 + 5) = v25;
          v26 = *(_QWORD *)&v14[v18 + 64];
          v27 = *(_OWORD *)&v14[v18 + 48];
          *((_QWORD *)v19 + 5) = 0;
          *((_QWORD *)v20 + 8) = v26;
          *((_OWORD *)v20 + 3) = v27;
          v28 = *(void **)&v14[v18 + 24];
          if ( v28 )
          {
            *((_QWORD *)v19 + 4) = 0;
            qfree(v28);
            *((_QWORD *)v19 + 3) = 0;
            *((_QWORD *)v19 + 5) = 0;
          }
          v29 = *(void **)&v14[v18];
          if ( v29 )
          {
            *((_QWORD *)v19 + 1) = 0;
            qfree(v29);
            *(_QWORD *)&v14[v18] = 0;
            *((_QWORD *)v19 + 2) = 0;
          }
          --v17;
          v18 += 72;
        }
        while ( v17 >= 0 );
        v14 = *v11;
        v15 = v38;
      }
      qfree(v14);
      v9 = *(_QWORD *)(a1 + 240);
      *(_QWORD *)(a1 + 232) = v16;
      *(_QWORD *)(a1 + 248) = v15;
    }
    v30 = &v16[72 * v9];
    *((_OWORD *)v30 + 1) = 0u;
    *((_OWORD *)v30 + 2) = 0u;
    *(_OWORD *)v30 = 0u;
    ++*(_QWORD *)(a1 + 240);
    *((_QWORD *)v30 + 8) = a2;
    if ( a3 && (v31 = strlen((const char *)a3)) != 0 )
    {
      v32 = v31 + 1;
      v33 = v31;
      v34 = (void **)(v30 + 24);
      if ( *(_QWORD *)&v16[72 * v9 + 40] >= v31 + 1 )
      {
        v35 = *v34;
      }
      else
      {
        v35 = qvector_reserve((pthread_mutex_t *)(v30 + 24), *v34, v32, 1u);
        *v34 = v35;
      }
      *(_QWORD *)&v16[72 * v9 + 32] = v32;
      memmove(v35, a3, v33);
      *((_BYTE *)*v34 + v33) = 0;
    }
    else
    {
      *(_QWORD *)&v16[72 * v9 + 32] = 0;
    }
    v36 = &v16[72 * v9];
    *((_DWORD *)v36 + 12) = a4;
    *((_QWORD *)v36 + 7) = v8;
    v8[a4] = 0;
  }
  return v8;
}
