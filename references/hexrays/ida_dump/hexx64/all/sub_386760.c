__int64 __fastcall sub_386760(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r8
  unsigned int v5; // eax
  int v7; // eax
  __int64 v8; // r13
  int v9; // r12d
  __int64 tinfo_property; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  copy_tinfo_t(a3, a2 + 48);
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 <= 0x3C )
  {
    if ( v5 > 0x3A )
    {
      v7 = *(_DWORD *)(a2 + 56);
      tinfo_property = 0;
      v8 = *(unsigned int *)(a2 + 32);
      v9 = (v7 & 0x100) == 0 ? 1 : 3;
      tinfo_property = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL), 10);
      sub_32D910(a3, &tinfo_property, v8, v9);
      clear_tinfo_t(&tinfo_property);
    }
  }
  else if ( v5 == 64 )
  {
    return sub_3810A0(a1, *(_QWORD *)(a2 + 24), (unsigned __int64)a3, 3, v4);
  }
  return v11 - __readfsqword(0x28u);
}
