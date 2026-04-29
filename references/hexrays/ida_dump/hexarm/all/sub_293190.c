__int64 __fastcall sub_293190(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v8; // r13
  int tinfo_size; // r12d
  char tinfo_property; // al
  int v11; // edx
  __int64 v13; // rsi
  __int64 *v14; // rdi
  __int64 v15; // rdi
  char v16; // r13
  char v17; // r13
  __int64 v18; // r13
  int v19; // eax
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // eax
  char v24; // r13
  char v25; // r13
  __int64 *v26; // [rsp+8h] [rbp-60h]
  __int64 v27; // [rsp+10h] [rbp-58h]
  __int64 v28; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+10h] [rbp-58h]
  __int64 *v30; // [rsp+18h] [rbp-50h]
  _QWORD v31[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a2 + 8) == 48;
  v31[1] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v2 + 8LL * *(_QWORD *)(a1 + 24) - 8);
  if ( !v3 )
  {
    if ( !under_debugger )
      sub_3835A0(51242);
    BUG();
  }
  if ( (unsigned int)(*(_DWORD *)(v4 + 8) - 22) > 9 )
    return 0;
  v5 = *(_QWORD *)(v4 + 24);
  if ( a2 == v5 )
    v5 = *(_QWORD *)(v4 + 32);
  v8 = *(_QWORD *)(a2 + 24);
  v26 = (__int64 *)(v8 + 48);
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
  tinfo_property = get_tinfo_property(*(_QWORD *)(v8 + 48), 2);
  v11 = *(_DWORD *)(v5 + 8);
  if ( (unsigned __int8)((tinfo_property & 0xF) - 10) > 1u )
  {
    if ( v11 != 48
      || (unsigned int)lexcompare_tinfo(*(_QWORD *)(a2 + 48), *(_QWORD *)(v5 + 48), 0)
      || tinfo_size != get_tinfo_size(0, *(_QWORD *)(v8 + 48), 0)
      || tinfo_size != get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(v5 + 24) + 48LL), 0)
      || !sub_2459F0(*(_QWORD *)(a1 + 72), v26, (_QWORD *)(*(_QWORD *)(v5 + 24) + 48LL), *(_DWORD *)(v4 + 8)) )
    {
      return 0;
    }
    sub_255C10((__int64 *)a2, *(_QWORD *)(a2 + 24));
    v13 = *(_QWORD *)(v5 + 24);
    v14 = (__int64 *)v5;
    goto LABEL_15;
  }
  if ( v11 != 48
    || (unsigned __int8)((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 48LL), 2) & 0xF) - 10) > 1u
    || ((v27 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (get_tinfo_property(*(_QWORD *)(v8 + 48), 2) & 0xF) != 0xB)
      ? (v20 = get_tinfo_size(0, *(_QWORD *)(v8 + 48), 0))
      : (v20 = *(_DWORD *)(v27 + 84)),
        tinfo_size != v20 || !sub_2459F0(*(_QWORD *)(a1 + 72), v26, v26, *(_DWORD *)(v4 + 8)))
    || ((v21 = get_tinfo_property(*(_QWORD *)(a2 + 48), 2), (v21 & 0xFu) > 0xA) && (v21 & 0x3F) != 0x2D
     || (unsigned int)lexcompare_tinfo(*(_QWORD *)(a2 + 48), *(_QWORD *)(v5 + 48), 0))
    && ((get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) != 0xA
     || (get_tinfo_property(*(_QWORD *)(v5 + 48), 2) & 0xF) != 0xA
     || ((v28 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (get_tinfo_property(*(_QWORD *)(v5 + 48), 2) & 0xF) != 0xB)
       ? (v22 = get_tinfo_size(0, *(_QWORD *)(v5 + 48), 0))
       : (v22 = *(_DWORD *)(v28 + 84)),
         tinfo_size != v22))
    || !(unsigned __int8)sub_2844B0(a1, v5, v26) )
  {
    if ( (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v5 + 48), 2) & 0xF) - 10) > 1u )
      return 0;
    v30 = (__int64 *)(v5 + 48);
    if ( (get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) != 0xA
      || ((v29 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (get_tinfo_property(*(_QWORD *)(v8 + 48), 2) & 0xF) != 0xB)
        ? (v23 = get_tinfo_size(0, *(_QWORD *)(v8 + 48), 0))
        : (v23 = *(_DWORD *)(v29 + 84)),
          tinfo_size != v23
       || !sub_2459F0(*(_QWORD *)(a1 + 72), v26, v30, *(_DWORD *)(v4 + 8))
       || (v31[0] = 0,
           v31[0] = get_tinfo_property(*(_QWORD *)(v8 + 48), 9),
           v24 = get_tinfo_property(v31[0], 2) & 0x3F,
           clear_tinfo_t(v31),
           v24 != 1)
       && (v31[0] = 0,
           v31[0] = get_tinfo_property(*(_QWORD *)(v5 + 48), 9),
           v25 = get_tinfo_property(v31[0], 2) & 0x3F,
           clear_tinfo_t(v31),
           v25 != 1)
       && !sub_2459F0(*(_QWORD *)(a1 + 72), (__int64 *)(a2 + 48), v26, 0x16u)
       && !sub_2459F0(*(_QWORD *)(a1 + 72), v26, v30, 0x16u)) )
    {
      v15 = *(_QWORD *)(a2 + 48);
      v31[0] = 0;
      v31[0] = get_tinfo_property(v15, 9);
      v16 = get_tinfo_property(v31[0], 2) & 0x3F;
      clear_tinfo_t(v31);
      if ( v16 == 1 )
      {
        v31[0] = 0;
        v31[0] = get_tinfo_property(*(_QWORD *)(v5 + 48), 9);
        v17 = get_tinfo_property(v31[0], 2) & 0x3F;
        clear_tinfo_t(v31);
        if ( v17 != 1 )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL);
          v19 = (get_tinfo_property(*(_QWORD *)(v5 + 48), 2) & 0xF) == 0xB
              ? *(_DWORD *)(v18 + 84)
              : get_tinfo_size(0, *(_QWORD *)(v5 + 48), 0);
          if ( tinfo_size == v19 && sub_2459F0(*(_QWORD *)(a1 + 72), v30, v30, *(_DWORD *)(v4 + 8)) )
            return sub_2844B0(a1, a2, v30);
        }
      }
      return 0;
    }
    v13 = *(_QWORD *)(a2 + 24);
    v14 = (__int64 *)a2;
LABEL_15:
    sub_255C10(v14, v13);
    if ( (unsigned __int8)sub_283EC0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
      *(_DWORD *)(a1 + 8) |= 8u;
    return 1;
  }
  sub_255C10((__int64 *)a2, *(_QWORD *)(a2 + 24));
  return 1;
}
