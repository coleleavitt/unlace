__int64 *__fastcall sub_4EA6D0(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 *result; // rax

  v1 = a1[4];
  *a1 = &off_1C4FB48;
  if ( v1 )
  {
    v3 = a1[5];
    if ( (*(_DWORD *)(v1 + 8))-- == 1 )
      sub_15D7BC0(v3, v1);
  }
  v5 = a1[2];
  *a1 = qword_1C66740;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[1];
  result = qword_1C66718;
  *a1 = qword_1C66718;
  if ( v6 )
    return (__int64 *)sub_186B220((void *)(v6 - 8));
  return result;
}

