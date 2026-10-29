__int64 __fastcall sub_453FA0(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, unsigned int a5)
{
  _QWORD *v7; // rax

  v7 = (_QWORD *)sub_505DE0(a1 + 2520, a5);
  if ( !v7 )
    return 0;
  if ( a2 )
    *a2 = *v7;
  if ( a3 )
    *a3 = v7[2];
  if ( a4 )
    *a4 = v7[1] - *v7;
  return 1;
}
