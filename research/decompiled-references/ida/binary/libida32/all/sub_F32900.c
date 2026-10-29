unsigned __int64 __fastcall sub_F32900(__int64 a1)
{
  return ((a1 + (((char)BYTE3(*(_QWORD *)(a1 + 16)) >> 5) & 4) + 8LL * *(unsigned __int16 *)(a1 + 22) + 48 + 7)
        & 0xFFFFFFFFFFFFFFF8LL)
       + 8LL * ((*(_QWORD *)(a1 + 16) & 0x40000000LL) != 0);
}

