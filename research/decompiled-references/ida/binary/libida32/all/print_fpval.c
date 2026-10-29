__int64 __fastcall print_fpval(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r12
  _QWORD v6[9]; // [rsp+0h] [rbp-48h] BYREF

  v6[3] = __readfsqword(0x28u);
  if ( a4 > 0xC )
    return 0;
  v4 = byte_238B780[a4];
  if ( (v4 & 0x80u) != 0LL || (unsigned int)cpu2ieee(v6, a3, a4) != 1 || !*(_BYTE *)(qword_2CA1698 + v4 + 888) )
    return 0;
  if ( a1 )
    realtoasc(
      a1,
      a2,
      v6,
      *(char *)(qword_2CA1698 + v4 + 888)
    | (unsigned int)((*(_DWORD *)(*(_QWORD *)(qword_2CA1698 + 1480) + 360LL) << 16)
                   | (*(_DWORD *)(*(_QWORD *)(qword_2CA1698 + 1480) + 364LL) << 8)));
  return 1;
}

