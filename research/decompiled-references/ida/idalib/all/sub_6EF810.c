__int64 __fastcall sub_6EF810(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 24) + 104LL);
  if ( v1 == sub_6EE8B0 )
    return 0;
  else
    return v1();
}
