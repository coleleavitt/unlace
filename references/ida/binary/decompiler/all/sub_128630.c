__int64 __fastcall sub_128630(unsigned __int64 a1, __int64 a2, int a3, int a4)
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
  __int16 v31; // si
  __int16 v32; // cx
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // r12
  char v36; // r12
  char v37; // al
  __int64 v38; // [rsp+8h] [rbp-60h]
  int v39; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall **v40)(); // [rsp+10h] [rbp-58h] BYREF
  __int64 v41; // [rsp+18h] [rbp-50h]
  int v42; // [rsp+20h] [rbp-48h]
  unsigned int v43; // [rsp+24h] [rbp-44h]
  unsigned __int64 v44; // [rsp+28h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( (a4 & 0x100) == 0
    && ((*(_BYTE *)(a1 + 1) & 4) != 0 || *(_BYTE *)a1 == 4 && sub_120100(*(unsigned int **)(a1 + 8)))
    && !sub_11A690(a3) )
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
        sub_37EA20(51257);
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
          *(_QWORD *)(v13 + 16) = sub_327770(*(_QWORD *)(v13 + 16), (unsigned int)a3, 0);
          v8 = *(_DWORD *)(a1 + 4);
        }
        goto LABEL_7;
      }
      if ( !under_debugger )
        sub_37EA20(52630);
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
          v41 = a2;
          v40 = off_4DD018;
          v42 = a3;
          v43 = a4 & 0xFFFFFE7F;
          if ( !(unsigned __int8)sub_11F8A0(v14, (__int64)&v40, 273) )
            return 0;
          goto LABEL_55;
        case 8:
        case 9:
          if ( *(_DWORD *)(v14 + 36) > a3 )
          {
            *(_DWORD *)v14 = 10;
            *(_DWORD *)(*(_QWORD *)(a1 + 8) + 68LL) = a3;
            sub_1595B0(*(_QWORD *)(a1 + 8), a2, 0, 0, 0, 0, 0);
            v14 = *(_QWORD *)(a1 + 8);
            goto LABEL_56;
          }
          if ( *(_DWORD *)(v14 + 36) != a3 )
            goto LABEL_56;
