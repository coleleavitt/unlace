__int64 __fastcall sub_23F4C0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v10; // rdx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // r14
  char tinfo_property; // al
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD v23[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a4;
  v23[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a4 + 4) == a5
    && *(_BYTE *)a4 == 15
    && (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a4 + 8) + 48LL), 2) & 0xF) != 0xB )
  {
    copy_tinfo_t(a1, *(_QWORD *)(v6 + 8) + 48LL);
    return 1;
  }
  while ( 1 )
  {
    if ( (*(_BYTE *)(v6 + 1) & 2) == 0 || (get_tinfo_property(*a1, 2) & 0x2F) == 0xD )
    {
      if ( *(_BYTE *)v6 != 4 )
        return 0;
      goto LABEL_4;
    }
    v11 = *(_QWORD **)(a2 + 1392);
    v23[0] = 0;
    if ( v11 )
    {
      v12 = *v11 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v12 )
        goto LABEL_24;
      if ( (*(_BYTE *)(*v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        break;
    }
LABEL_11:
    if ( *(_BYTE *)v6 == 9 )
      goto LABEL_18;
LABEL_12:
    clear_tinfo_t(v23);
    if ( *(_BYTE *)v6 != 4 )
      return 0;
LABEL_4:
    v10 = *(_QWORD *)(v6 + 8);
    if ( (unsigned int)(*(_DWORD *)v10 - 56) <= 1 )
    {
      tinfo_property = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v10 + 72) + 72LL), 2);
      v10 = *(_QWORD *)(v6 + 8);
      if ( (tinfo_property & 0x2F) == 0xD )
      {
        copy_tinfo_t(a1, *(_QWORD *)(v10 + 72) + 72LL);
        set_tinfo_property(a1, 6, 192);
        return 1;
      }
    }
    a3 = *(_QWORD *)(v10 + 24);
    v6 = v10 + 64;
  }
  while ( 1 )
  {
    v14 = *(_QWORD *)(v12 + 24);
    if ( a3 >= v14 )
      break;
    v12 = *(_QWORD *)(v12 + 8);
LABEL_16:
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
      if ( *(_BYTE *)v6 != 9 )
        goto LABEL_12;
      goto LABEL_18;
    }
  }
  if ( v14 < a3 )
  {
    v12 = *(_QWORD *)(v12 + 16);
    goto LABEL_16;
  }
  if ( v11 == (_QWORD *)v12 )
    goto LABEL_11;
LABEL_24:
  if ( !a6 )
  {
    if ( a5 == get_tinfo_size(0, *(_QWORD *)(v12 + 32), 0) )
    {
      copy_tinfo_t(v23, v12 + 32);
    }
    else if ( *(_BYTE *)v6 == 9 )
    {
LABEL_18:
      v15 = *(__int64 **)(v6 + 8);
      v16 = *v15;
      v17 = *((int *)v15 + 4);
      if ( *(_QWORD *)(v16 + 440) < v17 )
        sub_23E740();
      copy_tinfo_t(v23, *(_QWORD *)(v16 + 432) + 104 * v17 + 80);
      v18 = *(_QWORD *)(v6 + 8);
      goto LABEL_27;
    }
LABEL_26:
    v18 = 0;
    goto LABEL_27;
  }
  copy_tinfo_t(v23, v12 + 32);
  if ( *(_BYTE *)a6 != 9 )
    goto LABEL_26;
  v18 = *(_QWORD *)(a6 + 8);
LABEL_27:
  if ( !LOBYTE(v23[0]) )
    goto LABEL_12;
  if ( (get_tinfo_property(v23[0], 2) & 0xF) == 0xB || a5 != get_tinfo_size(0, v23[0], 0) )
  {
    if ( v18 )
    {
      v20 = *(_QWORD *)(v18 + 8);
      if ( v20 >= 0 )
      {
        if ( (unsigned __int8)sub_334E80(a1, v23, v20, a5, 1) )
        {
          set_tinfo_property(a1, 6, 192);
          goto LABEL_40;
        }
      }
    }
    goto LABEL_12;
  }
  v21 = *a1;
  *a1 = v23[0];
  v23[0] = v21;
  set_tinfo_property(a1, 6, 192);
LABEL_40:
  clear_tinfo_t(v23);
  return 1;
}
