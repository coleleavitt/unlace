bool __fastcall sub_2685C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  char tinfo_property; // al
  __int64 v6; // r12
  __int64 v7; // r14
  int v8; // eax
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 tinfo_size; // rbp
  int v13; // eax
  __int64 v14; // rax
  __int64 v16; // rbp

  if ( a3 && !*(_BYTE *)(a1 + 453) && !*(_DWORD *)(a1 + 440)
    || (!(unsigned __int8)sub_23DC90(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32))
     || (unsigned __int8)sub_31C4E0(*(_QWORD *)(a1 + 24), a2, 5)
     && (!*(_DWORD *)(a1 + 440)
      || (v16 = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), 0),
          get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0) == v16)))
    && ((v3 = *(_QWORD *)(a1 + 24), v4 = *(int *)(v3 + 8), (unsigned int)v4 > 0x45)
     || (*((_BYTE *)&off_4ACB20 + 16 * v4 + 11) & 2) == 0
     || (*(_BYTE *)(v3 + 56) & 4) != 0
     || (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) != 9
     && (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) != 0xB) )
  {
    tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 48), 2);
    if ( (tinfo_property & 0xFu) <= 0xA
      || (tinfo_property & 0x3F) == 0x2D
      || (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) == 0xB )
    {
      return 1;
    }
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(_QWORD *)(a1 + 32);
    v8 = *(_DWORD *)(v6 + 8);
    if ( v8 == 48 )
    {
      v9 = 2;
      while ( 1 )
      {
        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v6 + 48), 0);
        if ( get_tinfo_size(0, *(_QWORD *)(v7 + 48), 0) != tinfo_size )
          break;
        v10 = v9;
        v7 = v6;
        ++v9;
        v11 = *(_QWORD *)(**(_QWORD **)(a1 + 16) + 8 * (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) - v10));
        v8 = *(_DWORD *)(v11 + 8);
        if ( v8 != 48 )
          goto LABEL_18;
        v6 = *(_QWORD *)(**(_QWORD **)(a1 + 16) + 8 * (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) - v10));
      }
      v8 = *(_DWORD *)(v6 + 8);
      v11 = v6;
      v6 = v7;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 24);
      v9 = 2;
      v6 = *(_QWORD *)(a1 + 32);
    }
LABEL_18:
    if ( (v8 == 2 || v8 == 59) && (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0x2F) == 0xD
      || get_tinfo_property(*(_QWORD *)(a2 + 48), 17)
      && (unsigned __int8)sub_252D80(
                            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
                            *(_QWORD *)(a1 + 24),
                            *(_QWORD *)(a1 + 32),
                            (_QWORD *)(a2 + 48)) )
    {
      return 1;
    }
    v13 = *(_DWORD *)(v11 + 8);
    if ( v13 == 51 )
    {
      v6 = v11;
      v13 = *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 16) + 8 * (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) - v9)) + 8LL);
      v11 = *(_QWORD *)(**(_QWORD **)(a1 + 16) + 8 * (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) - v9));
    }
    if ( v13 == 57 && (!v11 || v6 != *(_QWORD *)(v11 + 24)) )
    {
      v14 = sub_27CFE0(v11, v6, 0);
      return (get_tinfo_property(*(_QWORD *)(v14 + 48), 2) & 0x2F) == 13;
    }
  }
  return 0;
}
