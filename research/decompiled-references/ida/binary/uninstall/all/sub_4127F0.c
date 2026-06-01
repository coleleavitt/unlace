__int64 __fastcall sub_4127F0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int status; // [rsp+4h] [rbp-4h] BYREF

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    sub_458930(a2, 1, a4, "?returnCode?");
    return 1;
  }
  else
  {
    if ( a3 == 1 )
    {
      status = 0;
    }
    else if ( (unsigned int)sub_47C180(a2, *(_QWORD *)(a4 + 8), &status) )
    {
      return 1;
    }
    sub_448C30(status);
    return 0;
  }
}

