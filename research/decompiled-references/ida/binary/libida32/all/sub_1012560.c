__int64 __fastcall sub_1012560(unsigned __int8 *a1, int a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 936LL);
  if ( (char *)v2 != (char *)sub_100FA70 )
    return v2();
  if ( (unsigned int)(a2 - 16) <= 1 )
    return 32;
  if ( a2 == 18 )
    return 64;
  return a1[8];
}

