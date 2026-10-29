/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4524C8
// Address: 0x00000000004524C8

//----- (00000000004524C8) ----------------------------------------------------
__int64 __fastcall sub_4524C8(_QWORD *a1, char *a2, unsigned __int8 a3)
{
  int v4; // w19
  pthread_mutex_t *v6; // x28
  char *v7; // x1
  __int64 v8; // x24
  __int64 v9; // x19
  __int64 i; // x21
  void *v11; // x0
  char *v12; // x1
  char *v13; // x0
  unsigned int v14; // w19
  const char *v15; // x19
  void ***v16; // x21
  size_t v17; // x0
  size_t v18; // x25
  size_t v19; // x23
  void **v20; // x0
  unsigned __int64 v21; // x1
  __int64 v22; // x3
  unsigned __int64 v23; // x2
  void *v24; // x19
  void *v25; // x23
  void *v26; // x25
  void **v27; // x1
  void *v28; // x0
  void **v30; // x1
  char *v31; // [xsp+68h] [xbp-38h]
  const char *v32; // [xsp+78h] [xbp-28h] BYREF
  void *ptr; // [xsp+80h] [xbp-20h] BYREF
  void *v34; // [xsp+88h] [xbp-18h]
  void *v35; // [xsp+90h] [xbp-10h]

  v4 = a3;
  v6 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  if ( !v4 )
  {
    v7 = (char *)a1[3];
    if ( v7 )
    {
      v8 = a1[4];
      if ( v8 )
      {
        v9 = 0;
        for ( i = 0; i != v8; ++i )
        {
          v11 = *(void **)&v7[v9];
          v12 = &v7[v9];
          if ( v11 )
          {
            *((_QWORD *)v12 + 1) = 0;
            j__free(v11);
          }
          v9 += 24;
          v7 = (char *)a1[3];
        }
      }
      a1[4] = 0;
      j__free(v7);
      a1[3] = 0;
      a1[5] = 0;
    }
  }
  if ( !a2 )
  {
LABEL_22:
    v14 = 1;
    goto LABEL_23;
  }
  v13 = (char *)sub_4911C0(a2);
  v31 = v13;
  v14 = 0;
  if ( v13 )
  {
    v15 = sub_4930F8(v13, ":", &v32);
    if ( v15 )
    {
      v16 = (void ***)(a1 + 3);
      do
      {
        if ( *v15 )
        {
          ptr = nullptr;
          v34 = nullptr;
          v35 = nullptr;
          v17 = strlen(v15);
          v18 = v17 + 1;
          v19 = v17;
          ptr = sub_491288((__int64)&ptr, nullptr, v17 + 1, 1u);
          v34 = (void *)v18;
          memmove(ptr, v15, v19);
          *((_BYTE *)ptr + v19) = 0;
          v20 = (void **)a1[3];
          if ( v20 > &ptr )
          {
            v22 = a1[4];
            v21 = a1[5];
            v23 = v22 + 1;
LABEL_25:
            if ( v21 < v23 )
            {
              v20 = (void **)sub_491288((__int64)(a1 + 3), (void *)a1[3], v23, 0x18u);
              v22 = a1[4];
              *v16 = v20;
            }
            v30 = &v20[3 * v22];
            *v30 = ptr;
            v30[1] = v34;
            v30[2] = v35;
            ++a1[4];
            goto LABEL_20;
          }
          v21 = a1[5];
          v22 = a1[4];
          v23 = v22 + 1;
          if ( &ptr >= &v20[3 * v21] )
            goto LABEL_25;
          v24 = ptr;
          v25 = v34;
          ptr = nullptr;
          v34 = nullptr;
          v26 = v35;
          v35 = nullptr;
          if ( v23 > v21 )
          {
            v20 = (void **)sub_491288((__int64)(a1 + 3), v20, v23, 0x18u);
            v22 = a1[4];
            *v16 = v20;
          }
          v27 = &v20[3 * v22];
          *v27 = v24;
          v27[1] = v25;
          v27[2] = v26;
          v28 = ptr;
          ++a1[4];
          if ( v28 )
          {
            v34 = nullptr;
            j__free(v28);
          }
        }
LABEL_20:
        v15 = sub_4930F8(nullptr, ":", &v32);
      }
      while ( v15 );
    }
    j__free(v31);
    goto LABEL_22;
  }
LABEL_23:
  sub_494760(v6);
  return v14;
}
// 522288: using guessed type __int64 qword_522288;
