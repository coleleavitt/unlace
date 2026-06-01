__int64 (__fastcall **__fastcall sub_CD6750(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4))()
{
  char *v4; // rbx
  __int64 (__fastcall **result)(); // rax

  v4 = (char *)a1[2];
  result = &off_1C596C8;
  *a1 = &off_1C596C8;
  if ( v4 )
  {
    sub_148D160(v4 + 8, a2, a3, a4);
    return (__int64 (__fastcall **)())sub_186B220(v4);
  }
  return result;
}

