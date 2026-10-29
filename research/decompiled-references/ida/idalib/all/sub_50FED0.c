__int64 __fastcall sub_50FED0(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, _QWORD, _QWORD))
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // r12
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1760LL);
  v3 = *(_QWORD **)(v2 + 24);
  v4 = &v3[2 * *(_QWORD *)(v2 + 32)];
  if ( v4 == v3 )
    return 0;
  while ( 1 )
  {
    result = (**a2)(a2, *v3, v3[1]);
    if ( result )
      break;
    v3 += 2;
    if ( v4 == v3 )
      return 0;
  }
  return result;
}
