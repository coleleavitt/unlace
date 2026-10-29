__int64 __fastcall sub_76C340(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // dx

  v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  LOBYTE(a4) = (unsigned __int8)v4 > 0xFu;
  return (2 * ((v4 >> 1) & 1))
       | (16 * a4)
       | (unsigned int)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 0xC : 0);
}

