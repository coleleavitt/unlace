__int64 __fastcall sub_E78A80(__int64 a1)
{
  unsigned __int64 v2; // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x47 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 32LL))(*(_QWORD *)(a1 + 48));
  v2 = sub_B77AF0(a1);
  if ( v2 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 48) + 32LL))(*(_QWORD *)(v2 + 48));
  else
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
}
