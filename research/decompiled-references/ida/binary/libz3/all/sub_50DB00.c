bool __fastcall sub_50DB00(__int64 a1, __int64 a2, int *a3, __int64 a4, int *a5, bool *a6)
{
  __int64 v10; // r15
  _DWORD *v11; // rax
  __int64 v13; // rsi
  int v14; // eax
  int v15; // edx
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  __int64 v18; // rax
  bool v19; // dl
  _DWORD *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rsi
  unsigned __int8 v23; // r9
  __int64 v24; // rax
  bool v25; // dl
  _DWORD *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rsi
  void *v29; // r13
  __int64 v30; // rsi
  int v31; // eax
  void *v32; // r13
  char v33; // al
  char v34; // al
  int v35; // eax
  void *v36; // [rsp+0h] [rbp-48h]

  v10 = a4 + 16;
  sub_4D6490(*(_QWORD *)(a1 + 24));
  v36 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a4);
  sub_182CBA0(v36, v10);
  *(_BYTE *)(a4 + 20) &= ~1u;
  *(_DWORD *)(a4 + 16) = 1;
  *a3 = -1;
  *a5 = -1;
  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v11 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v11 )
    return 0;
  if ( *v11 == 5 )
  {
    v15 = v11[1];
    if ( v15 == 2 )
    {
      v18 = sub_15D1F10(*(_QWORD *)(a2 + 32));
      v19 = 0;
      v20 = *(_DWORD **)(v18 + 24);
      if ( v20 && *v20 == 5 )
        v19 = v20[1] == 1;
      v21 = *(_QWORD *)(a2 + 32);
      *a6 = v19;
      if ( !(unsigned __int8)sub_50D4D0(a1, v21, a5, a3, a4, 0) )
        return 0;
      v22 = *(_QWORD *)(a2 + 40);
      v23 = 1;
    }
    else
    {
      if ( v15 != 3 )
      {
        if ( v11[1] == 4 )
        {
          v16 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(a2 + 32)) + 24);
          if ( v16 && *v16 == 5 && v16[1] == 1 )
          {
            v28 = *(_QWORD *)(a2 + 32);
            *a6 = 1;
            if ( !(unsigned __int8)sub_50D4D0(a1, v28, a5, a3, a4, 0)
              || !(unsigned __int8)sub_50D4D0(a1, *(_QWORD *)(a2 + 40), a5, a3, a4, 1u) )
            {
              return 0;
            }
            v29 = qword_1C7F2C0;
            if ( (*(_BYTE *)(a4 + 20) & 1) != 0
              || *(_DWORD *)(a4 + 16) != 1
              || (qword_1C7F290 & 0x100000000LL) != 0
              || (_DWORD)qword_1C7F290 != 1 )
            {
              sub_1852000(qword_1C7F2C0, a4, &qword_1C7F280);
              goto LABEL_35;
            }
            sub_1832A70(qword_1C7F2C0, a4, &qword_1C7F280);
LABEL_61:
            sub_182CBA0(v29, v10);
            *(_BYTE *)(a4 + 20) &= ~1u;
            *(_DWORD *)(a4 + 16) = 1;
            goto LABEL_35;
          }
          if ( *(_WORD *)(a2 + 4) )
            return 0;
          v11 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
          if ( !v11 )
            return 0;
        }
        goto LABEL_4;
      }
      v24 = sub_15D1F10(*(_QWORD *)(a2 + 32));
      v25 = 0;
      v26 = *(_DWORD **)(v24 + 24);
      if ( v26 && *v26 == 5 )
        v25 = v26[1] == 1;
      v27 = *(_QWORD *)(a2 + 32);
      *a6 = v25;
      if ( !(unsigned __int8)sub_50D4D0(a1, v27, a5, a3, a4, 1u) )
        return 0;
      v22 = *(_QWORD *)(a2 + 40);
      v23 = 0;
    }
    if ( !(unsigned __int8)sub_50D4D0(a1, v22, a5, a3, a4, v23) )
      return 0;
    goto LABEL_35;
  }
