__int64 __fastcall sub_879F30(__int64 **a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rsi
  __int64 result; // rax

  v2 = *a2;
  *a1 = a2;
  v3 = *(__int64 (__fastcall **)(__int64))(v2 + 424);
  if ( v3 == sub_79EFD0 )
    v4 = a2[18];
  else
    v4 = v3((__int64)a2);
  a1[1] = (__int64 *)v4;
  result = sub_16669D0(a1 + 2, v4);
  a1[4] = nullptr;
  return result;
}

