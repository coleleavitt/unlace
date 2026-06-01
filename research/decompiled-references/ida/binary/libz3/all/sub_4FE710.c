__int64 __fastcall sub_4FE710(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 32) + 96LL);
  if ( v1 == sub_4D94B0 )
    return 0xFFFFFFFFLL;
  else
    return v1();
}

