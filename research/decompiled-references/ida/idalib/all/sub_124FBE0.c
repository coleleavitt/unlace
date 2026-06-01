void __fastcall sub_124FBE0(__int64 a1)
{
  void (__fastcall *v1)(__int64, __int64, __int64); // rax

  if ( *(_DWORD *)a1 == 11 )
  {
    v1 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 32);
    if ( v1 )
      v1(a1 + 16, a1 + 16, 3);
  }
}
