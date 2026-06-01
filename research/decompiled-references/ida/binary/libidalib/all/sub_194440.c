__int64 __fastcall sub_194440(const char *a1)
{
  unsigned int v1; // ebx
  __int64 *v2; // rax
  __int64 v3; // rdi

  v2 = sub_1942A0(a1);
  LOBYTE(v1) = v2 != nullptr;
  if ( v2 )
  {
    v3 = v2[279];
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
  }
  return v1;
}

