__int64 __fastcall sub_979A10(__int64 *a1)
{
  __int64 result; // rax
  void *v3; // rdi
  __int64 v4; // rdi

  result = sub_979710(a1);
  v3 = (void *)a1[3];
  if ( v3 )
    result = sub_186B220(v3);
  v4 = a1[2];
  if ( v4 )
    return sub_186B220((void *)(v4 - 8));
  return result;
}

