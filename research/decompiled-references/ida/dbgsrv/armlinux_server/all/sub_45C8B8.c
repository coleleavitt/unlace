/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C8B8
// Address: 0x000000000045C8B8

//----- (000000000045C8B8) ----------------------------------------------------
__int64 __fastcall sub_45C8B8(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // x2
  _QWORD *v3; // x22
  _QWORD *v4; // x21
  __int64 v5; // x2
  __int64 v8; // x24
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x25
  __int64 (*v12)(); // x3
  __int64 v13; // x3
  __int64 (*v14)(); // x5
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 *v18; // x23
  __int64 v19; // x26
  int *v20; // x0
  char *v21; // x21
  int *v22; // x23
  __int64 v23; // x24
  __int64 v24; // x26
  __int64 i; // x22
  char *v26; // x0
  char *v27; // x21
  __int64 v28; // x25
  __int64 j; // x19
  char *v30; // x2
  void *v31; // x0
  char *v32; // x27
  __int64 v33; // x3
  char *v34; // x19
  char *v35; // x4
  __int64 v36; // x25
  __int64 v37; // x24
  signed __int64 v38; // x28
  signed __int64 v39; // x6
  void *v40; // x0
  __int64 v41; // x1
  char *v42; // x19
  char *v43; // x23
  void *v44; // x0
  __int64 v45; // x0
  char **v46; // x23
  char *v47; // x0
  char *v48; // x24
  char *k; // x19
  char *v50; // x2
  void *v51; // x0
  size_t n; // [xsp+68h] [xbp-18h]
  char *v53; // [xsp+70h] [xbp-10h]
  __int64 v54; // [xsp+78h] [xbp-8h]

  v2 = a1[44];
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = a1 + 43;
  v4 = a1 + 43;
  do
  {
    while ( *(_DWORD *)(v2 + 32) >= (signed int)a2 )
    {
      v4 = (_QWORD *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        goto LABEL_5;
    }
    v2 = *(_QWORD *)(v2 + 24);
  }
  while ( v2 );
LABEL_5:
  if ( v3 == v4 )
    return 0xFFFFFFFFLL;
  if ( *((_DWORD *)v4 + 8) > (signed int)a2 )
    return 0xFFFFFFFFLL;
  v5 = v4[6];
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v8 = v4[5];
  v9 = *a1;
  v10 = 48 * v5 - 48;
  v11 = v8 + v10;
  v12 = *(__int64 (**)())(*a1 + 480LL);
  if ( v12 == sub_407180 )
    goto LABEL_9;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD, __int64))v12)(a1, a2, v8 + v10) )
    return 0xFFFFFFFFLL;
  v9 = *a1;
