const char *__fastcall sub_1CC80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // rdx
  unsigned __int64 v11; // rsi
  int v12; // r15d
  int v13; // r15d
  __int64 v14; // r14
  __int64 v15; // r13
  int v16; // esi
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // r15d
  unsigned __int64 v20; // rbx
  int v21; // r15d
  int v22; // eax
  __int64 v23; // rsi
  unsigned __int16 v24; // cx
  __int64 qword; // [rsp-8h] [rbp-50h]
  unsigned __int16 v26; // [rsp+Ch] [rbp-3Ch]

  v6 = sub_1C540(a1, a3 - *(_QWORD *)(a1 + 356));
  if ( v6 == -1 )
    return "Invalid JMP_SLOT relocation (not in PLT entry)";
  switch ( *(_DWORD *)(a1 + 352) )
  {
    case 2:
    case 4:
      v11 = *(_QWORD *)(a1 + 364);
      v9 = "Invalid JMP_SLOT relocation (too big for .plt size)";
      if ( v11 < v7 + 4 * v6 + 4 + 8 * (unsigned __int64)(v6 > 0x1FFF) + 8 )
        return v9;
      if ( (unsigned int)(a4 - a3 + 0x20000000) <= 0x21FFFFFF )
      {
        sub_42050(a1, a3, a4, (a4 - a3) & 0x3FFFFFC | 0x48000000, 0, 4, 0, 0, 0);
LABEL_11:
        sub_40E60(a1, a3, a4, ".", "");
        auto_mark_range(a3, a3 + 1, 20);
        auto_mark_range(a3, a3 + 1, 30);
        return nullptr;
      }
      v12 = v8 - a3;
      if ( v6 > 0x1FFF )
      {
        v13 = v12 - 8;
        v9 = "Invalid JMP_SLOT relocation (too many PLT entries)";
        if ( v13 < -536870912 )
          return v9;
        v14 = v8 + v11 - 4;
        v26 = -4 * v6;
        v15 = -4 * v6 + v14;
        sub_42050(a1, a3, -4 * v6 + v14, ((unsigned int)(-4 * v6) >> 16) | 0x3D600000, 0, 7, v14, 8, 2);
        sub_42050(a1, a3 + 4, v15, v26 | 0x616B0000, 0, 9, v14, 8, 2);
        v16 = a3 + 8;
        v17 = *(_QWORD *)(a1 + 356);
        v18 = v13 & 0x3FFFFFC | 0x48000000;
        goto LABEL_10;
      }
      v21 = v12 - 4;
      v9 = "Invalid JMP_SLOT relocation (too many PLT entries)";
      if ( v21 >= -536870912 )
      {
        v14 = v8 + v11 - 4;
        v22 = -4 * v6;
        v15 = v14 + v22;
        sub_42050(a1, a3, v14 + v22, (unsigned __int16)v22 | 0x39600000, 0, 1, v14, 8, 2);
        v16 = a3 + 4;
        v17 = *(_QWORD *)(a1 + 356);
        v18 = v21 & 0x3FFFFFC | 0x48000000;
LABEL_10:
        sub_42050(a1, v16, v17, v18, 0, 4, 0, 8, 0);
        sub_42050(a1, v15, a4, a4, 0, 4, 0, 0, 0);
        sub_40E60(a1, v15, a4, "", "_plt");
        if ( *(_DWORD *)(a1 + 352) == 2 )
        {
          set_name(*(_QWORD *)(a1 + 356), ".plt_farcall", 6144);
          auto_mark_range(*(_QWORD *)(a1 + 356), *(_QWORD *)(a1 + 356) + 1LL, 20);
          v23 = *(_QWORD *)(a1 + 356);
          *(_DWORD *)(a1 + 352) = 4;
          v24 = WORD1(v14) + 1;
          if ( (v14 & 0x8000) == 0 )
            v24 = WORD1(v14);
          sub_42050(a1, v23, v14, v24 | 0x3D6B0000, 0, *(unsigned __int16 *)(a1 + 348), 0, 8, 2);
          sub_42050(a1, *(_DWORD *)(a1 + 356) + 4, v15, (unsigned __int16)v14 | 0x396B0000, 0, 9, 0, 8, 2);
          put_dword(*(_QWORD *)(a1 + 356) + 8LL, 2104034214);
          put_dword(*(_QWORD *)(a1 + 356) + 12LL, 1317012512);
        }
        goto LABEL_11;
      }
      break;
    case 3:
      v9 = "Invalid JMP_SLOT relocation (too big for .plt size)";
      if ( *(_QWORD *)(a1 + 364) < (unsigned __int64)(v7 + 4) )
        return v9;
      create_data(a3, 805306368, 4, -1);
      sub_42050(a1, a3, a4, a4, 0, 4, 0, 0, 0);
      goto LABEL_23;
    case 5:
      v9 = "Invalid JMP_SLOT relocation (too big for .plt size)";
      if ( *(_QWORD *)(a1 + 364) < (unsigned __int64)(v7 + 24) )
        return v9;
      create_data(a3, 805306368, 8, -1);
      create_data(a3 + 8, 805306368, 8, -1);
      create_data(a3 + 16, 805306368, 8, -1);
      if ( !a2 )
        goto LABEL_22;
      v19 = *(_DWORD *)(a2 + 88);
      if ( v19 != (unsigned int)sub_3BD30(*(_QWORD *)(a1 + 16) + 80LL, 16)
        || *(_BYTE *)(a2 + 93) != 2
        || !(unsigned __int8)is_loaded(a4) )
      {
        goto LABEL_22;
      }
      qword = get_qword(a4);
      sub_42050(a1, a3, qword, qword, 0, 12, 0, 0, 0);
      sub_40E60(a1, a3, a4, "", "_plt");
      auto_mark_range(qword, qword + 1, 20);
      auto_mark_range(qword, qword + 1, 30);
      v20 = get_qword(a4 + 8);
      put_qword(a3 + 8, v20);
      sub_1AD60(a3 + 8, 9u, v20);
      return nullptr;
    case 6:
      v9 = "Invalid JMP_SLOT relocation (too big for .plt size)";
      if ( *(_QWORD *)(a1 + 364) < (unsigned __int64)(v7 + 8) )
        return v9;
      create_data(a3, 805306368, 8, -1);
LABEL_22:
      sub_42050(a1, a3, a4, a4, 0, 12, 0, 0, 0);
LABEL_23:
      sub_40E60(a1, a3, a4, "", "_plt");
      auto_mark_range(a4, a4 + 1, 20);
      auto_mark_range(a4, a4 + 1, 30);
      return nullptr;
    default:
      if ( under_debugger )
        BUG();
      interr(20103);
      return (const char *)sub_1D2B0();
  }
  return v9;
}
