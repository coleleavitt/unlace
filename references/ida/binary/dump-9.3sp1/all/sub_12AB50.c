__int64 __fastcall sub_12AB50(unsigned __int8 *a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r15
  _QWORD *v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int16 v27; // cx
  __int16 v28; // dx
  __int16 v29; // cx
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // r12
  __int16 v35; // si
  __int16 v36; // cx
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // r12
  char v40; // r12
  char v41; // al
  __int64 v42; // [rsp+8h] [rbp-60h]
  int v43; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall **v44)(); // [rsp+10h] [rbp-58h] BYREF
  __int64 v45; // [rsp+18h] [rbp-50h]
  int v46; // [rsp+20h] [rbp-48h]
  unsigned int v47; // [rsp+24h] [rbp-44h]
  unsigned __int64 v48; // [rsp+28h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v8 = a4 & 0x100;
  if ( !(_DWORD)v8 && ((a1[1] & 4) != 0 || *a1 == 4 && sub_122600(*((unsigned int **)a1 + 1))) && !sub_11CAD0(a3) )
    return 0;
  v9 = *((_DWORD *)a1 + 1);
  v10 = a4 & 0xFFFFFE7F;
  if ( (a4 & 0xFFFFFE7F) == 2 )
  {
    if ( a3 != v9 )
    {
      if ( !*a1 )
      {
LABEL_19:
        if ( v9 == -1 )
          return 1;
        goto LABEL_7;
      }
      if ( !under_debugger )
        sub_383060(51257);
LABEL_98:
      BUG();
    }
  }
  else if ( a3 == v9 )
  {
    return 1;
  }
  v11 = *a1;
  switch ( *a1 )
  {
    case 0u:
      goto LABEL_19;
    case 1u:
      if ( (a4 & 0x80) != 0 )
        goto LABEL_7;
      v15 = *((unsigned int *)a1 + 2);
      if ( (int)v15 >= *(_DWORD *)(a2 + 68) )
        goto LABEL_7;
      if ( a3 > (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a2 + 40LL))(
                  a2,
                  0,
                  v15,
                  0x7FFFFFFF) )
        return 0;
      goto LABEL_6;
    case 2u:
      if ( (unsigned __int64)a3 > 8 )
        return 0;
      if ( (unsigned __int64)v9 <= 8 )
      {
        if ( a3 < v9 )
        {
          v16 = *((_QWORD *)a1 + 1);
          *(_QWORD *)(v16 + 16) = sub_32ABC0(*(_QWORD *)(v16 + 16), (unsigned int)a3, 0);
          v9 = *((_DWORD *)a1 + 1);
        }
        goto LABEL_7;
      }
      if ( !under_debugger )
        sub_383060(52630);
      goto LABEL_98;
    case 4u:
      v17 = *((_QWORD *)a1 + 1);
      switch ( *(_DWORD *)v17 )
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
          v45 = a2;
          v44 = &off_4DD8E0;
          v46 = a3;
          v47 = a4 & 0xFFFFFE7F;
          if ( !(unsigned __int8)sub_121DB0(v17, (__int64)&v44, 273) )
            return 0;
          goto LABEL_55;
        case 8:
        case 9:
          if ( *(_DWORD *)(v17 + 36) > a3 )
          {
            *(_DWORD *)v17 = 10;
            *(_DWORD *)(*((_QWORD *)a1 + 1) + 68LL) = a3;
            sub_15BC70(*((_QWORD *)a1 + 1), a2, 0, 0, 0, 0, 0);
            v17 = *((_QWORD *)a1 + 1);
            goto LABEL_56;
          }
          if ( *(_DWORD *)(v17 + 36) != a3 )
            goto LABEL_56;
LABEL_74:
          if ( a1 )
          {
            v45 = 0;
            sub_123A40((__int64)&v44, (unsigned __int8 *)(v17 + 32), v11, v8);
            v35 = *(_WORD *)a1;
            v36 = *((_WORD *)a1 + 1);
            v37 = *((_DWORD *)a1 + 1);
            *(_QWORD *)a1 = v44;
            v38 = *((_QWORD *)a1 + 1);
            LOWORD(v44) = v35;
            *((_QWORD *)a1 + 1) = v45;
            WORD1(v44) = v36;
            HIDWORD(v44) = v37;
            v45 = v38;
            sub_11CDA0((__int64)&v44);
          }
          return 1;
        case 0xA:
          if ( *(_DWORD *)(v17 + 36) == a3 )
            goto LABEL_74;
          if ( *(_DWORD *)(v17 + 36) < a3 )
            return 0;
          goto LABEL_56;
        case 0x16:
          v45 = a2;
          v44 = &off_4DD8E0;
          v46 = a3;
          v47 = a4 & 0xFFFFFE7F;
          if ( !(unsigned __int8)sub_121DB0(v17, (__int64)&v44, 257) )
            return 0;
LABEL_55:
          v17 = *((_QWORD *)a1 + 1);
