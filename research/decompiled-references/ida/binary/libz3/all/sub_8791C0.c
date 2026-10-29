__int64 __fastcall sub_8791C0(_QWORD *a1)
{
  __int64 result; // rax
  void *v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi

  result = sub_879040((__int64)a1);
  v3 = (void *)a1[5];
  if ( v3 )
    result = sub_186B220(v3);
  v4 = a1[8];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = (void *)a1[1];
  if ( v5 )
    return sub_186B220(v5);
  return result;
}

