__int64 __fastcall sub_1008080(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)a1 + 480LL);
  if ( v1 == sub_A32180 )
    return 1;
  else
    return v1();
}

