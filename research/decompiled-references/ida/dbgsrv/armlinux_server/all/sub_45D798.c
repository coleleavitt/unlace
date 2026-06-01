/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D798
// Address: 0x000000000045D798

//----- (000000000045D798) ----------------------------------------------------
__int64 __fastcall sub_45D798(_QWORD *a1, __int64 a2, char *a3)
{
  __int64 v3; // x20
  unsigned __int64 v7; // x1
  __int64 v8; // x3
  void *v9; // x0
  void *v10; // x20
  char *v11; // x1
  unsigned __int64 v12; // x0
  __int64 v13; // x4
  unsigned __int64 v14; // x2
  _QWORD *v16; // x0
  _QWORD v17[2]; // [xsp+30h] [xbp-10h] BYREF

  v3 = (__int64)(a1 + 9);
  v8 = a1[10];
  v7 = a1[11];
  v9 = (void *)a1[9];
  if ( v8 + 1 > v7 )
  {
    v9 = sub_491288(v3, v9, v8 + 1, 8u);
    a1[9] = v9;
    v8 = *(_QWORD *)(v3 + 8);
  }
  *((_QWORD *)v9 + v8) = a2;
  ++*(_QWORD *)(v3 + 8);
  v10 = sub_4911C0(a3);
  v11 = (char *)a1[12];
  v17[0] = v10;
  if ( v11 > (char *)v17 )
  {
    v14 = a1[13] + 1LL;
    if ( a1[14] >= v14 )
      goto LABEL_6;
    goto LABEL_9;
  }
  v12 = a1[14];
  v13 = a1[13];
  v14 = v13 + 1;
  if ( v17 >= (_QWORD *)&v11[8 * v12] )
  {
    if ( v12 >= v14 )
    {
LABEL_6:
      *(_QWORD *)(a1[12] + 8LL * a1[13]) = v10;
      goto LABEL_7;
    }
LABEL_9:
    a1[12] = sub_491288((__int64)(a1 + 12), v11, v14, 8u);
    goto LABEL_6;
  }
  if ( v12 < v14 )
  {
    v16 = sub_491288((__int64)(a1 + 12), v11, v14, 8u);
    a1[12] = v16;
    v16[a1[13]] = v10;
  }
  else
  {
    *(_QWORD *)&v11[8 * v13] = v10;
  }
LABEL_7:
  ++a1[13];
  return v17[1] ^ _stack_chk_guard;
}
