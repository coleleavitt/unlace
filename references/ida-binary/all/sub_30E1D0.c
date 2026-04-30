__int64 __fastcall sub_30E1D0(
        __int64 a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        int a13,
        __int64 a14)
{
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d

  result = sub_30ED70(qword_8CD748);
  if ( result )
  {
    if ( a1 )
    {
      return sub_512350(result, a1, a2, v16, v17, v18, a8, a9, a10, a11, a12, a13, a14);
    }
    else
    {
      if ( under_debugger )
        BUG();
      interr(40553, a2, v15, v16, a3);
      return sub_30E240();
    }
  }
  return result;
}
