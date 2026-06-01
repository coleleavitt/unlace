__int64 __fastcall sub_17A22A0(int a1, __int64 a2, _WORD *a3, double a4)
{
  __int64 v6; // [rsp+10h] [rbp-28h]

  if ( a3 )
  {
    if ( (_BYTE)a2 )
    {
      if ( (*a3 & 0x1FF) == 0x35 )
      {
        sub_EEC140((unsigned __int64)a3);
        HIDWORD(v6) = a1;
        LOWORD(v6) = 1;
      }
      else
      {
        sub_EEC140((unsigned __int64)a3);
        HIDWORD(v6) = a1;
        LOWORD(v6) = 0;
      }
      sub_EEB7E0((unsigned __int64)a3, a2, a4);
    }
    else
    {
      HIDWORD(v6) = a1;
      LOWORD(v6) = 2;
      sub_EEB7E0((unsigned __int64)a3, a2, a4);
    }
  }
  else
  {
    HIDWORD(v6) = a1;
    LOWORD(v6) = 3;
  }
  return v6;
}
