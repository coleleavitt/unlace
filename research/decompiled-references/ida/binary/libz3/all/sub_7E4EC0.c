__int64 __fastcall sub_7E4EC0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 (*v2)(void); // rax

  v1 = *(_QWORD *)(a1 + 80);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 432LL);
  if ( (char *)v2 == (char *)sub_79EFF0 )
    return v1 + 2144;
  else
    return v2();
}

