__int64 __fastcall sub_2FC000(__int64 a1)
{
  void *v2; // rdi
  __int64 result; // rax

  v2 = *(void **)(a1 + 24);
  if ( v2 )
    result = sub_186B220(v2);
  if ( *(_QWORD *)a1 )
    return sub_186B220(*(void **)a1);
  return result;
}

