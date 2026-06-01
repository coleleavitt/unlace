__int64 __fastcall sub_E5ED00(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  __int64 v4; // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 104LL);
  if ( (char *)v2 == (char *)sub_2B1DE0 )
  {
    sub_17FA980(a2, a1 + 80);
  }
  else
  {
    v4 = v2();
    sub_17FA980(a2, v4);
  }
  return a2;
}

