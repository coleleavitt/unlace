_QWORD *__fastcall sub_789AD0(__int64 a1, __int64 a2)
{
  char v2; // r13
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rdi
  unsigned __int64 v7; // r14
  char v8; // r12
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rbx
  char v15; // al
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbx
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rdx
  __int64 v32; // rdi
  int v33; // eax
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a2;
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 33 <= 3 )
  {
    v4 = a1 + 72;
    v5 = *(_QWORD *)(sub_79A2E0(a1 + 72) + 16);
    v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v5 & 4) != 0 )
      v6 = (_QWORD *)*v6;
    if ( v6 && (unsigned __int8)sub_7A3730(v6 - 8) )
    {
      v19 = *(_QWORD *)(sub_79A2E0(v4) + 16);
      v20 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v19 & 4) != 0 )
        v20 = (_QWORD *)*v20;
      if ( v20 )
      {
        v21 = v20[8];
        if ( v21 )
        {
          if ( (*(_BYTE *)(v21 + 10) & 0x20) != 0
            && (*(_DWORD *)(a1 + 40) & 7) == 6
            && *(_DWORD *)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL) == 42 )
          {
            v22 = *(_QWORD *)(a1 + 152);
            if ( (v22 & 4) != 0 )
            {
              if ( (*(_QWORD *)(a1 + 152) & 6LL) != 4 || (v23 = v22 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                BUG();
              v13 = *(_QWORD **)((*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 48);
LABEL_12:
              if ( (unsigned __int8)sub_788760(v13, v38) )
              {
                v11 = v38[0];
                if ( v38[0] )
                  return (_QWORD *)v11;
              }
              return v13;
            }
          }
        }
      }
    }
  }
  v7 = a1;
  v8 = 0;
  while ( (*(_BYTE *)(v7 + 82) & 0x40) == 0 )
  {
    v15 = *(_BYTE *)(v7 + 83);
    if ( (v15 & 2) != 0 || (v15 & 8) == 0 && ((*(_BYTE *)(v7 + 128) & 1) != 0 || *(_QWORD *)(v7 + 128)) )
      break;
    if ( (v15 & 0x40) != 0
      || (*(_BYTE *)(v7 + 84) & 0x60) != 0
      || (unsigned __int8)sub_799100(v7)
      || (unsigned __int8)sub_780CE0(v7, a2) )
    {
      break;
    }
    v16 = *(_QWORD *)(v7 + 104);
    if ( (v16 & 1) != 0 )
    {
      if ( v8 )
        goto LABEL_63;
      v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v16 & 1) != 0 )
      {
        v8 = 1;
        goto LABEL_54;
      }
LABEL_27:
      if ( v17 <= 3 )
      {
        v8 = 1;
        v7 = v16 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_62;
      }
      v18 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v17 & 2) != 0 )
      {
        v8 = 1;
LABEL_70:
        a2 = v7;
        v34 = sub_6D4E90(v18, v7);
        v17 = v34 & 0xFFFFFFFFFFFFFFFELL;
        v16 = v34 | 1;
        *(_QWORD *)(v7 + 104) = v16;
LABEL_54:
        if ( !v17 )
          goto LABEL_63;
        goto LABEL_55;
      }
      if ( (_QWORD *)a1 == v18 )
        goto LABEL_63;
      v7 = (unsigned __int64)v18;
      v8 = 1;
    }
    else if ( (v16 & 2) != 0 )
    {
      if ( v8 )
        goto LABEL_63;
      v8 = 1;
      v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v16 & 1) == 0 )
        goto LABEL_27;
LABEL_55:
      v30 = v16 & 0xFFFFFFFFFFFFFFF8LL;
      v31 = v16 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v17 & 4) != 0 )
      {
        if ( !v30 )
          goto LABEL_63;
        v32 = *(_QWORD *)v30;
        v33 = *(_DWORD *)(*(_QWORD *)v30 + 12LL);
        if ( *(_DWORD *)(v30 + 8) != v33 )
        {
          *(_DWORD *)(v30 + 8) = v33;
          a2 = v7;
          (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v32 + 144LL))(v32, v7, v31);
        }
        v31 = *(_QWORD *)(v30 + 16);
      }
      if ( a1 == v31 )
      {
LABEL_63:
        v7 = a1;
        break;
      }
      v7 = v31;
LABEL_62:
      if ( !v7 )
        goto LABEL_63;
    }
    else
    {
      v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v16 & 1) != 0 )
        goto LABEL_54;
      if ( v17 <= 3 )
        goto LABEL_63;
      v18 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v17 & 2) != 0 )
        goto LABEL_70;
      if ( (_QWORD *)a1 == v18 )
        goto LABEL_63;
      v7 = (unsigned __int64)v18;
    }
  }
  v9 = (__int64 *)sub_780C90(v7);
  v11 = (unsigned __int64)v9;
  if ( !v9 )
  {
    if ( v2 && (sub_781200(a1) & 0xFFFFFFFD) == 0 )
      return (_QWORD *)v11;
    v24 = *(_QWORD *)(a1 + 152);
    if ( !v24 )
      return (_QWORD *)v11;
    v25 = *(_QWORD *)(a1 + 152) & 6LL;
    if ( v25 != 4 )
      return (_QWORD *)v11;
    v26 = v24 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v26 )
      return (_QWORD *)v11;
    v27 = *(_QWORD *)(v26 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v27 )
      return (_QWORD *)v11;
    if ( v2 )
    {
      while ( (*(_BYTE *)sub_7D2DE0(v27, 0, v25, v10) & 4) == 0 )
      {
        v35 = *(_QWORD *)sub_7D2DE0(v27, 0, v36, v37);
        v25 = v35 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v35 <= 7 )
          break;
        v27 = v35 & 0xFFFFFFFFFFFFFFF8LL;
      }
      v25 = v27;
    }
    else
    {
      do
      {
        v28 = (unsigned __int64 *)sub_7D2DE0(v27, 0, v25, v10);
        v25 = v27;
        v29 = *v28;
        v27 = v29 & 0xFFFFFFFFFFFFFFF8LL;
      }
      while ( v29 > 7 );
    }
    v13 = *(_QWORD **)(v25 + 48);
    goto LABEL_12;
  }
  v12 = *v9;
  if ( !v2 || (v12 & 6) != 2 )
  {
    v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
    goto LABEL_12;
  }
  return nullptr;
}

