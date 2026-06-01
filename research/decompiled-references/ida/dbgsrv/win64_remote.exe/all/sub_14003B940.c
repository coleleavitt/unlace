/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003B940
// Address: 0x000000014003B940

//----- (000000014003B940) ----------------------------------------------------
__int64 __fastcall sub_14003B940(_QWORD *a1, __int8 **a2)
{
  __int8 *v2; // rsi
  __int64 result; // rax
  __int8 *v6; // rax
  __int8 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  v2 = *a2;
  if ( !**a2 )
    return -1;
  v6 = sub_14006CA14((__int64)v2, 0xAu);
  if ( v6 )
    v7 = v6 + 1;
  else
    v7 = sub_14006CA14((__int64)v2, 0);
  a1[1] = 0;
  sub_1400048F0((__int64)a1, v2, v7 - v2);
  v8 = a1[1];
  v9 = v8 - 1;
  if ( !v8 )
    v9 = 0;
  if ( v9 && *(_BYTE *)(*a1 + v9 - 1) == 10 )
    sub_14003D890((__int64)a1, 1);
  *a2 = v7;
  v10 = a1[1];
  result = v10 - 1;
  if ( !v10 )
    return 0;
  return result;
}
