__int64 __fastcall sub_21C9690(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 (*v2)(void); // rax

  v1 = *(_QWORD **)(a1 + 128);
  v2 = *(__int64 (**)(void))(*v1 + 104LL);
  if ( (char *)v2 == (char *)sub_21C92F0 )
    return (v1[6] >> 61) & 1LL;
  else
    return v2();
}
