unsigned __int64 __fastcall sub_22470F0(_QWORD *a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax

  if ( a1[1] <= a3 )
    a3 = a1[1];
  result = a3 - 1;
  if ( a3 && a2 == *(_BYTE *)(*a1 + a3 - 1) )
  {
    do
      --result;
    while ( result != -1 && *(_BYTE *)(*a1 + result) == a2 );
  }
  return result;
}
