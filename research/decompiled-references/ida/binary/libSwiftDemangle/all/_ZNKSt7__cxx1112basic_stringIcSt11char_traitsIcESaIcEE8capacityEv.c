__int64 __fastcall std::string::capacity(_QWORD *a1)
{
  if ( (_QWORD *)*a1 == a1 + 2 )
    return 15;
  else
    return a1[2];
}

