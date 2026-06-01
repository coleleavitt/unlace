__int64 __fastcall sub_570B40(__int64 a1)
{
  void *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi

  v2 = *(void **)(a1 + 56);
  if ( v2 )
    result = sub_186B220(v2);
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    return sub_186B220((void *)(v4 - 16));
  return result;
}

