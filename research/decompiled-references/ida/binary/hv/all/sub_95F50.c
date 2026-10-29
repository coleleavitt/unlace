void *__fastcall sub_95F50(signed __int64 a1)
{
  void *v1; // rbx

  if ( !a1 )
    return nullptr;
  if ( a1 == 3735928559LL || a1 <= 0 )
  {
    *__errno_location() = 12;
    sub_8F860(1u);
    return nullptr;
  }
  v1 = malloc(a1);
  if ( !v1 )
    sub_8F860(1u);
  return v1;
}

