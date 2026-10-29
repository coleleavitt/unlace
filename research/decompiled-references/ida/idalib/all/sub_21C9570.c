__int64 __fastcall sub_21C9570(__int64 a1)
{
  unsigned int *v1; // rdi
  __int64 (*v2)(void); // rax

  v1 = *(unsigned int **)(a1 + 128);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 56LL);
  if ( (char *)v2 == (char *)sub_21C9290 )
    return v1[12];
  else
    return v2();
}
