__int64 __fastcall sub_6E97D0(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[191];
  if ( !result && !a1[192] )
  {
    sub_6E9230(a1);
    return a1[191];
  }
  return result;
}

