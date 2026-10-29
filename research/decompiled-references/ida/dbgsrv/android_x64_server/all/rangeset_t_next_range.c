/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_next_range
// Address: 0x00000000000CAA60

//----- (00000000000CAA60) ----------------------------------------------------
__int64 __fastcall rangeset_t_next_range(__int64 **a1, unsigned __int64 a2)
{
  __int64 *v2; // rax
  __int64 result; // rax
  __int64 v4; // r8
  __int64 *v5; // r10
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx

  v2 = a1[3];
  if ( v2 && *v2 <= a2 && v2[1] > a2 )
  {
    if ( v2 == &(*a1)[2 * (_QWORD)a1[1] - 2] )
    {
      return -1;
    }
    else
    {
      a1[3] = v2 + 2;
      return v2[2];
    }
  }
  else
  {
    v4 = 16LL * (_QWORD)a1[1];
    v5 = *a1;
    if ( v4 )
    {
      v6 = v4 >> 4;
      v5 = *a1;
      v7 = v4 >> 4;
      do
      {
        v7 >>= 1;
        v8 = 16 * v7;
        if ( v5[2 * v7] <= a2 )
        {
          v7 = v6 + ~v7;
          v5 = (__int64 *)((char *)v5 + v8 + 16);
        }
        v6 = v7;
      }
      while ( v7 );
    }
    if ( v5 == &(*a1)[(unsigned __int64)v4 / 8] )
    {
      return -1;
    }
    else
    {
      result = *v5;
      a1[3] = v5;
    }
  }
  return result;
}
