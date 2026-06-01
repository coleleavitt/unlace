/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D7B8
// Address: 0x000000000043D7B8

//----- (000000000043D7B8) ----------------------------------------------------
__int64 __fastcall sub_43D7B8(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v6; // x19
  size_t v7; // x24
  __int64 v8; // x26
  __int64 v9; // x20
  __int64 v10; // x25
  const char *v11; // x0
  const char *v12; // x1
  void *v13; // x26
  char *v14; // x24
  unsigned __int64 v15; // x2
  unsigned __int64 v16; // x28
  char *v17; // x1
  size_t v18; // x2
  size_t v19; // x3
  void *v21; // x0
  const char *v22; // x1
  __int64 v23; // x0
  __int64 v24; // x27
  __int64 v25; // x28
  _QWORD *v26; // x19
  char *v27; // x20
  void *v28; // x0
  size_t v29; // x27
  char *v30; // x1
  __int64 v31; // x2
  __int64 v32; // x20
  _QWORD *v33; // x28
  char *v34; // x19
  void *v35; // x0
  void *v36; // x0
  const char *v37; // x21
  size_t v38; // [xsp+60h] [xbp-40h]
  __int64 v39; // [xsp+68h] [xbp-38h]
  int v40; // [xsp+78h] [xbp-28h] BYREF
  void *v41; // [xsp+80h] [xbp-20h]
  size_t v42; // [xsp+88h] [xbp-18h]
  size_t v43; // [xsp+90h] [xbp-10h]
  __int64 v44; // [xsp+98h] [xbp-8h]

  v6 = a1[12];
  v7 = *(_QWORD *)(a3 + 8);
  if ( !v6 )
  {
LABEL_7:
    v40 = a2;
    v13 = nullptr;
    v41 = nullptr;
    v42 = 0;
    v43 = 0;
    if ( v7 )
    {
      v21 = sub_491248(v7);
      v22 = *(const char **)a3;
      v43 = v7;
      v13 = v21;
      v41 = v21;
      memcpy(v21, v22, v7);
      v6 = a1[12];
      v42 = v7;
      v14 = (char *)a1[11];
      v15 = v6 + 1;
      v16 = a1[13];
      if ( v14 > (char *)&v40 )
        goto LABEL_10;
    }
    else
    {
      v14 = (char *)a1[11];
      v15 = v6 + 1;
      v16 = a1[13];
      if ( v14 > (char *)&v40 )
        goto LABEL_10;
    }
    if ( &v40 < (int *)&v14[32 * v16] )
    {
      v29 = v42;
      v38 = v43;
      v41 = nullptr;
      v42 = 0;
      v43 = 0;
      if ( v16 < v15 )
      {
        v14 = (char *)sub_491288((__int64)(a1 + 11), nullptr, v15, 0x20u);
        v31 = a1[12];
        v39 = a1[13];
        a1[13] = v16;
        v32 = v31 - 1;
        v33 = (_QWORD *)a1[11];
        if ( v31 - 1 >= 0 )
        {
          v34 = v14;
          do
          {
            *(_DWORD *)v34 = *(_DWORD *)v33;
            *((_QWORD *)v34 + 1) = v33[1];
            v33[1] = 0;
            *((_QWORD *)v34 + 2) = v33[2];
            v33[2] = 0;
            *((_QWORD *)v34 + 3) = v33[3];
            v33[3] = 0;
            v35 = (void *)v33[1];
            if ( v35 )
            {
              v33[2] = 0;
              j__free(v35);
            }
            --v32;
            v33 += 4;
            v34 += 32;
          }
          while ( v32 != -1 );
          v33 = (_QWORD *)a1[11];
        }
        j__free(v33);
        a1[11] = v14;
        v6 = a1[12];
        a1[13] = v39;
      }
      v30 = &v14[32 * v6];
      *(_DWORD *)v30 = a2;
      *((_QWORD *)v30 + 1) = v13;
      *((_QWORD *)v30 + 2) = v29;
      *((_QWORD *)v30 + 3) = v38;
      goto LABEL_12;
    }
LABEL_10:
    if ( v16 < v15 )
    {
      v14 = (char *)sub_491288((__int64)(a1 + 11), nullptr, v15, 0x20u);
      v23 = a1[12];
      v24 = a1[13];
      a1[13] = v16;
      v25 = v23 - 1;
      v26 = (_QWORD *)a1[11];
      if ( v23 - 1 >= 0 )
      {
        v27 = v14;
        do
        {
          *(_DWORD *)v27 = *(_DWORD *)v26;
          *((_QWORD *)v27 + 1) = v26[1];
          v26[1] = 0;
          *((_QWORD *)v27 + 2) = v26[2];
          v26[2] = 0;
          *((_QWORD *)v27 + 3) = v26[3];
          v26[3] = 0;
          v28 = (void *)v26[1];
          if ( v28 )
          {
            v26[2] = 0;
            j__free(v28);
          }
          --v25;
          v26 += 4;
          v27 += 32;
        }
        while ( v25 != -1 );
        v26 = (_QWORD *)a1[11];
      }
      j__free(v26);
      a1[11] = v14;
      a1[13] = v24;
      v6 = a1[12];
    }
    v17 = &v14[32 * v6];
    v19 = v42;
    v18 = v43;
    *(_DWORD *)v17 = a2;
    *((_QWORD *)v17 + 1) = v13;
    *((_QWORD *)v17 + 2) = v19;
    *((_QWORD *)v17 + 3) = v18;
LABEL_12:
    ++a1[12];
    return v44 ^ _stack_chk_guard;
  }
  v8 = a1[11];
  v9 = 32 * v6 - 32;
  v10 = v8 + v9;
  if ( *(_QWORD *)(v8 + v9 + 16) )
  {
    v11 = *(const char **)(v10 + 8);
    if ( v7 )
      goto LABEL_4;
  }
  else
  {
    v11 = (const char *)&qword_4B2D48;
    if ( v7 )
    {
LABEL_4:
      v12 = *(const char **)a3;
      goto LABEL_5;
    }
  }
  v12 = (const char *)&qword_4B2D48;
LABEL_5:
  if ( strcmp(v11, v12) )
  {
    if ( *(_DWORD *)(v8 + v9) != a2 )
      goto LABEL_7;
    if ( v10 + 8 != a3 )
    {
      if ( v7 > 1 )
      {
        v36 = *(void **)(v10 + 8);
        v37 = *(const char **)a3;
        if ( *(_QWORD *)(v10 + 24) < v7 )
        {
          v36 = sub_491288(v10 + 8, *(void **)(v10 + 8), v7, 1u);
          *(_QWORD *)(v10 + 8) = v36;
        }
        *(_QWORD *)(v10 + 16) = v7;
        memmove(v36, v37, v7 - 1);
        *(_BYTE *)(*(_QWORD *)(v10 + 8) + v7 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v10 + 16) = 0;
      }
    }
  }
  return v44 ^ _stack_chk_guard;
}
// 43D7B8: could not find valid save-restore pair for x28
// 4B2D48: using guessed type __int64 qword_4B2D48;
