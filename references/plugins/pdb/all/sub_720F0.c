__int64 __fastcall sub_720F0(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // esi
  __int64 v3; // rdi

  v1 = *(_WORD *)(a1 + 84);
  v2 = *(_DWORD *)(a1 + 114);
  v3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int16)(v1 - 4422) <= 1u || v1 == 4438 )
    return sub_71F20(v3, v2);
  if ( v2 <= 0xFFF )
    return v2;
  if ( !sub_5F700((_QWORD *)(v3 + 168), v2) )
    return 0;
  return v2;
}
