__int64 __fastcall sub_FA4310(_QWORD *a1, char a2)
{
  __int64 result; // rax

  result = a1[1];
  if ( (unsigned __int64)(result + 1) > a1[2] )
  {
    sub_22130D0(a1, a1 + 3, result + 1, 1);
    result = a1[1];
  }
  *(_BYTE *)(*a1 + result) = a2;
  ++a1[1];
  return result;
}

