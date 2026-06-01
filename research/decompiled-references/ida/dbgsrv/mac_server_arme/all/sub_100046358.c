/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046358
// Address: 0x0000000100046358

//----- (0000000100046358) ----------------------------------------------------
__int64 __fastcall sub_100046358(_QWORD **a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v4; // x22
  char v5; // w23
  _QWORD *v6; // x8
  _QWORD *v7; // x9
  bool v8; // cf
  char *v9; // x9
  char *v10; // x21
  __int64 v11; // x22
  _QWORD *v12; // x0
  unsigned __int64 v13; // x8
  size_t v14; // x20
  _QWORD *v15; // x8
  _QWORD *v16; // x9
  char *v17; // x9
  char *v18; // x24
  unsigned __int64 v19; // x21
  __int64 v20; // x26
  _QWORD *v21; // x0
  _QWORD *v22; // x1
  _QWORD *v23; // x8
  char *v24; // x8
  char *v25; // x21

  result = 0;
  v4 = *(unsigned __int16 *)(a2 + 24);
  if ( (unsigned int)v4 <= 0x3E )
  {
    if ( ((1LL << v4) & 0x5400C00000000000LL) != 0 )
      goto LABEL_23;
    if ( ((1LL << v4) & 0x44) != 0 )
    {
      LOBYTE(v4) = 0;
      v5 = 1;
    }
    else
    {
      if ( v4 != 4 )
        return result;
      v6 = *a1;
      v7 = a1[1];
      v8 = v7 != nullptr;
      v9 = (char *)v7 - 1;
      if ( v8 )
        v10 = v9;
      else
        v10 = nullptr;
      if ( a1[2] < (_QWORD *)(v10 + 2) )
      {
        v11 = a2;
        v12 = qvector_reserve(a1, *a1, (unsigned __int64)(v10 + 2), 1u);
        a2 = v11;
        v6 = v12;
        *a1 = v12;
      }
      v5 = 0;
      a1[1] = v10 + 2;
      LOBYTE(v4) = 34;
      v10[(_QWORD)v6] = 34;
      v10[(_QWORD)*a1 + 1] = 0;
    }
    v13 = *(_QWORD *)(a2 + 8);
    if ( v13 )
      v14 = v13 - 1;
    else
      v14 = 0;
    if ( v13 >= 2 )
    {
      v15 = *a1;
      v16 = a1[1];
      v8 = v16 != nullptr;
      v17 = (char *)v16 - 1;
      if ( v8 )
        v18 = v17;
      else
        v18 = nullptr;
      v19 = (unsigned __int64)&v18[v14 + 1];
      if ( (unsigned __int64)a1[2] < v19 )
      {
        v20 = a2;
        v21 = qvector_reserve(a1, *a1, (unsigned __int64)&v18[v14 + 1], 1u);
        a2 = v20;
        v15 = v21;
        *a1 = v21;
      }
      a1[1] = (_QWORD *)v19;
      v18[v14 + (_QWORD)v15] = 0;
      memcpy(&v18[(_QWORD)*a1], *(const void **)a2, v14);
    }
    if ( (v5 & 1) == 0 )
    {
LABEL_23:
      v22 = *a1;
      v23 = a1[1];
      v8 = v23 != nullptr;
      v24 = (char *)v23 - 1;
      if ( v8 )
        v25 = v24;
      else
        v25 = nullptr;
      if ( a1[2] < (_QWORD *)(v25 + 2) )
      {
        v22 = qvector_reserve(a1, v22, (unsigned __int64)(v25 + 2), 1u);
        *a1 = v22;
      }
      a1[1] = v25 + 2;
      v25[(_QWORD)v22] = v4;
      v25[(_QWORD)*a1 + 1] = 0;
    }
    return 1;
  }
  return result;
}
