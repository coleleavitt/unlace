/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_prev_addr
// Address: 0x00000000000CA9B0

//----- (00000000000CA9B0) ----------------------------------------------------
__int64 __fastcall rangeset_t_prev_addr(unsigned __int64 **a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rsi
  unsigned __int64 *v4; // rcx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  unsigned __int64 *v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // rax

  result = -1;
  if ( a2 )
  {
    v3 = a2 - 1;
    v4 = a1[3];
    if ( !v4 || *v4 > v3 || v4[1] <= v3 )
    {
      v5 = *a1;
      v6 = 16LL * (_QWORD)a1[1];
      v7 = *a1;
      if ( v6 )
      {
        v8 = v6 >> 4;
        v7 = *a1;
        v9 = v6 >> 4;
        do
        {
          v9 >>= 1;
          v10 = 16 * v9;
          if ( v7[2 * v9 + 1] <= v3 )
          {
            v9 = v8 + ~v9;
            v7 = (unsigned __int64 *)((char *)v7 + v10 + 16);
          }
          v8 = v9;
        }
        while ( v9 );
      }
      if ( v7 == &v5[(unsigned __int64)v6 / 8] || *v7 > v3 || v7[1] <= v3 )
      {
        if ( v7 == v5 )
          return result;
        v11 = *(v7 - 1);
        v7 -= 2;
        v12 = v3 < v11;
        v13 = v11 - 1;
        if ( !v12 )
          v3 = v13;
      }
      a1[3] = v7;
    }
    return v3;
  }
  return result;
}