LABEL_56:
          *(_DWORD *)(v17 + 68) = a3;
          break;
        default:
          return 0;
      }
      goto LABEL_6;
    case 5u:
      v18 = *((__int64 **)a1 + 1);
      v19 = *v18;
      v20 = v18[1];
      v21 = a3 - 1;
      v22 = *(_QWORD *)(v19 + 144);
      v23 = v20 + 1;
      if ( v22 >= v20 + 1 && a3 != 1 && v21 + v20 >= v22 )
        return 0;
      if ( *(_DWORD *)(v19 + 116) )
      {
        v33 = *(_QWORD *)(v19 + 136);
        if ( v33 >= v23 && a3 != 1 && v21 + v20 >= v33 )
          return 0;
      }
      if ( (unsigned __int8)sub_1EF9B0(v19, v20, 1) || (__int64)v23 > *(_QWORD *)(v19 + 144) - *(int *)(v19 + 120) )
      {
        v24 = *((_QWORD **)a1 + 1);
        if ( (*(_BYTE *)(*v24 + 2LL) & 4) == 0 && !(unsigned int)sub_232200(*v24, v24[1], (unsigned int)a3, 0, v10 != 0) )
          return 0;
      }
      goto LABEL_6;
    case 6u:
      if ( !(unsigned __int8)is_mapped() )
        goto LABEL_6;
      v34 = *((_QWORD *)a1 + 1);
      if ( get_item_end() - v34 >= (unsigned __int64)a3 )
        goto LABEL_6;
      v42 = *(_QWORD *)(a2 + 96);
      if ( (get_flags_ex() & 0x600) == 0x200 )
        prev_not_tail();
      if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0
        || next_that() < (unsigned __int64)(a3 + *((_QWORD *)a1 + 1)) )
      {
        return 0;
      }
      if ( *((_DWORD *)a1 + 1) >= a3 )
      {
        if ( !v10 )
          goto LABEL_9;
LABEL_68:
        del_items();
        get_flags_by_size();
        if ( !(unsigned __int8)can_define_item() )
          return 0;
        if ( !(unsigned __int8)create_data() )
        {
          if ( !under_debugger )
            sub_383060(50290);
          goto LABEL_98;
        }
LABEL_6:
        v9 = *((_DWORD *)a1 + 1);
LABEL_7:
        if ( a3 > v9 )
          *((_WORD *)a1 + 1) = 0;
LABEL_9:
        if ( !*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL) || !sub_11BB90(a1) || (v13 = *((_DWORD *)a1 + 1), v13 <= a3) )
        {
          *((_DWORD *)a1 + 1) = a3;
          return 1;
        }
        if ( a3 )
          return sub_126F10((unsigned __int64)a1, a2, v13 - a3, v12);
        return 0;
      }
      v39 = v42;
      v43 = sub_343460(v42, *((_QWORD *)a1 + 1));
      if ( ((unsigned int)sub_343460(v39, *((_QWORD *)a1 + 1) + *((int *)a1 + 1)) != 0) != (v43 != 0) )
        return 0;
      v40 = (unsigned __int8)segtype() == 1;
      v41 = (unsigned __int8)segtype() == 1;
      if ( !v40 && !v41 )
        goto LABEL_88;
      if ( v40 != v41 )
        return 0;
      if ( next_head() == -1 || (unsigned __int8)segtype() != 1 )
      {
LABEL_88:
        if ( !v10 )
          goto LABEL_6;
        goto LABEL_68;
      }
      return 0;
    case 7u:
      return 1;
    case 9u:
      if ( a3 < v9 )
        goto LABEL_9;
      if ( !under_debugger )
        sub_383060(50291);
      goto LABEL_98;
    case 0xEu:
      if ( v10 == 2 )
        goto LABEL_7;
      v25 = (unsigned int)(2 * a3);
      if ( (int)v25 > v9 )
        return 0;
      sub_123A40((__int64)&v44, *((unsigned __int8 **)a1 + 1), v25, v8);
      v26 = HIDWORD(v44);
      if ( SHIDWORD(v44) <= a3 )
        goto LABEL_50;
      if ( !(unsigned __int8)sub_12AB50(&v44, a2, (unsigned int)a3, v10) )
      {
        sub_11CDA0((__int64)&v44);
        return 0;
      }
      v26 = HIDWORD(v44);
LABEL_50:
      v27 = (__int16)v44;
      LOWORD(v44) = *(_WORD *)a1;
      v28 = *((_WORD *)a1 + 1);
      *(_WORD *)a1 = v27;
      v29 = WORD1(v44);
      WORD1(v44) = v28;
      v30 = *((_DWORD *)a1 + 1);
      *((_WORD *)a1 + 1) = v29;
      HIDWORD(v44) = v30;
      v31 = v45;
      *((_DWORD *)a1 + 1) = v26;
      v32 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v31;
      v45 = v32;
      sub_11CDA0((__int64)&v44);
      v9 = *((_DWORD *)a1 + 1);
      goto LABEL_7;
    case 0xFu:
      if ( v10 == 2 )
        goto LABEL_7;
      if ( a3 > v9 )
        return 0;
      return sub_1272B0((unsigned __int64)a1, a2, a3, 0);
    default:
      return 0;
  }
}
