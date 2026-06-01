__int64 __fastcall sub_2F0F20(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rsi

  v3 = *(_QWORD *)(a1 + 184) + 200 * a3;
  v4 = *(_QWORD *)(v3 + 184);
  if ( a2 )
    return apply_metadata(v4, v3 + 8, 0);
  v5 = 65537;
  if ( *(_BYTE *)(v3 + 168) )
    v5 = 1;
  result = apply_metadata(v4, v3 + 80, v5);
  v7 = *(_QWORD *)(v3 + 144);
  if ( v7 )
  {
    set_name(*(_QWORD *)(v3 + 184), v7, 0);
    return make_name_auto(*(_QWORD *)(v3 + 184));
  }
  return result;
}
