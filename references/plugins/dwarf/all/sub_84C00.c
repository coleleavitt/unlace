bool __fastcall sub_84C00(__int64 a1)
{
  char *v1; // rax

  v1 = (char *)src;
  if ( *(_QWORD *)(a1 + 8) )
    v1 = *(char **)a1;
  return sub_317F0(v1) == nullptr;
}
