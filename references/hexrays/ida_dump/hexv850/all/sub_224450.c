char __fastcall sub_224450(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int tinfo_size; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v8; // eax
  __int64 v9; // rdx
  char tinfo_property; // r12
  char v11; // al
  __int64 v12; // rdi
  char v13; // r12
  char v14; // al
  __int64 v15; // rdi
  char v16; // al
  __int64 v17; // rdi
  char v18; // r12
  char v19; // al
  char v20; // cl
  char v21; // dl
  __int64 v22; // rdi
  __int64 v23; // rax
  char v24; // bl
  bool v25; // al
  bool v26; // [rsp+Fh] [rbp-39h]
  __int64 v27; // [rsp+18h] [rbp-30h] BYREF
  _QWORD v28[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  v28[1] = __readfsqword(0x28u);
  if ( (get_tinfo_property(v3, 2) & 0x3F) == 1 )
    return 0;
  tinfo_size = *(_DWORD *)(a2 + 52);
  if ( !tinfo_size )
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 24), 0);
  v5 = *(_QWORD *)(a1 + 112);
  v6 = *(_QWORD *)(a1 + 120) == v5 ? -1LL : *(_QWORD *)(v5 + 56);
  if ( tinfo_size != *(_QWORD *)(a1 + 128) - v6 )
    return 0;
  if ( !*(_BYTE *)(a1 + 168) )
    return 1;
  v8 = *(_DWORD *)(a2 + 56);
  if ( (v8 & 0x400) != 0 )
    return 1;
  v9 = *(_QWORD *)(a1 + 176);
  if ( v9 != -1 && v9 != *(_QWORD *)(a2 + 32)
    || (*(_BYTE *)(a1 + 201) & 4) != 0
    || (v8 & 2) != 0 && *(_QWORD *)(a2 + 40) != -1 && (get_tinfo_property(*(_QWORD *)(a2 + 24), 2) & 0xF) == 0xB )
  {
    return 0;
  }
  tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 24), 2);
  v11 = get_tinfo_property(*(_QWORD *)(a1 + 168), 2);
  v12 = *(_QWORD *)(a2 + 24);
  if ( ((tinfo_property & 0x2F) == 13) != ((v11 & 0x2F) == 13) )
    return (get_tinfo_property(v12, 2) & 0x2F) == 13;
  v13 = get_tinfo_property(v12, 2);
  v14 = get_tinfo_property(*(_QWORD *)(a1 + 168), 2);
  v15 = *(_QWORD *)(a2 + 24);
  if ( ((v14 & 0xF) == 10) != ((v13 & 0xF) == 10) )
    return (get_tinfo_property(v15, 2) & 0xF) == 10;
  if ( !(_BYTE)v15 )
  {
    if ( *(_DWORD *)(a2 + 52) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL) )
      return (get_tinfo_property(*(_QWORD *)(a1 + 168), 2) & 0xF) == 11;
    return 0;
  }
  v16 = get_tinfo_property(v15, 2);
  v17 = *(_QWORD *)(a1 + 168);
  if ( (v16 & 0x3E) != 0 )
  {
    v18 = (v16 & 0xFu) <= 8;
    v19 = get_tinfo_property(v17, 2);
    v20 = 0;
    v21 = v19;
    if ( (v19 & 0x3E) == 0 )
      goto LABEL_28;
  }
  else
  {
    v21 = get_tinfo_property(v17, 2);
    if ( (v21 & 0x3E) == 0 )
    {
      v22 = *(_QWORD *)(a2 + 24);
      goto LABEL_32;
    }
    v18 = 0;
  }
  v20 = (v21 & 0xFu) <= 8;
LABEL_28:
  v22 = *(_QWORD *)(a2 + 24);
  if ( v20 != v18 )
    return *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL) + 80LL) >= (unsigned __int64)get_tinfo_size(
                                                                                             0,
                                                                                             *(_QWORD *)(a2 + 24),
                                                                                             0) == v18;
LABEL_32:
  v23 = get_tinfo_property(v22, 289);
  v27 = v23;
  if ( (_BYTE)v23 && ((v23 & 0xE) != 0 || (v23 & 0x30) == 0) )
  {
    v28[0] = get_tinfo_property(v23, 9);
    v24 = get_tinfo_property(v28[0], 2);
    clear_tinfo_t(v28);
    v25 = (v24 & 0x3F) != 48;
  }
  else
  {
    v25 = 0;
  }
  v26 = v25;
  clear_tinfo_t(&v27);
  return v26;
}
