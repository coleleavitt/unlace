__int64 __fastcall sub_18C470(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v2 + 29) & 2) != 0 )
    return message((TView *)v2, 0x100u, (a2 == 0) + 10, nullptr);
  if ( *(int *)(v2 + 336) <= 1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 184LL))(v2);
  *(_BYTE *)(v2 + 340) = 1;
  return result;
}

