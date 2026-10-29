/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000203F4
// Address: 0x00000001000203F4

//----- (00000001000203F4) ----------------------------------------------------
size_t __fastcall sub_1000203F4(size_t *a1, const void *a2, int a3, int a4, char a5, __int64 a6, char *a7)
{
  unsigned __int64 v9; // x27
  char *v10; // x20
  _QWORD *v11; // x0
  _QWORD *v12; // x1
  size_t v13; // x8
  _QWORD *v14; // x26
  __int64 v15; // x21
  __int64 v16; // x22
  char *v17; // x8
  _QWORD *v18; // x1
  size_t v19; // x8
  char **v20; // x27
  const void *v21; // x28
  size_t v22; // x0
  size_t v23; // x19
  unsigned __int64 v24; // x20
  char *v25; // x1
  _QWORD *v26; // x1
  size_t v27; // x8
  char **v28; // x25
  size_t result; // x0
  size_t v30; // x26
  unsigned __int64 v31; // x19
  char *v32; // x1
  _QWORD *v33; // x1
  size_t v34; // x8
  unsigned __int64 v35; // x2
  char *v36; // x9
  char **v37; // x8
  _Unwind_Exception *v38; // x0
  char v40; // [xsp+8h] [xbp-78h]
  __int64 v44; // [xsp+20h] [xbp-60h] BYREF

  v40 = a4;
  if ( !a6 )
  {
    v10 = nullptr;
    goto LABEL_28;
  }
  if ( (a3 & 0x100) != 0 )
  {
    v9 = 1;
  }
  else if ( a4 == 1 )
  {
    v9 = 16;
  }
  else if ( a4 == 7 )
  {
    v9 = 64;
  }
  else
  {
    if ( a4 != 2 )
    {
      if ( under_debugger == 1 )
        __break(1u);
      interr(1795);
      _Unwind_Resume(v38);
    }
    v9 = 32;
  }
  v12 = (_QWORD *)a1[9];
  v13 = a1[10];
  v11 = a1 + 9;
  if ( a1[11] < v13 + 1 )
  {
    v12 = qvector_reserve(v11, v12, v13 + 1, 0x18u);
    a1[9] = (size_t)v12;
    v13 = a1[10];
  }
  v14 = &v12[3 * v13];
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  ++a1[10];
  v44 = 0;
  sub_10002074C((_QWORD **)v14, v9, &v44);
  v15 = 0;
  v16 = 8 * v9;
  do
  {
    if ( *(_QWORD *)(a6 + v15) )
    {
      v18 = (_QWORD *)a1[3];
      v19 = a1[4];
      if ( a1[5] < v19 + 1 )
      {
        v18 = qvector_reserve(a1 + 3, v18, v19 + 1, 0x18u);
        a1[3] = (size_t)v18;
        v19 = a1[4];
      }
      v20 = (char **)&v18[3 * v19];
      *v20 = nullptr;
      v20[1] = nullptr;
      v20[2] = nullptr;
      ++a1[4];
      v21 = *(const void **)(a6 + v15);
      if ( v21 && (v22 = strlen(*(const char **)(a6 + v15))) != 0 )
      {
        v23 = v22;
        v24 = v22 + 1;
        v25 = *v20;
        if ( (unsigned __int64)v20[2] < v22 + 1 )
        {
          v25 = (char *)qvector_reserve(v20, v25, v24, 1u);
          *v20 = v25;
        }
        v20[1] = (char *)v24;
        memmove(v25, v21, v23);
        (*v20)[v23] = 0;
        if ( v20[1] )
        {
          v17 = *v20;
          goto LABEL_16;
        }
      }
      else
      {
        v20[1] = nullptr;
      }
      v17 = &byte_10007AE40;
LABEL_16:
      *(_QWORD *)(*v14 + v15) = v17;
    }
    v15 += 8;
  }
  while ( v16 != v15 );
  v10 = (char *)*v14;
LABEL_28:
  v26 = (_QWORD *)a1[3];
  v27 = a1[4];
  if ( a1[5] < v27 + 1 )
  {
    v26 = qvector_reserve(a1 + 3, v26, v27 + 1, 0x18u);
    a1[3] = (size_t)v26;
    v27 = a1[4];
  }
  v28 = (char **)&v26[3 * v27];
  *v28 = nullptr;
  v28[1] = nullptr;
  v28[2] = nullptr;
  ++a1[4];
  result = (size_t)a2;
  if ( a2 && (result = strlen((const char *)a2)) != 0 )
  {
    v30 = result;
    v31 = result + 1;
    v32 = *v28;
    if ( (unsigned __int64)v28[2] < result + 1 )
    {
      v32 = (char *)qvector_reserve(v28, v32, v31, 1u);
      *v28 = v32;
    }
    v28[1] = (char *)v31;
    result = (size_t)memmove(v32, a2, v30);
    (*v28)[v30] = 0;
  }
  else
  {
    v28[1] = nullptr;
  }
  v33 = (_QWORD *)*a1;
  v34 = a1[1];
  v35 = v34 + 1;
  if ( a1[2] < v34 + 1 )
  {
    result = (size_t)qvector_reserve(a1, v33, v35, 0x20u);
    v33 = (_QWORD *)result;
    *a1 = result;
    v34 = a1[1];
    v35 = v34 + 1;
  }
  a1[1] = v35;
  if ( v28[1] )
    v36 = *v28;
  else
    v36 = &byte_10007AE40;
  v37 = (char **)&v33[4 * v34];
  *v37 = v36;
  *((_DWORD *)v37 + 2) = a3;
  *((_BYTE *)v37 + 13) = v40;
  *((_BYTE *)v37 + 12) = a5;
  v37[2] = v10;
  v37[3] = a7;
  return result;
}
// 100020748: variable 'v38' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A590D: using guessed type char under_debugger;
