__int64 __fastcall sub_B89910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // r13
  _QWORD *v29; // rbx
  __int64 result; // rax
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rax
  _QWORD *v37; // rdx
  _QWORD *v38; // r12
  _QWORD *v39; // rbx
  __int64 v40; // rax
  unsigned __int64 v41; // rdi

  v8 = *(_QWORD *)(a2 + 88);
  v9 = v8;
  v10 = sub_B70930(a1 + 48, v8, a3, a4, a5, a6);
  if ( !v10 )
    goto LABEL_8;
  while ( 1 )
  {
    v14 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v10 & 4) == 0 )
      break;
    if ( !v14 )
      goto LABEL_8;
    v11 = *(_QWORD *)v14;
    if ( (*(_BYTE *)(*(_QWORD *)v14 + 28LL) & 0x7F) == 0x12
      && (*(_BYTE *)(v11 + 58) & 2) != 0
      && (*(_BYTE *)(v11 + 29) & 2) == 0 )
    {
      return 1;
    }
    v10 = *(_QWORD *)(v14 + 8);
    if ( !v10 )
      goto LABEL_8;
  }
  if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x12 && (*(_BYTE *)(v14 + 58) & 2) != 0 )
  {
    if ( (*(_BYTE *)(v14 + 29) & 2) == 0 )
      return 1;
    v15 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( (_BYTE)v15 != 20 )
    {
LABEL_25:
      result = 0;
      if ( (_BYTE)v15 == 19 )
      {
        v36 = sub_B867E0(a1, v9, v15, v11, v12, v13);
        v38 = v37;
        v39 = (_QWORD *)v36;
        if ( (_QWORD *)v36 == v37 )
        {
          return 0;
        }
        else
        {
          while ( 1 )
          {
            result = sub_B89910(*v39, a2);
            if ( (_BYTE)result )
              break;
            if ( v38 == ++v39 )
              return 0;
          }
        }
      }
      return result;
    }
  }
  else
  {
LABEL_8:
    v15 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( (_BYTE)v15 != 20 )
      goto LABEL_25;
  }
  v20 = sub_B89430(a1, v8, v15, v11, v12, v13);
  if ( !v20 )
    goto LABEL_18;
LABEL_10:
  v9 = v8;
  v21 = sub_B86DC0(v20, v8, 1, v17, v18, v19);
  if ( v21 && (*(_BYTE *)(v21 + 29) & 2) == 0 )
    return 1;
  v22 = *(_QWORD *)(v20 + 40);
  if ( (v22 & 7) != 0 )
    goto LABEL_14;
  if ( (v22 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_14;
  v40 = sub_B6AC30(v20 + 48);
  if ( !v40 )
    goto LABEL_14;
  if ( (*(_BYTE *)(v40 + 28) & 0x7F) != 0x4B )
  {
    do
    {
      v16 = *(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v40 = v16;
      if ( !v16 )
        goto LABEL_14;
    }
    while ( (*(_BYTE *)(v16 + 28) & 0x7F) != 0x4B );
  }
  v9 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  v17 = *(_QWORD *)(a2 + 40) & 7LL;
LABEL_43:
  v16 = *(_QWORD *)(v40 + 40);
  if ( (v16 & 7) != 0 )
  {
    if ( (_DWORD)v17 )
      goto LABEL_53;
    v16 = 0;
    goto LABEL_45;
  }
  v16 &= 0xFFFFFFFFFFFFFFF8LL;
  v41 = 0;
  if ( !(_DWORD)v17 )
LABEL_45:
    v41 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v41 == v16 )
  {
LABEL_53:
    if ( (*(_BYTE *)(v40 + 72) & 8) != 0 )
      return 1;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v40 = v16;
    if ( !v16 )
      break;
    if ( (*(_BYTE *)(v16 + 28) & 0x7F) == 0x4B )
      goto LABEL_43;
  }
LABEL_14:
  while ( 1 )
  {
    v20 = *(_QWORD *)(v20 + 128);
    if ( !v20 )
      break;
    while ( *(char *)(v20 + 28) >= 0 )
    {
      if ( (*(_BYTE *)(v20 + 8) & 6) == 0 )
        goto LABEL_10;
      v20 = *(_QWORD *)(v20 + 128);
      if ( !v20 )
        goto LABEL_18;
    }
  }
LABEL_18:
  v23 = sub_B87700(a1, v9, v16, v17, v18, v19);
  v28 = (_QWORD *)v24;
  v29 = (_QWORD *)v23;
  if ( v23 == v24 )
  {
LABEL_21:
    v31 = sub_B878F0(a1, v9, v24, v25, v26, v27);
    if ( !v31 )
    {
LABEL_24:
      v15 = *(_BYTE *)(a1 + 28) & 0x7F;
      goto LABEL_25;
    }
    while ( 1 )
    {
      v9 = a2;
      if ( (unsigned __int8)sub_B89910(v31, a2) )
        return 1;
      v31 = sub_B878F0(v31, a2, v32, v33, v34, v35);
      if ( !v31 )
        goto LABEL_24;
    }
  }
  while ( 1 )
  {
    v9 = a2;
    result = sub_B89910(*v29, a2);
    if ( (_BYTE)result )
      return result;
    if ( v28 == ++v29 )
      goto LABEL_21;
  }
}

