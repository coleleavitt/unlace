__int64 __fastcall sub_49C6A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  bool v5; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v2 = (*(_DWORD *)(*(_QWORD *)(a2 + 2392) + 12LL) & 0x2000000u) >> 25;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 2392) + 12LL) & 0x2000000) != 0 )
  {
    v5 = *(_DWORD *)(a2 + 2376) != 0;
    v4 = sub_534430("ChooserToggleTree");
    if ( v4 )
      sub_537630(v4, 7, &v5);
  }
  return v2;
}
