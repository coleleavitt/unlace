/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025EB0
// Address: 0x0000000100025EB0

//----- (0000000100025EB0) ----------------------------------------------------
__int64 __fastcall sub_100025EB0(__int64 a1)
{
  __int64 v2; // x22
  __int64 v3; // x20
  _QWORD *v4; // x1
  __int64 v5; // x8
  bool v6; // cf
  __int64 v7; // x8
  __int64 v8; // x23
  unsigned __int64 v9; // x8
  size_t v10; // x20
  _QWORD *v11; // x21
  _QWORD *v12; // x1
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x23
  unsigned __int64 v16; // x22

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8LL * *(_QWORD *)(a1 + 352) - 8);
  v3 = *(_QWORD *)(v2 + 16);
  v4 = *(_QWORD **)v3;
  v5 = *(_QWORD *)(v3 + 8);
  v6 = v5 != 0;
  v7 = v5 - 1;
  if ( v6 )
    v8 = v7;
  else
    v8 = 0;
  if ( *(_QWORD *)(v3 + 16) < (unsigned __int64)(v8 + 2) )
  {
    v4 = qvector_reserve(*(_QWORD **)(v2 + 16), v4, v8 + 2, 1u);
    *(_QWORD *)v3 = v4;
  }
  *(_QWORD *)(v3 + 8) = v8 + 2;
  *((_BYTE *)v4 + v8) = 46;
  *(_BYTE *)(*(_QWORD *)v3 + v8 + 1) = 0;
  v9 = *(_QWORD *)(a1 + 48);
  if ( v9 )
    v10 = v9 - 1;
  else
    v10 = 0;
  if ( v9 >= 2 )
  {
    v11 = *(_QWORD **)(v2 + 16);
    v12 = (_QWORD *)*v11;
    v13 = v11[1];
    v6 = v13 != 0;
    v14 = v13 - 1;
    if ( v6 )
      v15 = v14;
    else
      v15 = 0;
    v16 = v15 + v10 + 1;
    if ( v11[2] < v16 )
    {
      v12 = qvector_reserve(v11, v12, v15 + v10 + 1, 1u);
      *v11 = v12;
    }
    v11[1] = v16;
    *((_BYTE *)v12 + v15 + v10) = 0;
    memcpy((void *)(*v11 + v15), *(const void **)(a1 + 40), v10);
  }
  return 0;
}
