_QWORD *__fastcall sub_24B3A0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *a5, char a6)
{
  unsigned __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // r14
  char v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  char v37; // [rsp+2Dh] [rbp-5Bh]
  char v38; // [rsp+2Eh] [rbp-5Ah]
  unsigned __int8 v39; // [rsp+2Eh] [rbp-5Ah]
  unsigned __int8 v40; // [rsp+2Fh] [rbp-59h]
  unsigned __int8 v41; // [rsp+2Fh] [rbp-59h]
  __int64 v42; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v43[8]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v44[9]; // [rsp+40h] [rbp-48h] BYREF

  v37 = a6;
  v44[1] = __readfsqword(0x28u);
  if ( a3 )
  {
    v38 = 0;
    v8 = a3;
  }
  else
  {
    v38 = 1;
    v8 = 36;
  }
  sub_32C270(v44, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36));
  v9 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, a4, v44, 0);
  clear_tinfo_t();
  if ( (unsigned int)v8 <= 0x28 )
  {
    v10 = 0x14100000000LL;
    if ( _bittest64(&v10, v8) )
    {
      if ( (unsigned int)lexcompare_tinfo() )
      {
        if ( (unsigned int)get_tinfo_property() == 1 )
        {
          v29 = *(_QWORD *)(v9 + 48);
          if ( (v29 & 0xE) == 0 && (v29 & 0x30) != 0 )
            sub_244E70(v9, (__int64)a4, v27, v28);
        }
      }
    }
  }
  v42 = 0;
  copy_tinfo_t();
  sub_32C270(v43, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52));
  if ( (unsigned int)v8 <= 0x45 && (*((_BYTE *)&off_4E0320 + 16 * (int)v8 + 11) & 8) != 0 )
  {
    sub_32C430(v44, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52), 1);
    copy_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
  }
  else if ( v38 )
  {
    v16 = *(unsigned int *)(a2 + 52);
    if ( (int)v16 < *(unsigned __int8 *)(*(_QWORD *)(a1 + 328) + 130LL)
      && (*(_BYTE *)(a2 + 48) != 2 || sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL), v16, 1) < 0) )
    {
      copy_tinfo_t();
    }
  }
  v11 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 48, &v42, v43, 0);
  if ( (_DWORD)v8 == 38 )
  {
    if ( (unsigned int)lexcompare_tinfo() )
    {
      if ( (unsigned int)get_tinfo_property() == 1 )
      {
        v24 = *(_QWORD *)(v11 + 48);
        if ( (v24 & 0xE) == 0 && (v24 & 0x30) != 0 )
          sub_244E70(v11, (__int64)a4, v22, v23);
      }
    }
  }
  v15 = (_QWORD *)&word_2;
  v40 = (get_tinfo_property() & 0xF) - 10;
  v12 = get_tinfo_property() & 0xF;
  v14 = (unsigned int)(v12 - 10);
  LOBYTE(v15) = (unsigned __int8)(v12 - 10) <= 2u;
  if ( v40 <= 2u || (unsigned __int8)(v12 - 10) <= 2u )
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
        if ( v40 <= 2u )
          goto LABEL_19;
        goto LABEL_30;
      case 35:
        if ( v40 <= 2u && (unsigned __int8)(v12 - 10) <= 2u )
        {
LABEL_19:
          v39 = v12 - 10;
          sub_32C270(v44, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36));
          v15 = v44;
          v9 = sub_244E70(v9, (__int64)v44, v17, v18);
          clear_tinfo_t();
          v14 = v39;
          if ( v39 <= 2u )
          {
LABEL_30:
            sub_32C270(v44, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52));
            v15 = v44;
            v11 = sub_244E70(v11, (__int64)v44, v25, v26);
            clear_tinfo_t();
          }
        }
        break;
      case 36:
        if ( v40 > 2u )
        {
          sub_32C270(v44, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52));
          v15 = v44;
          v11 = sub_244E70(v11, (__int64)v44, v32, v33);
          clear_tinfo_t();
          if ( v38 )
            break;
          goto LABEL_40;
        }
        v41 = v12 - 10;
        if ( !v38 )
        {
          v44[0] = 0;
          v15 = (_QWORD *)&word_2;
          v44[0] = get_tinfo_property();
          v30 = get_tinfo_property() & 0x3F;
          clear_tinfo_t();
          v14 = v41;
          if ( v30 == 1 )
          {
            v15 = (_QWORD *)(*(_QWORD *)(a1 + 328) + 216LL);
            v34 = sub_244E70(v9, (__int64)v15, v13, v41);
            v14 = v41;
            v9 = v34;
          }
          if ( (unsigned __int8)v14 <= 2u )
          {
LABEL_40:
            v44[0] = 0;
            v15 = (_QWORD *)&word_2;
            v44[0] = get_tinfo_property();
            v31 = get_tinfo_property() & 0x3F;
            clear_tinfo_t();
            if ( v31 == 1 )
            {
              v15 = (_QWORD *)(*(_QWORD *)(a1 + 328) + 216LL);
              v11 = sub_244E70(v11, (__int64)v15, v13, v14);
            }
            break;
          }
        }
        break;
      default:
        break;
    }
  }
  v19 = j__qalloc_or_throw(64, (__int64)v15, v13, v14);
  *(_QWORD *)v19 = -1;
  *(_DWORD *)(v19 + 8) = v8;
  *(_QWORD *)(v19 + 12) = -1;
  *(_QWORD *)(v19 + 24) = v9;
  *(_QWORD *)(v19 + 32) = v11;
  *(_QWORD *)(v19 + 40) = 0;
  *(_QWORD *)(v19 + 48) = 0;
  *(_DWORD *)(v19 + 56) = 0;
  *(_QWORD *)v19 = *(_QWORD *)(a2 + 24);
  if ( !*(_BYTE *)(a2 + 64) )
    v37 = a6 & ((unsigned int)(*(_DWORD *)a2 - 15) > 3);
  v20 = sub_24AE20(a1, a2, v19, a5, v37);
  clear_tinfo_t();
  clear_tinfo_t();
  return v20;
}
