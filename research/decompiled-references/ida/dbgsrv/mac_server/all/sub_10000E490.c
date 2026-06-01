/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E490
// Address: 0x000000010000E490

//----- (000000010000E490) ----------------------------------------------------
unsigned __int64 __fastcall sub_10000E490(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 result; // rax

  sub_10000E400(a1, a2, a3, a4);
  result = *(_QWORD *)a4;
  if ( *(_QWORD *)a5 <= *(_QWORD *)a4 )
  {
    if ( *(_QWORD *)a5 < *(_QWORD *)a4 || (result = *(_QWORD *)(a5 + 8), result < *(_QWORD *)(a4 + 8)) )
    {
      sub_10000E260((__int128 *)a4, (__int128 *)a5);
      result = *(_QWORD *)a3;
      if ( *(_QWORD *)a4 <= *(_QWORD *)a3 )
      {
        if ( *(_QWORD *)a4 < *(_QWORD *)a3 || (result = *(_QWORD *)(a4 + 8), result < *(_QWORD *)(a3 + 8)) )
        {
          sub_10000E260((__int128 *)a3, (__int128 *)a4);
          result = *(_QWORD *)a2;
          if ( *(_QWORD *)a3 <= *(_QWORD *)a2 )
          {
            if ( *(_QWORD *)a3 < *(_QWORD *)a2 || (result = *(_QWORD *)(a3 + 8), result < *(_QWORD *)(a2 + 8)) )
            {
              sub_10000E260((__int128 *)a2, (__int128 *)a3);
              result = *(_QWORD *)a1;
              if ( *(_QWORD *)a2 <= *(_QWORD *)a1 )
              {
                if ( *(_QWORD *)a2 < *(_QWORD *)a1 )
                  return sub_10000E260((__int128 *)a1, (__int128 *)a2);
                result = *(_QWORD *)(a2 + 8);
                if ( result < *(_QWORD *)(a1 + 8) )
                  return sub_10000E260((__int128 *)a1, (__int128 *)a2);
              }
            }
          }
        }
      }
    }
  }
  return result;
}
