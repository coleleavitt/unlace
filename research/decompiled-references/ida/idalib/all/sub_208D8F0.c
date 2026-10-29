__int64 __fastcall sub_208D8F0(__int64 a1, char a2)
{
  __int64 v2; // r12
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rdi
  _QWORD *v29; // r8
  __int64 v30; // rsi
  __int64 v31; // rcx
  _QWORD *v32; // rcx
  __int64 v33; // rsi

  v2 = a1 + 72;
  v4 = *(_QWORD *)(a1 + 80);
  *(_WORD *)(a1 + 34) &= ~0x800u;
  if ( v4 != a1 + 72 )
  {
    do
    {
      while ( v4 )
      {
        sub_204C2F0(v4 - 24);
        v4 = *(_QWORD *)(v4 + 8);
        if ( v2 == v4 )
          goto LABEL_4;
      }
      sub_204C2F0(0);
      v4 = 0;
    }
    while ( a1 != -72 );
  }
LABEL_4:
  while ( v2 != *(_QWORD *)(a1 + 72) )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 80);
      if ( !v5 )
        break;
      sub_204C090((char *)(v5 - 24));
      if ( v2 == *(_QWORD *)(a1 + 72) )
        goto LABEL_7;
    }
    sub_204C090(nullptr);
  }
LABEL_7:
  if ( (*(_DWORD *)(a1 + 4) & 0x7FFFFFF) != 0 )
  {
    if ( a2 )
    {
      v6 = 4LL * (*(_DWORD *)(a1 + 4) & 0x7FFFFFF);
      if ( (*(_BYTE *)(a1 + 7) & 0x40) != 0 )
      {
        v7 = *(_QWORD **)(a1 - 8);
        v8 = &v7[v6];
      }
      else
      {
        v7 = (_QWORD *)(a1 - v6 * 8);
        v8 = (_QWORD *)a1;
      }
      do
      {
        v9 = (_QWORD *)v7[2];
        if ( v9 )
        {
          v10 = v7[1];
          *v9 = v10;
          if ( v10 )
          {
            *(_QWORD *)(v10 + 16) = v9;
            v7[1] = 0;
          }
          v7[2] = 0;
        }
        *v7 = 0;
        v7 += 4;
      }
      while ( v8 != v7 );
      *(_DWORD *)(a1 + 4) &= 0xF8000000;
      *(_WORD *)(a1 + 2) &= 0xFFF1u;
      return sub_20A0EA0(a1);
    }
    v12 = (_QWORD *)sub_20C5480(**(_QWORD **)(a1 + 8), 0);
    v17 = sub_2057660(v12, 0, v13, v14, v15, v16);
    v18 = *(__int64 **)(a1 - 8);
    v19 = (__int64 *)v18[2];
    if ( v19 )
    {
      v20 = v18[1];
      *v19 = v20;
      if ( v20 )
      {
        *(_QWORD *)(v20 + 16) = v19;
        v18[1] = 0;
      }
      v18[2] = 0;
    }
    *v18 = v17;
    if ( v17 )
    {
      if ( *(_BYTE *)v17 > 9u )
      {
        v21 = *(_QWORD *)(v17 + 16);
        v18[1] = v21;
        if ( v21 )
          *(_QWORD *)(v21 + 16) = v18 + 1;
        v18[2] = v17 + 16;
        *(_QWORD *)(v17 + 16) = v18;
      }
      v22 = *(_QWORD **)(a1 - 8);
      v23 = (_QWORD *)v22[6];
      if ( v23 )
      {
        v24 = v22[5];
        *v23 = v24;
        if ( v24 )
        {
          *(_QWORD *)(v24 + 16) = v23;
          v22[5] = 0;
        }
        v22[6] = 0;
      }
      v22[4] = v17;
      if ( *(_BYTE *)v17 > 9u )
      {
        v25 = *(_QWORD *)(v17 + 16);
        v22[5] = v25;
        if ( v25 )
          *(_QWORD *)(v25 + 16) = v22 + 5;
        v22[6] = v17 + 16;
        *(_QWORD *)(v17 + 16) = v22 + 4;
      }
      v26 = *(_QWORD **)(a1 - 8);
      v27 = (_QWORD *)v26[10];
      v28 = v26 + 8;
      v29 = v26 + 9;
      if ( v27 )
      {
        v30 = v26[9];
        *v27 = v30;
        if ( v30 )
          goto LABEL_40;
        v26[10] = 0;
      }
      v26[8] = v17;
LABEL_41:
      if ( *(_BYTE *)v17 > 9u )
      {
        v31 = *(_QWORD *)(v17 + 16);
        v26[9] = v31;
        if ( v31 )
          *(_QWORD *)(v31 + 16) = v29;
        v26[10] = v17 + 16;
        *(_QWORD *)(v17 + 16) = v28;
      }
      goto LABEL_45;
    }
    v26 = *(_QWORD **)(a1 - 8);
    v32 = (_QWORD *)v26[6];
    if ( v32 )
    {
      v33 = v26[5];
      *v32 = v33;
      if ( v33 )
      {
        *(_QWORD *)(v33 + 16) = v32;
        v26[5] = 0;
      }
      v26[6] = 0;
      v26[4] = 0;
      v26 = *(_QWORD **)(a1 - 8);
    }
    else
    {
      v26[4] = 0;
    }
    v27 = (_QWORD *)v26[10];
    if ( !v27 )
    {
      v26[8] = 0;
      goto LABEL_45;
    }
    v30 = v26[9];
    v28 = v26 + 8;
    v29 = v26 + 9;
    *v27 = v30;
    if ( !v30 )
    {
      v26[10] = 0;
      v26[8] = 0;
      goto LABEL_45;
    }
LABEL_40:
    *(_QWORD *)(v30 + 16) = v27;
    v26[9] = 0;
    v26[10] = 0;
    v26[8] = v17;
    if ( v17 )
      goto LABEL_41;
LABEL_45:
    *(_WORD *)(a1 + 2) &= 0xFFF1u;
  }
  return sub_20A0EA0(a1);
}
