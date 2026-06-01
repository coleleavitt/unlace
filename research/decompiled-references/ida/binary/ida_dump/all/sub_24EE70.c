_QWORD *__fastcall sub_24EE70(__int64 a1, unsigned int *a2, _QWORD *a3, unsigned __int8 a4)
{
  unsigned int v4; // eax
  __int64 v6; // rcx
  _QWORD *v8; // r13
  _QWORD *result; // rax
  __int64 *v10; // rsi
  __int64 *v11; // rsi
  _QWORD *v12; // r12
  char v13; // al
  __int64 *v14; // rcx
  int v15; // r15d
  char v16; // al
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  int v20; // r15d
  __int64 v21; // r13
  char tinfo_property; // al
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 *v28; // rsi
  char v29; // al
  unsigned int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // edx
  const char *v33; // rcx
  int v34; // edx
  __int64 v35; // r8
  __int64 v37; // [rsp+8h] [rbp-70h]
  __int64 v38; // [rsp+18h] [rbp-60h] BYREF
  __int64 v39; // [rsp+20h] [rbp-58h] BYREF
  __int64 v40; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v41[9]; // [rsp+30h] [rbp-48h] BYREF

  v41[1] = __readfsqword(0x28u);
  v4 = a2[1];
  if ( (v4 & 0x80u) != 0 )
  {
    if ( !under_debugger )
      sub_383060(51974);
    goto LABEL_118;
  }
  v6 = *a2;
  v38 = 0;
  if ( (v4 & 0x10) == 0 )
  {
LABEL_9:
    v39 = 0;
    if ( (unsigned int)v6 > 0x34 )
      goto LABEL_14;
    if ( (unsigned int)v6 <= 4 )
    {
      if ( (_DWORD)v6 == 2 )
      {
        if ( (*((_BYTE *)a2 + 65) & 2) != 0 )
        {
LABEL_41:
          v20 = a2[17];
          v21 = sub_24D0D0(a1, (__int64)(a2 + 8), (__int64)(a2 + 12), &v38);
          tinfo_property = get_tinfo_property();
          v8 = (_QWORD *)sub_244320(
                           *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL),
                           v21,
                           v20,
                           (tinfo_property & 0xF) == 9,
                           v23,
                           v24);
          *v8 = *((_QWORD *)a2 + 3);
LABEL_19:
          if ( a4 )
          {
            if ( *((_BYTE *)a2 + 64) )
            {
              if ( !(_BYTE)v38 && (*((_BYTE *)a2 + 65) & 2) == 0 )
              {
                sub_32C430(v41, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[17], 0);
                copy_tinfo_t();
                clear_tinfo_t();
              }
              v8 = sub_24AA50(a1, *((__int64 **)a2 + 3), (__int64)(a2 + 16), &v38, (__int64)v8);
            }
            else
            {
              sub_2441C0((__int64)v8, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), 0);
              *v8 = *((_QWORD *)a2 + 3);
            }
            sub_246B40((__int64)v8, *(_QWORD *)(a1 + 328), a3);
          }
          goto LABEL_26;
        }
        if ( (get_tinfo_property() & 0xF) == 9 || (get_tinfo_property() & 0x2F) == 0xD )
        {
          v41[0] = 0;
          copy_tinfo_t();
        }
        else
        {
          sub_32C430(v41, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[17], 0);
        }
        copy_tinfo_t();
        clear_tinfo_t();
        v6 = *a2;
        goto LABEL_14;
      }
      if ( (unsigned int)v6 <= 2 )
      {
        if ( (_DWORD)v6 != 1 )
        {
LABEL_62:
          if ( !under_debugger )
            sub_383060(50409);
          goto LABEL_118;
        }
        v35 = 0;
      }
      else
      {
        v35 = (__int64)(a2 + 16);
      }
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8LL);
      if ( !(unsigned __int8)sub_242770(v26, *((_QWORD *)a2 + 3), (__int64)(a2 + 8), &v38, v35) )
      {
        sub_32C430(v41, *(_QWORD *)(v26 + 1504), a2[9], 0);
        copy_tinfo_t();
        clear_tinfo_t();
      }
    }
    else if ( ((1LL << v6) & 0x1E03C00BA8000LL) != 0 )
    {
      sub_32C430(v41, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[9], 2);
      copy_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
    }
    else if ( ((1LL << v6) & 0x1E03C021050020LL) != 0 )
    {
      sub_32C430(v41, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[9], 1);
      copy_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
    }
    else
    {
      if ( (_DWORD)v6 != 22 )
        goto LABEL_14;
      sub_32C430(v41, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[9], 0);
      copy_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
    }
    v6 = *a2;
