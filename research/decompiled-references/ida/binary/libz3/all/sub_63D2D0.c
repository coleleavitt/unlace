__int64 __fastcall sub_63D2D0(__int64 a1)
{
  __int64 result; // rax
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi

  result = sub_643660();
  v3 = *(void **)(a1 + 64);
  if ( v3 )
    result = sub_186B220(v3);
  v4 = *(void **)(a1 + 40);
  if ( v4 )
    result = sub_186B220(v4);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  if ( *(_QWORD *)a1 )
    return sub_186B220(*(void **)a1);
  return result;
}

