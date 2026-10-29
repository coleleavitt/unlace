__int64 *__fastcall sub_655620(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  __int64 v4; // rsi
  __int64 *result; // rax
  __int64 v6; // rdi

  *a1 = &off_1C52AD8;
  v2 = a1[9];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (void *)a1[6];
  if ( v3 )
    sub_186B220(v3);
  v4 = a1[2];
  result = qword_1C68C08;
  *a1 = qword_1C68C08;
  if ( v4 )
  {
    v6 = a1[3];
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      return (__int64 *)sub_15D7BC0(v6, v4);
  }
  return result;
}

