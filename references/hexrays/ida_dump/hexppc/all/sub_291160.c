__int64 __fastcall sub_291160(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // r12
  unsigned int v6; // eax
  unsigned int v7; // r15d
  __int64 v8; // rax
  __int64 v10; // rsi
  signed int tinfo_size; // eax
  __int64 v12; // rsi
  signed int v13; // ebp
  __int64 v14; // r14
  __int64 v15; // rdx
  char v16; // al
  signed int v17; // eax
  int radix; // eax
  unsigned int v19; // [rsp+8h] [rbp-80h]
  __int64 v20; // [rsp+8h] [rbp-80h]
  __int64 v21; // [rsp+8h] [rbp-80h]
  unsigned int v22; // [rsp+10h] [rbp-78h]
  unsigned int tinfo_property; // [rsp+24h] [rbp-64h]
  __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  char v25[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v26[9]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 16);
  v26[1] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 8 * v2 - 8);
  LOBYTE(v6) = sub_2527D0(a2, v5);
  if ( !(_BYTE)v6 )
  {
    if ( !under_debugger )
      sub_37EEE0(50627);
    BUG();
  }
  v7 = v6;
  v8 = *(int *)(v5 + 8);
  if ( (unsigned int)v8 <= 0x45 && (*((_BYTE *)&off_4CD440 + 16 * v8 + 11) & 0x20) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 48);
    if ( (*(_BYTE *)(a2 + 48) & 0xFu) <= 9 )
    {
      tinfo_size = get_tinfo_size(0, v10, 0);
      v12 = *(_QWORD *)(a1 + 72);
      v13 = tinfo_size;
      v22 = *(unsigned __int8 *)(v12 + 130);
      if ( (int)v22 < tinfo_size )
      {
        v14 = *(_QWORD *)(v5 + 24);
        if ( v14 == a2 )
          v14 = *(_QWORD *)(v5 + 32);
        v19 = tinfo_size;
        sub_23ECA0(&v24, v12, v14 + 48, a2 + 48, 1);
        tinfo_property = get_tinfo_property(v24, 3);
        v20 = sub_326890(**(_QWORD **)(a2 + 24), v19, tinfo_property == 1);
        if ( v20 == sub_326890(**(_QWORD **)(a2 + 24), v22, tinfo_property == 1) )
        {
          v15 = *(_QWORD *)(a2 + 24);
          v16 = *(_BYTE *)(v15 + 13);
          if ( (v16 & 2) == 0 || v20 >= 0 || tinfo_property != 1 )
          {
            if ( (v16 & 0x20) == 0
              || (v21 = *(_QWORD *)(a2 + 24),
                  !(unsigned __int8)is_stroff(*(_QWORD *)(v15 + 40), (unsigned int)*(char *)(v15 + 12)))
              && !(unsigned __int8)is_enum(*(_QWORD *)(v21 + 40), (unsigned int)*(char *)(v21 + 12)) )
            {
              v17 = get_tinfo_size(0, *(_QWORD *)(v14 + 48), 0);
              if ( v17 != -1 && v13 <= v17 )
              {
                if ( *(_DWORD *)(v14 + 8) == 48 && (unsigned int)sub_290780(a1, v14) )
                  goto LABEL_26;
                sub_328100(v25, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v22, tinfo_property);
                sub_23ECA0(v26, *(_QWORD *)(a1 + 72), v14 + 48, (__int64)v25, 1);
                if ( tinfo_property == (unsigned int)get_tinfo_property(v26[0], 3) )
                {
                  if ( tinfo_property != 1
                    || (radix = get_radix(
                                  *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL),
                                  (unsigned int)*(char *)(*(_QWORD *)(a2 + 24) + 12LL)),
                        !(unsigned __int8)sub_25D910(*(_QWORD **)(a2 + 24), *(_QWORD *)(a1 + 72), v22, radix)) )
                  {
                    copy_tinfo_t(a2 + 48, v25);
                    if ( (unsigned __int8)sub_27FE80(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
                      *(_DWORD *)(a1 + 8) |= 8u;
                    clear_tinfo_t(v26);
                    clear_tinfo_t(v25);
                    goto LABEL_26;
                  }
                }
                clear_tinfo_t(v26);
                clear_tinfo_t(v25);
              }
            }
          }
        }
        v7 = 0;
LABEL_26:
        clear_tinfo_t(&v24);
        return v7;
      }
    }
  }
  return 0;
}
