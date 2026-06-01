__int64 __fastcall sub_DEC3C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  void *v6; // rdi
  void *v7; // rdi

  result = sub_DEBF80(a1);
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
    result = sub_186B220((void *)(v3 - 8));
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v6 = *(void **)(a1 + 48);
  if ( v6 )
    result = sub_186B220(v6);
  v7 = *(void **)(a1 + 24);
  if ( v7 )
    result = sub_186B220(v7);
  if ( *(_QWORD *)a1 )
    return sub_186B220(*(void **)a1);
  return result;
}

