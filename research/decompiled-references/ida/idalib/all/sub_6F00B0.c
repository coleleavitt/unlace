__int64 __fastcall sub_6F00B0(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 24) + 24LL);
  if ( v1 == sub_6EF0A0 )
    return 0;
  else
    return v1();
}
