/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006073C
// Address: 0x000000010006073C

//----- (000000010006073C) ----------------------------------------------------
bool __fastcall sub_10006073C(_QWORD *a1, sockaddr *a2, socklen_t a3, int a4)
{
  __int64 v7; // x8
  bool v8; // cf
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x24
  size_t v11; // x0
  size_t v12; // x22
  _QWORD *v13; // x1
  __int64 v14; // x8
  __int64 v15; // x8
  __int64 v16; // x25
  size_t v17; // x26
  unsigned __int64 v18; // x23
  __int64 v19; // x8
  unsigned __int64 v20; // x8
  unsigned __int64 v21; // x22
  _QWORD *v22; // x1
  size_t v23; // x0
  size_t v24; // x20
  _QWORD *v25; // x1
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // x22
  size_t v29; // x23
  unsigned __int64 v30; // x21
  _QWORD *v31; // x1
  __int64 v32; // x8
  __int64 v33; // x8
  __int64 v34; // x21
  size_t v35; // x20
  unsigned __int64 v36; // x21
  _QWORD *v37; // x1
  __int64 v38; // x8
  unsigned __int64 v39; // x8
  char __s[1024]; // [xsp+8h] [xbp-458h] BYREF

  v7 = a1[1];
  v8 = v7 != 0;
  v9 = v7 - 1;
  if ( v8 )
    v10 = v9;
  else
    v10 = 0;
  if ( a4 && !getnameinfo(a2, a3, __s, 0x400u, nullptr, 0, 4) )
  {
    v11 = strlen(__s);
    v12 = v11;
    v13 = (_QWORD *)*a1;
    v14 = a1[1];
    v8 = v14 != 0;
    v15 = v14 - 1;
    if ( v8 )
      v16 = v15;
    else
      v16 = 0;
    v17 = v16 + v11;
    v18 = v16 + v11 + 1;
    if ( a1[2] < v18 )
    {
      v13 = qvector_reserve(a1, v13, v18, 1u);
      *a1 = v13;
    }
    a1[1] = v18;
    *((_BYTE *)v13 + v17) = 0;
    memmove((void *)(*a1 + v16), __s, v12);
  }
  if ( !getnameinfo(a2, a3, __s, 0x400u, nullptr, 0, 2) )
  {
    v19 = a1[1];
    v8 = v19 != 0;
    v20 = v19 - 1;
    if ( v8 )
      v21 = v20;
    else
      v21 = 0;
    if ( v21 <= v10 )
    {
      v35 = strlen(__s);
      v36 = v35 + v21 + 1;
      v37 = (_QWORD *)*a1;
      if ( a1[2] < v36 )
      {
        v37 = qvector_reserve(a1, v37, v36, 1u);
        *a1 = v37;
      }
      a1[1] = v36;
      *((_BYTE *)v37 + v35 + v21) = 0;
      memmove((void *)(*a1 + v21), __s, v35);
    }
    else
    {
      v22 = (_QWORD *)*a1;
      if ( a1[2] < v21 + 2 )
      {
        v22 = qvector_reserve(a1, v22, v21 + 2, 1u);
        *a1 = v22;
      }
      a1[1] = v21 + 2;
      *((_BYTE *)v22 + v21) = 40;
      *(_BYTE *)(*a1 + v21 + 1) = 0;
      v23 = strlen(__s);
      v24 = v23;
      v25 = (_QWORD *)*a1;
      v26 = a1[1];
      v8 = v26 != 0;
      v27 = v26 - 1;
      if ( v8 )
        v28 = v27;
      else
        v28 = 0;
      v29 = v28 + v23;
      v30 = v28 + v23 + 1;
      if ( a1[2] < v30 )
      {
        v25 = qvector_reserve(a1, v25, v30, 1u);
        *a1 = v25;
      }
      a1[1] = v30;
      *((_BYTE *)v25 + v29) = 0;
      memmove((void *)(*a1 + v28), __s, v24);
      v31 = (_QWORD *)*a1;
      v32 = a1[1];
      v8 = v32 != 0;
      v33 = v32 - 1;
      if ( v8 )
        v34 = v33;
      else
        v34 = 0;
      if ( a1[2] < (unsigned __int64)(v34 + 2) )
      {
        v31 = qvector_reserve(a1, v31, v34 + 2, 1u);
        *a1 = v31;
      }
      a1[1] = v34 + 2;
      *((_BYTE *)v31 + v34) = 41;
      *(_BYTE *)(*a1 + v34 + 1) = 0;
    }
  }
  v38 = a1[1];
  v8 = v38 != 0;
  v39 = v38 - 1;
  if ( !v8 )
    v39 = 0;
  return v39 > v10;
}
