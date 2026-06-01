__int64 __fastcall sub_6267D0(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        double a7,
        double a8)
{
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8

  if ( a5 < a4 || !a2 )
    return 0;
  if ( a5 == a4 )
    return 1;
  result = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 1480LL) + 2625LL) & 8) == 0 )
  {
    v12 = qlsize(a2);
    v14 = *(_QWORD *)a1;
    v15 = -1;
    if ( a6 )
      v15 = a3;
    if ( *(_DWORD *)(v14 + 764) == -1 )
      sub_375320((__int64)"You forgot to call set_processor_type()", a2, v14, v13, v15);
    if ( !a1[9] )
      sub_623450((__int64)a1, a4, a5, v12 - a3, v15, a7, a8);
    return (unsigned __int8)sub_626660((__int64)a1, a2, a3, a4, a5);
  }
  return result;
}

