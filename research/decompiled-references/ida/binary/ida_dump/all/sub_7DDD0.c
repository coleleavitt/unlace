__int64 __fastcall sub_7DDD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  if ( !(unsigned __int8)extract_argloc() )
    sub_7A530(a1, a2);
  v2 = 121;
  if ( *(_DWORD *)(a2 + 48) > 0xAu )
    v2 = 122;
  sub_339CC0(*(_QWORD *)(a2 + 24), a1, v2);
  result = sub_3323C0(a2, *(_QWORD *)(a2 + 32));
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
