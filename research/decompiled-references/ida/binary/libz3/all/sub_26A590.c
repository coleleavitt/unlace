__int64 __fastcall sub_26A590(_QWORD *a1)
{
  __int64 result; // rax
  void *v2; // rdi

  *a1 = &off_1C4CAD8;
  result = sub_26AE20(a1[3], a1 + 4);
  v2 = (void *)a1[4];
  if ( v2 )
    return sub_186B220(v2);
  return result;
}

