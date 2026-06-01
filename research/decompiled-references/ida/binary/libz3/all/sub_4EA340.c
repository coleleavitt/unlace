__int64 __fastcall sub_4EA340(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( v1 == sub_4EA2A0 )
    return 1;
  else
    return v1();
}

