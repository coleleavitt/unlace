__int64 __fastcall sub_64C300(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 2968);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 288LL))(v1);
  else
    return 0;
}