LABEL_74:
          if ( a1 )
          {
            v41 = 0;
            sub_121540((__int64)&v40, (unsigned __int8 *)(v14 + 32));
            v31 = *(_WORD *)a1;
            v32 = *(_WORD *)(a1 + 2);
            v33 = *(_DWORD *)(a1 + 4);
            *(_QWORD *)a1 = v40;
            v34 = *(_QWORD *)(a1 + 8);
            LOWORD(v40) = v31;
            *(_QWORD *)(a1 + 8) = v41;
            WORD1(v40) = v32;
            HIDWORD(v40) = v33;
            v41 = v34;
            sub_11A960((__int64)&v40);
          }
          return 1;
        case 0xA:
          if ( *(_DWORD *)(v14 + 36) == a3 )
            goto LABEL_74;
          if ( *(_DWORD *)(v14 + 36) < a3 )
            return 0;
          goto LABEL_56;
        case 0x16:
          v41 = a2;
          v40 = off_4DD018;
          v42 = a3;
          v43 = a4 & 0xFFFFFE7F;
          if ( !(unsigned __int8)sub_11F8A0(v14, (__int64)&v40, 257) )
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
      if ( (unsigned __int8)sub_1ECDD0(v16, v17, 1) || (__int64)v20 > *(_QWORD *)(v16 + 144) - *(int *)(v16 + 120) )
      {
        v21 = *(_QWORD **)(a1 + 8);
        if ( (*(_BYTE *)(*v21 + 2LL) & 4) == 0 && !(unsigned int)sub_22F900(*v21, v21[1], (unsigned int)a3, 0, v9 != 0) )
          return 0;
      }
      goto LABEL_6;
    case 6:
      if ( !(unsigned __int8)is_mapped() )
        goto LABEL_6;
      v30 = *(_QWORD *)(a1 + 8);
      if ( get_item_end() - v30 >= (unsigned __int64)a3 )
        goto LABEL_6;
      v38 = *(_QWORD *)(a2 + 96);
      if ( (get_flags_ex() & 0x600) == 0x200 )
        prev_not_tail();
      if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0
        || next_that() < (unsigned __int64)(a3 + *(_QWORD *)(a1 + 8)) )
      {
        return 0;
      }
      if ( *(_DWORD *)(a1 + 4) >= a3 )
      {
        if ( !v9 )
          goto LABEL_9;
LABEL_68:
        del_items();
        get_flags_by_size();
        if ( !(unsigned __int8)can_define_item() )
          return 0;
        if ( !(unsigned __int8)create_data() )
        {
          if ( !under_debugger )
            sub_37EA20(50290);
          goto LABEL_98;
        }
LABEL_6:
        v8 = *(_DWORD *)(a1 + 4);
LABEL_7:
        if ( a3 > v8 )
          *(_WORD *)(a1 + 2) = 0;
LABEL_9:
        if ( !*(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL)
          || !sub_119750((unsigned __int8 *)a1)
          || (v10 = *(_DWORD *)(a1 + 4), v10 <= a3) )
        {
          *(_DWORD *)(a1 + 4) = a3;
          return 1;
        }
        if ( a3 )
          return sub_124A00(a1, a2, v10 - a3);
        return 0;
      }
      v35 = v38;
      v39 = sub_33FF70(v38, *(_QWORD *)(a1 + 8));
      if ( ((unsigned int)sub_33FF70(v35, *(_QWORD *)(a1 + 8) + *(int *)(a1 + 4)) != 0) != (v39 != 0) )
        return 0;
      v36 = (unsigned __int8)segtype() == 1;
      v37 = (unsigned __int8)segtype() == 1;
      if ( !v36 && !v37 )
        goto LABEL_88;
      if ( v36 != v37 )
        return 0;
      if ( next_head() == -1 || (unsigned __int8)segtype() != 1 )
      {
LABEL_88:
        if ( !v9 )
          goto LABEL_6;
        goto LABEL_68;
      }
      return 0;
    case 7:
      return 1;
    case 9:
      if ( a3 < v8 )
        goto LABEL_9;
      if ( !under_debugger )
        sub_37EA20(50291);
      goto LABEL_98;
    case 0xE:
      if ( v9 == 2 )
        goto LABEL_7;
      if ( 2 * a3 > v8 )
        return 0;
      sub_121540((__int64)&v40, *(unsigned __int8 **)(a1 + 8));
      v22 = HIDWORD(v40);
      if ( SHIDWORD(v40) <= a3 )
        goto LABEL_50;
      if ( !(unsigned __int8)sub_128630(&v40, a2, (unsigned int)a3, v9) )
      {
        sub_11A960((__int64)&v40);
        return 0;
      }
      v22 = HIDWORD(v40);
LABEL_50:
      v23 = (__int16)v40;
      LOWORD(v40) = *(_WORD *)a1;
      v24 = *(_WORD *)(a1 + 2);
      *(_WORD *)a1 = v23;
      v25 = WORD1(v40);
      WORD1(v40) = v24;
      v26 = *(_DWORD *)(a1 + 4);
      *(_WORD *)(a1 + 2) = v25;
      HIDWORD(v40) = v26;
      v27 = v41;
      *(_DWORD *)(a1 + 4) = v22;
      v28 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = v27;
      v41 = v28;
      sub_11A960((__int64)&v40);
      v8 = *(_DWORD *)(a1 + 4);
      goto LABEL_7;
    case 0xF:
      if ( v9 == 2 )
        goto LABEL_7;
      if ( a3 > v8 )
        return 0;
      return sub_124DA0(a1, a2, a3);
    default:
      return 0;
  }
}
