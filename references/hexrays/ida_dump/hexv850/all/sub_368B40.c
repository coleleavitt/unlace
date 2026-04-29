_DWORD *__fastcall sub_368B40(_QWORD *a1)
{
  int v1; // ebp
  _DWORD *v2; // r13
  int v3; // r12d
  __int64 v4; // rax
  _DWORD *v5; // r14

  if ( !a1[58] )
    return nullptr;
  v1 = 0;
  v2 = nullptr;
  v3 = 0;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = (_DWORD *)(a1[54] + 104LL * *(int *)(a1[57] + 4 * v4));
      if ( (unsigned __int8)sub_363D80((__int64)v5) )
      {
        if ( (int)sub_1BE780(v5) >= v3 )
          break;
      }
      v4 = ++v1;
      if ( (unsigned __int64)v1 >= a1[58] )
        return v2;
    }
    ++v1;
    v2 = v5;
    v3 = sub_1BE780(v5);
    v4 = v1;
  }
  while ( (unsigned __int64)v1 < a1[58] );
  return v2;
}
