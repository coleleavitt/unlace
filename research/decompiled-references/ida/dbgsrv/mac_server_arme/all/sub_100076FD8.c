/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100076FD8
// Address: 0x0000000100076FD8

//----- (0000000100076FD8) ----------------------------------------------------
_QWORD *__fastcall sub_100076FD8(char *__s, char *a2, char a3, __int64 a4, __int64 a5)
{
  _BYTE *v8; // x22
  size_t v9; // x19
  void *v10; // x0
  size_t v12; // x20
  void *v13; // x21
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x9
  _QWORD *v16; // x1
  _QWORD *v17; // x8
  size_t v18; // x20
  void *v19; // x0
  __int64 v20; // x21
  void *v21; // x23
  char *v22; // x19
  unsigned __int64 v23; // x8
  char *v24; // x0
  signed __int64 v25; // x9
  char *v26; // x19
  unsigned __int64 v27; // x20
  _QWORD *v28; // x19
  unsigned __int64 v29; // x21
  int v30; // w22
  char *v31; // x24
  unsigned __int64 v32; // x1
  void *v33; // x0
  void *v36; // x0
  unsigned __int64 v37; // x20
  __int64 v38; // x21
  void *v39; // x0
  _QWORD *v40; // x22
  void *v42; // [xsp+0h] [xbp-80h] BYREF
  size_t v43; // [xsp+8h] [xbp-78h]
  char *v44; // [xsp+10h] [xbp-70h]
  void *__ptr; // [xsp+18h] [xbp-68h] BYREF
  unsigned __int64 v46; // [xsp+20h] [xbp-60h]
  unsigned __int64 v47; // [xsp+28h] [xbp-58h]
  void *v48; // [xsp+30h] [xbp-50h] BYREF
  __int64 v49; // [xsp+38h] [xbp-48h]
  char *v50; // [xsp+40h] [xbp-40h]

  __ptr = nullptr;
  v46 = 0;
  v47 = 0;
  if ( (a3 & 8) != 0 )
  {
    v48 = nullptr;
    v49 = 0;
    v50 = nullptr;
    v12 = *(_QWORD *)(a5 + 8);
    if ( v12 )
    {
      v13 = qalloc_or_throw(*(_QWORD *)(a5 + 8));
      v48 = v13;
      v50 = (char *)v12;
      memcpy(v13, *(const void **)a5, v12);
      v49 = v12;
      v14 = v46;
      v15 = v47;
      v16 = __ptr;
    }
    else
    {
      v16 = nullptr;
      v15 = 0;
      v14 = 0;
      v13 = nullptr;
    }
    if ( v15 < v14 + 1 )
    {
      v16 = qvector_reserve(&__ptr, v16, v14 + 1, 0x18u);
      __ptr = v16;
      v14 = v46;
    }
    v17 = &v16[3 * v14];
    *v17 = v13;
    v17[1] = v12;
    v17[2] = v12;
    ++v46;
    if ( a2 && *a2 )
    {
      v48 = nullptr;
      v49 = 0;
      v50 = nullptr;
      v48 = qvector_reserve(&v48, nullptr, 3u, 1u);
      v49 = 3;
      strcpy((char *)v48, "-c");
      sub_100014404((_QWORD **)&__ptr, &v48);
      if ( v48 )
      {
        v49 = 0;
        qfree(v48);
      }
      v48 = nullptr;
      v49 = 0;
      v50 = nullptr;
      v18 = strlen(a2);
      v19 = nullptr;
      if ( v18 != -1 )
      {
        v19 = qvector_reserve(&v48, nullptr, v18 + 1, 1u);
        v48 = v19;
      }
      v49 = v18 + 1;
      memmove(v19, a2, v18);
      *((_BYTE *)v48 + v18) = 0;
      sub_100014404((_QWORD **)&__ptr, &v48);
      if ( v48 )
      {
        v49 = 0;
        qfree(v48);
      }
    }
  }
  else
  {
    if ( a2 )
      parse_command_line(&__ptr, a4, a2, a3);
    if ( (a3 & 4) == 0 )
    {
      v8 = __ptr;
      v42 = nullptr;
      v43 = 0;
      v44 = nullptr;
      if ( __s )
      {
        v9 = strlen(__s);
        if ( v9 == -1 )
        {
          v10 = nullptr;
        }
        else
        {
          v10 = qvector_reserve(&v42, nullptr, v9 + 1, 1u);
          v42 = v10;
        }
        v43 = v9 + 1;
        memmove(v10, __s, v9);
        *((_BYTE *)v42 + v9) = 0;
        v21 = v42;
        v20 = v43;
        __s = v44;
        v22 = (char *)__ptr;
      }
      else
      {
        v20 = 0;
        v21 = nullptr;
        v22 = (char *)__ptr;
      }
      v48 = v21;
      v49 = v20;
      v50 = __s;
      v43 = 0;
      v44 = nullptr;
      v42 = nullptr;
      v23 = v46;
      v24 = v22;
      if ( v47 < v46 + 1 )
      {
        v24 = (char *)qvector_reserve(&__ptr, v22, v46 + 1, 0x18u);
        __ptr = v24;
        v23 = v46;
      }
      v25 = v8 - v22;
      v26 = &v24[v8 - v22];
      memmove(v26 + 24, v26, 24 * v23 - v25);
      *(_QWORD *)v26 = v21;
      *((_QWORD *)v26 + 1) = v20;
      *((_QWORD *)v26 + 2) = __s;
      ++v46;
      if ( v42 )
      {
        v43 = 0;
        qfree(v42);
      }
    }
  }
  v27 = v46;
  v28 = qalloc((void *)(8 * v46 + 8));
  if ( !v28 )
    sub_100000CD0();
  if ( v27 )
  {
    v29 = 0;
    v30 = 1;
    do
    {
      v31 = (char *)__ptr + 24 * v29;
      v32 = *((_QWORD *)v31 + 1);
      v33 = *(void **)v31;
      if ( *((_QWORD *)v31 + 2) > v32 && v32 != 0 && v33 != nullptr )
      {
        v33 = qrealloc(v33, v32);
        if ( !v33 )
          v33 = *(void **)v31;
      }
      *(_QWORD *)v31 = 0;
      *((_QWORD *)v31 + 1) = 0;
      *((_QWORD *)v31 + 2) = 0;
      v28[v29] = v33;
      v29 = v30++;
    }
    while ( v27 > v29 );
  }
  v28[v27] = 0;
  v36 = __ptr;
  if ( __ptr )
  {
    v37 = v46;
    if ( v46 )
    {
      v38 = 0;
      do
      {
        v39 = *(void **)((char *)__ptr + v38);
        if ( v39 )
        {
          v40 = (char *)__ptr + v38;
          *(_QWORD *)((char *)__ptr + v38 + 8) = 0;
          qfree(v39);
          *v40 = 0;
          v40[2] = 0;
        }
        v38 += 24;
        --v37;
      }
      while ( v37 );
      v36 = __ptr;
    }
    v46 = 0;
    qfree(v36);
  }
  return v28;
}
