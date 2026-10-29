/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CEAB8
// Address: 0x00000000000CEAB8

//----- (00000000000CEAB8) ----------------------------------------------------
__int64 __fastcall sub_CEAB8(_QWORD *a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 v4; // x22
  int v5; // w8
  __int64 result; // x0
  int v9; // w0

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  if ( !a1[9] )
    return 4294967294LL;
  v4 = a1[7];
  if ( !v4 )
    return 4294967294LL;
  if ( *(_QWORD **)v4 != a1 )
    return 4294967294LL;
  v5 = *(_DWORD *)(v4 + 8);
  if ( (unsigned int)(v5 - 16180) > 0x1F )
    return 4294967294LL;
  if ( *(_DWORD *)(v4 + 16) )
  {
    if ( v5 != 16190 )
      return 4294967294LL;
  }
  else if ( v5 != 16190 )
  {
    goto LABEL_12;
  }
  v9 = sub_D4634(0, nullptr, 0);
  if ( sub_D4634(v9, a2, a3) != *(_QWORD *)(v4 + 32) )
    return 4294967293LL;
LABEL_12:
  result = sub_CE834((__int64)a1, (__int64)&a2[a3], a3);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(v4 + 8) = 16210;
    return 4294967292LL;
  }
  else
  {
    *(_DWORD *)(v4 + 20) = 1;
  }
  return result;
}
