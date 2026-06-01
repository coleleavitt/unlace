__int64 __fastcall sub_6CC370(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rax

  result = a1[177];
  if ( !result )
  {
    v2 = sub_6C4160((__int64)a1, a1[2374]);
    result = sub_6BAD90(a1, v2, "SEL", 3u);
    a1[177] = result;
  }
  return result;
}

