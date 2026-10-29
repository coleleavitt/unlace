/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140014230
// Address: 0x0000000140014230

//----- (0000000140014230) ----------------------------------------------------
__int64 __fastcall sub_140014230(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 *v5; // rcx
  __int64 *v6; // rax
  __int64 *i; // r9
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // cl

  v5 = *(__int64 **)(a1 + 408);
  v6 = (__int64 *)v5[1];
  for ( i = v5; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
  {
    if ( v6[4] >= a2 )
      i = v6;
    else
      v6 += 2;
  }
  if ( !*((_BYTE *)i + 25) && a2 >= i[4] && i != v5 )
    return a2;
  v9 = *(_QWORD *)(a1 + 424);
  v10 = v9 + 56LL * *(_QWORD *)(a1 + 432);
  if ( v9 == v10 )
    goto LABEL_19;
  do
  {
    if ( a2 == *(_QWORD *)v9 && *(_DWORD *)(v9 + 32) == 4 )
      break;
    v9 += 56;
  }
  while ( v9 != v10 );
  if ( v9 == v10
    || (*(_DWORD *)(a1 + 180) & 0xFFFFFFF) == 5 && *(_QWORD *)(a1 + 168) == a2 && *(_DWORD *)(a1 + 164) == a3 )
  {
LABEL_19:
    v11 = 0;
  }
  else
  {
    v11 = 1;
  }
  result = -1;
  if ( v11 )
    return a2;
  return result;
}
