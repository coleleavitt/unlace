/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E530
// Address: 0x000000000049E530

//----- (000000000049E530) ----------------------------------------------------
char *__fastcall sub_49E530(struct _Unwind_Context *a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 RegionStart; // x2
  char *v7; // x19
  int v8; // w21
  char *v9; // x0
  int v10; // w1
  __int64 v11; // x4
  int v12; // w2
  char v13; // t1
  unsigned __int64 v14; // x1
  char v15; // w1
  char *result; // x0
  __int64 v17; // x4
  int v18; // w2
  char v19; // t1
  unsigned __int64 v20; // x1
  char *v21; // x0
  char *v22; // x19
  int v23; // w1

  RegionStart = 0;
  if ( a1 )
    RegionStart = _Unwind_GetRegionStart(a1);
  *(_QWORD *)a3 = RegionStart;
  v7 = (char *)(a2 + 1);
  v8 = *a2;
  if ( v8 == 255 )
  {
    *(_QWORD *)(a3 + 8) = RegionStart;
    v9 = v7 + 1;
    v10 = (unsigned __int8)*v7;
    *(_BYTE *)(a3 + 40) = v10;
    if ( v10 != 255 )
      goto LABEL_5;
LABEL_12:
    *(_QWORD *)(a3 + 24) = 0;
    goto LABEL_8;
  }
  v21 = (char *)sub_49E4D0(v8, a1);
  v22 = sub_49E220(v8, v21, v7, (unsigned __int64 *)(a3 + 8));
  v9 = v22 + 1;
  v23 = (unsigned __int8)*v22;
  *(_BYTE *)(a3 + 40) = v23;
  if ( v23 == 255 )
    goto LABEL_12;
LABEL_5:
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = *v9++;
    v14 = (unsigned __int64)(v13 & 0x7F) << v12;
    v12 += 7;
    v11 |= v14;
  }
  while ( v13 < 0 );
  *(_QWORD *)(a3 + 24) = &v9[v11];
LABEL_8:
  v15 = *v9;
  result = v9 + 1;
  *(_BYTE *)(a3 + 41) = v15;
  v17 = 0;
  v18 = 0;
  do
  {
    v19 = *result++;
    v20 = (unsigned __int64)(v19 & 0x7F) << v18;
    v18 += 7;
    v17 |= v20;
  }
  while ( v19 < 0 );
  *(_QWORD *)(a3 + 32) = &result[v17];
  return result;
}
