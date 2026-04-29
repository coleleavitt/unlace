__int64 __fastcall sub_12AB50(unsigned __int64 a1, __int64 a2, int a3, int a4)
{
  int v8; // eax
  unsigned int v9; // r14d
  int v10; // edx
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r15
  _QWORD *v21; // rax
  int v22; // eax
  __int16 v23; // cx
  __int16 v24; // dx
  __int16 v25; // cx
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // r12
  __int64 not_tail; // r12
  __int64 v32; // rdx
  unsigned __int64 that; // rax
  __int64 v34; // rdi
  __int64 flags_by_size; // r12
  __int16 v36; // si
  __int16 v37; // cx
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // r12
  char v41; // r12
  char v42; // al
  __int64 v43; // r12
  __int64 v44; // [rsp+8h] [rbp-60h]
  int v45; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall **v46)(); // [rsp+10h] [rbp-58h] BYREF
  __int64 v47; // [rsp+18h] [rbp-50h]
  int v48; // [rsp+20h] [rbp-48h]
  unsigned int v49; // [rsp+24h] [rbp-44h]
  unsigned __int64 v50; // [rsp+28h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( (a4 & 0x100) == 0
    && ((*(_BYTE *)(a1 + 1) & 4) != 0 || *(_BYTE *)a1 == 4 && sub_122600(*(unsigned int **)(a1 + 8)))
    && !sub_11CAD0(a3) )
  {
    return 0;
  }
  v8 = *(_DWORD *)(a1 + 4);
  v9 = a4 & 0xFFFFFE7F;
  if ( (a4 & 0xFFFFFE7F) == 2 )
  {
    if ( a3 != v8 )
    {
      if ( !*(_BYTE *)a1 )
      {
LABEL_19:
        if ( v8 == -1 )
          return 1;
        goto LABEL_7;
      }
      if ( !under_debugger )
        sub_383060(51257);
LABEL_98:
      BUG();
    }
  }
  else if ( a3 == v8 )
  {
    return 1;
  }
  switch ( *(_BYTE *)a1 )
  {
    case 0:
      goto LABEL_19;
    case 1:
      if ( (a4 & 0x80) != 0 )
        goto LABEL_7;
      v12 = *(unsigned int *)(a1 + 8);
      if ( (int)v12 >= *(_DWORD *)(a2 + 68) )
        goto LABEL_7;
      if ( a3 > (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a2 + 40LL))(
                  a2,
                  0,
                  v12,
                  0x7FFFFFFF) )
        return 0;
      goto LABEL_6;
    case 2:
      if ( (unsigned __int64)a3 > 8 )
        return 0;
      if ( (unsigned __int64)v8 <= 8 )
      {
        if ( a3 < v8 )
        {
          v13 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)(v13 + 16) = sub_32ABC0(*(_QWORD *)(v13 + 16), (unsigned int)a3, 0);
          v8 = *(_DWORD *)(a1 + 4);
        }
        goto LABEL_7;
      }
      if ( !under_debugger )
        sub_383060(52630);
      goto LABEL_98;
    case 4:
      v14 = *(_QWORD *)(a1 + 8);
      switch ( *(_DWORD *)v14 )
      {
        case 2:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
          goto LABEL_56;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0x13:
        case 0x14:
        case 0x15:
          v47 = a2;
          v46 = &off_4DD8E0;
          v48 = a3;
          v49 = a4 & 0xFFFFFE7F;
          if ( !(unsigned __int8)sub_121DB0(v14, (__int64)&v46, 273) )
            return 0;
          goto LABEL_55;
        case 8:
        case 9:
          if ( *(_DWORD *)(v14 + 36) > a3 )
          {
            *(_DWORD *)v14 = 10;
            *(_DWORD *)(*(_QWORD *)(a1 + 8) + 68LL) = a3;
            sub_15BC70(*(_QWORD *)(a1 + 8), a2, 0, 0, 0, 0, 0);
            v14 = *(_QWORD *)(a1 + 8);
            goto LABEL_56;
          }
          if ( *(_DWORD *)(v14 + 36) != a3 )
            goto LABEL_56;
LABEL_74:
          if ( a1 )
          {
            v47 = 0;
            sub_123A40((__int64)&v46, (unsigned __int8 *)(v14 + 32));
            v36 = *(_WORD *)a1;
            v37 = *(_WORD *)(a1 + 2);
            v38 = *(_DWORD *)(a1 + 4);
            *(_QWORD *)a1 = v46;
            v39 = *(_QWORD *)(a1 + 8);
            LOWORD(v46) = v36;
            *(_QWORD *)(a1 + 8) = v47;
            WORD1(v46) = v37;
            HIDWORD(v46) = v38;
            v47 = v39;
            sub_11CDA0((__int64)&v46);
          }
          return 1;
        case 0xA:
          if ( *(_DWORD *)(v14 + 36) == a3 )
            goto LABEL_74;
          if ( *(_DWORD *)(v14 + 36) < a3 )
            return 0;
          goto LABEL_56;
        case 0x16:
          v47 = a2;
          v46 = &off_4DD8E0;
          v48 = a3;
          v49 = a4 & 0xFFFFFE7F;
          if ( !(unsigned __int8)sub_121DB0(v14, (__int64)&v46, 257) )
            return 0;
LABEL_55:
          v14 = *(_QWORD *)(a1 + 8);
LABEL_56:
          *(_DWORD *)(v14 + 68) = a3;
          break;
        default:
          return 0;
      }
      goto LABEL_6;
    case 5:
      v15 = *(__int64 **)(a1 + 8);
      v16 = *v15;
      v17 = v15[1];
      v18 = a3 - 1;
      v19 = *(_QWORD *)(v16 + 144);
      v20 = v17 + 1;
      if ( v19 >= v17 + 1 && a3 != 1 && v18 + v17 >= v19 )
        return 0;
      if ( *(_DWORD *)(v16 + 116) )
      {
        v29 = *(_QWORD *)(v16 + 136);
        if ( v29 >= v20 && a3 != 1 && v18 + v17 >= v29 )
          return 0;
      }
      if ( (unsigned __int8)sub_1EF9B0(v16, v17, 1) || (__int64)v20 > *(_QWORD *)(v16 + 144) - *(int *)(v16 + 120) )
      {
        v21 = *(_QWORD **)(a1 + 8);
        if ( (*(_BYTE *)(*v21 + 2LL) & 4) == 0 && !(unsigned int)sub_232200(*v21, v21[1], (unsigned int)a3, 0, v9 != 0) )
          return 0;
      }
      goto LABEL_6;
    case 6:
      if ( !(unsigned __int8)is_mapped(*(_QWORD *)(a1 + 8)) )
        goto LABEL_6;
      v30 = *(_QWORD *)(a1 + 8);
      if ( get_item_end(v30) - v30 >= (unsigned __int64)a3 )
        goto LABEL_6;
      not_tail = *(_QWORD *)(a1 + 8);
      v44 = *(_QWORD *)(a2 + 96);
      if ( (get_flags_ex(not_tail, 4) & 0x600) == 0x200 )
        not_tail = prev_not_tail(not_tail, 4, v32);
      if ( (~(unsigned __int16)get_flags_ex(not_tail, 4) & 0x600) == 0 )
        return 0;
      that = next_that(*(_QWORD *)(a1 + 8), a3 + *(_QWORD *)(a1 + 8), sub_11B670, 0);
      v34 = *(_QWORD *)(a1 + 8);
      if ( that < a3 + v34 )
        return 0;
      if ( *(_DWORD *)(a1 + 4) >= a3 )
      {
        if ( !v9 )
          goto LABEL_9;
        goto LABEL_68;
      }
      v40 = v44;
      v45 = sub_343460(v44, *(_QWORD *)(a1 + 8));
      if ( ((unsigned int)sub_343460(v40, *(_QWORD *)(a1 + 8) + *(int *)(a1 + 4)) != 0) != (v45 != 0) )
        return 0;
      v41 = (unsigned __int8)segtype(*(_QWORD *)(a1 + 8)) == 1;
      v42 = (unsigned __int8)segtype(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 4)) == 1;
      if ( !v41 && !v42 )
        goto LABEL_88;
      if ( v41 != v42 )
        return 0;
      v43 = *(_QWORD *)(a1 + 8);
      if ( next_head(v43, a3 + v43) == -1 || (unsigned __int8)segtype(v43) != 1 )
      {
LABEL_88:
        if ( !v9 )
          goto LABEL_6;
        v34 = *(_QWORD *)(a1 + 8);
LABEL_68:
        del_items(v34, 0, a3, 0);
        flags_by_size = get_flags_by_size(a3);
        if ( !(unsigned __int8)can_define_item(*(_QWORD *)(a1 + 8), a3, flags_by_size) )
          return 0;
        if ( !(unsigned __int8)create_data(*(_QWORD *)(a1 + 8), flags_by_size, a3, -1) )
        {
          if ( !under_debugger )
            sub_383060(50290);
          goto LABEL_98;
        }
LABEL_6:
        v8 = *(_DWORD *)(a1 + 4);
LABEL_7:
        if ( a3 > v8 )
          *(_WORD *)(a1 + 2) = 0;
LABEL_9:
        if ( !*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL)
          || !sub_11BB90((unsigned __int8 *)a1)
          || (v10 = *(_DWORD *)(a1 + 4), v10 <= a3) )
        {
          *(_DWORD *)(a1 + 4) = a3;
          return 1;
        }
        if ( a3 )
          return sub_126F10(a1, a2, v10 - a3);
        return 0;
      }
      return 0;
    case 7:
      return 1;
    case 9:
      if ( a3 < v8 )
        goto LABEL_9;
      if ( !under_debugger )
        sub_383060(50291);
      goto LABEL_98;
    case 0xE:
      if ( v9 == 2 )
        goto LABEL_7;
      if ( 2 * a3 > v8 )
        return 0;
      sub_123A40((__int64)&v46, *(unsigned __int8 **)(a1 + 8));
      v22 = HIDWORD(v46);
      if ( SHIDWORD(v46) <= a3 )
        goto LABEL_50;
      if ( !(unsigned __int8)sub_12AB50(&v46, a2, (unsigned int)a3, v9) )
      {
        sub_11CDA0((__int64)&v46);
        return 0;
      }
      v22 = HIDWORD(v46);
LABEL_50:
      v23 = (__int16)v46;
      LOWORD(v46) = *(_WORD *)a1;
      v24 = *(_WORD *)(a1 + 2);
      *(_WORD *)a1 = v23;
      v25 = WORD1(v46);
      WORD1(v46) = v24;
      v26 = *(_DWORD *)(a1 + 4);
      *(_WORD *)(a1 + 2) = v25;
      HIDWORD(v46) = v26;
      v27 = v47;
      *(_DWORD *)(a1 + 4) = v22;
      v28 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v27;
      v47 = v28;
      sub_11CDA0((__int64)&v46);
      v8 = *(_DWORD *)(a1 + 4);
      goto LABEL_7;
    case 0xF:
      if ( v9 == 2 )
        goto LABEL_7;
      if ( a3 > v8 )
        return 0;
      return sub_1272B0(a1, a2, a3);
    default:
      return 0;
  }
}
