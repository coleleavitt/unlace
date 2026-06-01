__int64 __fastcall sub_B74100(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // al
  bool v10; // dl
  __int64 result; // rax
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rax
  bool v14; // zf
  char v15; // al
  int v16; // eax
  unsigned __int8 v17; // al
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rax
  __int64 *v20; // rax

  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2B )
  {
    if ( (*(_BYTE *)(a1 + 97) & 1) != 0 )
      return 0;
    v2 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    {
      if ( ((*(_BYTE *)(*(_QWORD *)v2 + 8LL) + 70) & 0x7Fu) > 3 )
        goto LABEL_5;
    }
    else if ( ((v2[8] + 70) & 0x7Fu) > 3 )
    {
      goto LABEL_5;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1)
      || ((v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL), v12 != sub_B70970)
        ? (v13 = v12(a1))
        : (v13 = *(_QWORD *)(a1 + 80)),
          (*(_BYTE *)(v13 + 28) & 0x7F) != 0x2B
       && (*(_BYTE *)(v13 + 97) & 0x20) != 0
       && ((v18 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL), v18 != sub_B70970)
         ? (v19 = v18(a1))
         : (v19 = *(_QWORD *)(a1 + 80)),
           (*(_BYTE *)(v19 + 28) & 0x7F) != 0x2B && *(char *)(v19 + 97) < 0)) )
    {
LABEL_33:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1)
        && (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2B
        && (*(_BYTE *)(a1 + 97) & 0x20) != 0 )
      {
        return 2;
      }
      return 0;
    }
    if ( !sub_B735C0(a1) )
    {
      v14 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80)) == 0;
      v15 = *(_BYTE *)(a1 + 28);
      if ( !v14 )
      {
        v17 = v15 & 0x7F;
        if ( (unsigned int)v17 - 41 <= 1 )
        {
          if ( (*(_BYTE *)(a1 + 140) & 7) == 0 )
            return 2;
          goto LABEL_32;
        }
        if ( !sub_B73ED0(a1) )
          return 2;
LABEL_31:
        v17 = *(_BYTE *)(a1 + 28) & 0x7F;
LABEL_32:
        if ( v17 != 42 )
          goto LABEL_33;
        return 2;
      }
      if ( (v15 & 0x7Fu) - 41 > 1 )
      {
        v20 = (__int64 *)sub_B73ED0(a1);
        if ( !v20 )
          return 2;
        v16 = ((*v20 >> 1) & 3) + 1;
      }
      else
      {
        v16 = *(_BYTE *)(a1 + 140) & 7;
      }
      if ( v16 == 2 )
        goto LABEL_31;
    }
    return 2;
  }
LABEL_5:
  if ( sub_B735C0(a1) || (unsigned __int8)sub_B8CF80(a1, a2, v3, v4) )
    return 2;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v5 = sub_B8C3D0(a1);
    v6 = *(_QWORD *)v5;
    v7 = *(_QWORD *)v5 + 8LL * *(unsigned int *)(v5 + 8);
    if ( v6 >= v7 )
    {
      if ( v6 == v7 )
        goto LABEL_12;
      while ( *(_WORD *)(*(_QWORD *)v7 + 36LL) != 357 )
      {
        v7 += 8LL;
        if ( v6 == v7 )
          goto LABEL_12;
      }
    }
    else
    {
      v8 = v6;
      while ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 357 )
      {
        v8 += 8LL;
        if ( v7 == v8 )
          goto LABEL_12;
      }
      if ( v7 == v8 )
        goto LABEL_12;
    }
    while ( *(_WORD *)(*(_QWORD *)v6 + 36LL) != 357 )
      v6 += 8LL;
    if ( (*(_BYTE *)(*(_QWORD *)v6 + 38LL) & 1) == 0 )
      return 2;
  }
LABEL_12:
  v9 = *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (unsigned int)v9 - 41 <= 1 && (*(_BYTE *)(a1 + 140) & 7) != 2 && v9 != 42 && (*(_BYTE *)(a1 + 140) & 8) == 0
    || (*(_BYTE *)(a1 + 96) & 5) == 1
    || sub_B70930(a1) )
  {
    return 0;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 1LL) & 8) != 0 )
    return 2;
  v10 = sub_A5EB90(a1);
  result = 1;
  if ( !v10 )
    return 2;
  return result;
}
