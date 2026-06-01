bool __fastcall sub_7A55C0(_DWORD *a1)
{
  return *(_BYTE *)((*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 32LL))(a1) + 81) >> 5 != 2
      && ((a1[10] & 7) != 6 || (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) & 0xFFFFFFFFFFFFFFF8LL) - 1) > 3)
      && sub_780450((__int64)a1);
}

