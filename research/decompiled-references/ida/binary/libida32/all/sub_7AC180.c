__int64 __fastcall sub_7AC180(_QWORD *a1, int a2)
{
  __int64 v3; // rdi

  v3 = a1[11];
  if ( v3 )
  {
    if ( a1[12] )
    {
      (*(void (__fastcall **)(_QWORD))(qword_2CAA880 + 344))(a1[12]);
      v3 = a1[11];
    }
    if ( a2 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(qword_2CAA880 + 296))(v3);
      v3 = a1[11];
    }
    (*(void (__fastcall **)(__int64))(qword_2CAA880 + 224))(v3);
    a1[11] = 0;
  }
  return sub_79DB00(a1 + 4);
}

