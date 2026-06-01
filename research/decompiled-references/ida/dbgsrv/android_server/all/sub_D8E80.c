/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D8E80
// Address: 0x00000000000D8E80

//----- (00000000000D8E80) ----------------------------------------------------
__int64 __fastcall sub_D8E80(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4, char a5)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x0
  char *v8; // x2

  v5 = a1[1];
  v6 = v5 >> 8;
  if ( (v5 & 1) != 0 )
    v6 = *(_QWORD *)(*a3 + v6);
  v7 = *a1;
  v8 = (char *)a3 + v6;
  if ( (v5 & 2) != 0 )
    a4 = (unsigned int)a4;
  else
    a4 = 2;
  return (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v7 + 48LL))(
           v7,
           a2,
           v8,
           a4,
           a5 & 1);
}
