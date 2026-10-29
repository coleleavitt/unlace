bool __fastcall sub_2156D30(_QWORD *a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*a1 + 40LL);
  if ( (char *)v1 == (char *)sub_2156B10 )
    return a1[19] == 0;
  else
    return v1() == 0;
}
