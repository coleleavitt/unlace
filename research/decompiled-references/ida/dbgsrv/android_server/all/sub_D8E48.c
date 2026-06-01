/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8E48
// Address: 0x00000000000D8E48

//----- (00000000000D8E48) ----------------------------------------------------
__int64 __fastcall sub_D8E48(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x0
  char *v9; // x3

  v6 = a1[1];
  v7 = v6 >> 8;
  if ( (v6 & 1) != 0 )
    v7 = *(_QWORD *)(*a4 + v7);
  v8 = *a1;
  v9 = (char *)a4 + v7;
  if ( (v6 & 2) != 0 )
    a5 = (unsigned int)a5;
  else
    a5 = 2;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v8 + 40LL))(
           v8,
           a2,
           a3,
           v9,
           a5,
           a6 & 1);
}
