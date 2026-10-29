/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001856C
// Address: 0x000000010001856C

//----- (000000010001856C) ----------------------------------------------------
void __usercall sub_10001856C(const char *a1@<X0>, _QWORD *a2@<X8>)
{
  size_t v4; // x21
  void *v5; // x0
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  const char *v11; // x24
  const char *v12; // x20
  char *v13; // x10
  unsigned __int64 v14; // x8
  _BOOL8 v15; // x9
  char *v16; // x21
  size_t v17; // x22
  __int64 v18; // x23
  void *v19; // x0
  size_t v20; // x21
  void *v21; // x0
  char *v22; // x0
  char *v23; // x20
  size_t v24; // x21
  unsigned __int64 v25; // x22
  void *v26; // x0
  void *v27; // [xsp+10h] [xbp-490h] BYREF
  __int64 v28; // [xsp+18h] [xbp-488h]
  __int64 v29; // [xsp+20h] [xbp-480h]
  void *v30; // [xsp+28h] [xbp-478h] BYREF
  unsigned __int64 v31; // [xsp+30h] [xbp-470h]
  __int64 v32; // [xsp+38h] [xbp-468h]
  void *v33; // [xsp+40h] [xbp-460h] BYREF
  __int64 v34; // [xsp+48h] [xbp-458h]
  __int64 v35; // [xsp+50h] [xbp-450h]
  char v36[1024]; // [xsp+58h] [xbp-448h] BYREF

  v33 = nullptr;
  v34 = 0;
  v35 = 0;
  v30 = nullptr;
  v31 = 0;
  v32 = 0;
  if ( a1 )
  {
    v4 = strlen(a1);
    if ( v4 == -1 )
    {
      v5 = nullptr;
    }
    else
    {
      v5 = qvector_reserve(&v30, nullptr, v4 + 1, 1u);
      v30 = v5;
    }
    v31 = v4 + 1;
    memmove(v5, a1, v4);
    *((_BYTE *)v30 + v4) = 0;
    if ( v31 >= 2 && *(_BYTE *)v30 == 126 && (unsigned int)qgetenv("HOME", &v33) )
    {
      v11 = &byte_10007AE40;
      if ( v34 )
        v12 = (const char *)v33;
      else
        v12 = &byte_10007AE40;
      if ( v31 )
        v13 = (char *)v30;
      else
        v13 = &byte_10007AE40;
      v14 = v31 - 1;
      if ( !v31 )
        v14 = 0;
      v15 = v31 > 1;
      v28 = 0;
      v29 = 0;
      if ( v31 <= 1 )
        v16 = v13;
      else
        v16 = v13 + 1;
      v27 = nullptr;
      if ( v14 >= 2 )
      {
        v17 = v14 - v15;
        v18 = v14 - v15 + 1;
        if ( v14 - v15 == -1 )
        {
          v19 = nullptr;
        }
        else
        {
          v19 = qvector_reserve(&v27, nullptr, v14 - v15 + 1, 1u);
          v27 = v19;
        }
        v28 = v18;
        memmove(v19, v16, v17);
        *((_BYTE *)v27 + v17) = 0;
        if ( v28 )
          v11 = (const char *)v27;
      }
      v22 = qmakepath(v36, 1024, v12, v6, v7, v8, v9, v10, v11);
      v23 = v22;
      *a2 = 0;
      a2[1] = 0;
      a2[2] = 0;
      if ( v22 )
      {
        v24 = strlen(v22);
        v25 = v24 + 1;
        if ( v24 == -1 )
        {
          v26 = nullptr;
        }
        else
        {
          v26 = qvector_reserve(a2, nullptr, v25, 1u);
          *a2 = v26;
        }
        a2[1] = v25;
        memmove(v26, v23, v24);
        *(_BYTE *)(*a2 + v24) = 0;
      }
      if ( v27 )
      {
        v28 = 0;
        qfree(v27);
      }
    }
    else
    {
      *a2 = 0;
      a2[1] = 0;
      a2[2] = 0;
      v20 = strlen(a1);
      v21 = nullptr;
      if ( v20 != -1 )
      {
        v21 = qvector_reserve(a2, nullptr, v20 + 1, 1u);
        *a2 = v21;
      }
      a2[1] = v20 + 1;
      memmove(v21, a1, v20);
      *(_BYTE *)(*a2 + v20) = 0;
    }
  }
  else
  {
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
  }
  if ( v30 )
  {
    v31 = 0;
    qfree(v30);
  }
  if ( v33 )
  {
    v34 = 0;
    qfree(v33);
  }
}
// 100018780: variable 'v6' is possibly undefined
// 100018780: variable 'v7' is possibly undefined
// 100018780: variable 'v8' is possibly undefined
// 100018780: variable 'v9' is possibly undefined
// 100018780: variable 'v10' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
