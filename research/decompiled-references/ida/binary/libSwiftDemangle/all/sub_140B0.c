unsigned __int64 __fastcall sub_140B0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int16 v6; // ax
  unsigned __int8 v7; // al
  __int64 v8; // r12
  bool v9; // bl
  __int64 v10; // r15
  unsigned __int64 v11; // r13
  unsigned __int8 v12; // al
  unsigned __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int16 v16; // si
  unsigned __int64 v17; // rax
  __int64 v18; // r15
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  unsigned int v21; // r12d
  __int64 v22; // rdx
  unsigned __int8 v23; // al
  __int64 *v24; // rbx
  __int64 v25; // rbp
  __int64 v26; // rsi
  unsigned __int64 v27; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // r13
  char v31; // al
  unsigned int i; // ebp
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int16 v35; // bp
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // [rsp+0h] [rbp-48h]

  v41 = a4;
  if ( !a2 )
    return 0;
  v4 = *(unsigned int *)(a3 + 8);
  if ( a4 >= v4 )
    return 0;
  v6 = *(_WORD *)(a2 + 16);
  if ( v6 == 170 || v6 == 222 )
  {
    v17 = sub_12C70(a1, 1);
    *(_WORD *)(v17 + 16) = 224;
    v18 = v17;
    *(_BYTE *)(v17 + 18) = 0;
    v19 = *(_DWORD *)(a3 + 8);
    v20 = v19 - 1;
    v21 = v19 - 1;
    if ( v41 > v20 )
    {
LABEL_30:
      v27 = sub_CD20(a1, 221, a2);
      v14 = v18;
      v16 = 16;
      v15 = v27;
      return sub_CE00(a1, v16, v15, v14);
    }
    while ( 1 )
    {
      if ( v21 >= v19 )
        goto LABEL_30;
      v22 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v20);
      v23 = *(_BYTE *)(v22 + 18);
      if ( v23 <= 4u )
      {
        if ( v23 <= 2u )
          goto LABEL_21;
        v24 = (__int64 *)v22;
        v29 = v22 + 16;
        v25 = (__int64)(v24 + 1);
        if ( v23 != 3 )
          v25 = v29;
      }
      else
      {
        if ( v23 != 5 )
        {
LABEL_21:
          v20 = --v21;
          if ( v21 < v41 )
            goto LABEL_30;
          goto LABEL_22;
        }
        v24 = *(__int64 **)v22;
        v25 = *(_QWORD *)v22 + 8LL * *(unsigned int *)(v22 + 8);
      }
      while ( (__int64 *)v25 != v24 )
      {
        v26 = *v24++;
        sub_C080(v18, v26, a1);
      }
      v20 = --v21;
      if ( v21 < v41 )
        goto LABEL_30;
LABEL_22:
      v19 = *(_DWORD *)(a3 + 8);
    }
  }
  v7 = *(_BYTE *)(a2 + 18);
  if ( v7 > 4u )
  {
    if ( v7 != 5 || !*(_DWORD *)(a2 + 8) )
      return 0;
  }
  else if ( v7 <= 2u )
  {
    return 0;
  }
  v8 = sub_BA70(a2, 0);
  v9 = sub_F420(a2);
  v10 = *(_QWORD *)(*(_QWORD *)a3 + 8 * v41);
  if ( v9 && ++v41 >= v4 )
  {
    v11 = a2;
    goto LABEL_10;
  }
  if ( *(_WORD *)(v8 + 16) == 68 )
  {
    v37 = sub_BA70(v8, 1u);
    v38 = sub_140B0(a1, v37, a3, v41);
    v39 = sub_BA70(v8, 0);
    v30 = sub_CE00(a1, 68, v39, v38);
    if ( *(_BYTE *)(v8 + 18) == 5 && *(_DWORD *)(v8 + 8) == 3 )
    {
      v40 = sub_BA70(v8, 2u);
      sub_CCF0(a1, v30, v40);
    }
  }
  else
  {
    v30 = sub_140B0(a1, v8, a3, v41);
  }
  v11 = sub_CD20(a1, *(_WORD *)(a2 + 16), v30);
  if ( !v11 )
    return 0;
  v31 = *(_BYTE *)(a2 + 18);
  for ( i = 1; ; ++i )
  {
    if ( v31 == 4 )
    {
      if ( i > 1uLL )
        goto LABEL_46;
      goto LABEL_49;
    }
    if ( v31 != 5 )
      break;
    if ( i >= (unsigned __int64)*(unsigned int *)(a2 + 8) )
      goto LABEL_46;
    v33 = *(_QWORD *)a2;
LABEL_50:
    v34 = *(_QWORD *)(v33 + 8LL * i);
    if ( v34 )
    {
      sub_C080(v11, v34, a1);
      v31 = *(_BYTE *)(a2 + 18);
    }
  }
  if ( v31 == 3 && !i )
  {
LABEL_49:
    v33 = a2;
    goto LABEL_50;
  }
LABEL_46:
  if ( !v9 )
    return v11;
LABEL_10:
  v12 = *(_BYTE *)(v10 + 18);
  if ( v12 > 4u )
  {
    if ( v12 != 5 || !*(_DWORD *)(v10 + 8) )
      return v11;
LABEL_12:
    v13 = *(_WORD *)(v11 + 16);
    if ( v13 == 157 )
    {
      v35 = 16;
    }
    else if ( v13 > 0x9Du )
    {
      if ( v13 == 208 )
      {
        v35 = 14;
      }
      else
      {
        v35 = 17;
        if ( v13 != 223 )
        {
          v35 = 15;
          if ( v13 != 169 )
            return 0;
        }
      }
    }
    else if ( v13 == 58 )
    {
      v35 = 13;
    }
    else
    {
      if ( v13 > 0x3Au )
      {
        if ( v13 == 73 )
        {
LABEL_17:
          v14 = v10;
          v15 = v11;
          v16 = 18;
          return sub_CE00(a1, v16, v15, v14);
        }
        return 0;
      }
      v35 = 12;
      if ( v13 != 22 )
      {
        if ( v13 == 26 )
          goto LABEL_17;
        return 0;
      }
    }
    v36 = sub_CD20(a1, 221, v11);
    v14 = v10;
    v16 = v35;
    v15 = v36;
    return sub_CE00(a1, v16, v15, v14);
  }
  if ( v12 > 2u )
    goto LABEL_12;
  return v11;
}

