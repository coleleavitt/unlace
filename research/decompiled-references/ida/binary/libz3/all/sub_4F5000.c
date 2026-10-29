__int64 __fastcall sub_4F5000(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = sub_180C0E0(a1 + 2);
  v3 = a1[1];
  if ( v3 )
    result = sub_186B220((void *)(v3 - 8));
  if ( *a1 )
    return sub_186B220((void *)(*a1 - 8LL));
  return result;
}

