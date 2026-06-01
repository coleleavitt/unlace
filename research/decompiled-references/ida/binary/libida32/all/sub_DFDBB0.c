__int64 __fastcall sub_DFDBB0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  else
    return sub_D666B0(a2, a3);
}