LABEL_14:
    switch ( v6 )
    {
      case 1LL:
        if ( a4 )
        {
          v11 = *((__int64 **)a2 + 3);
          v41[0] = 0;
          v12 = (_QWORD *)sub_249AF0(a1, v11, (__int64)(a2 + 8), v41, &v38, 0);
          clear_tinfo_t();
          v13 = get_tinfo_property();
          v14 = v12 + 6;
          v15 = a2[9];
          if ( (v13 & 0xF) != 9 )
            v14 = &v38;
          v37 = sub_24D0D0(a1, (__int64)(a2 + 12), (__int64)(a2 + 16), v14);
          v16 = get_tinfo_property();
          v19 = sub_244320(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v37, v15, (v16 & 0xF) == 9, v17, v18);
          if ( (*((_BYTE *)a2 + 33) & 2) != 0 )
            *(_DWORD *)(v19 + 56) |= 2u;
          if ( *v12 == -1 )
            *v12 = *((_QWORD *)a2 + 3);
          v8 = (_QWORD *)sub_249120(*(_QWORD *)(a1 + 328), v19, (__int64)v12);
          *v8 = *((_QWORD *)a2 + 3);
          sub_246B40((__int64)v8, *(_QWORD *)(a1 + 328), a3);
LABEL_26:
          clear_tinfo_t();
          goto LABEL_7;
        }
        if ( !under_debugger )
          sub_383060(50408);
        return result;
      case 2LL:
        goto LABEL_41;
      case 3LL:
      case 4LL:
        v10 = *((__int64 **)a2 + 3);
        v41[0] = 0;
        v8 = (_QWORD *)sub_249AF0(a1, v10, (__int64)(a2 + 8), v41, &v38, 0);
        clear_tinfo_t();
        goto LABEL_19;
      case 5LL:
        v34 = 47;
        goto LABEL_101;
      case 6LL:
        v34 = 49;
        goto LABEL_101;
      case 7LL:
        v34 = 50;
LABEL_101:
        v25 = (__int64)sub_24B220(a1, (__int64)a2, v34, &v39, a3, a4);
        goto LABEL_46;
      case 8LL:
      case 9LL:
      case 10LL:
        v25 = (__int64)sub_24CEA0(a1, (__int64)a2, a3, a4);
        goto LABEL_46;
      case 11LL:
        v25 = (__int64)sub_24CCD0(a1, (__int64)a2, a3, a4);
        goto LABEL_46;
      case 12LL:
        v31 = 35;
        goto LABEL_65;
      case 13LL:
        v31 = 36;
        goto LABEL_65;
      case 14LL:
        v31 = 37;
        goto LABEL_65;
      case 15LL:
        v31 = 39;
        goto LABEL_65;
      case 16LL:
        v31 = 38;
        goto LABEL_65;
      case 17LL:
        v31 = 41;
        goto LABEL_65;
      case 18LL:
        v31 = 40;
        goto LABEL_65;
      case 19LL:
        v31 = 19;
        goto LABEL_65;
      case 20LL:
        v31 = 21;
        goto LABEL_65;
      case 21LL:
        v31 = 20;
        goto LABEL_65;
      case 22LL:
        v31 = 34;
        goto LABEL_65;
      case 23LL:
        v31 = 33;
        goto LABEL_65;
      case 24LL:
        v31 = 32;
LABEL_65:
        v25 = (__int64)sub_24B3A0(a1, (__int64)a2, v31, &v39, a3, a4);
        goto LABEL_46;
      case 25LL:
        v33 = "CFADD";
        goto LABEL_76;
      case 26LL:
        v33 = "OFADD";
        goto LABEL_76;
      case 27LL:
        v33 = "CFSHL";
        goto LABEL_76;
      case 28LL:
        v33 = "CFSHR";
        goto LABEL_76;
      case 29LL:
      case 40LL:
        v27 = 30;
        goto LABEL_56;
      case 30LL:
        v33 = "OFSUB";
        goto LABEL_76;
      case 31LL:
        v33 = "SETP";
LABEL_76:
        v25 = (__int64)sub_24BC90(a1, (__int64)a2, a3, v33, a4);
        goto LABEL_46;
      case 32LL:
        v27 = 23;
        goto LABEL_56;
      case 33LL:
        v27 = 22;
        goto LABEL_56;
      case 34LL:
        v27 = 25;
        goto LABEL_56;
      case 35LL:
        v27 = 31;
        goto LABEL_56;
      case 36LL:
        v27 = 29;
        goto LABEL_56;
      case 37LL:
        v27 = 27;
        goto LABEL_56;
      case 38LL:
        v27 = 28;
        goto LABEL_56;
      case 39LL:
        v27 = 24;
        goto LABEL_56;
      case 41LL:
        v27 = 26;
LABEL_56:
        v25 = sub_24BFF0(a1, a2, v27, &v39, a4);
        goto LABEL_46;
      case 42LL:
      case 53LL:
        sub_32C270(v41, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[9]);
        v28 = *((__int64 **)a2 + 3);
        v40 = 0;
        v8 = (_QWORD *)sub_249AF0(a1, v28, (__int64)(a2 + 8), &v40, v41, 0);
        clear_tinfo_t();
        clear_tinfo_t();
        *v8 = *((_QWORD *)a2 + 3);
        if ( *a2 == 53 )
        {
          v29 = get_tinfo_property();
          if ( (v29 & 0xE) == 0 && (v29 & 0x30) != 0 )
          {
            v30 = sub_241FB0(*((_QWORD **)a2 + 7), *(_QWORD *)(a1 + 328), a2[9]);
            sub_32C430(v41, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[9], v30);
            sub_246B40((__int64)v8, *(_QWORD *)(a1 + 328), v41);
            clear_tinfo_t();
          }
        }
        goto LABEL_26;
      case 43LL:
        v32 = 23;
        goto LABEL_74;
      case 44LL:
        v32 = 22;
        goto LABEL_74;
      case 45LL:
        v32 = 25;
        goto LABEL_74;
      case 46LL:
        v32 = 31;
        goto LABEL_74;
      case 47LL:
        v32 = 29;
        goto LABEL_74;
      case 48LL:
        v32 = 27;
        goto LABEL_74;
      case 49LL:
        v32 = 28;
        goto LABEL_74;
      case 50LL:
        v32 = 24;
        goto LABEL_74;
      case 51LL:
        v32 = 30;
        goto LABEL_74;
      case 52LL:
        v32 = 26;
LABEL_74:
        v25 = (__int64)sub_24C1C0(a1, (__int64)a2, v32, &v39);
        goto LABEL_46;
      case 54LL:
      case 62LL:
        goto LABEL_45;
      case 55LL:
        v8 = nullptr;
        if ( *((_BYTE *)a2 + 32) != 6 )
          goto LABEL_26;
        v25 = (__int64)sub_246080(*(_QWORD *)(a1 + 176), *((_QWORD *)a2 + 3));
        goto LABEL_46;
      case 56LL:
      case 57LL:
        v25 = (__int64)sub_24D8E0(a1, (__int64)a2, a3, a4);
        goto LABEL_46;
      default:
        goto LABEL_62;
    }
LABEL_118:
    BUG();
  }
  if ( (_DWORD)v6 == 2 )
  {
    sub_32C150(v41, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[17]);
    copy_tinfo_t();
    clear_tinfo_t();
    v6 = *a2;
    goto LABEL_9;
  }
  if ( (_DWORD)v6 != 62 )
  {
    if ( (_DWORD)v6 != 1 )
    {
      v8 = (_QWORD *)sub_24E7E0(a1, (__int64)a2, a3, a4);
      goto LABEL_7;
    }
    sub_32C150(v41, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), a2[9]);
    copy_tinfo_t();
    clear_tinfo_t();
    v6 = *a2;
    goto LABEL_9;
  }
  v39 = 0;
LABEL_45:
  v25 = sub_23E3A0(*((_QWORD *)a2 + 3));
LABEL_46:
  v8 = (_QWORD *)v25;
  clear_tinfo_t();
LABEL_7:
  clear_tinfo_t();
  return v8;
}
