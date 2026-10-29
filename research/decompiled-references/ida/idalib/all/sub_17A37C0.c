__int64 __fastcall sub_17A37C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned int v9; // r12d
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al
  unsigned __int64 *v14; // rax
  __int64 *v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 *i; // rax
  __int64 v20; // rcx
  bool v21; // al
  int v22[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( *(char *)(a2 + 28) < 0 || sub_B8C400(a2, 1) )
    return 0;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v14 = sub_B8C3D0(a2, 1, v3, v4, v5, v6);
    v15 = (__int64 *)*v14;
    v16 = *v14 + 8LL * *((unsigned int *)v14 + 2);
    if ( *v14 >= v16 )
    {
      if ( v15 != (__int64 *)v16 )
      {
        if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 389 )
          return 0;
        for ( i = (__int64 *)(v16 + 8); v15 != i; ++i )
        {
          v20 = *i;
          if ( *(_WORD *)(v20 + 36) == 389 )
            return 0;
        }
      }
    }
    else
    {
      v17 = *v14;
      while ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 389 )
      {
        v17 += 8LL;
        if ( v16 == v17 )
          goto LABEL_4;
      }
      if ( v16 != v17 )
        return 0;
    }
  }
LABEL_4:
  v7 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v7 = (_QWORD *)*v7;
  if ( (unsigned __int8)sub_B8E180((unsigned __int64)v7) )
    return 0;
  v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
  {
    v9 = sub_B8E180(*(_QWORD *)(v8 + 8));
    if ( (_BYTE)v9 )
      return 0;
  }
  else
  {
    v9 = sub_B8E180(v8);
    if ( (_BYTE)v9 )
      return 0;
  }
  v10 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v10 - 34) > 5 )
  {
    if ( (unsigned int)(v10 - 40) > 6 )
      return 0;
    if ( !*(_DWORD *)(a1 + 184) && !*(_BYTE *)(*(_QWORD *)(a1 + 232) + 744LL) )
    {
      if ( !sub_1021600(*(_QWORD *)(a1 + 272), *(_DWORD *)(a2 + 24)) )
        return 0;
      v9 = sub_A7C0A0(*(_QWORD *)(a1 + 248), a2);
      if ( (_BYTE)v9 )
        return 0;
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
        return (unsigned int)sub_17A3710(a2);
      if ( sub_179A810(a2) )
      {
        if ( (unsigned int)sub_B740B0(a2) == 1 )
          return 0;
        if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
          return (unsigned int)sub_17A3710(a2);
        if ( sub_179A810(a2) )
        {
          if ( (unsigned int)sub_B740B0(a2) == 2
            && sub_B73ED0(a2)
            && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2) )
          {
            return 0;
          }
          if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
            return (unsigned int)sub_17A3710(a2);
        }
      }
      if ( (*(_BYTE *)(a2 + 97) & 0x20) == 0 )
        return (unsigned int)sub_17A3710(a2);
      if ( !*(_DWORD *)(a1 + 184) && !*(_BYTE *)(*(_QWORD *)(a1 + 232) + 744LL) )
      {
        if ( sub_1021600(*(_QWORD *)(a1 + 272), *(_DWORD *)(a2 + 24)) )
          return (unsigned int)sub_17A3710(a2);
        return 0;
      }
    }
  }
  else
  {
    if ( (unsigned int)sub_B77D20(a2) == 1
      || (unsigned int)sub_B77D20(a2) == 2
      && sub_B77930(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2) )
    {
      return 0;
    }
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 )
    {
      if ( sub_AED5B0(a2) )
        return 0;
      v13 = *(_BYTE *)(a2 + 83);
      if ( (v13 & 8) != 0 )
      {
        if ( (v13 & 0x40) != 0 )
          goto LABEL_18;
      }
      else
      {
        if ( (*(_BYTE *)(a2 + 128) & 1) != 0 )
          goto LABEL_18;
        if ( *(_QWORD *)(a2 + 128) || (v13 & 0x40) != 0 )
          goto LABEL_17;
      }
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x26 )
      {
        v22[0] = 0;
        v21 = sub_B98FE0(a2, v22, v11, v12);
      }
      else
      {
        v21 = sub_B98230((_QWORD *)a2, 1);
      }
      if ( v21 )
        return 0;
LABEL_39:
      v13 = *(_BYTE *)(a2 + 83);
      if ( (v13 & 8) != 0 )
      {
LABEL_40:
        if ( (v13 & 0x40) == 0 )
          return (unsigned int)sub_17A3710(a2);
LABEL_18:
        if ( !(unsigned __int8)sub_A7C0A0(*(_QWORD *)(a1 + 248), a2) )
          return (unsigned int)sub_17A3710(a2);
        return 0;
      }
      if ( (*(_BYTE *)(a2 + 128) & 1) != 0 )
        goto LABEL_18;
LABEL_17:
      if ( *(_QWORD *)(a2 + 128) )
        goto LABEL_18;
      goto LABEL_40;
    }
    if ( (*(_BYTE *)(a2 + 82) & 1) == 0 )
      goto LABEL_39;
    if ( !*(_DWORD *)(a1 + 184) && !*(_BYTE *)(*(_QWORD *)(a1 + 232) + 744LL) )
    {
      if ( !sub_1021600(*(_QWORD *)(a1 + 272), *(_DWORD *)(a2 + 24)) )
        return 0;
      goto LABEL_39;
    }
  }
  return v9;
}
