/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45DC90
// Address: 0x000000000045DC90

//----- (000000000045DC90) ----------------------------------------------------
__int64 __fastcall sub_45DC90(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // x21
  unsigned int v8; // w22
  char *v9; // x0
  char *v11; // x1
  unsigned __int64 v12; // x3
  unsigned __int64 v13; // x0
  size_t v14; // x2
  __int64 v15; // x1
  unsigned __int64 v16; // x2
  void *v17; // x0
  char v18; // [xsp+47h] [xbp-9h] BYREF

  v5 = a4;
  *(_QWORD *)(a2 + 8) = 0;
  v8 = a4;
  if ( (a1[100] & 0x10) != 0 )
  {
    v18 = 0;
    if ( !a4 )
      return v8;
    v11 = *(char **)a2;
    v12 = *(_QWORD *)(a2 + 16);
    if ( *(_QWORD *)a2 <= (unsigned __int64)&v18 && &v18 < &v11[v12] )
    {
      v16 = 0;
      if ( v5 > v12 )
      {
        v17 = sub_491288(a2, v11, v5, 1u);
        v16 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v17;
      }
      if ( v5 > v16 )
      {
        do
          *(_BYTE *)(*(_QWORD *)a2 + v16++) = 0;
        while ( v5 != v16 );
        *(_QWORD *)(a2 + 8) = v5;
        return v8;
      }
    }
    else
    {
      if ( v5 > v12 )
        *(_QWORD *)a2 = sub_491288(a2, v11, v5, 1u);
      v13 = *(_QWORD *)(a2 + 8);
      if ( v5 > v13 )
      {
        do
          *(_BYTE *)(*(_QWORD *)a2 + v13++) = v18;
        while ( v5 != v13 );
      }
    }
    *(_QWORD *)(a2 + 8) = v5;
    return v8;
  }
  v9 = *(char **)a2;
  if ( a4 )
  {
    v14 = a4;
    v15 = 0;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)a4 )
    {
      v9 = (char *)sub_491288(a2, *(void **)a2, a4, 1u);
      v15 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v9;
      v14 = v5 - v15;
    }
    memset(&v9[v15], 0, v14);
    *(_QWORD *)(a2 + 8) = v5;
    v9 = *(char **)a2;
  }
  if ( (*(__int64 (__fastcall **)(_QWORD *, __int64, char *, unsigned __int64, _QWORD))(*a1 + 288LL))(a1, a3, v9, v5, 0) <= 0 )
    return (unsigned int)-1;
  return v8;
}
