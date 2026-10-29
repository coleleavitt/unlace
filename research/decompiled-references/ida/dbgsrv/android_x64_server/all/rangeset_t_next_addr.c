/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_next_addr
// Address: 0x00000000000CA920

//----- (00000000000CA920) ----------------------------------------------------
__int64 __fastcall rangeset_t_next_addr(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rsi
  unsigned __int64 *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // r11
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  result = -1;
  if ( a2 != -1 )
  {
    v3 = a2 + 1;
    v4 = (unsigned __int64 *)a1[3];
    if ( v4 && *v4 <= v3 && v4[1] > v3 )
      return v3;
    v5 = 16 * a1[1];
    v6 = *a1;
    if ( v5 )
    {
      v7 = v5 >> 4;
      v6 = *a1;
      v8 = v5 >> 4;
      do
      {
        v8 >>= 1;
        v9 = 16 * v8;
        if ( *(_QWORD *)(v6 + 16 * v8 + 8) <= v3 )
        {
          v8 = v7 + ~v8;
          v6 += v9 + 16;
        }
        v7 = v8;
      }
      while ( v8 );
    }
    if ( v6 != v5 + *a1 )
    {
      a1[3] = v6;
      if ( v3 < *(_QWORD *)v6 )
        return *(_QWORD *)v6;
      return v3;
    }
  }
  return result;
}
