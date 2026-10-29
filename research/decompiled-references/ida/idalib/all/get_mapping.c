__int64 __fastcall get_mapping(_QWORD *a1, _QWORD *a2, _QWORD *a3, unsigned int a4)
{
  _QWORD *v5; // rax

  v5 = (_QWORD *)sub_505DE0(*(_QWORD *)(qword_2CCB598 + 1672) + 2520LL, a4);
  if ( !v5 )
    return 0;
  if ( a1 )
    *a1 = *v5;
  if ( a2 )
    *a2 = v5[2];
  if ( a3 )
    *a3 = v5[1] - *v5;
  return 1;
}
