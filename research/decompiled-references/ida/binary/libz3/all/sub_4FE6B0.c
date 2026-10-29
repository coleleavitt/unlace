__int64 __fastcall sub_4FE6B0(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 32) + 112LL);
  if ( v1 == sub_4D94D0 )
    return 0;
  else
    return v1();
}

