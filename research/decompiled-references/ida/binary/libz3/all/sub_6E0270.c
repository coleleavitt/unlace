__int64 __fastcall sub_6E0270(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi

  *a1 = &off_1C53418;
  v2 = a1[5];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  result = sub_2B4F40(a1 + 3);
  v4 = a1[1];
  if ( v4 )
  {
    v5 = a1[2];
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      return sub_15D7BC0(v5, v4);
  }
  return result;
}

