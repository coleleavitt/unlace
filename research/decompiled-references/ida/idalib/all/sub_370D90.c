__int64 __fastcall sub_370D90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 fchunk; // rax
  __int64 v4; // rcx
  __int64 v5; // r8

  v2 = *(unsigned int *)(a1 + 40);
  fchunk = get_fchunk(*(_QWORD *)(a1 + 8));
  if ( fchunk )
    *(_QWORD *)(a2 + 8) = sub_370C40((__int64)&unk_23AC440, fchunk, v2, v4, v5);
  else
    *(_QWORD *)(a2 + 8) = -1;
  return 0;
}
