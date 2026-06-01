__int64 __fastcall sub_407190(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = 0;
  if ( a1 )
  {
    a1[6] = a2[3];
    a1[7] = a2[4];
    v3 = a2[1];
    if ( v3 )
    {
      a1[4] = v3;
      a1[5] = a2[2];
    }
    else
    {
      a1[5] = a1;
      a1[4] = TclInvokeStringCommand;
    }
    a1[8] = a2[5];
    a1[9] = a2[6];
    return 1;
  }
  return result;
}

