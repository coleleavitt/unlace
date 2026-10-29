__int64 __fastcall sub_BFB2D0(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 (*v2)(void); // rax

  v1 = *(_QWORD **)(a1 + 16);
  v2 = *(__int64 (**)(void))(*v1 + 64LL);
  if ( (char *)v2 == (char *)sub_6EE8D0 )
    return v1[11];
  else
    return v2();
}
