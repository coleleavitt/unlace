__int64 __fastcall sub_303D90(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 (*v2)(void); // rax

  v1 = *(_QWORD **)(a1 + 16);
  v2 = *(__int64 (**)(void))(*v1 + 72LL);
  if ( (char *)v2 == (char *)sub_303CC0 )
    return v1[111];
  else
    return v2();
}

