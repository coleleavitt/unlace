__int64 __fastcall sub_174E0(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 i; // r13
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  char v8; // al
  __int64 v9; // r14
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  unsigned __int8 v12; // al
  unsigned __int64 **v13; // rdx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // r15d
  int j; // eax
  __int64 v18; // r10
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int16 v21; // di
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned int v27; // eax
  _BYTE *v28; // r15
  __int64 v29; // r10
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  unsigned __int64 v33; // [rsp+10h] [rbp-48h]
  unsigned __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+18h] [rbp-40h]

  v2 = sub_151B0((_QWORD *)a1, 74);
  if ( !v2 )
  {
LABEL_35:
    v23 = *(_QWORD *)(a1 + 72);
    if ( v23 < *(_QWORD *)(a1 + 64) && *(_BYTE *)(*(_QWORD *)(a1 + 56) + v23) == 110 )
    {
      i = 0;
      *(_QWORD *)(a1 + 72) = v23 + 1;
      return i;
    }
    sub_14D20((_QWORD *)a1, 76);
    return 0;
  }
  for ( i = v2; ; sub_C080(i, v22, (_QWORD *)a1) )
  {
    v4 = *(_QWORD *)(a1 + 72);
    v5 = *(_QWORD *)(a1 + 64);
    if ( v5 > v4 )
    {
      v6 = *(_QWORD *)(a1 + 56);
      if ( *(_BYTE *)(v6 + v4) == 95 )
        break;
    }
    v22 = sub_14D20((_QWORD *)a1, 75);
    if ( !v22 )
      goto LABEL_35;
  }
  *(_QWORD *)(a1 + 72) = v4 + 1;
  if ( v4 + 1 < v5 && *(_BYTE *)(v6 + v4 + 1) == 110 )
  {
    *(_QWORD *)(a1 + 72) = v4 + 2;
    goto LABEL_9;
  }
  v7 = sub_14D20((_QWORD *)a1, 76);
  if ( !v7 )
    return 0;
  sub_C080(i, v7, (_QWORD *)a1);
LABEL_9:
  v8 = *(_BYTE *)(i + 18);
  switch ( v8 )
  {
    case 4:
      v9 = 1;
      v10 = 2;
      goto LABEL_13;
    case 5:
      v10 = *(unsigned int *)(i + 8);
      if ( !*(_DWORD *)(i + 8) )
        return i;
      v9 = v10 - 1;
      goto LABEL_13;
    case 3:
      v9 = 0;
      v10 = 1;
LABEL_13:
      v11 = v9;
      if ( v8 == 4 )
        goto LABEL_44;
LABEL_14:
      if ( v8 == 5 )
      {
        if ( *(unsigned int *)(i + 8) <= v11 )
          goto LABEL_42;
        v25 = *(_QWORD *)i;
      }
      else
      {
        if ( v8 != 3 || v11 )
          goto LABEL_42;
LABEL_40:
        v25 = i;
      }
      v26 = *(_QWORD *)(v25 + 8 * v11);
      if ( *(_WORD *)(v26 + 16) != 75 )
        goto LABEL_42;
      v12 = *(_BYTE *)(v26 + 18);
      if ( v12 > 4u )
      {
        if ( v12 != 5 || !*(_DWORD *)(v26 + 8) )
          goto LABEL_42;
        v13 = *(unsigned __int64 ***)v26;
      }
      else
      {
        v13 = (unsigned __int64 **)v26;
        if ( v12 <= 2u )
          goto LABEL_42;
      }
      v14 = **v13;
      if ( (unsigned int)v14 > 9 )
        goto LABEL_42;
      v15 = 563;
      if ( !_bittest64(&v15, v14) )
        goto LABEL_42;
      v35 = 2;
      if ( v12 != 4 )
      {
        v35 = 1;
        if ( v12 == 5 )
          v35 = *(unsigned int *)(v26 + 8);
      }
      v16 = (v14 - 5) & 0xFFFFFFFB;
LABEL_26:
      for ( j = *(_DWORD *)(a1 + 96); j; --j )
      {
        v18 = *(_QWORD *)(a1 + 88);
        v19 = (unsigned int)(j - 1);
        v20 = *(_QWORD *)(v18 + 8 * v19);
        v21 = *(_WORD *)(v20 + 16);
        if ( v21 != 221 )
          goto LABEL_55;
        *(_DWORD *)(a1 + 96) = v19;
        if ( !v20 )
        {
          if ( j == 1 )
            return 0;
          v27 = j - 2;
          v20 = *(_QWORD *)(v18 + 8LL * v27);
          LODWORD(v19) = v27;
          v21 = *(_WORD *)(v20 + 16);
LABEL_55:
          if ( v21 != 98 )
            return 0;
          *(_DWORD *)(a1 + 96) = v19;
          if ( !v20 )
            return 0;
          v28 = *(_BYTE **)v20;
          v29 = *(_QWORD *)(v20 + 8);
          if ( (_DWORD)v14 == 4 && v29 && *v28 == 95 )
          {
            --v29;
            ++v28;
          }
          v34 = v10;
          v32 = v29;
          v30 = sub_12C70((_QWORD *)a1, 1);
          *(_WORD *)(v30 + 16) = 78;
          *(_BYTE *)(v30 + 18) = 1;
          *(_QWORD *)v30 = v28;
          *(_QWORD *)(v30 + 8) = v32;
          sub_CCF0((_QWORD *)a1, v26, v30);
          sub_C3A0(v26, v35);
          v10 = v34;
LABEL_42:
          while ( 1 )
          {
            --v11;
            if ( v10 <= v9 - v11 )
              return i;
            v8 = *(_BYTE *)(i + 18);
            if ( v8 != 4 )
              goto LABEL_14;
LABEL_44:
            if ( v11 <= 1 )
              goto LABEL_40;
          }
        }
        if ( v16 )
          return 0;
        if ( v26 )
        {
          v33 = v14;
          v31 = v10;
          sub_C080(v26, v20, (_QWORD *)a1);
          v10 = v31;
          v14 = v33;
          goto LABEL_26;
        }
      }
      return 0;
  }
  return i;
}
