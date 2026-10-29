__int64 __fastcall sub_E46560(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 168);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  else
    return 0;
}

