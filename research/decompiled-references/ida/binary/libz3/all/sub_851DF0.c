__int64 __fastcall sub_851DF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (*v3)(void); // rax

  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 232LL);
  if ( (char *)v3 == (char *)sub_851DE0 )
    return sub_7E6020(a3 + 8, a2);
  else
    return v3();
}

