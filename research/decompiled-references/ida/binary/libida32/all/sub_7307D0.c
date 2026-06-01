__int64 __fastcall sub_7307D0(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rcx
  __int64 v3; // rdi

  v1 = *(__int64 (__fastcall **)(__int64))a1;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v1 )
    return v1(v3);
  else
    return (*(__int64 (__fastcall **)(__int64))(a1 + 64))(v3);
}