LABEL_4:
  if ( *v11 != 5 )
  {
LABEL_5:
    if ( !*v11 && v11[1] == 8 )
    {
      v13 = *(_QWORD *)(a2 + 32);
      if ( !*(_WORD *)(v13 + 4) )
      {
        if ( (unsigned __int8)sub_50DB00(a1, v13, a3, a4, a5, a6) && *a6 )
        {
          sub_1831620(qword_1C7F2C0, a4);
          v32 = qword_1C7F2C0;
          if ( (*(_BYTE *)(a4 + 20) & 1) != 0
            || *(_DWORD *)(a4 + 16) != 1
            || (qword_1C7F290 & 0x100000000LL) != 0
            || (_DWORD)qword_1C7F290 != 1 )
          {
            sub_1852000(qword_1C7F2C0, a4, &qword_1C7F280);
          }
          else
          {
            sub_1832A70(qword_1C7F2C0, a4, &qword_1C7F280);
            sub_182CBA0(v32, v10);
            *(_BYTE *)(a4 + 20) &= ~1u;
            *(_DWORD *)(a4 + 16) = 1;
          }
          goto LABEL_13;
        }
        if ( sub_50D970(a1, *(_QWORD *)(a2 + 32), a3, a4, a5) )
        {
          *a6 = 0;
          sub_1831620(qword_1C7F2C0, a4);
LABEL_13:
          v14 = *a3;
          *a3 = *a5;
          *a5 = v14;
          return 1;
        }
      }
    }
    return 0;
  }
  if ( v11[1] != 5 )
    return 0;
  v17 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(a2 + 32)) + 24);
  if ( !v17 || *v17 != 5 || v17[1] != 1 )
  {
    if ( *(_WORD *)(a2 + 4) )
      return 0;
    v11 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v11 )
      return 0;
    goto LABEL_5;
  }
  v30 = *(_QWORD *)(a2 + 32);
  *a6 = 1;
  if ( !(unsigned __int8)sub_50D4D0(a1, v30, a5, a3, a4, 1u)
    || !(unsigned __int8)sub_50D4D0(a1, *(_QWORD *)(a2 + 40), a5, a3, a4, 0) )
  {
    return 0;
  }
  v29 = qword_1C7F2C0;
  v31 = qword_1C7F280;
  if ( qword_1C7F280 )
  {
    if ( *(_DWORD *)a4 )
    {
      if ( (*(_BYTE *)(a4 + 20) & 1) != 0
        || *(_DWORD *)(a4 + 16) != 1
        || (qword_1C7F290 & 0x100000000LL) != 0
        || (_DWORD)qword_1C7F290 != 1 )
      {
        sub_1851D20(qword_1C7F2C0, a4, &qword_1C7F280, a4);
        goto LABEL_35;
      }
      sub_1831A80(qword_1C7F2C0, a4, &qword_1C7F280, a4);
      goto LABEL_61;
    }
    if ( (*(_BYTE *)(&qword_1C7F280 + 1) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, a4, &qword_1C7F280);
    }
    else
    {
      *(_BYTE *)(a4 + 4) &= ~1u;
      *(_DWORD *)a4 = v31;
    }
    if ( (qword_1C7F290 & 0x100000000LL) != 0 )
    {
      sub_182C690(v29, v10, &qword_1C7F290);
    }
    else
    {
      v35 = qword_1C7F290;
      *(_BYTE *)(a4 + 20) &= ~1u;
      *(_DWORD *)(a4 + 16) = v35;
    }
  }
  else
  {
    v33 = *(_BYTE *)(a4 + 4);
    if ( (v33 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, a4, a4);
    else
      *(_BYTE *)(a4 + 4) = v33 & 0xFE;
    v34 = *(_BYTE *)(a4 + 20);
    if ( (v34 & 1) != 0 )
      sub_182C690(v29, v10, v10);
    else
      *(_BYTE *)(a4 + 20) = v34 & 0xFE;
  }
LABEL_35:
  if ( *a3 != -1 )
    return 1;
  return *a5 != -1;
}

