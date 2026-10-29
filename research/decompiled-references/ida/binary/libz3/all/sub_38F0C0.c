__int64 (*__fastcall sub_38F0C0(__int64 a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // rdi

  result = (__int64 (*)(void))sub_1816990(a1 + 24);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 3008LL);
  if ( v2 )
  {
    result = *(__int64 (**)(void))(*(_QWORD *)v2 + 56LL);
    if ( result != nullsub_185 )
      return (__int64 (*)(void))result();
  }
  return result;
}

