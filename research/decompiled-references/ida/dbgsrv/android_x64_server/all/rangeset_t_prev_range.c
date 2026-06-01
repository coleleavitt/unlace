/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_prev_range
// Address: 0x00000000000CAB10

//----- (00000000000CAB10) ----------------------------------------------------
__int64 __fastcall rangeset_t_prev_range(unsigned __int64 **a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rax
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v6; // r10
  unsigned __int64 *v7; // r9
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx

  v2 = a1[3];
  if ( v2 && *v2 <= a2 && v2[1] > a2 )
  {
    if ( v2 == *a1 )
      return -1;
    a1[3] = v2 - 2;
    v3 = *(v2 - 1);
    return v3 - 1;
  }
  v4 = 16LL * (_QWORD)a1[1];
  result = -1;
  if ( v4 )
  {
    v6 = v4 >> 4;
    v7 = *a1;
    v8 = v6;
    do
    {
      v8 >>= 1;
      v9 = 16 * v8;
      if ( v7[2 * v8 + 1] <= a2 )
      {
        v8 = v6 + ~v8;
        v7 = (unsigned __int64 *)((char *)v7 + v9 + 16);
      }
      v6 = v8;
    }
    while ( v8 );
    if ( v7 != *a1 )
    {
      a1[3] = v7 - 2;
      v3 = *(v7 - 1);
      return v3 - 1;
    }
  }
  return result;
}
