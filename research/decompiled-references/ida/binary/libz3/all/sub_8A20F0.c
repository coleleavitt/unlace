__int64 __fastcall sub_8A20F0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  void *v5; // rdi

  v2 = a1[7];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = a1[6];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = (void *)a1[3];
  if ( v5 )
    return sub_186B220(v5);
  return result;
}

