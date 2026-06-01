__int64 __fastcall sub_F6640(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax
  __int64 *v3; // r12
  __int64 v5; // rbp
  __int64 v6; // rdi

  v1 = (__int64 *)qword_252810;
  result = xmmword_252818;
  v3 = (__int64 *)(qword_252810 + 8 * xmmword_252818);
  if ( v3 != (__int64 *)qword_252810 )
  {
    do
    {
      v5 = *v1;
      sub_15BE40(*v1 + 648);
      result = sub_15D430(v5 + 440);
      v6 = *(_QWORD *)(v5 + 856);
      if ( v6 )
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 184LL))(v6, a1);
      ++v1;
    }
    while ( v3 != v1 );
  }
  if ( qword_252800 )
    return sub_F64B0(qword_252800);
  return result;
}

