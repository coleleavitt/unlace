__int64 __fastcall get_func_frame(unsigned __int64 *a1, __int64 *a2)
{
  __int64 *v2; // rbp
  unsigned __int64 v3; // rax

  if ( !a2 )
    return 0;
  v2 = *(__int64 **)(qword_2CCB598 + 1672);
  v3 = sub_3BDD60(v2, *a2);
  if ( v3 == -1 )
    return 0;
  else
    return sub_54BE00(v2, a1, v3);
}
