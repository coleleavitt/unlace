_QWORD *__fastcall sub_595E90(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r11
  int v9; // edx
  int v10; // esi
  bool v11; // al
  bool v12; // r10
  _BYTE *v13; // r11
  bool v14; // al
  __int64 v15; // rax
  __int64 v16; // rbx
  _QWORD *result; // rax
  bool v18; // al
  _QWORD *v19; // r10
  __int64 v20; // rax
  _QWORD *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // rax
  _BYTE *v29; // rdx
  _BYTE *v30; // rsi
  int v31; // ebx
  _BYTE *v32; // r8
  _BYTE *v33; // rax
  _BYTE *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax

  v4 = a2;
  v5 = a3;
  v6 = a2[1];
  v7 = a3[1];
  if ( a1 == v6 || a1 == v7 )
  {
    v9 = *(_DWORD *)(v6 + 32);
    v10 = *(_DWORD *)(v7 + 32);
    v11 = v9 == 4;
    v12 = v10 == 4;
    if ( a4 && *(_DWORD *)(a4[1] + 32LL) == 4 )
      goto LABEL_6;
    goto LABEL_16;
  }
  if ( !a4 )
  {
    v27 = *(_DWORD *)(v6 + 32);
    v10 = *(_DWORD *)(v7 + 32);
    v18 = v10 == 4 && v27 == 4;
    if ( v27 != 4 )
      goto LABEL_17;
    goto LABEL_21;
  }
  v8 = a4[1];
  if ( a1 != v8 )
    return nullptr;
  v9 = *(_DWORD *)(v6 + 32);
  v10 = *(_DWORD *)(v7 + 32);
  v11 = v9 == 4;
  v12 = v10 == 4;
  if ( *(_DWORD *)(v8 + 32) != 4 )
  {
LABEL_16:
    v18 = v12 && v11;
    if ( v9 != 4 )
    {
LABEL_17:
      if ( v10 != 4 )
      {
        if ( v18 && !a4 )
          goto LABEL_99;
        goto LABEL_12;
      }
      v21 = (_QWORD *)v5[8];
      if ( !v18 )
      {
        v28 = v5[7];
        if ( v28 && *(_DWORD *)(v28 - 4) )
          return nullptr;
        goto LABEL_46;
      }
      if ( !a4 )
      {
        v29 = (_BYTE *)v5[4];
        v5 = (_QWORD *)v5[8];
        v30 = (_BYTE *)&dword_40;
        v19 = v4;
        v13 = nullptr;
        goto LABEL_59;
      }
      v23 = v5[7];
      v19 = v4;
      if ( !v23 )
      {
LABEL_46:
        v5 = (_QWORD *)v5[8];
        goto LABEL_12;
      }
      goto LABEL_30;
    }
LABEL_21:
    v19 = (_QWORD *)v4[8];
    if ( v10 == 4 )
    {
      v21 = (_QWORD *)v5[8];
      if ( !v18 || a4 )
      {
        v22 = v4[7];
        if ( v22 )
        {
          if ( *(_DWORD *)(v22 - 4) )
            return nullptr;
          v36 = v5[7];
          if ( v36 )
          {
            v5 = (_QWORD *)v5[8];
            v4 = (_QWORD *)v4[8];
            if ( *(_DWORD *)(v36 - 4) )
              return nullptr;
LABEL_12:
            v16 = sub_4C4940(*(_QWORD *)(a1 + 24), (__int64)v4, (__int64)v5, (__int64)a4);
            if ( v16 )
            {
              result = (_QWORD *)sub_186B270(0x10u);
              *result = &off_1C51F08;
              result[1] = v16;
              return result;
            }
            return nullptr;
          }
          goto LABEL_66;
        }
        v23 = v5[7];
        if ( !v23 )
        {
LABEL_66:
          v5 = v21;
          goto LABEL_25;
        }
LABEL_30:
        if ( *(_DWORD *)(v23 - 4) )
          return nullptr;
        goto LABEL_66;
      }
      v13 = (_BYTE *)v4[4];
      v29 = (_BYTE *)v5[4];
      v5 = (_QWORD *)v5[8];
      if ( v13 )
      {
LABEL_57:
        v30 = v13;
        v13 = nullptr;
        goto LABEL_59;
      }
    }
    else
    {
      if ( !v18 || a4 )
      {
        v20 = v4[7];
        if ( v20 && *(_DWORD *)(v20 - 4) )
          return nullptr;
        goto LABEL_25;
      }
      v13 = (_BYTE *)v4[4];
      v29 = (_BYTE *)&dword_40;
      if ( v13 )
        goto LABEL_57;
    }
    if ( v29 )
    {
LABEL_77:
      v31 = *((_DWORD *)v29 - 1);
      if ( v31 )
        return nullptr;
      if ( a4 )
      {
        v34 = (_BYTE *)a4[4];
        if ( v34 )
        {
          v30 = nullptr;
          v32 = nullptr;
          goto LABEL_69;
        }
      }
LABEL_83:
      a4 = v13;
      v4 = v19;
      goto LABEL_12;
    }
LABEL_25:
    v4 = v19;
    goto LABEL_12;
  }
LABEL_6:
  v13 = (_BYTE *)a4[8];
  v14 = v12 && v11;
  if ( v9 != 4 )
  {
    if ( v10 != 4 )
    {
      if ( !v14 )
      {
LABEL_9:
        v15 = a4[7];
        if ( !v15 || !*(_DWORD *)(v15 - 4) )
        {
          a4 = (_QWORD *)a4[8];
          goto LABEL_12;
        }
        return nullptr;
      }
LABEL_99:
      BUG();
    }
    if ( v14 )
      goto LABEL_99;
    v26 = v5[7];
    v5 = (_QWORD *)v5[8];
    if ( !v26 )
      goto LABEL_9;
    goto LABEL_41;
  }
  v19 = (_QWORD *)v4[8];
  if ( v10 != 4 )
  {
    if ( !v14 )
    {
      v24 = v4[7];
      if ( v24 && *(_DWORD *)(v24 - 4) )
        return nullptr;
      v4 = (_QWORD *)v4[8];
      goto LABEL_9;
    }
    v30 = (_BYTE *)v4[4];
    v29 = (_BYTE *)&dword_40;
    if ( !v30 )
    {
LABEL_76:
      if ( !v29 )
      {
        v35 = a4[4];
        if ( v35 && *(_DWORD *)(v35 - 4) )
          return nullptr;
        goto LABEL_83;
      }
      goto LABEL_77;
    }
LABEL_59:
    v31 = *((_DWORD *)v30 - 1);
    if ( v29 )
    {
      if ( *((_DWORD *)v29 - 1) != v31 )
        return nullptr;
      v32 = &v30[v31];
      if ( v32 == v30 )
      {
        if ( !a4 )
          goto LABEL_83;
        v34 = (_BYTE *)a4[4];
        if ( !v34 )
          goto LABEL_83;
        v31 = 0;
      }
      else
      {
        v33 = v30;
        do
        {
          if ( *v33 != *v29 )
            return nullptr;
          ++v33;
          ++v29;
        }
        while ( v32 != v33 );
        if ( !a4 )
          goto LABEL_83;
        v34 = (_BYTE *)a4[4];
        if ( !v34 )
          return nullptr;
      }
    }
    else
    {
      if ( v31 )
        return nullptr;
      if ( !a4 )
        goto LABEL_83;
      v34 = (_BYTE *)a4[4];
      if ( !v34 )
        goto LABEL_83;
      v32 = v30;
    }
LABEL_69:
    if ( *((_DWORD *)v34 - 1) != v31 )
      return nullptr;
    if ( v32 != v30 )
    {
      while ( *v30 == *v34 )
      {
        ++v30;
        ++v34;
        if ( v30 == v32 )
          goto LABEL_83;
      }
      return nullptr;
    }
    goto LABEL_83;
  }
  if ( v14 )
  {
    v30 = (_BYTE *)v4[4];
    v29 = (_BYTE *)v5[4];
    v5 = (_QWORD *)v5[8];
    if ( !v30 )
      goto LABEL_76;
    goto LABEL_59;
  }
  v25 = v4[7];
  if ( v25 && *(_DWORD *)(v25 - 4) )
    return nullptr;
  v26 = v5[7];
  v4 = (_QWORD *)v4[8];
  v5 = (_QWORD *)v5[8];
  if ( !v26 )
    goto LABEL_9;
LABEL_41:
  if ( !*(_DWORD *)(v26 - 4) )
    goto LABEL_9;
  return nullptr;
}

