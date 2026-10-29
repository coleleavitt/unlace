__int64 __fastcall sub_157DE50(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64, __int64); // r12
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 result; // rax

  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1328LL);
  v4 = sub_C95340(a2);
  if ( v3 != sub_157DB40 )
    return v3(a1, v4);
  v5 = v4 + 72;
  if ( !v4 )
    v5 = 0;
  result = sub_B8E180(v5);
  if ( !(_BYTE)result )
  {
    if ( (*(_BYTE *)(v4 + 83) & 8) == 0 && ((*(_BYTE *)(v4 + 128) & 1) != 0 || *(_QWORD *)(v4 + 128)) )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 16))(*(_QWORD *)(a1 + 24), v4);
      return 1;
    }
    else
    {
      result = 1;
      if ( (*(_BYTE *)(v4 + 83) & 0x40) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
          *(_QWORD *)(a1 + 24),
          v4,
          *(_BYTE *)(v4 + 83) & 0x40);
        return 1;
      }
    }
  }
  return result;
}
