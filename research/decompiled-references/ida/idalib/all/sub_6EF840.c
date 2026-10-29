__int64 __fastcall sub_6EF840(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 24) + 56LL);
  if ( v1 == sub_6EEF20 )
    return 0;
  else
    return v1();
}
