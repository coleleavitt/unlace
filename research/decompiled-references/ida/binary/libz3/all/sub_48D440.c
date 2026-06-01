__int64 __fastcall sub_48D440(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v1 + 4) > 2u )
    ++*(_DWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)v2 + 16LL))(
             *(_QWORD *)(a1 + 48),
             v1,
             a1 + 24,
             a1 + 40);
  else
    return 0;
}

