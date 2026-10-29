__int64 __fastcall sub_5A6D50(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 104) + 104LL);
  if ( v1 == sub_4D94C0 )
    return 0xFFFFFFFFLL;
  else
    return v1();
}

