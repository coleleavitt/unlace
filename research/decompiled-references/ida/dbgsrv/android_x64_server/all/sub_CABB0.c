/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CABB0
// Address: 0x00000000000CABB0

//----- (00000000000CABB0) ----------------------------------------------------
__int64 __fastcall sub_CABB0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  char *v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // r10
  __int64 v12; // rbx
  char *v13; // r14
  __int64 v14; // r11
  char *v15; // rdi
  unsigned __int64 v16; // r15
  char *v17; // rbx
  bool v18; // cc
  unsigned __int64 v19; // r15
  __int64 v20; // rdi

  result = 0;
  if ( a2 == a3 )
    return result;
  v5 = *(char **)(a1 + 24);
  if ( !v5 || *(_QWORD *)v5 > a2 || (v6 = *((_QWORD *)v5 + 1), v6 <= a2) )
  {
    v7 = 16LL * *(_QWORD *)(a1 + 8);
    v5 = *(char **)a1;
    if ( v7 )
    {
      v8 = v7 >> 4;
      v5 = *(char **)a1;
      v9 = v7 >> 4;
      do
      {
        v9 >>= 1;
        v10 = 16 * v9;
        if ( *(_QWORD *)&v5[16 * v9 + 8] <= a2 )
        {
          v9 = v8 + ~v9;
          v5 += v10 + 16;
        }
        v8 = v9;
      }
      while ( v9 );
    }
    result = 0xFFFFFFFFLL;
    if ( v5 == (char *)(v7 + *(_QWORD *)a1) || *(_QWORD *)v5 > a2 || *((_QWORD *)v5 + 1) <= a2 )
      return result;
    *(_QWORD *)(a1 + 24) = v5;
    v6 = *((_QWORD *)v5 + 1);
  }
  v11 = a4 + a2;
  result = 4294967294LL;
  if ( v6 >= a4 + a2 )
  {
    result = 4294967293LL;
    if ( a4 + a3 > a3 )
    {
      v12 = 16LL * *(_QWORD *)(a1 + 8);
      if ( !v12 )
        return 0;
      v13 = *(char **)a1;
      v14 = *(_QWORD *)a1 + v12;
      v15 = nullptr;
      while ( *(_QWORD *)&v15[(_QWORD)v13 + 8] <= a3 )
      {
        v15 += 16;
        if ( (char *)v12 == v15 )
          return 0;
      }
      v16 = *(_QWORD *)&v15[(_QWORD)v13];
      v17 = (char *)(v5 - v13);
      v18 = v16 <= a3;
      v19 = v16 - a3;
      if ( v18 )
      {
        if ( v17 == v15 )
        {
          v20 = *(_QWORD *)v5;
          if ( (v6 == v11 || v20 == a2)
            && (a3 >= a2 || v20 == a2)
            && (a3 <= a2 || v6 == v11)
            && (v5 == (char *)(v14 - 16) || *((_QWORD *)v5 + 2) - a3 >= a4) )
          {
            return 0;
          }
        }
      }
      else if ( v17 == v15 || v19 >= a4 )
      {
        return 0;
      }
    }
  }
  return result;
}
