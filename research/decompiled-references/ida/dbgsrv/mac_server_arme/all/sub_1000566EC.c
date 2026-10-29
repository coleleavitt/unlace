/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000566EC
// Address: 0x00000001000566EC

//----- (00000001000566EC) ----------------------------------------------------
__int64 __fastcall sub_1000566EC(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v10; // x1
  _QWORD *v11; // x8
  __int64 v13; // x0
  __int64 v14; // x25
  __int64 v15; // x26
  _QWORD *v16; // x8
  int v17; // w23
  __int64 v18; // x22
  char *v19; // x8
  const char *v20; // x22
  size_t v21; // x0
  size_t v22; // x23
  _QWORD *v23; // x27
  unsigned __int64 v24; // x24
  char v26; // [xsp+7h] [xbp-59h] BYREF

  v10 = *a2;
  v11 = a2[1];
  if ( a2[2] < (_QWORD *)((char *)v11 + 1) )
  {
    v10 = qvector_reserve(a2, v10, (unsigned __int64)v11 + 1, 1u);
    *a2 = v10;
    v11 = a2[1];
  }
  *((_BYTE *)v11 + (_QWORD)v10) = 1;
  a2[1] = (_QWORD *)((char *)a2[1] + 1);
  sub_10002E2F0(a2, *(unsigned __int8 *)(a4 + 168));
  sub_10002E2F0(a2, *(unsigned __int8 *)(a4 + 169));
  v13 = sub_10004CAD8(a5);
  sub_1000530E4(a2, v13);
  sub_10002E2F0(a2, *(_DWORD *)(a5 + 24));
  sub_10002E2F0(a2, *(_DWORD *)(a6 + 8));
  if ( (int)*(_QWORD *)(a6 + 8) >= 1 )
  {
    v14 = 0;
    v15 = *(_QWORD *)(a6 + 8) & 0x7FFFFFFFLL;
    do
    {
      v17 = *(_DWORD *)(*(_QWORD *)a6 + 4 * v14);
      v18 = *(_QWORD *)(a4 + 104) + 120LL * v17;
      sub_1000530E4(a2, *(_QWORD *)v18);
      sub_1000530E4(a2, *(unsigned int *)(v18 + 8));
      sub_10005691C(a2, (unsigned __int16)v17);
      if ( *(_QWORD *)(v18 + 24) )
        v19 = *(char **)(v18 + 16);
      else
        v19 = &byte_10007AE40;
      if ( v19 )
        v20 = v19;
      else
        v20 = &byte_1000931E5;
      v21 = strlen(v20);
      v22 = v21 + 1;
      if ( v21 != -1 )
      {
        v23 = a2[1];
        if ( __CFADD__(v23, v22) )
          v24 = 0x7FFFFFFFFFFFFFFFLL;
        else
          v24 = (unsigned __int64)v23 + v22;
        if ( (unsigned __int64)v23 >= v24 )
        {
          if ( v23 != (_QWORD *)v24 )
          {
            v26 = 0;
            sub_10001B764(a2, v24, &v26);
          }
        }
        else
        {
          v16 = *a2;
          if ( (unsigned __int64)a2[2] < v24 )
          {
            v16 = qvector_reserve(a2, *a2, v24, 1u);
            *a2 = v16;
          }
          bzero((char *)a2[1] + (_QWORD)v16, v24 - (_QWORD)a2[1]);
          a2[1] = (_QWORD *)v24;
        }
        memcpy((char *)v23 + (_QWORD)*a2, v20, v22);
      }
      ++v14;
    }
    while ( v15 != v14 );
  }
  return 0;
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000931E5: using guessed type char byte_1000931E5;
