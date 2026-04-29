bool __fastcall sub_172EA0(__int64 a1, __int64 a2)
{
  return sub_1255A0((unsigned __int8 *)(a1 + 64), a2, 0)
      && (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 48LL), 2) & 0x2F) == 0xD
      && *(_DWORD *)a1 == 19;
}
