bool __fastcall sub_B6B7F0(_QWORD *a1, unsigned __int64 a2, __int64 a3, int a4, char a5)
{
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int8 v11; // bp
  __int64 v12; // rsi
  bool result; // al
  __int64 v14; // rax
  unsigned __int8 v15; // al
  int v16; // ebp
  void *v17; // rdi
  unsigned __int8 v18; // al
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  int v21; // ebp
  unsigned __int64 v22; // rax
  void *v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 *v25; // rcx
  bool v26; // zf
  char v27; // al
  unsigned __int64 v28; // rax
  _WORD *v29; // rdi
  int v30; // eax
  int v31; // eax
  bool v32; // [rsp+Fh] [rbp-49h]
  void *v33; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v34; // [rsp+18h] [rbp-40h]

  v9 = sub_A4E300(a1, a3);
  if ( !v9 || (v10 = v9, (unsigned int)*(unsigned __int8 *)(v9 + 16) - 2 > 1) )
  {
    v14 = sub_A4E300(a1, a3);
    if ( !v14 || *(_BYTE *)(v14 + 16) != 5 )
      return 0;
    v10 = 0;
    goto LABEL_13;
  }
  v11 = *(_BYTE *)(v9 + 19);
  v12 = *(_QWORD *)(v9 + 40);
  if ( (v11 & 2) != 0 )
  {
    LODWORD(v34) = *(_DWORD *)(v12 + 8);
    if ( (unsigned int)v34 <= 0x40 )
    {
      v33 = *(void **)v12;
      if ( a4 != 3 )
      {
LABEL_6:
        if ( !v33 )
          return 1;
        if ( a4 == 2 || a4 == 1 && (unsigned __int64)v33 > 1 )
          return 0;
LABEL_13:
        if ( !a2 )
          return 0;
        v15 = *(_BYTE *)(a2 + 28) & 0x7F;
        if ( v15 == 50 )
          return *(_QWORD *)(a2 + 80) == 0;
        if ( (unsigned int)v15 - 49 > 2 )
          return 0;
        if ( v10 )
        {
          v18 = *(_BYTE *)(v10 + 19);
          v19 = *(_QWORD *)(v10 + 40);
          if ( (v18 & 2) != 0 )
          {
            LODWORD(v34) = *(_DWORD *)(v19 + 8);
            if ( (unsigned int)v34 > 0x40 )
              sub_21E17D0(&v33);
            else
              v33 = *(void **)v19;
          }
          else
          {
            LODWORD(v34) = 8 * ((v18 >> 2) & 0x1F);
            if ( (int)v34 > 64 )
              sub_21E1730(&v33, v19, 0);
            else
              v33 = (void *)v19;
          }
          v20 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
            v20 = *(_QWORD *)v20;
          if ( (*(_BYTE *)(v20 + 8) & 0x7Fu) - 58 > 3 )
            BUG();
          v21 = v34;
          if ( *(_BYTE *)(v20 + 9) >> 5 == 2 )
          {
            if ( (unsigned int)v34 <= 0x40 )
            {
              if ( (unsigned __int64)v33 <= 1 )
                return 1;
              goto LABEL_40;
            }
            v31 = sub_21E2A40(&v33);
            if ( v31 == v21 || v31 == v21 - 1 )
            {
              if ( v33 )
                operator delete[](v33);
              return 1;
            }
            goto LABEL_38;
          }
          if ( (unsigned int)v34 > 0x40 )
          {
LABEL_38:
            if ( v33 )
              operator delete[](v33);
          }
        }
LABEL_40:
        if ( a5 )
        {
          v22 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
            v22 = *(_QWORD *)(v22 + 32);
          if ( v22 )
          {
            while ( 1 )
            {
              v23 = *(void **)v22;
              v34 = v22 + 8;
              v33 = v23;
              v24 = sub_B6B5B0((__int64 *)&v33);
              if ( !v24 )
                break;
              v25 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(v24 + 32) + 80LL) & 0xFFFFFFFFFFFFFFF8LL);
              v26 = (*(_QWORD *)(*(_QWORD *)(v24 + 32) + 80LL) & 4) == 0;
              v22 = (unsigned __int64)v25;
              if ( v26 )
              {
                if ( !v25 )
                  goto LABEL_49;
              }
              else
              {
                v22 = *v25;
                if ( !*v25 )
                  goto LABEL_49;
              }
            }
            if ( !((unsigned __int8)v33 & 7 | ((__int64)v33 >> 3) & 1)
              && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 2 <= 1 )
            {
              if ( v33 )
              {
                v29 = *(_WORD **)(v34 + 8);
                if ( !v29 || (*v29 & 0x1FF) != 0x34 || (int)sub_BDCD00(v29) < 0 )
                  return 0;
              }
            }
          }
        }
LABEL_49:
        while ( 1 )
        {
          v27 = *(_BYTE *)(a2 + 28);
          a2 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v27 & 0x7Fu) - 49 <= 2 )
            break;
          if ( !a2 )
            BUG();
        }
        if ( a2 )
        {
          if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 49 <= 2 )
            return 0;
          while ( 1 )
          {
            v28 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            a2 = v28;
            if ( !v28 )
              break;
            if ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 49 <= 2 )
              return 0;
          }
        }
        return 1;
      }
      return 0;
    }
    sub_21E17D0(&v33);
    v16 = v34;
  }
  else
  {
    v16 = 8 * ((v11 >> 2) & 0x1F);
    LODWORD(v34) = v16;
    if ( v16 > 64 )
    {
      sub_21E1730(&v33, v12, 0);
      v16 = v34;
    }
    else
    {
      v33 = (void *)v12;
    }
  }
  if ( a4 == 3 )
  {
    if ( (unsigned int)v16 <= 0x40 )
      return 0;
LABEL_75:
    v17 = v33;
    result = 0;
    goto LABEL_57;
  }
  if ( (unsigned int)v16 <= 0x40 )
    goto LABEL_6;
  if ( (unsigned int)sub_21E2A40(&v33) == v16 )
  {
    v17 = v33;
    result = 1;
    goto LABEL_57;
  }
  if ( a4 != 2 )
  {
    if ( a4 != 1 )
    {
      v17 = v33;
      goto LABEL_24;
    }
    if ( v16 - (unsigned int)sub_21E2A40(&v33) <= 0x40 )
    {
      v17 = v33;
      if ( *(_QWORD *)v33 <= 1u )
        goto LABEL_25;
      result = 0;
LABEL_58:
      v32 = result;
      operator delete[](v17);
      return v32;
    }
    goto LABEL_75;
  }
  v30 = sub_21E2A40(&v33);
  v17 = v33;
  if ( (unsigned int)(v16 - v30) <= 0x40 && !*(_QWORD *)v33 )
  {
LABEL_24:
    if ( !v17 )
      goto LABEL_13;
LABEL_25:
    operator delete[](v17);
    goto LABEL_13;
  }
  result = 0;
LABEL_57:
  if ( v17 )
    goto LABEL_58;
  return result;
}

