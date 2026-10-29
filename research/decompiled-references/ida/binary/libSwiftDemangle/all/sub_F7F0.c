unsigned __int64 __fastcall sub_F7F0(__int64 a1, __int16 a2, char a3)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  bool v7; // bl
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int16 v12; // di
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rsi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi

  v5 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v5;
  if ( !v5 || (v6 = v5 + 24, v5 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v22 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v22 < 0x20 )
      v22 = 32;
    *(_QWORD *)(a1 + 32) = v22;
    v23 = v22 + 8;
    v24 = malloc(v22 + 8);
    v25 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v24;
    *v24 = v25;
    v5 = ((unsigned __int64)v24 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v24 + v23;
    v6 = v5 + 24;
  }
  *(_QWORD *)(a1 + 8) = v6;
  *(_WORD *)(v5 + 16) = a2;
  *(_BYTE *)(v5 + 18) = 0;
  v7 = v5 == 0;
  if ( a3 )
  {
    v26 = sub_F6D0((_QWORD *)a1);
    v7 = v5 == 0 || v26 == 0;
    if ( v7 )
      v7 = v5 == 0;
    else
      sub_C080(v5, v26, (_QWORD *)a1);
  }
  v8 = *(_DWORD *)(a1 + 96);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 88);
    v10 = (unsigned int)(v8 - 1);
    v11 = *(_QWORD *)(v9 + 8 * v10);
    v12 = *(_WORD *)(v11 + 16);
    if ( v12 == 64 )
    {
      *(_DWORD *)(a1 + 96) = v10;
      if ( v11 && !v7 )
        sub_C080(v5, v11, (_QWORD *)a1);
      v8 = *(_DWORD *)(a1 + 96);
      if ( !v8 )
        goto LABEL_33;
      v9 = *(_QWORD *)(a1 + 88);
      v10 = (unsigned int)(v8 - 1);
      v11 = *(_QWORD *)(v9 + 8 * v10);
      v12 = *(_WORD *)(v11 + 16);
    }
    if ( v12 == 65 )
    {
      *(_DWORD *)(a1 + 96) = v10;
      if ( v11 && !v7 )
        sub_C080(v5, v11, (_QWORD *)a1);
      v8 = *(_DWORD *)(a1 + 96);
      if ( !v8 )
        goto LABEL_33;
      v9 = *(_QWORD *)(a1 + 88);
    }
    v13 = (unsigned int)(v8 - 1);
    v14 = *(_QWORD *)(v9 + 8 * v13);
    if ( *(_WORD *)(v14 + 16) == 261 )
    {
      *(_DWORD *)(a1 + 96) = v13;
      if ( v14 && !v7 )
        sub_C080(v5, v14, (_QWORD *)a1);
      v8 = *(_DWORD *)(a1 + 96);
      if ( !v8 )
        goto LABEL_33;
      v9 = *(_QWORD *)(a1 + 88);
    }
    v15 = (unsigned int)(v8 - 1);
    v16 = *(_QWORD *)(v9 + 8 * v15);
    if ( *(_WORD *)(v16 + 16) != 63 )
    {
LABEL_29:
      v17 = (unsigned int)(v8 - 1);
      v18 = *(_QWORD *)(v9 + 8 * v17);
      if ( *(_WORD *)(v18 + 16) == 260 )
      {
        *(_DWORD *)(a1 + 96) = v17;
        if ( v18 )
        {
          if ( !v7 )
            sub_C080(v5, v18, (_QWORD *)a1);
        }
      }
      goto LABEL_33;
    }
    *(_DWORD *)(a1 + 96) = v15;
    if ( v16 && !v7 )
      sub_C080(v5, v16, (_QWORD *)a1);
    v8 = *(_DWORD *)(a1 + 96);
    if ( v8 )
    {
      v9 = *(_QWORD *)(a1 + 88);
      goto LABEL_29;
    }
  }
LABEL_33:
  v19 = sub_E630(a1, 3);
  if ( !v19 || v7 )
  {
    v5 = 0;
    sub_E630(a1, 196);
  }
  else
  {
    sub_C080(v5, v19, (_QWORD *)a1);
    v20 = sub_E630(a1, 196);
    if ( v20 && v5 )
      sub_C080(v5, v20, (_QWORD *)a1);
    else
      v5 = 0;
  }
  return sub_CD20((_QWORD *)a1, 221, v5);
}

