__int64 __fastcall sub_F5780(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax
  __int64 *v3; // r12
  __int64 v5; // rbp
  __int64 v6; // rdi

  v1 = (__int64 *)qword_251670;
  result = xmmword_251678;
  v3 = (__int64 *)(qword_251670 + 8 * xmmword_251678);
  if ( v3 != (__int64 *)qword_251670 )
  {
    do
    {
      v5 = *v1;
      sub_15B580(*v1 + 648);
      result = sub_15CB50(v5 + 440);
      v6 = *(_QWORD *)(v5 + 848);
      if ( v6 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 184LL))(v6, a1);
      ++v1;
    }
    while ( v3 != v1 );
  }
  if ( qword_251660 )
    return sub_F5620(qword_251660);
  return result;
}

