/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4484B8
// Address: 0x00000000004484B8

//----- (00000000004484B8) ----------------------------------------------------
bool __fastcall sub_4484B8(__int64 a1, __int64 a2)
{
  pthread_mutex_t *v4; // x21
  __int64 v5; // x0
  unsigned __int64 v6; // x23
  _BOOL4 v7; // w24
  __int64 v9; // x1

  v4 = (pthread_mutex_t *)qword_522288;
  sub_494720((pthread_mutex_t *)qword_522288);
  v5 = sub_43CF60();
  v6 = *(_QWORD *)(v5 + 88);
  v7 = a2 - 24 < v6 + 56LL * *(_QWORD *)(v5 + 96) && a2 - 24 >= v6;
  if ( a2 - 24 >= v6 + 56LL * *(_QWORD *)(v5 + 96) || a2 - 24 < v6 )
    goto LABEL_4;
  sub_448310((__int64 *)a1);
  *(_BYTE *)a1 = 10;
  if ( *(_BYTE *)a2 != 10 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = ~(-1227133513 * ((__int64)(a2 - 24 - v6) >> 3));
LABEL_4:
    sub_494760(v4);
    return v7;
  }
  v9 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = v9;
  sub_494760(v4);
  return v7;
}
// 522288: using guessed type __int64 qword_522288;
