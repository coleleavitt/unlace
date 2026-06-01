__int64 __fastcall sub_34F6D0(double a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 view_options; // rax

  result = sub_1F4200();
  if ( result )
  {
    v6 = result;
    if ( (unsigned int)sub_1EB590(result, a3, v4, v5, a1) == 2 )
      view_options = get_view_options(*(_QWORD *)(v6 + 896) != 0);
    else
      view_options = get_view_options(0);
    return dto_copy_to_inf(view_options);
  }
  return result;
}
