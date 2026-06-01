unsigned __int64 __fastcall term_plugins(unsigned int a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // r9d
  __int64 *v7; // rdi

  if ( (unsigned __int8)sub_3FB5F0() )
  {
    v7 = *(__int64 **)(qword_2CCB598 + 1744);
    if ( v7 )
    {
      a2 = a1;
      sub_4EA420(v7, a1, 1, v4, v5, v6);
    }
  }
  return sub_4EABB0(a1, a2, v3, v4, v5, v6);
}
