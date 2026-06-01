void __fastcall sub_4D0270(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 200LL);
  if ( (char *)v2 == (char *)sub_4D0080 )
  {
    sub_4C4290(a1 + 64, a2);
  }
  else
  {
    v3 = v2();
    sub_4C4290(v3, a2);
  }
}

