bool __fastcall sub_780450(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi

  v2 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v3 = *(_QWORD *)v2;
  return (*(_BYTE *)(*(_QWORD *)v2 + 16LL) == 26
       || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && (v3 = sub_B0D320(v3)) != 0)
      && (*(_DWORD *)(v3 + 20) & 0x3FFFC0) != 0
      && *(_DWORD *)(**(_QWORD **)(a1 + 120) + 100LL) != 0;
}

