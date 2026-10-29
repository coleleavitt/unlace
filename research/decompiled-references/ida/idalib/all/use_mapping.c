__int64 __fastcall use_mapping(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)sub_505D70(*(_QWORD *)(qword_2CCB598 + 1672) + 2520LL, a1);
  result = a1;
  if ( v1 )
    return v1[2] + a1 - *v1;
  return result;
}
