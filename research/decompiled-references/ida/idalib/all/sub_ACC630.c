_QWORD *__fastcall sub_ACC630(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = a1[1];
  if ( (v1 & 3) != 0 )
  {
    if ( (v1 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      sub_EF2960(a1);
    else
      sub_EF2750(a1, 1);
    return a1;
  }
  else
  {
    *a1 += 8LL;
    return a1;
  }
}
