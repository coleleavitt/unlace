__int64 __fastcall sub_15F1120(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 256) + 136LL);
  if ( v1 == sub_6EE800 )
    return 0;
  else
    return v1();
}
