__int64 __fastcall sub_21C95A0(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 (*v2)(void); // rax

  v1 = *(_QWORD **)(a1 + 128);
  v2 = *(__int64 (**)(void))(*v1 + 120LL);
  if ( (char *)v2 == (char *)sub_21C9310 )
    return v1[6] >> 63;
  else
    return v2();
}
