__int64 __fastcall sub_38F920(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a1[1];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  if ( *a1 )
    return sub_186B220((void *)(*a1 - 8LL));
  return result;
}

