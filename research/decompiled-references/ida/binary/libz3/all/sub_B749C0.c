__int64 __fastcall sub_B749C0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 8) & 2) == 0 )
  {
    v1 = *(_QWORD *)(a1 + 16);
    if ( v1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  }
  return result;
}

