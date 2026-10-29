__int64 __fastcall sub_956910(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  void *v4; // rdi

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = *(void **)(a1 + 16);
  if ( v4 )
    return sub_186B220(v4);
  return result;
}

