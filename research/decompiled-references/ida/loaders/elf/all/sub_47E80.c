__int64 __fastcall sub_47E80(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r15
  __int64 v6; // rbx
  int v7; // r13d
  __int64 flags; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int dword; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // zf
  const char *v16; // rdx
  __int64 named_type_tid; // rax
  __int64 v18; // [rsp+8h] [rbp-98h]
  const char *v19; // [rsp+10h] [rbp-90h]
  __int64 v20; // [rsp+10h] [rbp-90h]
  __int64 v21; // [rsp+18h] [rbp-88h]
  int v22; // [rsp+24h] [rbp-7Ch]
  __int64 v23; // [rsp+30h] [rbp-70h] BYREF
  __int128 v24; // [rsp+38h] [rbp-68h]
  const char *v25; // [rsp+50h] [rbp-50h] BYREF
  __int128 v26; // [rsp+58h] [rbp-48h]
  unsigned __int64 v27; // [rsp+68h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( *a3 <= 0 )
    return v27 - __readfsqword(0x28u);
  v3 = a3[2];
  if ( !v3 )
    return v27 - __readfsqword(0x28u);
  v5 = 16;
  v21 = *(_QWORD *)(a2 + 608);
  v18 = a3[1] + v21;
  if ( *(_BYTE *)(a2 + 617) )
    v5 = 24;
  v22 = v3 / v5;
  if ( v22 <= 0 )
    return v27 - __readfsqword(0x28u);
  v6 = a3[1] + v21;
  v7 = 0;
  while ( 1 )
  {
    flags = get_flags_ex(v6, 1);
    if ( (flags & 0x600) != 0 || (flags & 0x100) == 0 || next_head(v6, v5 + v6) < v5 + v6 )
      break;
    v23 = 0;
    v24 = 0;
    dword = get_dword(v6, v5 + v6, v9, v10, v11);
    if ( !(unsigned __int8)sub_461E0(a2, &v23, (__int64 *)(a2 + 352), dword) )
      goto LABEL_24;
    v13 = *(_QWORD *)(a1 + 480);
    if ( v13 == -1 )
    {
      v14 = *(_QWORD *)(a2 + 360) + v21;
      v15 = *(_BYTE *)(a2 + 617) == 0;
      v26 = 0;
      v25 = nullptr;
      if ( v15 )
      {
        v19 = "Elf32_Sym";
        sub_2B240(
          (__int64 *)&v25,
          (__int64)"struct Elf32_Sym{unsigned __int32 st_name __offset(%s,0x%a);unsigned __int32 st_value __offset(%s,0x%"
                   "a);unsigned __int32 st_size;unsigned __int8  st_info;unsigned __int8  st_other;unsigned __int16 st_shndx;};",
          "OFF32",
          v14,
          "OFF32",
          v21);
      }
      else
      {
        v19 = "Elf64_Sym";
        sub_2B240(
          (__int64 *)&v25,
          (__int64)"struct Elf64_Sym{unsigned __int32 st_name __offset(%s,0x%a);unsigned __int8  st_info;unsigned __int8 "
                   " st_other;unsigned __int16 st_shndx;unsigned __int64 st_value __offset(%s,0x%a);unsigned __int64 st_size;};",
          "OFF64",
          v14,
          "OFF64",
          v21);
      }
      v16 = &s1;
      if ( (_QWORD)v26 )
        v16 = v25;
      h2ti(0, 0, v16, 1024, 0, 0, sub_EAA0, 0, 0);
      named_type_tid = get_named_type_tid(v19);
      v13 = named_type_tid;
      if ( v25 )
      {
        v20 = named_type_tid;
        *(_QWORD *)&v26 = 0;
        qfree(v25);
        v13 = v20;
      }
      *(_QWORD *)(a1 + 480) = v13;
      if ( v13 == -1 )
      {
LABEL_24:
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree(v23);
        }
        break;
      }
    }
    create_data(v6, 1610612736, v5, v13);
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
    if ( v22 == ++v7 )
      return sub_E890(v18, 1u, (__int64)"ELF Symbol Table");
    v6 += v5;
  }
  if ( !v7 )
    return v27 - __readfsqword(0x28u);
  return sub_E890(v18, 1u, (__int64)"ELF Symbol Table");
}

