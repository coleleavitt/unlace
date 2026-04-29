const char *__fastcall sub_1D680(
        __int64 a1,
        unsigned int a2,
        const char *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        double a9,
        unsigned int a10)
{
  __int64 v11; // rdx
  __int64 v12; // r13
  const char *result; // rax
  __int64 v17; // r10
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r10
  __int64 v24; // rbp
  __int64 name_ea; // r10
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int dword; // eax
  __int64 v35; // r10
  int v36; // r12d
  __int64 v37; // [rsp+0h] [rbp-88h]
  __int64 v38; // [rsp+0h] [rbp-88h]
  __int64 v39[5]; // [rsp+10h] [rbp-78h] BYREF
  __int16 v40; // [rsp+38h] [rbp-50h]
  __int64 v41; // [rsp+3Ch] [rbp-4Ch]
  __int16 v42; // [rsp+44h] [rbp-44h]
  unsigned __int64 v43; // [rsp+48h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( !a5 )
    return &byte_5;
  v11 = *(_QWORD *)(a1 + 16);
  v12 = a2;
  if ( *(_WORD *)(v11 + 520) != 2 )
  {
    result = "Invalid GOT16 relocation (.got already exists)";
    if ( *(_BYTE *)(v11 + 249) )
      return result;
    v17 = sub_1A980(a6);
    result = nullptr;
    v37 = v17;
    if ( !v17 )
      return result;
    v18 = *(_QWORD *)(a6 + 8);
    v19 = sub_54BB0(a6 + 16, v18, a5, "_ptr", v39, 1);
    v23 = v37;
    v24 = v19;
    if ( !v19 )
    {
      if ( !under_debugger )
        interr(20073);
      BUG();
    }
    if ( !LOBYTE(v39[0]) )
      goto LABEL_8;
    v18 = v19;
    sub_42050(a1, v19, a4, a4, 0, 4, 0, 0, 0);
    v23 = v37;
    if ( a10 == -1 )
      goto LABEL_8;
LABEL_34:
    v18 = v24;
    sub_40E20(a1, v24, a10);
    v23 = v37;
    goto LABEL_8;
  }
  result = "Invalid GOT16 relocation (undefined target symbol)";
  if ( a4 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
    return result;
  name_ea = get_name_ea(-1, "_GLOBAL_OFFSET_TABLE_");
  result = "Invalid GOT16 relocation (no symbol _GLOBAL_OFFSET_TABLE_)";
  if ( name_ea == -1 )
    return result;
  v38 = name_ea;
  v26 = is_spec_ea(name_ea);
  result = "Invalid GOT16 relocation (undefined symbol _GLOBAL_OFFSET_TABLE_)";
  if ( v26 )
    return result;
  v24 = v38 + (__int16)get_word(a3);
  if ( (unsigned __int8)is_loaded(v24) )
  {
    dword = get_dword(v24, "_GLOBAL_OFFSET_TABLE_", v27, v28, v29);
    v35 = v38;
    v36 = dword;
    if ( a4 != dword )
    {
      sub_BFC0(
        (__int64)"AUTOHIDE SESSION\n%a: linker's GOT entry (%a) != target symbol (%a) in GOT16 relocation",
        a7,
        a8,
        a9);
      v35 = v38;
    }
    v37 = v35;
    v18 = v24;
    sub_42050(a1, v24, a4, v36, 0, 4, 0, 0, 0);
    v23 = v37;
    if ( a10 == -1 )
      goto LABEL_8;
    goto LABEL_34;
  }
  v18 = (__int64)a3;
  sub_BFC0((__int64)"AUTOHIDE SESSION\n%a: uninitialized GOT entry %a in GOT16 relocation", a7, a8);
  v23 = v38;
LABEL_8:
  v39[0] = a1;
  v40 = -1;
  v39[2] = 0;
  v39[4] = 0;
  v41 = 0;
  v42 = 0;
  if ( (unsigned __int8)v12 > 0x1Au )
  {
    if ( (_BYTE)v12 == 0xFB )
    {
      v20 = 4294934547LL;
      HIWORD(v41) = -32749;
    }
    else if ( (unsigned __int8)v12 > 0xFBu )
    {
      if ( (_BYTE)v12 == 0xFC )
        HIWORD(v41) = -32748;
    }
    else if ( (_BYTE)v12 == 0xF9 )
    {
      v18 = 4294934545LL;
      HIWORD(v41) = -32751;
    }
    else if ( (_BYTE)v12 == 0xFA )
    {
      v21 = 4294934546LL;
      HIWORD(v41) = -32750;
    }
  }
  else if ( (_BYTE)v12 )
  {
    switch ( v12 )
    {
      case 1LL:
        HIWORD(v41) = 5;
        break;
      case 2LL:
        HIWORD(v41) = 6;
        break;
      case 3LL:
        HIWORD(v41) = 1;
        break;
      case 4LL:
        HIWORD(v41) = 2;
        break;
      case 5LL:
        HIWORD(v41) = 3;
        break;
      case 6LL:
        HIWORD(v41) = 4;
        break;
      case 7LL:
        HIWORD(v41) = 7;
        break;
      case 10LL:
        HIWORD(v41) = 22;
        break;
      case 11LL:
        v22 = 23;
        HIWORD(v41) = 23;
        break;
      case 26LL:
        HIWORD(v41) = -32747;
        break;
      default:
        break;
    }
  }
  v39[3] = v23;
  v39[1] = v24;
  v30 = get_dword(a3, v18, v20, v21, v22);
  sub_1D2B0(v39, v30);
  sub_1D4D0(v39, a3, v31, v32, v33, a7, a8, a9);
  return nullptr;
}
