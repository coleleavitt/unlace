__int64 __fastcall sub_7A4F50(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdi
  __int64 (*v8)(); // rax
  __int64 v9; // rbp
  __int64 (*v10)(); // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  __int64 v15; // r13
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // r13d
  unsigned __int64 v19; // rax

  v5 = *(_QWORD *)(sub_79A2E0(a1 + 72) + 16);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v5 & 4) != 0 )
    v6 = (_QWORD *)*v6;
  if ( !v6 )
    BUG();
  v7 = (__int64)(v6 - 8);
  v8 = *(__int64 (**)())(*(v6 - 8) + 32LL);
  if ( v8 == sub_6A41B0 )
    v9 = sub_777E10(v7);
  else
    v9 = ((__int64 (__fastcall *)(__int64))v8)(v7);
  v10 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v10 == sub_6A41B0 )
  {
    if ( v9 != sub_777E10(a2) )
    {
LABEL_8:
      if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x22 )
      {
        v19 = sub_7A4880(a2);
        v13 = v19;
        if ( v19 && ((unsigned __int8)sub_7A1D40(v19, a1) || a3 && (unsigned __int8)sub_7A1D40(a1, v13)) )
          return v13;
        return 0;
      }
      v11 = sub_7A0650(a2 + 64, *(_QWORD *)(a1 + 40));
      if ( !v11 )
        return 0;
      if ( !a3 )
      {
        while ( 1 )
        {
          v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
          v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v11 & 4) == 0 )
            break;
          if ( !v12 )
            goto LABEL_25;
          v13 = *(_QWORD *)v12;
          if ( (*(_BYTE *)(*(_QWORD *)v12 + 28LL) & 0x7Fu) - 33 <= 3 && (unsigned __int8)sub_7A1D40(*(_QWORD *)v12, a1) )
            return v13;
          v11 = *(_QWORD *)(v12 + 8);
          if ( !v11 )
            return 0;
        }
        if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 33 <= 3 && (unsigned __int8)sub_7A1D40(v12, a1) )
          return v13;
        return 0;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = v11;
          v16 = v11 & 0xFFFFFFFFFFFFFFF8LL;
          v17 = v16;
          v18 = (v15 >> 2) & 1;
          if ( v18 )
            break;
          if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 33 > 3 )
            return 0;
          v13 = v16;
LABEL_18:
          if ( (unsigned __int8)sub_7A1D40(v13, a1) || (unsigned __int8)sub_7A1D40(a1, v13) )
            return v13;
          if ( (_BYTE)v18 )
          {
            if ( v17 )
            {
              v11 = *(_QWORD *)(v17 + 8);
              if ( v11 )
                continue;
            }
          }
          return 0;
        }
        if ( !v16 )
LABEL_25:
          BUG();
        v13 = *(_QWORD *)v16;
        if ( (*(_BYTE *)(*(_QWORD *)v16 + 28LL) & 0x7Fu) - 33 <= 3 )
          goto LABEL_18;
        v11 = *(_QWORD *)(v16 + 8);
        if ( !v11 )
          return 0;
      }
    }
  }
  else if ( v9 != ((__int64 (__fastcall *)(__int64))v10)(a2) )
  {
    goto LABEL_8;
  }
  return a1;
}

