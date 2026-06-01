__int64 __fastcall sub_10A0D0(__int64 a1, char a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 184) + 192 * a3;
  if ( a2 )
    return apply_metadata();
  result = apply_metadata();
  if ( *(_QWORD *)(v3 + 144) )
  {
    set_name();
    return make_name_auto();
  }
  return result;
}

