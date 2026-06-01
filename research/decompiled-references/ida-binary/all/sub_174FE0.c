__int64 __fastcall sub_174FE0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *a1;
  *((_BYTE *)a1 + 29) = 1;
  (*(void (**)(void))(v1 + 400))();
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1[2] + 656LL))(a1[2], a1);
  sub_459320(a1);
  result = sub_1EB5B0(a1[2]);
  if ( a1 == (__int64 *)result )
    return sub_531B30(2, 0, 0);
  return result;
}
