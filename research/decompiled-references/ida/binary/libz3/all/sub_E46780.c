void (*__fastcall sub_E46780(__int64 a1, __int64 a2))()
{
  void (*result)(); // rax
  __int64 v3; // rdi

  result = (void (*)())sub_E5E650();
  v3 = *(_QWORD *)(a1 + 176);
  if ( v3 )
  {
    result = *(void (**)())(*(_QWORD *)v3 + 120LL);
    if ( result != nullsub_94 )
      return (void (*)())((__int64 (__fastcall *)(__int64, __int64))result)(v3, a2);
  }
  return result;
}

