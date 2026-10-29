__int64 __fastcall sub_4DA430(__int64 a1)
{
  void *v2; // rdi
  __int64 result; // rax

  v2 = *(void **)(a1 + 40);
  if ( v2 )
    result = sub_186B220(v2);
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  return result;
}

