__int64 __fastcall sub_8FEC00(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi

  *a1 = &off_1C6F2B8;
  v2 = a1[18];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  result = sub_1680D50(a1 + 6);
  v4 = a1[5];
  if ( v4 )
    return sub_186B220((void *)(v4 - 8));
  return result;
}

