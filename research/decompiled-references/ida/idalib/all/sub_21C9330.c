__int64 __fastcall sub_21C9330(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi

  *(_QWORD *)a1 = &off_2BE9B08;
  operator delete(*(_QWORD *)(a1 + 24), 24LL * *(unsigned int *)(a1 + 40), 8);
  result = sub_21D1A40(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return result;
}
