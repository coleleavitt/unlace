__int64 (__fastcall **__fastcall sub_2B1FF0(_QWORD *a1))()
{
  void *v1; // rbx
  __int64 (__fastcall **result)(); // rax

  v1 = (void *)a1[1];
  result = &off_1C4CC70;
  *a1 = &off_1C4CC70;
  if ( v1 )
  {
    sub_251920((__int64)v1);
    return (__int64 (__fastcall **)())sub_186B220(v1);
  }
  return result;
}

