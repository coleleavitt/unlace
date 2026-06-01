__int64 __fastcall sub_65B8F0(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        __m128 a13)
{
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // r14
  __int64 v19; // r13
  const char *v20; // rdx
  int v21; // r14d
  __int64 v22; // rax
  char *v23; // rdx

  v15 = a5[1];
  v16 = *a5;
  result = 3 * v15;
  v18 = v16 + 8 * result;
  if ( v16 != v18 )
  {
    v19 = v16;
    do
    {
      v20 = haystack;
      if ( *(_QWORD *)(v19 + 8) )
        v20 = *(const char **)v19;
      v19 += 24;
      result = sub_659990(a1, (__int64)a2, v20, 0, a6, a7);
    }
    while ( v18 != v19 );
  }
  if ( a4 && a4[1] )
  {
    v21 = 0;
    result = 0;
    do
    {
      v22 = *a4 + 56 * result;
      v23 = (char *)haystack;
      if ( *(_QWORD *)(v22 + 8) )
        v23 = *(char **)v22;
      if ( (unsigned int)sub_65B7E0(a2, a3, v23, *(_QWORD *)(v22 + 48), a6, a7, a8, a9, a10, a11, a12, a13) )
      {
        if ( !under_debugger )
          interr(1237);
        BUG();
      }
      result = ++v21;
    }
    while ( (unsigned __int64)v21 < a4[1] );
  }
  return result;
}
