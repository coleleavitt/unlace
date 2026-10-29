void __fastcall sub_79C790(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  char v4; // al
  __int64 v5; // rsi
  _QWORD *v6; // r8
  _QWORD *v7; // rsi
  signed __int64 v8; // r9
  _BYTE *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // r8
  _QWORD *v15; // rsi
  signed __int64 v16; // r9
  _BYTE *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  unsigned __int64 v20; // rax

  if ( a1 )
  {
    v2 = a1;
    while ( 1 )
    {
      v3 = v2[9];
      v4 = *(_BYTE *)v2 & 1;
      if ( !(_BYTE)a2 )
        break;
      if ( v4 )
      {
        v6 = v2 + 1;
        v7 = v2 + 9;
        goto LABEL_8;
      }
      v5 = *((unsigned int *)v2 + 4);
      if ( (_DWORD)v5 )
      {
        v6 = (_QWORD *)v2[1];
        v7 = &v6[2 * v5];
LABEL_8:
        while ( 1 )
        {
          if ( *v6 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v8 = v6[1] & 0xFFFFFFFFFFFFFFFCLL;
            if ( (unsigned __int64)v8 > 7 )
              break;
          }
LABEL_7:
          v6 += 2;
          if ( v6 == v7 )
          {
LABEL_17:
            if ( (*(_BYTE *)v2 & 1) != 0 )
              goto LABEL_18;
            goto LABEL_44;
          }
        }
        v9 = (_BYTE *)(v6[1] & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v6[1] & 4) != 0 )
        {
          if ( ((v8 >> 2) & 1) == 0 )
            v9 = nullptr;
          v10 = *(_QWORD *)v9;
          if ( (*(_BYTE *)(*(_QWORD *)v9 + 28LL) & 0x7F) == 0 )
          {
LABEL_12:
            v11 = *(_QWORD *)(v10 + 88);
            while ( (v8 & 4) != 0 )
            {
              v12 = v8 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                break;
              v8 = *(_QWORD *)(v12 + 8);
              *(_QWORD *)(v12 + 8) = *(_QWORD *)(v11 + 17336) | 4LL;
              *(_QWORD *)(v11 + 17336) = v12;
              if ( !v8 )
              {
                v6 += 2;
                if ( v6 != v7 )
                  goto LABEL_8;
                goto LABEL_17;
              }
            }
            goto LABEL_7;
          }
        }
        else
        {
          v10 = v6[1] & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v9[28] & 0x7F) == 0 )
            goto LABEL_12;
        }
        v10 = sub_793320(v10);
        goto LABEL_12;
      }
LABEL_44:
      operator delete();
LABEL_18:
      operator delete(v2, 0x58u);
LABEL_19:
      v2 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
      a2 = (v3 >> 2) & 1;
      if ( (unsigned __int64)v3 <= 7 )
        return;
    }
    if ( v4 )
    {
      v14 = v2 + 1;
      v15 = v2 + 9;
      goto LABEL_25;
    }
    v13 = *((unsigned int *)v2 + 4);
    if ( !(_DWORD)v13 )
    {
LABEL_45:
      operator delete();
LABEL_35:
      operator delete(v2, 0x50u);
      goto LABEL_19;
    }
    v14 = (_QWORD *)v2[1];
    v15 = &v14[2 * v13];
LABEL_25:
    while ( 1 )
    {
      if ( *v14 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v16 = v14[1] & 0xFFFFFFFFFFFFFFFCLL;
        if ( (unsigned __int64)v16 > 7 )
          break;
      }
LABEL_24:
      v14 += 2;
      if ( v14 == v15 )
      {
LABEL_34:
        if ( (*(_BYTE *)v2 & 1) != 0 )
          goto LABEL_35;
        goto LABEL_45;
      }
    }
    v17 = (_BYTE *)(v14[1] & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v14[1] & 4) != 0 )
    {
      if ( ((v16 >> 2) & 1) == 0 )
        v17 = nullptr;
      v18 = *(_QWORD *)v17;
      if ( (*(_BYTE *)(*(_QWORD *)v17 + 28LL) & 0x7F) == 0 )
      {
LABEL_29:
        v19 = *(_QWORD *)(v18 + 88);
        while ( (v16 & 4) != 0 )
        {
          v20 = v16 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v16 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            break;
          v16 = *(_QWORD *)(v20 + 8);
          *(_QWORD *)(v20 + 8) = *(_QWORD *)(v19 + 17336) | 4LL;
          *(_QWORD *)(v19 + 17336) = v20;
          if ( !v16 )
          {
            v14 += 2;
            if ( v14 != v15 )
              goto LABEL_25;
            goto LABEL_34;
          }
        }
        goto LABEL_24;
      }
    }
    else
    {
      v18 = v14[1] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v17[28] & 0x7F) == 0 )
        goto LABEL_29;
    }
    v18 = sub_793320(v18);
    goto LABEL_29;
  }
}

