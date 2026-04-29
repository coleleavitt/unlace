__int64 __fastcall sub_2A0060(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebp
  _DWORD *v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // eax
  char v19; // al
  __int64 tinfo_property; // [rsp+8h] [rbp-50h] BYREF
  __int64 v21; // [rsp+10h] [rbp-48h] BYREF
  __int64 v22; // [rsp+18h] [rbp-40h]
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]

  v6 = *(_DWORD *)a1;
  v23 = __readfsqword(0x28u);
  if ( v6 == 7 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
    if ( *(_BYTE *)(v14 + 320) )
    {
      tinfo_property = get_tinfo_property();
      if ( (_BYTE)tinfo_property )
      {
        v21 = 1;
        v22 = 0;
        copy_tinfo_t();
        sub_29F770(a1, (unsigned int *)&v21);
        sub_29EC30((__int64)&v21);
        clear_tinfo_t();
        goto LABEL_19;
      }
      clear_tinfo_t();
    }
    if ( (*(_BYTE *)(v14 + 4) & 0x10) != 0 )
    {
      if ( *(int *)(v14 + 464) <= 0 )
      {
        if ( !under_debugger )
          sub_383060(51862);
        BUG();
      }
      sub_13D280((_QWORD *)v14, 0);
      v21 = 1;
      v22 = 0;
      copy_tinfo_t();
      sub_29F770(a1, (unsigned int *)&v21);
      sub_29EC30((__int64)&v21);
      goto LABEL_19;
    }
LABEL_20:
    v8 = 0;
    goto LABEL_7;
  }
  if ( v6 != 8 )
  {
    if ( v6 == 6 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(v7 + 8) != 57 || *(_DWORD *)(*(_QWORD *)(v7 + 24) + 8LL) != 48 )
        goto LABEL_6;
      tinfo_property = get_tinfo_property();
      if ( !(unsigned int)sub_32E340(&tinfo_property, 24) )
      {
        clear_tinfo_t();
        v7 = *(_QWORD *)(a1 + 8);
LABEL_6:
        v8 = sub_29F9A0(a1, a2, v7, a4, a5, a6);
        goto LABEL_7;
      }
      clear_tinfo_t();
      *(_DWORD *)a1 = 8;
      v15 = operator new(0x10u);
      v16 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(v15 + 8) = -1;
      *(_QWORD *)v15 = v16;
      *(_QWORD *)(a1 + 8) = v15;
LABEL_19:
      v8 = 1;
      goto LABEL_7;
    }
    goto LABEL_20;
  }
  v10 = *(_DWORD **)(a1 + 8);
  v11 = v10[2] + 1;
  tinfo_property = 0;
  if ( v11 <= 0x100 )
  {
    tinfo_property = get_tinfo_property();
    v10 = *(_DWORD **)(a1 + 8);
  }
  v12 = *(_QWORD *)(*(_QWORD *)v10 + 24LL);
  v13 = *(_DWORD *)(v12 + 8);
  if ( v13 == 48
    || v13 == 51
    && ((v17 = *(_QWORD *)(v12 + 24), v18 = *(_DWORD *)(v17 + 8), v18 == 48)
     || (unsigned int)(v18 - 35) <= 1
     && *(_DWORD *)(*(_QWORD *)(v17 + 24) + 8LL) == 48
     && (v19 = get_tinfo_property(), (v19 & 0x3E) != 0)
     && (v19 & 0xFu) <= 8)
    || !(_BYTE)tinfo_property
    || get_tinfo_size() == -1
    || (unsigned int)sub_32E340(&tinfo_property, tinfo_property) )
  {
    v8 = 0;
  }
  else
  {
    v21 = 1;
    v22 = 0;
    copy_tinfo_t();
    sub_29F770(a1, (unsigned int *)&v21);
    v8 = 1;
    sub_29EC30((__int64)&v21);
  }
  clear_tinfo_t();
LABEL_7:
  *(_DWORD *)(a1 + 4) |= sub_29C0C0(a1, a2);
  return v8;
}
