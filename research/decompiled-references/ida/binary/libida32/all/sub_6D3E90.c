unsigned __int64 __fastcall sub_6D3E90(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  int tinfo_property; // r12d
  __int64 tinfo_size; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v11; // rax
  unsigned __int64 *v12; // rdx
  unsigned __int64 *v13; // rax

  v3 = *a2;
  v4 = *a2 & 0xFLL;
  v5 = *a2 & 0x3FLL;
  if ( (unsigned __int8)v4 > 9u )
  {
    if ( !under_debugger )
      interr(3368);
LABEL_33:
    BUG();
  }
  if ( (_BYTE)v4 == 8 )
  {
    if ( (_BYTE)v5 != 24 )
    {
      if ( (unsigned __int8)v5 <= 0x18u )
      {
        if ( (_BYTE)v5 != 8 )
          goto LABEL_19;
        v8 = *(_QWORD *)(a1[6] + 18640LL);
        v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_6;
      }
      if ( (v3 & 0x2F) != 0x28 )
        goto LABEL_19;
    }
LABEL_5:
    tinfo_property = get_tinfo_property(v3, 3);
    tinfo_size = get_tinfo_size(0, *a2, 0);
    v8 = sub_6D3DB0((__int64)a1, tinfo_size, tinfo_property == 1);
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_6;
  }
  if ( (_BYTE)v4 != 9 )
  {
    if ( (unsigned __int8)(v4 - 2) > 5u )
    {
      switch ( (char)v5 )
      {
        case 0:
          if ( !under_debugger )
            interr(3369);
          goto LABEL_33;
        case 1:
          v8 = *(_QWORD *)(a1[6] + 18632LL);
          v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_6;
        case 16:
        case 17:
        case 32:
        case 33:
        case 49:
          goto LABEL_5;
        case 48:
          v8 = sub_A4C2D0(a1[6], *(_QWORD *)(a1[6] + 18632LL));
          v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_6;
        default:
          goto LABEL_19;
      }
    }
    goto LABEL_5;
  }
  if ( (_BYTE)v5 == 41 )
  {
    v8 = *(_QWORD *)(a1[6] + 18816LL);
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  }
  else if ( (unsigned __int8)v5 > 0x29u )
  {
    if ( (_BYTE)v5 != 57 )
      goto LABEL_19;
    v11 = a1[6];
    v12 = (unsigned __int64 *)(v11 + 18816);
    v13 = (unsigned __int64 *)(v11 + 19032);
    if ( (*(_BYTE *)(*a1 + 771LL) & 8) != 0 )
      v13 = v12;
    v8 = *v13;
    v9 = *v13 & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    if ( (_BYTE)v5 != 9 )
    {
      if ( (_BYTE)v5 == 25 )
      {
        v8 = *(_QWORD *)(a1[6] + 18808LL);
        v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_6;
      }
LABEL_19:
      if ( !under_debugger )
        interr(3370);
      goto LABEL_33;
    }
    v8 = *(_QWORD *)(a1[6] + 18800LL);
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  }
LABEL_6:
  if ( v9 <= 0xF )
    goto LABEL_19;
  return sub_6D3D30((__int64)a1, a2, v8);
}

