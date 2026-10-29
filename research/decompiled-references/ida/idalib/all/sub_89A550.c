__int64 __fastcall sub_89A550(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 48);
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 8))(v2, *(_QWORD *)(a1 + 16));
    if ( (*(_BYTE *)(a1 + 105) & 1) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 8))(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 16));
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 8))(a1, *(_QWORD *)(a1 + 16));
  }
  return result;
}
