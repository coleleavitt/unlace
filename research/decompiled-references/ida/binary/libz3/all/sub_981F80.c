__int64 (*__fastcall sub_981F80(_QWORD *a1))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*a1 + 16LL);
  if ( (char *)result != (char *)sub_981F50 )
    return (__int64 (*)(void))result();
  a1[3] = 0;
  return result;
}

