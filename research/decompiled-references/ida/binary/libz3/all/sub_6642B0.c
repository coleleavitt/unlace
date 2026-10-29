__int64 __fastcall sub_6642B0(__int64 a1)
{
  void *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi

  v2 = *(void **)(a1 + 40);
  if ( v2 )
    result = sub_186B220(v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_186B220((void *)(v4 - 8));
  return result;
}