LABEL_9:
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD, _QWORD))(v9 + 320))(
    a1,
    4,
    *(_QWORD *)(v11 + 32),
    a1[61],
    *((unsigned int *)a1 + 124));
  if ( *(_BYTE *)(v11 + 40) )
  {
    v13 = *(_QWORD *)(v11 + 8);
    v14 = *(__int64 (**)())(*a1 + 440LL);
    if ( v14 == sub_407178 )
    {
LABEL_11:
      sub_40AAF0((__int64)a1, (__int64)qword_4C77B8, v13);
      return 0xFFFFFFFFLL;
    }
    if ( !((unsigned __int8 (__fastcall *)(_QWORD *, _QWORD, _QWORD, __int64, _QWORD))v14)(
            a1,
            a2,
            0,
            v13,
            *(_QWORD *)(v8 + v10)) )
    {
      v13 = *(_QWORD *)(v11 + 8);
      goto LABEL_11;
    }
  }
  v17 = v4[5];
  v16 = v4[6];
  v18 = (__int64 *)(v17 + 48 * v16 - 48);
  v19 = *(_QWORD *)(v17 + 48 * v16 - 40);
  if ( v19 )
  {
    v32 = (char *)sub_491248(32 * v19);
    v33 = 32 * v19;
    v34 = v32;
    v35 = &v32[32 * v19];
    do
    {
      v36 = *v18;
      v37 = v34 - v32;
      v38 = *v18 + v34 - v32;
      *(_DWORD *)v34 = -2;
      *((_QWORD *)v34 + 1) = 0;
      *((_QWORD *)v34 + 2) = 0;
      *((_QWORD *)v34 + 3) = 0;
      if ( v34 != (char *)v38 )
      {
        if ( *(int *)(v36 + v37) < -1 )
        {
          *((_QWORD *)v34 + 1) = *(_QWORD *)(v38 + 8);
        }
        else
        {
          *((_QWORD *)v34 + 1) = 0;
          *((_QWORD *)v34 + 2) = 0;
          *((_QWORD *)v34 + 3) = 0;
          v39 = *(_QWORD *)(v38 + 16);
          if ( v39 )
          {
            n = *(_QWORD *)(v38 + 16);
            v53 = v35;
            v54 = v33;
            v40 = sub_491248(v39);
            *((_QWORD *)v34 + 1) = v40;
            *((_QWORD *)v34 + 3) = n;
            memcpy(v40, *(const void **)(v38 + 8), n);
            v33 = v54;
            v35 = v53;
            *((_QWORD *)v34 + 2) = n;
          }
        }
        *(_DWORD *)v34 = *(_DWORD *)(v36 + v37);
      }
      v34 += 32;
    }
    while ( v35 != v34 );
    v16 = v4[6];
    v41 = v16;
    if ( !v16 )
    {
      if ( v32 )
        goto LABEL_44;
LABEL_69:
      if ( !v41 )
        goto LABEL_18;
      goto LABEL_32;
    }
    v17 = v4[5];
  }
  else
  {
    if ( !v16 )
    {
LABEL_18:
      v20 = sub_49FAC0((int *)v4, v3);
      v21 = *((char **)v20 + 5);
      v22 = v20;
      if ( v21 )
      {
        v23 = *((_QWORD *)v20 + 6);
        if ( v23 )
        {
          v24 = 0;
          for ( i = 0; i != v23; ++i )
          {
            v26 = *(char **)&v21[v24];
            v27 = &v21[v24];
            if ( v26 )
            {
              v28 = *((_QWORD *)v27 + 1);
              if ( v28 )
              {
                for ( j = 0; j != v28; ++j )
                {
                  v30 = &v26[32 * j];
                  if ( *(int *)v30 >= -1 )
                  {
                    v31 = *((void **)v30 + 1);
                    if ( v31 )
                    {
                      *((_QWORD *)v30 + 2) = 0;
                      j__free(v31);
                    }
                  }
                  v26 = *(char **)v27;
                }
              }
              *((_QWORD *)v27 + 1) = 0;
              j__free(v26);
            }
            v24 += 48;
            v21 = *((char **)v22 + 5);
          }
        }
        *((_QWORD *)v22 + 6) = 0;
        j__free(v21);
      }
      j__free_0(v22);
      --a1[47];
      goto LABEL_32;
    }
    v32 = nullptr;
  }
  v45 = v16 - 1;
  v4[6] = v45;
  v46 = (char **)(v17 + 48 * v45);
  v47 = *v46;
  if ( *v46 )
  {
    v48 = v46[1];
    if ( v48 )
    {
      for ( k = nullptr; k != v48; ++k )
      {
        v50 = &v47[32 * (_QWORD)k];
        if ( *(int *)v50 >= -1 )
        {
          v51 = *((void **)v50 + 1);
          if ( v51 )
          {
            *((_QWORD *)v50 + 2) = 0;
            j__free(v51);
          }
        }
        v47 = *v46;
      }
    }
    v46[1] = nullptr;
    j__free(v47);
  }
  if ( !v32 )
  {
    v41 = v4[6];
    goto LABEL_69;
  }
  if ( !v19 )
    goto LABEL_49;
  v33 = 32 * v19;
LABEL_44:
  v42 = v32;
  v43 = &v32[v33];
  do
  {
    if ( *(int *)v42 >= -1 )
    {
      v44 = *((void **)v42 + 1);
      if ( v44 )
      {
        *((_QWORD *)v42 + 2) = 0;
        j__free(v44);
      }
    }
    v42 += 32;
  }
  while ( v43 != v42 );
LABEL_49:
  j__free(v32);
  if ( !v4[6] )
    goto LABEL_18;
LABEL_32:
  if ( a1[21] == a1[17] )
    return 1;
  else
    return 3;
}
// 4C77B8: using guessed type __int64 qword_4C77B8[4];
