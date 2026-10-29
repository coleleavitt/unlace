bool __fastcall sub_852FD0(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rax

  return *(_BYTE *)(sub_7E4EB0(a1) + 284)
      || (unsigned __int8)sub_1668690(a1 + 832, a2)
      || *(_WORD *)(a2 + 4)
      || (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
      || *v3 != 5;
}

