unsigned __int64 __fastcall sub_6BF400(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result != -1 )
  {
    result = sub_6BF360(*(__int64 **)(a2 + 1672), result, a3);
    if ( a3 )
      *(_QWORD *)(a1 + 24) = -1;
  }
  return result;
}
