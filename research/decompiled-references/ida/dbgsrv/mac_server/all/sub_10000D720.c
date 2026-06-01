/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000D720
// Address: 0x000000010000D720

//----- (000000010000D720) ----------------------------------------------------
__int64 __fastcall sub_10000D720(__int128 *a1, __int128 *a2, __int64 a3)
{
  __int128 *v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v3 = a2;
  v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 > *(_QWORD *)a1 || *(_QWORD *)a2 >= *(_QWORD *)a1 && *((_QWORD *)a2 + 1) >= *((_QWORD *)a1 + 1) )
  {
    result = 0;
    if ( *(_QWORD *)a3 <= v4 && (*(_QWORD *)a3 < v4 || *(_QWORD *)(a3 + 8) < *((_QWORD *)a2 + 1)) )
    {
      sub_10000E260(a2, (__int128 *)a3);
      result = 1;
      if ( *(_QWORD *)a2 <= *(_QWORD *)a1
        && (*(_QWORD *)a2 < *(_QWORD *)a1 || *((_QWORD *)a2 + 1) < *((_QWORD *)a1 + 1)) )
      {
        goto LABEL_16;
      }
    }
  }
  else
  {
    if ( *(_QWORD *)a3 <= v4 && (*(_QWORD *)a3 < v4 || *(_QWORD *)(a3 + 8) < *((_QWORD *)a2 + 1)) )
    {
      sub_10000E260(a1, (__int128 *)a3);
      return 1;
    }
    sub_10000E260(a1, a2);
    result = 1;
    if ( *(_QWORD *)a3 <= *(_QWORD *)a2 )
    {
      a2 = (__int128 *)a3;
      if ( *(_QWORD *)a3 < *(_QWORD *)v3 || *(_QWORD *)(a3 + 8) < *((_QWORD *)v3 + 1) )
      {
        a1 = v3;
LABEL_16:
        sub_10000E260(a1, a2);
        return 2;
      }
    }
  }
  return result;
}
