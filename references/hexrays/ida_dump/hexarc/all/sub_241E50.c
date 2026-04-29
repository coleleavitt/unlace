__int64 __fastcall sub_241E50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rax
  int v12; // eax
  __int64 tinfo_property; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  char v18; // al
  unsigned __int8 v19; // [rsp+Fh] [rbp-59h]
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __int64 v21; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v22[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(v2 + 8) != 48 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v2 + 8) != 48 )
      v2 = 0;
  }
  v4 = sub_24DC80(*(unsigned int *)(a1 + 8));
  if ( v4 != 1 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v20 = 0;
    copy_tinfo_t(&v20, v5 + 48);
    v6 = *(_QWORD *)(a1 + 32);
    v21 = 0;
    copy_tinfo_t(&v21, v6 + 48);
    v19 = (get_tinfo_property(v20, 2) & 0xF) - 10;
    if ( v19 <= 1u != (unsigned __int8)((get_tinfo_property(v21, 2) & 0xF) - 10) <= 1u )
    {
      v7 = 0;
      if ( !v2 )
      {
        if ( v19 > 1u )
          v2 = *(_QWORD *)(a1 + 24);
        else
          v2 = *(_QWORD *)(a1 + 32);
      }
      goto LABEL_7;
    }
    if ( v19 > 1u )
    {
      if ( v4 )
      {
        v7 = sub_27BE90(a1, a2, v4, 0);
        goto LABEL_7;
      }
      goto LABEL_14;
    }
    v22[0] = 0;
    tinfo_property = get_tinfo_property(v20, 13);
    v22[0] = tinfo_property;
    if ( (_BYTE)tinfo_property )
    {
      v14 = v20;
      v20 = tinfo_property;
      v22[0] = v14;
    }
    clear_tinfo_t(v22);
    v22[0] = 0;
    v15 = get_tinfo_property(v21, 13);
    v22[0] = v15;
    if ( (_BYTE)v15 )
    {
      v16 = v21;
      v21 = v15;
      v22[0] = v16;
    }
    clear_tinfo_t(v22);
    if ( (get_tinfo_property(v20, 2) & 0xF) == 0xC
      || *(_DWORD *)(a1 + 8) == 36 && (get_tinfo_property(v20, 2) & 0x3F) == 1 )
    {
      *(_QWORD *)(a1 + 24) = sub_23DAF0(*(_QWORD *)(a1 + 24), (_QWORD *)(a2 + 200));
    }
    if ( (get_tinfo_property(v21, 2) & 0xF) == 0xC
      || *(_DWORD *)(a1 + 8) == 36 && (get_tinfo_property(v21, 2) & 0x3F) == 1 )
    {
      v17 = sub_23DAF0(*(_QWORD *)(a1 + 32), (_QWORD *)(a2 + 200));
      *(_QWORD *)(a1 + 32) = v17;
    }
    else
    {
      v17 = *(_QWORD *)(a1 + 32);
    }
    v18 = sub_323100(a2, *(_QWORD *)(a1 + 24) + 48LL, v17 + 48);
    if ( *(_DWORD *)(a1 + 8) == 36 )
    {
      if ( !v18 )
        goto LABEL_31;
    }
    else
    {
      if ( v2 )
      {
LABEL_14:
        v7 = 0;
LABEL_7:
        clear_tinfo_t(&v21);
        clear_tinfo_t(&v20);
        goto LABEL_8;
      }
      if ( v18 )
      {
LABEL_31:
        v2 = *(_QWORD *)(a1 + 24);
        v7 = 0;
        goto LABEL_7;
      }
    }
    v2 = *(_QWORD *)(a1 + 32);
    v7 = 0;
    goto LABEL_7;
  }
  v7 = sub_27BE90(a1, a2, 1, 0);
LABEL_8:
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 32);
  if ( v8 == v2 )
  {
    v10 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 24);
    if ( v2 != v9 )
      goto LABEL_10;
  }
  if ( v10 )
  {
    v12 = sub_23F7C0(v2, a2, (_QWORD *)(v10 + 48));
    v9 = *(_QWORD *)(a1 + 32);
    v8 = *(_QWORD *)(a1 + 24);
    v7 |= v12;
  }
LABEL_10:
  if ( !sub_23E2D0(a2, v8, v9, *(_DWORD *)(a1 + 8)) )
  {
    if ( !under_debugger )
      sub_37B760(50401);
    BUG();
  }
  return v7;
}
