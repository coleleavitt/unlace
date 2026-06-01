__int64 *__fastcall sub_4495F0(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbx
  __int64 *result; // rax

  if ( !a1 )
    return (__int64 *)sub_40FB00(a2);
  v6 = *(_QWORD *)(a1 + 456);
  if ( !v6 )
    return (__int64 *)sub_40FB00(a2);
  result = sub_449270(
             *(__int64 ***)(a1 + 456),
             (__int64 *)(unsigned int)((unsigned __int64)(a2 + 7LL) >> 3),
             0,
             a4,
             a5,
             a6);
  *(_QWORD *)(*(_QWORD *)v6 + 32LL) += 8LL * (int)((unsigned __int64)(a2 + 7LL) >> 3);
  return result;
}

