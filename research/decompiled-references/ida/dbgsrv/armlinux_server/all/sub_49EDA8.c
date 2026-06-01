/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49EDA8
// Address: 0x000000000049EDA8

//----- (000000000049EDA8) ----------------------------------------------------
__int64 __fastcall sub_49EDA8(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  const char *v11; // x19
  const char *v13; // x1
  int v18; // w28
  __int64 result; // x0
  int v20; // w1
  const char *v21; // x1

  v11 = *(const char **)(a1 + 8);
  v13 = *(const char **)(a4 + 8);
  if ( v11 == v13 || (v18 = *(unsigned __int8 *)v11, v18 != 42) && !strcmp(v11, v13) )
  {
    *(_QWORD *)a8 = a5;
    *(_DWORD *)(a8 + 8) = a3;
    if ( a2 < 0 )
    {
      result = 0;
      if ( a2 == -2 )
        *(_DWORD *)(a8 + 16) = 1;
    }
    else
    {
      result = 0;
      if ( a7 == a5 + a2 )
        v20 = 6;
      else
        v20 = 1;
      *(_DWORD *)(a8 + 16) = v20;
    }
  }
  else if ( a5 == a7 && ((v21 = *(const char **)(a6 + 8), v11 == v21) || v18 != 42 && !strcmp(v11, v21)) )
  {
    *(_DWORD *)(a8 + 12) = a3;
    return 0;
  }
  else
  {
    return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64, __int64, __int64, __int64))(**(_QWORD **)(a1 + 16) + 56LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8);
  }
  return result;
}
