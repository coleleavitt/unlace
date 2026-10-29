__int64 __fastcall sub_1EEC890(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 result; // rax

  v3 = a2 + 24;
  if ( !a2 )
    v3 = 0;
  sub_1EACA60(a1, v3);
  v4 = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v5 = *a1;
  *(_QWORD *)(a2 + 16) = v4;
  result = sub_1EE7490(v5);
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
