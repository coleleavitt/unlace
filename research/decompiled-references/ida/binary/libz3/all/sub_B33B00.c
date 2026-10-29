__int64 __fastcall sub_B33B00(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = a1[4];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = a1[3];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = a1[2];
  if ( v5 )
    return sub_186B220((void *)(v5 - 8));
  return result;
}

