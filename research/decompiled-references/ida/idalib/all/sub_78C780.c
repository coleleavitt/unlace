unsigned __int64 __fastcall sub_78C780(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 result; // rax

  v1 = a1[1];
  if ( v1 <= 2 )
  {
    if ( !under_debugger )
      interr(278);
LABEL_7:
    BUG();
  }
  v2 = v1 - 2;
  result = *(__int16 *)(*a1 + v1 - 2);
  a1[3] = v2 - result;
  if ( result >= v2 )
  {
    if ( !under_debugger )
      interr(279);
    goto LABEL_7;
  }
  return result;
}
