__int64 __fastcall sub_29B460(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // ebp
  _DWORD *v12; // rax
  int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // eax
  char v23; // al
  __int64 tinfo_property; // [rsp+8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v26[8]; // [rsp+18h] [rbp-40h] BYREF

  v6 = *(_DWORD *)a1;
  v26[2] = __readfsqword(0x28u);
  if ( v6 == 7 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( *(_BYTE *)(v17 + 320) )
    {
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(*(_QWORD *)(v17 + 328), 24);
      if ( (_BYTE)tinfo_property )
      {
        v25 = 1;
        v26[0] = 0;
        copy_tinfo_t(v26, &tinfo_property);
        sub_29AB70(a1, (unsigned int *)&v25);
        sub_29A030((__int64)&v25);
        clear_tinfo_t(&tinfo_property);
        goto LABEL_19;
      }
      clear_tinfo_t(&tinfo_property);
    }
    if ( (*(_BYTE *)(v17 + 4) & 0x10) != 0 )
    {
      if ( *(int *)(v17 + 464) <= 0 )
      {
        if ( !under_debugger )
          sub_37DDE0(51862);
        BUG();
      }
      v18 = sub_138DC0((_QWORD *)v17, 0);
      v25 = 1;
      v26[0] = 0;
      copy_tinfo_t(v26, v18 + 80);
      sub_29AB70(a1, (unsigned int *)&v25);
      sub_29A030((__int64)&v25);
      goto LABEL_19;
    }
LABEL_20:
    v10 = 0;
    goto LABEL_7;
  }
  if ( v6 != 8 )
  {
    if ( v6 == 6 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(v8 + 8) != 57 )
        goto LABEL_6;
      v9 = *(_QWORD *)(v8 + 24);
      if ( *(_DWORD *)(v9 + 8) != 48 )
        goto LABEL_6;
      tinfo_property = 0;
      tinfo_property = get_tinfo_property(*(_QWORD *)(v9 + 48), 24);
      if ( !(unsigned int)sub_329080(&tinfo_property) )
      {
        clear_tinfo_t(&tinfo_property);
        v8 = *(_QWORD *)(a1 + 8);
LABEL_6:
        v10 = sub_29ADA0(a1, a2, v8, a4, a5, a6);
        goto LABEL_7;
      }
      clear_tinfo_t(&tinfo_property);
      *(_DWORD *)a1 = 8;
      v19 = operator new(0x10u);
      v20 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(v19 + 8) = -1;
      *(_QWORD *)v19 = v20;
      *(_QWORD *)(a1 + 8) = v19;
LABEL_19:
      v10 = 1;
      goto LABEL_7;
    }
    goto LABEL_20;
  }
  v12 = *(_DWORD **)(a1 + 8);
  v13 = v12[2];
  v14 = *(_QWORD *)(*(_QWORD *)v12 + 24LL);
  tinfo_property = 0;
  if ( (unsigned int)(v13 + 1) <= 0x100 )
  {
    tinfo_property = get_tinfo_property(*(_QWORD *)(v14 + 48), (unsigned int)(v13 + 25));
    v12 = *(_DWORD **)(a1 + 8);
  }
  v15 = *(_QWORD *)(*(_QWORD *)v12 + 24LL);
  v16 = *(_DWORD *)(v15 + 8);
  if ( v16 == 48
    || v16 == 51
    && ((v21 = *(_QWORD *)(v15 + 24), v22 = *(_DWORD *)(v21 + 8), v22 == 48)
     || (unsigned int)(v22 - 35) <= 1
     && *(_DWORD *)(*(_QWORD *)(v21 + 24) + 8LL) == 48
     && (v23 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v21 + 32) + 48LL), 2), (v23 & 0x3E) != 0)
     && (v23 & 0xFu) <= 8)
    || !(_BYTE)tinfo_property
    || get_tinfo_size(0, tinfo_property, 0) == -1
    || (unsigned int)sub_329080(&tinfo_property) )
  {
    v10 = 0;
  }
  else
  {
    v25 = 1;
    v26[0] = 0;
    copy_tinfo_t(v26, &tinfo_property);
    sub_29AB70(a1, (unsigned int *)&v25);
    v10 = 1;
    sub_29A030((__int64)&v25);
  }
  clear_tinfo_t(&tinfo_property);
LABEL_7:
  *(_DWORD *)(a1 + 4) |= sub_2974C0(a1, a2);
  return v10;
}
