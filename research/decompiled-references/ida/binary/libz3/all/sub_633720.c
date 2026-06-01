__int64 __fastcall sub_633720(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  void *v4; // rdi

  v2 = a1[4];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = (void *)a1[1];
  if ( v4 )
    result = sub_186B220(v4);
  if ( *a1 )
    return sub_186B220((void *)(*a1 - 8LL));
  return result;
}

