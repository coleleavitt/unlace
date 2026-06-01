unsigned __int64 __fastcall term_plugins(unsigned int a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rdi

  if ( (unsigned __int8)sub_3E8690() )
  {
    v7 = *(__int64 **)(qword_2CA1698 + 1552);
    if ( v7 )
    {
      a2 = a1;
      sub_4D2BA0(v7, a1, 1, v4, v5, v6);
    }
  }
  return sub_4D3320(a1, a2, v3, v4, v5, v6);
}

