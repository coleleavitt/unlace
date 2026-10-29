__int64 __fastcall sub_BA57C0(__int64 **a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax

  result = sub_BA56E0(a1, a2);
  if ( (_BYTE)result && (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B && ((*(_BYTE *)(a2 + 97) & 8) == 0 || *((_BYTE *)*a1 + 10)) )
  {
    v3 = sub_B4F900(a2);
    return (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(**a1 + 96))(*a1, v3);
  }
  return result;
}

