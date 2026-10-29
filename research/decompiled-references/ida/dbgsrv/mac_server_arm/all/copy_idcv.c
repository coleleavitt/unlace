/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: copy_idcv
// Address: 0x00000001000315FC

//----- (00000001000315FC) ----------------------------------------------------
__int64 __fastcall copy_idcv(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v3; // w8
  void *v4; // x8
  unsigned __int8 *v5; // x20
  unsigned __int8 *v6; // x20
  unsigned __int8 *v7; // x8
  int v8; // w9
  size_t v10; // x20
  unsigned __int8 *v11; // x21
  void *v12; // x0
  __int64 v13; // x9
  void *v14; // x0

  if ( a1 == a2 )
    return 0;
  v3 = *a1;
  if ( v3 == 10 )
  {
    a1 = deref_idcv(a1, 1);
    if ( !a1 )
      return get_qerrno();
    v3 = *a1;
  }
  if ( v3 == 5 )
  {
    v6 = a1;
    sub_100031978(*((_QWORD *)a1 + 1), a1);
    a1 = v6;
  }
  else if ( v3 == 7 )
  {
    v4 = *((void **)a1 + 1);
    if ( v4 )
    {
      v5 = a1;
      *((_QWORD *)a1 + 2) = 0;
      qfree(v4);
      a1 = v5;
      *((_QWORD *)v5 + 3) = 0;
    }
  }
  *a1 = 2;
  *((_QWORD *)a1 + 1) = 0;
  v7 = a1 + 8;
  v8 = *a2;
  *a1 = v8;
  if ( v8 <= 6 )
  {
    if ( v8 > 4 )
    {
      if ( v8 == 5 )
      {
        v13 = *((_QWORD *)a2 + 1);
        *(_QWORD *)v7 = v13;
        ++*(_DWORD *)(v13 + 24);
      }
      else
      {
        *(_DWORD *)v7 = *((_DWORD *)a2 + 2);
      }
      return 0;
    }
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
LABEL_29:
        if ( under_debugger == 1 )
          __break(1u);
        interr(283);
        sub_1000013F4(v14);
      }
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  if ( v8 <= 8 )
  {
    if ( v8 == 7 )
    {
      *(_QWORD *)v7 = 0;
      *((_QWORD *)a1 + 2) = 0;
      *((_QWORD *)a1 + 3) = 0;
      v10 = *((_QWORD *)a2 + 2);
      if ( v10 )
      {
        v11 = a1;
        v12 = qalloc_or_throw(*((_QWORD *)a2 + 2));
        *((_QWORD *)v11 + 1) = v12;
        *((_QWORD *)v11 + 3) = v10;
        memcpy(v12, *((const void **)a2 + 1), v10);
        *((_QWORD *)v11 + 2) = v10;
      }
      return 0;
    }
    goto LABEL_23;
  }
  if ( v8 == 9 )
  {
LABEL_23:
    *(_QWORD *)v7 = *((_QWORD *)a2 + 1);
    return 0;
  }
  if ( v8 != 10 )
    goto LABEL_29;
LABEL_22:
  *(_OWORD *)v7 = *(_OWORD *)(a2 + 8);
  return 0;
}
// 1000316D0: conditional instruction was optimized away because w9.4==8
// 1000316E4: conditional instruction was optimized away because w9.4==6
// 1000317AC: variable 'v14' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
