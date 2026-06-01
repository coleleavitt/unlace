__int64 *__fastcall sub_ACC190(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 *result; // rax
  __int64 v3; // rdi

  v1 = a1[3];
  result = qword_1C715E0;
  *a1 = qword_1C715E0;
  if ( v1 )
  {
    v3 = a1[4];
    if ( (*(_DWORD *)(v1 + 8))-- == 1 )
      return (__int64 *)sub_15D7BC0(v3, v1);
  }
  return result;
}

