_QWORD *__fastcall sub_24A270(__int64 a1, unsigned int *a2, _QWORD *a3, unsigned __int8 a4, __int64 a5)
{
  unsigned int v5; // eax
  __int64 v7; // rcx
  _QWORD *v9; // r13
  __int64 *v11; // rsi
  __int64 *v12; // rsi
  _QWORD *v13; // r12
  char v14; // al
  __int64 *v15; // rcx
  int v16; // r15d
  __int64 *v17; // r13
  char v18; // al
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  int v22; // r15d
  __int64 v23; // r13
  char v24; // al
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 *v31; // rsi
  char tinfo_property; // al
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // edx
  const char *v36; // rcx
  int v37; // edx
  __int64 v39; // [rsp+8h] [rbp-70h]
  __int64 v40; // [rsp+18h] [rbp-60h] BYREF
  __int64 v41; // [rsp+20h] [rbp-58h] BYREF
  __int64 v42; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v43[9]; // [rsp+30h] [rbp-48h] BYREF

  v43[1] = __readfsqword(0x28u);
  v5 = a2[1];
  if ( (v5 & 0x80u) != 0 )
  {
    if ( !under_debugger )
      sub_37DDE0(51974);
    goto LABEL_120;
  }
  v7 = *a2;
  v40 = 0;
  if ( (v5 & 0x10) == 0 )
  {
LABEL_9:
    v41 = 0;
    if ( (unsigned int)v7 > 0x34 )
      goto LABEL_14;
    if ( (unsigned int)v7 > 4 )
    {
      if ( ((1LL << v7) & 0x1E03C00BA8000LL) != 0 )
      {
        sub_327180(v43, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[9], 2);
        copy_tinfo_t(&v40, v43);
        clear_tinfo_t(v43);
        copy_tinfo_t(&v41, &v40);
      }
      else if ( ((1LL << v7) & 0x1E03C021050020LL) != 0 )
      {
        sub_327180(v43, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[9], 1);
        copy_tinfo_t(&v40, v43);
        clear_tinfo_t(v43);
        copy_tinfo_t(&v41, &v40);
      }
      else
      {
        if ( (_DWORD)v7 != 22 )
          goto LABEL_14;
        sub_327180(v43, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[9], 0);
        copy_tinfo_t(&v40, v43);
        clear_tinfo_t(v43);
        copy_tinfo_t(&v41, &v40);
      }
      goto LABEL_39;
    }
    if ( (_DWORD)v7 == 2 )
    {
      if ( !(_BYTE)v40 && (*((_BYTE *)a2 + 65) & 2) == 0 )
      {
        if ( (get_tinfo_property(*a3, 2) & 0xF) == 9 || (get_tinfo_property(*a3, 2) & 0x2F) == 0xD )
        {
          v43[0] = 0;
          copy_tinfo_t(v43, a3);
        }
        else
        {
          sub_327180(v43, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[17], 0);
        }
        copy_tinfo_t(&v40, v43);
        clear_tinfo_t(v43);
        v7 = *a2;
LABEL_14:
        switch ( v7 )
        {
          case 1LL:
            goto LABEL_30;
          case 2LL:
            goto LABEL_41;
          case 3LL:
          case 4LL:
            goto LABEL_18;
          case 5LL:
            v37 = 47;
            goto LABEL_102;
          case 6LL:
            v37 = 49;
            goto LABEL_102;
          case 7LL:
            v37 = 50;
LABEL_102:
            v27 = (__int64)sub_246620(a1, (__int64)a2, v37, &v41, a3, a4);
            goto LABEL_46;
          case 8LL:
          case 9LL:
          case 10LL:
            v27 = (__int64)sub_2482A0(a1, (__int64)a2, a3, a4);
            goto LABEL_46;
          case 11LL:
            v27 = (__int64)sub_2480D0(a1, (__int64)a2, a3, a4);
            goto LABEL_46;
          case 12LL:
            v34 = 35;
            goto LABEL_66;
          case 13LL:
            v34 = 36;
            goto LABEL_66;
          case 14LL:
            v34 = 37;
            goto LABEL_66;
          case 15LL:
            v34 = 39;
            goto LABEL_66;
          case 16LL:
            v34 = 38;
            goto LABEL_66;
          case 17LL:
            v34 = 41;
            goto LABEL_66;
          case 18LL:
            v34 = 40;
            goto LABEL_66;
          case 19LL:
            v34 = 19;
            goto LABEL_66;
          case 20LL:
            v34 = 21;
            goto LABEL_66;
          case 21LL:
            v34 = 20;
            goto LABEL_66;
          case 22LL:
            v34 = 34;
            goto LABEL_66;
          case 23LL:
            v34 = 33;
            goto LABEL_66;
          case 24LL:
            v34 = 32;
LABEL_66:
            v27 = (__int64)sub_2467A0(a1, (__int64)a2, v34, &v41, a3, a4);
            goto LABEL_46;
          case 25LL:
            v36 = "CFADD";
            goto LABEL_77;
          case 26LL:
            v36 = "OFADD";
            goto LABEL_77;
          case 27LL:
            v36 = "CFSHL";
            goto LABEL_77;
          case 28LL:
            v36 = "CFSHR";
            goto LABEL_77;
          case 29LL:
          case 40LL:
            v30 = 30;
            goto LABEL_57;
          case 30LL:
            v36 = "OFSUB";
            goto LABEL_77;
          case 31LL:
            v36 = "SETP";
LABEL_77:
            v27 = (__int64)sub_247090(a1, (__int64)a2, a3, v36, a4);
            goto LABEL_46;
          case 32LL:
            v30 = 23;
            goto LABEL_57;
          case 33LL:
            v30 = 22;
            goto LABEL_57;
          case 34LL:
            v30 = 25;
            goto LABEL_57;
          case 35LL:
            v30 = 31;
            goto LABEL_57;
          case 36LL:
            v30 = 29;
            goto LABEL_57;
          case 37LL:
            v30 = 27;
            goto LABEL_57;
          case 38LL:
            v30 = 28;
            goto LABEL_57;
          case 39LL:
            v30 = 24;
            goto LABEL_57;
          case 41LL:
            v30 = 26;
LABEL_57:
            v27 = sub_2473F0(a1, a2, v30, &v41, a4);
            goto LABEL_46;
          case 42LL:
          case 53LL:
            sub_326FC0(v43, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[9]);
            v31 = *((__int64 **)a2 + 3);
            v42 = 0;
            v9 = (_QWORD *)sub_244EF0(a1, v31, (__int64)(a2 + 8), &v42, v43, 0);
            clear_tinfo_t(&v42);
            clear_tinfo_t(v43);
            *v9 = *((_QWORD *)a2 + 3);
            if ( *a2 == 53 )
            {
              tinfo_property = get_tinfo_property(v9[6], 2);
              if ( (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0 )
              {
                v33 = sub_23D3B0(*((_QWORD **)a2 + 7), *(_QWORD *)(a1 + 328), a2[9]);
                sub_327180(v43, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[9], v33);
                sub_241F40((__int64)v9, *(_QWORD *)(a1 + 328), v43);
                clear_tinfo_t(v43);
              }
            }
            goto LABEL_26;
          case 43LL:
            v35 = 23;
            goto LABEL_75;
          case 44LL:
            v35 = 22;
            goto LABEL_75;
          case 45LL:
            v35 = 25;
            goto LABEL_75;
          case 46LL:
            v35 = 31;
            goto LABEL_75;
          case 47LL:
            v35 = 29;
            goto LABEL_75;
          case 48LL:
            v35 = 27;
            goto LABEL_75;
          case 49LL:
            v35 = 28;
            goto LABEL_75;
          case 50LL:
            v35 = 24;
            goto LABEL_75;
          case 51LL:
            v35 = 30;
            goto LABEL_75;
          case 52LL:
            v35 = 26;
LABEL_75:
            v27 = (__int64)sub_2475C0(a1, (__int64)a2, v35, &v41);
            goto LABEL_46;
          case 54LL:
          case 62LL:
            goto LABEL_45;
          case 55LL:
            v9 = nullptr;
            if ( *((_BYTE *)a2 + 32) != 6 )
              goto LABEL_26;
            v27 = (__int64)sub_241480(*(_QWORD *)(a1 + 176), *((_QWORD *)a2 + 3), *((_QWORD *)a2 + 5));
            break;
          case 56LL:
          case 57LL:
            v27 = (__int64)sub_248CE0(a1, (__int64)a2, a3, a4, a5);
            goto LABEL_46;
          default:
            goto LABEL_63;
        }
        goto LABEL_46;
      }
LABEL_41:
      v22 = a2[17];
      v23 = sub_2484D0(a1, (__int64)(a2 + 8), (__int64)(a2 + 12), &v40);
      v24 = get_tinfo_property(v40, 2);
      v9 = (_QWORD *)sub_23F720(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v23, v22, (v24 & 0xF) == 9, v25, v26);
      *v9 = *((_QWORD *)a2 + 3);
      goto LABEL_19;
    }
    if ( (unsigned int)v7 > 2 )
    {
      if ( (_BYTE)v40 )
      {
LABEL_18:
        v11 = *((__int64 **)a2 + 3);
        v43[0] = 0;
        v9 = (_QWORD *)sub_244EF0(a1, v11, (__int64)(a2 + 8), v43, &v40, 0);
        clear_tinfo_t(v43);
LABEL_19:
        if ( a4 )
        {
          if ( *((_BYTE *)a2 + 64) )
          {
            if ( !(_BYTE)v40 && (*((_BYTE *)a2 + 65) & 2) == 0 )
            {
              sub_327180(v43, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[17], 0);
              copy_tinfo_t(&v40, v43);
              clear_tinfo_t(v43);
            }
            v9 = sub_245E50(a1, *((__int64 **)a2 + 3), (__int64)(a2 + 16), &v40, (__int64)v9);
          }
          else
          {
            sub_23F5C0((__int64)v9, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), 0);
            *v9 = *((_QWORD *)a2 + 3);
          }
          sub_241F40((__int64)v9, *(_QWORD *)(a1 + 328), a3);
        }
        goto LABEL_26;
      }
      v28 = (__int64)(a2 + 16);
LABEL_54:
      v29 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL);
      if ( !(unsigned __int8)sub_23DB70(v29, *((_QWORD *)a2 + 3), (__int64)(a2 + 8), &v40, v28) )
      {
        sub_327180(v43, *(_QWORD *)(v29 + 1504), a2[9], 0);
        copy_tinfo_t(&v40, v43);
        clear_tinfo_t(v43);
      }
LABEL_39:
      v7 = *a2;
      goto LABEL_14;
    }
    if ( (_DWORD)v7 == 1 )
    {
      if ( !(_BYTE)v40 )
      {
        v28 = 0;
        goto LABEL_54;
      }
LABEL_30:
      if ( a4 )
      {
        v12 = *((__int64 **)a2 + 3);
        v43[0] = 0;
        v13 = (_QWORD *)sub_244EF0(a1, v12, (__int64)(a2 + 8), v43, &v40, 0);
        clear_tinfo_t(v43);
        v14 = get_tinfo_property(v13[6], 2);
        v15 = v13 + 6;
        v16 = a2[9];
        if ( (v14 & 0xF) != 9 )
          v15 = &v40;
        v17 = v15;
        v39 = sub_2484D0(a1, (__int64)(a2 + 12), (__int64)(a2 + 16), v15);
        v18 = get_tinfo_property(*v17, 2);
        v21 = sub_23F720(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v39, v16, (v18 & 0xF) == 9, v19, v20);
        if ( (*((_BYTE *)a2 + 33) & 2) != 0 )
          *(_DWORD *)(v21 + 56) |= 2u;
        if ( *v13 == -1 )
          *v13 = *((_QWORD *)a2 + 3);
        v9 = (_QWORD *)sub_244520(*(_QWORD *)(a1 + 328), v21, (__int64)v13);
        *v9 = *((_QWORD *)a2 + 3);
        sub_241F40((__int64)v9, *(_QWORD *)(a1 + 328), a3);
LABEL_26:
        clear_tinfo_t(&v41);
        goto LABEL_7;
      }
      if ( !under_debugger )
        sub_37DDE0(50408);
    }
    else
    {
LABEL_63:
      if ( !under_debugger )
        sub_37DDE0(50409);
    }
LABEL_120:
    BUG();
  }
  switch ( (_DWORD)v7 )
  {
    case 2:
      sub_326EA0(v43, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[17]);
      copy_tinfo_t(&v40, v43);
      clear_tinfo_t(v43);
      v7 = *a2;
      goto LABEL_9;
    case 0x3E:
      v41 = 0;
LABEL_45:
      v27 = sub_2397A0(*((_QWORD *)a2 + 3));
LABEL_46:
      v9 = (_QWORD *)v27;
      clear_tinfo_t(&v41);
      goto LABEL_7;
    case 1:
      sub_326EA0(v43, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[9]);
      copy_tinfo_t(&v40, v43);
      clear_tinfo_t(v43);
      v7 = *a2;
      goto LABEL_9;
  }
  v9 = sub_249BE0(a1, (__int64)a2, a3, a4);
LABEL_7:
  clear_tinfo_t(&v40);
  return v9;
}
