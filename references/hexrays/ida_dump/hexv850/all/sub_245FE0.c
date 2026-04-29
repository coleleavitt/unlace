_QWORD *__fastcall sub_245FE0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *a5, char a6)
{
  unsigned __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // r14
  unsigned __int8 v21; // cl
  char v22; // r14
  __int64 v23; // rax
  char v26; // [rsp+2Dh] [rbp-5Bh]
  char v27; // [rsp+2Eh] [rbp-5Ah]
  unsigned __int8 v28; // [rsp+2Eh] [rbp-5Ah]
  unsigned __int8 v29; // [rsp+2Fh] [rbp-59h]
  unsigned __int8 v30; // [rsp+2Fh] [rbp-59h]
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v32[8]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v33[9]; // [rsp+40h] [rbp-48h] BYREF

  v26 = a6;
  v33[1] = __readfsqword(0x28u);
  if ( a3 )
  {
    v27 = 0;
    v8 = a3;
  }
  else
  {
    v27 = 1;
    v8 = 36;
  }
  sub_326800(v33, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36));
  v9 = sub_244730(a1, *(__int64 **)(a2 + 24), a2 + 32, a4, v33, 0);
  clear_tinfo_t(v33);
  if ( (unsigned int)v8 <= 0x28 )
  {
    v10 = 0x14100000000LL;
    if ( _bittest64(&v10, v8) )
    {
      if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(v9 + 48), *a4, 0) )
      {
        if ( (unsigned int)get_tinfo_property(*a4, 3) == 1 )
        {
          v19 = *(_QWORD *)(v9 + 48);
          if ( (v19 & 0xE) == 0 && (v19 & 0x30) != 0 )
            sub_23FAB0(v9, a4);
        }
      }
    }
  }
  v31 = 0;
  copy_tinfo_t(&v31, a4);
  sub_326800(v32, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52));
  if ( (unsigned int)v8 <= 0x45 && (*((_BYTE *)&off_4B3CC0 + 16 * (int)v8 + 11) & 8) != 0 )
  {
    sub_3269C0(v33, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52), 1);
    copy_tinfo_t(v32, v33);
    clear_tinfo_t(v33);
    copy_tinfo_t(&v31, v32);
  }
  else if ( v27 )
  {
    v14 = *(unsigned int *)(a2 + 52);
    if ( (int)v14 < *(unsigned __int8 *)(*(_QWORD *)(a1 + 328) + 130LL)
      && (*(_BYTE *)(a2 + 48) != 2 || sub_325150(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL), v14, 1) < 0) )
    {
      copy_tinfo_t(&v31, v9 + 48);
      if ( (v31 & 0xE) == 0 && (v31 & 0x30) != 0 )
      {
        sub_3269C0(v33, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52), 2);
        copy_tinfo_t(&v31, v33);
        clear_tinfo_t(v33);
      }
    }
  }
  v11 = sub_244730(a1, *(__int64 **)(a2 + 24), a2 + 48, &v31, v32, 0);
  v12 = v11;
  if ( (_DWORD)v8 == 38 )
  {
    if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(v11 + 48), *a4, 0) )
    {
      if ( (unsigned int)get_tinfo_property(*a4, 3) == 1 )
      {
        v18 = *(_QWORD *)(v12 + 48);
        if ( (v18 & 0xE) == 0 && (v18 & 0x30) != 0 )
          sub_23FAB0(v12, a4);
      }
    }
  }
  v29 = (get_tinfo_property(*(_QWORD *)(v9 + 48), 2) & 0xF) - 10;
  v13 = get_tinfo_property(*(_QWORD *)(v12 + 48), 2) & 0xF;
  if ( v29 <= 2u || (unsigned __int8)(v13 - 10) <= 2u )
  {
    switch ( (int)v8 )
    {
      case 19:
      case 20:
      case 21:
      case 32:
      case 33:
      case 34:
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
        if ( v29 <= 2u )
          goto LABEL_21;
        goto LABEL_32;
      case 35:
        if ( v29 <= 2u && (unsigned __int8)(v13 - 10) <= 2u )
        {
LABEL_21:
          v28 = v13 - 10;
          sub_326800(v33, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36));
          v9 = sub_23FAB0(v9, v33);
          clear_tinfo_t(v33);
          if ( v28 <= 2u )
          {
LABEL_32:
            sub_326800(v33, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52));
            v12 = sub_23FAB0(v12, v33);
            clear_tinfo_t(v33);
          }
        }
        break;
      case 36:
        if ( v29 > 2u )
        {
          sub_326800(v33, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52));
          v12 = sub_23FAB0(v12, v33);
          clear_tinfo_t(v33);
          if ( v27 )
            break;
          goto LABEL_42;
        }
        v30 = v13 - 10;
        if ( !v27 )
        {
          v33[0] = 0;
          v33[0] = get_tinfo_property(*(_QWORD *)(v9 + 48), 9);
          v20 = get_tinfo_property(v33[0], 2) & 0x3F;
          clear_tinfo_t(v33);
          v21 = v30;
          if ( v20 == 1 )
          {
            v23 = sub_23FAB0(v9, (_QWORD *)(*(_QWORD *)(a1 + 328) + 216LL));
            v21 = v30;
            v9 = v23;
          }
          if ( v21 <= 2u )
          {
LABEL_42:
            v33[0] = 0;
            v33[0] = get_tinfo_property(*(_QWORD *)(v12 + 48), 9);
            v22 = get_tinfo_property(v33[0], 2) & 0x3F;
            clear_tinfo_t(v33);
            if ( v22 == 1 )
              v12 = sub_23FAB0(v12, (_QWORD *)(*(_QWORD *)(a1 + 328) + 216LL));
            break;
          }
        }
        break;
      default:
        break;
    }
  }
  v15 = j__qalloc_or_throw(64);
  *(_QWORD *)v15 = -1;
  *(_DWORD *)(v15 + 8) = v8;
  *(_QWORD *)(v15 + 12) = -1;
  *(_QWORD *)(v15 + 24) = v9;
  *(_QWORD *)(v15 + 32) = v12;
  *(_QWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 56) = 0;
  *(_QWORD *)v15 = *(_QWORD *)(a2 + 24);
  if ( !*(_BYTE *)(a2 + 64) )
    v26 = a6 & ((unsigned int)(*(_DWORD *)a2 - 15) > 3);
  v16 = sub_245A60(a1, a2, v15, a5, v26);
  clear_tinfo_t(v32);
  clear_tinfo_t(&v31);
  return v16;
}
