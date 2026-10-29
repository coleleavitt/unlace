__int64 __fastcall sub_12513B0(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rbp
  char v5; // di

  if ( !*(_QWORD *)(a1 + 280) )
    return 0;
  result = 0;
  v4 = 0;
  do
  {
    v5 = *(_BYTE *)(*(_QWORD *)(a1 + 272) + v4++);
    result = a2 * result + (int)sub_124E540(v5, a2);
  }
  while ( v4 < *(_QWORD *)(a1 + 280) );
  return result;
}
