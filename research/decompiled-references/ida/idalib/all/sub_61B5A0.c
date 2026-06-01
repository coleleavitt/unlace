__int64 sub_61B5A0()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = qword_2CCB598;
  v1 = *(_QWORD *)(qword_2CCB598 + 1672);
  if ( *(_QWORD *)(v1 + 2600) != -1 )
  {
    result = sub_7BF0F0((int)v1 + 2600);
    *(_QWORD *)(v1 + 2600) = -1;
  }
  return result;
}
