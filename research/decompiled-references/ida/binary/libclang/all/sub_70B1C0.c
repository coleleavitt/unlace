bool __fastcall sub_70B1C0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  if ( (*(_BYTE *)(a1[270] + 1LL) & 8) != 0 )
    return (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | a2 & 7) == (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL]
                                                                      | a3 & 7);
  else
    return (sub_707EF0(a1, a2, a3, 0, a4, 0, 0) & 0xFFFFFFFFFFFFFFF8LL) > 0xF;
}

