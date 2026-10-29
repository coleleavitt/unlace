__int64 __fastcall sub_15AC6E0(
        __int64 a1,
        void (__fastcall *a2)(__int64, __int64, const char *, __int64, _QWORD),
        __int64 a3)
{
  __int64 result; // rax

  result = (*(_BYTE *)(a1 + 3) >> 2) & 0x1F;
  if ( (*(_BYTE *)(a1 + 3) & 4) != 0 )
  {
    a2(a3, 1, "const", 5, *(unsigned int *)(a1 + 220));
    result = (*(_BYTE *)(a1 + 3) >> 2) & 0x1F;
    if ( ((*(_BYTE *)(a1 + 3) >> 2) & 4) == 0 )
    {
LABEL_3:
      if ( (result & 2) == 0 )
        goto LABEL_4;
      goto LABEL_8;
    }
  }
  else if ( ((*(_BYTE *)(a1 + 3) >> 2) & 4) == 0 )
  {
    goto LABEL_3;
  }
  a2(a3, 4, "volatile", 8, *(unsigned int *)(a1 + 228));
  result = (*(_BYTE *)(a1 + 3) >> 2) & 0x1F;
  if ( ((*(_BYTE *)(a1 + 3) >> 2) & 2) == 0 )
  {
LABEL_4:
    if ( (result & 8) == 0 )
      return result;
    return ((__int64 (__fastcall *)(__int64, __int64, const char *, __int64, _QWORD))a2)(
             a3,
             8,
             "unaligned",
             9,
             *(unsigned int *)(a1 + 236));
  }
LABEL_8:
  a2(a3, 2, "restrict", 8, *(unsigned int *)(a1 + 224));
  result = (*(_BYTE *)(a1 + 3) >> 2) & 0x1F;
  if ( ((*(_BYTE *)(a1 + 3) >> 2) & 8) != 0 )
    return ((__int64 (__fastcall *)(__int64, __int64, const char *, __int64, _QWORD))a2)(
             a3,
             8,
             "unaligned",
             9,
             *(unsigned int *)(a1 + 236));
  return result;
}
