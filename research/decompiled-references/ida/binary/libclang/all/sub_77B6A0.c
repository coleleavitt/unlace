__int64 __fastcall sub_77B6A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  _BYTE *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rdx
  unsigned __int64 v8; // rax
  __int64 *v9; // rax
  unsigned __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rax
  char v17; // dl
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax

  v3 = a2;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) != 0x29 )
  {
    if ( (*(_BYTE *)(a1 + 97) & 1) == 0 )
    {
      v4 = (_BYTE *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      a3 = *(_QWORD *)(a1 + 16) & 4LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      {
        if ( ((*(_BYTE *)(*(_QWORD *)v4 + 8LL) + 72) & 0x7Fu) > 3 )
          goto LABEL_5;
      }
      else if ( ((v4[8] + 72) & 0x7Fu) > 3 )
      {
        goto LABEL_5;
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) )
      {
        v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
        v13 = v12 == sub_777D30 ? *(_QWORD *)(a1 + 80) : v12(a1);
        if ( (v14 = *(_BYTE *)(v13 + 28) & 0x7F, (_BYTE)v14 == 41)
          || (*(_BYTE *)(v13 + 97) & 0x20) == 0
          || ((v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL), v15 != sub_777D30)
            ? (v16 = v15(a1))
            : (v16 = *(_QWORD *)(a1 + 80)),
              (v14 = *(_BYTE *)(v16 + 28) & 0x7F, (_BYTE)v14 == 41) || *(char *)(v16 + 97) >= 0) )
        {
          if ( (unsigned __int8)sub_77B630(a1, a2, v14) )
            return 2;
          v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 24LL))(*(_QWORD *)(a1 + 80));
          v18 = (*(_BYTE *)(a1 + 28) & 0x7F) - 39;
          if ( v17 )
          {
            if ( v18 > 1 )
              v19 = sub_7799B0(a1);
            else
              v19 = *(_BYTE *)(a1 + 140) & 7;
            if ( !v19 )
              return 2;
          }
          else
          {
            if ( v18 > 1 )
              v20 = sub_7799B0(a1);
            else
              v20 = *(_BYTE *)(a1 + 140) & 7;
            if ( v20 != 2 )
              return 2;
          }
          if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x28 )
            return 2;
        }
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1)
        && (*(_BYTE *)(a1 + 28) & 0x7F) != 0x29 )
      {
        return 2 * (unsigned int)((*(_BYTE *)(a1 + 97) & 0x20) != 0);
      }
    }
    return 0;
  }
LABEL_5:
  if ( (unsigned __int8)sub_77B630(a1, a2, a3) || (unsigned __int8)sub_799100(a1) )
    return 2;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v6 = sub_79A2B0(a1);
    v7 = *(__int64 **)v6;
    v8 = *(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8);
    if ( (unsigned __int64)v7 < v8 )
    {
      v5 = (__int64)v7;
      while ( 1 )
      {
        a2 = *(_QWORD *)v5;
        if ( *(_WORD *)(*(_QWORD *)v5 + 32LL) == 347 )
          goto LABEL_12;
        v5 += 8;
        if ( v8 == v5 )
          goto LABEL_17;
      }
    }
    if ( v7 != (__int64 *)v8 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)v8;
        if ( *(_WORD *)(*(_QWORD *)v8 + 32LL) == 347 )
          break;
        v8 += 8LL;
        if ( v7 == (__int64 *)v8 )
          goto LABEL_17;
      }
      v5 = (__int64)v7;
LABEL_12:
      if ( v5 == v8 )
        goto LABEL_17;
      v5 = *v7;
      if ( *(_WORD *)(*v7 + 32) != 347 )
      {
        v9 = v7 + 1;
        do
          v5 = *v9++;
        while ( *(_WORD *)(v5 + 32) != 347 );
      }
      if ( (*(_BYTE *)(v5 + 34) & 1) != 0 )
        goto LABEL_17;
      return 2;
    }
  }
LABEL_17:
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 39 <= 1 )
  {
    v5 = *(_BYTE *)(a1 + 140) & 7;
    if ( (_BYTE)v5 != 2 && (*(_BYTE *)(a1 + 28) & 0x7F) != 0x28 && (*(_BYTE *)(a1 + 140) & 8) == 0 )
      return 0;
  }
  if ( (*(_BYTE *)(a1 + 96) & 5) == 1 )
    return 0;
  v11 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v11 = *(_QWORD *)v11;
  if ( (*(_BYTE *)(v11 + 8) & 0x7F) == 4 && (*(_BYTE *)(v11 + 10) & 1) == 0 )
    return 0;
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 2160) + 1LL) & 8) != 0 )
    return 2;
  return 2 - (unsigned int)sub_779FD0(a1, a2, v11, v5);
}

