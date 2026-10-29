__int64 __fastcall sub_38F340(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  if ( *(_QWORD *)a1 )
    return sub_186B220(*(void **)a1);
  return result;
}

