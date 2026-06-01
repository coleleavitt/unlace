/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E438
// Address: 0x000000000049E438

//----- (000000000049E438) ----------------------------------------------------
__int64 __fastcall sub_49E438(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  char *v6; // x19
  __int64 v7; // x1
  int v8; // w2
  char v9; // t1
  unsigned __int64 v10; // x0
  unsigned __int64 v11; // x0
  __int64 result; // x0
  _QWORD *v13; // [xsp+38h] [xbp+38h] BYREF

  v6 = (char *)(*(_QWORD *)(a1 + 24) + ~a4);
  v13 = a3;
  while ( 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *v6++;
      v10 = (unsigned __int64)(v9 & 0x7F) << v8;
      v8 += 7;
      v7 |= v10;
    }
    while ( v9 < 0 );
    if ( !v7 )
      break;
    v11 = sub_49E368(a1, v7);
    result = (unsigned __int8)sub_49E198(v11, a2, &v13);
    if ( (_DWORD)result )
      return result;
  }
  return 0;
}
