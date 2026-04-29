__int64 __fastcall sub_133B90(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  __int64 result; // rax

  v3 = *(__int64 **)(a1 + 1336);
  if ( !v3 )
    return 0;
  if ( a3 == 9 )
    a3 = *(_DWORD *)(a1 + 312);
  if ( (int)a3 >= (unsigned __int64)v3[1] )
    return 0;
  v4 = *v3;
  v5 = 3LL * a3;
  v6 = (_QWORD *)(v4 + 8 * v5);
  if ( !v6 )
    return 0;
  result = sub_133AB0((__int64 *)(v4 + 8 * v5), a2);
  if ( result == *v6 + 112LL * v6[1] )
    return 0;
  return result;
}
