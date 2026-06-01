__int64 __fastcall get_numbered_type(
        __int64 a1,
        __int64 a2,
        const char **a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  __int64 v11; // rdi
  __int64 result; // rax

  if ( !a1 )
    a1 = *(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 8LL);
  v11 = sub_64DE20(a1, a2);
  result = 0;
  if ( v11 )
  {
    sub_6474E0(v11, a3, a4, a5, a6, a7);
    return 1;
  }
  return result;
}
