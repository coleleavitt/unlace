__int64 __fastcall sub_7BE530(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 8);
  if ( v2 )
    return v2(a2);
  else
    return 0;
}
