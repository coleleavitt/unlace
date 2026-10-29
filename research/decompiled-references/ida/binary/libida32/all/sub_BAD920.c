__int64 __fastcall sub_BAD920(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (*v4)(); // rax
  __int64 v5; // rax

  v2 = *a1;
  v3 = *(unsigned __int8 (**)(void))(*a1 + 232);
  if ( (char *)v3 != (char *)sub_BA1BC0 )
  {
    if ( !v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (**)())(v2 + 6704);
  if ( v4 == sub_BA34C0 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v4)(a1, a2) )
  {
    v5 = sub_F33E10(a2);
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 96))(a1, v5);
  }
  return 0;
}

