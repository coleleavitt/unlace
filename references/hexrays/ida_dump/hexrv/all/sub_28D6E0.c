__int64 __fastcall sub_28D6E0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rdi
  char v6; // bp
  int tinfo_size; // eax
  char v9; // al
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  __int64 tinfo_property; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v21[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = a2[3];
  v21[1] = __readfsqword(0x28u);
  if ( !(unsigned __int8)compare_tinfo(a2[6], *(_QWORD *)(v3 + 48), 0) )
  {
    if ( (get_tinfo_property(a2[6], 2) & 0xF) != 0xA || (get_tinfo_property(*(_QWORD *)(v3 + 48), 2) & 0xF) != 0xA )
      return 0;
    v13 = a2[6];
    v20 = 0;
    tinfo_property = get_tinfo_property(v13, 9);
    v21[0] = 0;
    v15 = *(_QWORD *)(v3 + 48);
    v20 = tinfo_property;
    v21[0] = get_tinfo_property(v15, 9);
    if ( (get_tinfo_property(v21[0], 2) & 0x40) == 0
      || (v16 = *(_QWORD *)(a1 + 16),
          v17 = *(_QWORD *)(a1 + 24),
          v18 = *(_QWORD *)(v16 + 8 * v17 - 8),
          *(_DWORD *)(v18 + 8) != 51)
      || (v19 = *(_QWORD *)(v16 + 8 * v17 - 16), (unsigned int)(*(_DWORD *)(v19 + 8) - 2) <= 0xD)
      && *(_QWORD *)(v19 + 24) == v18
      || (set_tinfo_property(v21, 6, 64), !(unsigned __int8)compare_tinfo(v20, v21[0], 0)) )
    {
      clear_tinfo_t(v21);
      clear_tinfo_t(&v20);
      return 0;
    }
    clear_tinfo_t(v21);
    clear_tinfo_t(&v20);
  }
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - 8);
  if ( *(_DWORD *)(v4 + 8) == 51 )
  {
    v9 = get_tinfo_property(*(_QWORD *)(v4 + 48), 2);
    if ( !(unsigned __int8)sub_23C490((int)a2 + 48, *(_DWORD *)(v4 + 40), (v9 & 0xF) == 9, v10, v11, v12) )
      return 0;
    v5 = a2[6];
    if ( !(_BYTE)v5 )
    {
LABEL_10:
      tinfo_size = get_tinfo_size(0, v5, 0);
      if ( !(unsigned int)sub_2816C0(a1, (__int64)a2, tinfo_size, 1u, 0) )
        goto LABEL_6;
      return 0;
    }
  }
  else
  {
    v5 = a2[6];
    if ( !(_BYTE)v5 )
      goto LABEL_10;
  }
  if ( (v5 & 0xE) == 0 && (v5 & 0x30) != 0 )
    goto LABEL_10;
  v21[0] = 0;
  v21[0] = get_tinfo_property(v5, 9);
  v6 = get_tinfo_property(v21[0], 2);
  clear_tinfo_t(v21);
  if ( (v6 & 0x3F) == 0x30 )
  {
    v5 = a2[6];
    goto LABEL_10;
  }
LABEL_6:
  sub_250C50(a2, a2[3]);
  if ( (unsigned __int8)sub_27EF00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
    *(_DWORD *)(a1 + 8) |= 8u;
  return 1;
}
