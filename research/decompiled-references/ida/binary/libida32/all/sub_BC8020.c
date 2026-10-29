_QWORD *__fastcall sub_BC8020(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = a1[1];
  if ( (v1 & 3) != 0 )
  {
    if ( (v1 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      sub_ECEC20(a1);
    else
      sub_ECEA10(a1, 1);
    return a1;
  }
  else
  {
    *a1 += 8LL;
    return a1;
  }
}

