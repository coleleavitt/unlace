__int64 *__fastcall sub_4EA990(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  __int64 v5; // rdi
  __int64 *result; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi

  v1 = a1[7];
  *a1 = &off_1C4FC30;
  if ( v1 )
  {
    v3 = a1[8];
    if ( (*(_DWORD *)(v1 + 8))-- == 1 )
      sub_15D7BC0(v3, v1);
  }
  v5 = a1[5];
  result = qword_1C66790;
  *a1 = qword_1C66790;
  if ( v5 )
    result = (__int64 *)sub_186B220((void *)(v5 - 8));
  v7 = a1[3];
  if ( v7 )
    result = (__int64 *)sub_186B220((void *)(v7 - 8));
  v8 = a1[2];
  if ( v8 )
    return (__int64 *)sub_186B220((void *)(v8 - 8));
  return result;
}

