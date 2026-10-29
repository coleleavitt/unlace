__int64 __fastcall sub_4ECF40(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 result; // rax

  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, a3);
  if ( !v3 )
    return 0;
  v4 = v3;
  v5 = sub_4F5C00(a2);
  if ( !v5 )
    return 0;
  result = sub_4F2360(*(_QWORD *)(v5 + 56), v4);
  if ( a1 )
    *a1 = v4;
  return result;
}
