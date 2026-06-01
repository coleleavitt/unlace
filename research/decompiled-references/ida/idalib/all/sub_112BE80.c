__int64 __fastcall sub_112BE80(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_22BA610(a1 + 2, a2);
  if ( a1[224] || a1[225] || a1[226] )
    return sub_22BA610(a1 + 220, (unsigned int)a2);
  return result;
}
