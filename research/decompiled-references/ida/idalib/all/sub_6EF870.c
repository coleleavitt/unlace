__int64 __fastcall sub_6EF870(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 24) + 40LL);
  if ( v1 == sub_6EEF10 )
    return 0;
  else
    return v1();
}
