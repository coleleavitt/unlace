__int64 __fastcall sub_743BE0(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int8 *v3; // r11
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  int v7; // r15d
  unsigned int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  int v14; // r10d
  __int64 v15; // rax
  int i; // edx
  unsigned __int8 v17; // di
  unsigned __int8 v18; // cl
  __int64 v19; // rsi
  unsigned int v20; // edx
  __int64 v21; // rcx
  unsigned __int64 v22; // r10
  __int64 v23; // rcx
  unsigned __int16 *v24; // rdi
  __int16 v25; // r15
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  int v28; // r8d
  __int64 v29; // rax
  unsigned __int8 v30; // di
  unsigned __int8 v31; // si
  __int64 v32; // rax
  __int16 v33; // r15
  __int64 result; // rax
  int v35; // eax
  int v36; // [rsp+4h] [rbp-64h]
  __int64 v38; // [rsp+8h] [rbp-60h]
  unsigned __int16 *v40; // [rsp+18h] [rbp-50h]
  unsigned int v41; // [rsp+20h] [rbp-48h]
  unsigned __int16 v42; // [rsp+24h] [rbp-44h]
  unsigned __int8 v43; // [rsp+27h] [rbp-41h]

  v3 = (unsigned __int8 *)(a1 + 6);
  v5 = 0;
  v6 = *(__int16 *)(a1 + 4);
  v42 = 0;
  v36 = 0;
  v40 = a3 + 1;
  while ( 1 )
  {
    v7 = *v3;
    if ( v7 <= v36 )
    {
      if ( v6 < v5 )
        goto LABEL_68;
      if ( v7 < v36 )
      {
LABEL_53:
        v19 = a2;
        result = 0;
        goto LABEL_50;
      }
    }
    else
    {
      if ( (int)v5 < (int)v6 )
      {
        v35 = v3[1] + 1;
        v5 += v35;
        v3 += 6 * v35;
        continue;
      }
      if ( v6 < v5 )
        goto LABEL_68;
    }
    if ( v5 == v6 )
      goto LABEL_53;
    if ( v5 >= v6 )
      goto LABEL_68;
    if ( v5 + *((unsigned __int16 *)v3 + 1) >= v6 )
      goto LABEL_68;
    v8 = *(_DWORD *)(a1 - 8);
    v43 = v3[1];
    v9 = *(unsigned __int16 *)&v3[6 * v43 + 4];
    if ( (unsigned int)v9 >= v8 )
      goto LABEL_68;
    v10 = a1 + v9;
    v11 = *(unsigned __int16 *)(a1 + v9 + 1);
    if ( (unsigned int)v9 + *(unsigned __int16 *)(a1 + v9 + v11 + 3) + (_DWORD)v11 + 4 >= v8 )
      goto LABEL_68;
    LODWORD(v12) = *a3 - v36;
    v41 = v12;
    if ( (int)v12 < 0 )
      goto LABEL_65;
    v13 = (unsigned int)v12;
    v12 = (unsigned int)v12;
    if ( v11 <= (unsigned int)v12 )
      v12 = *(unsigned __int16 *)(a1 + v9 + 1);
    v14 = v12;
    if ( !v12 )
      break;
    v15 = 0;
    for ( i = 1; ; ++i )
    {
      v17 = *((_BYTE *)v40 + v42 + v15);
      v18 = *(_BYTE *)(v10 + v15 + 3);
      if ( v17 != v18 )
      {
        if ( v17 < v18 )
          i = -i;
        if ( i )
        {
          if ( i <= 0 )
          {
            v19 = a2;
            goto LABEL_23;
          }
          LOWORD(i) = i - 1;
          goto LABEL_60;
        }
LABEL_58:
        v19 = a2;
        v5 += v43;
        result = 1;
        goto LABEL_50;
      }
      ++v15;
      if ( v14 < i + 1 )
        break;
    }
    if ( v11 == v13 )
      goto LABEL_58;
    if ( v11 >= v13 )
    {
      v19 = a2;
      LOWORD(i) = ~(_WORD)i;
      goto LABEL_23;
    }
LABEL_60:
    v42 += i;
    v5 += v43 + 1;
    v3 += 6 * v43 + 6;
    v36 = v42;
  }
  if ( v11 == v13 )
    goto LABEL_58;
  if ( v11 < v13 )
  {
    LOWORD(i) = 0;
    goto LABEL_60;
  }
LABEL_65:
  v19 = a2;
  LOWORD(i) = -1;
LABEL_23:
  if ( (int)v5 >= (int)v6 )
  {
LABEL_62:
    v5 = v6;
    v42 = v42 + i - 1;
    result = 0;
    goto LABEL_50;
  }
  if ( v7 != v36 )
    goto LABEL_68;
  v20 = *((unsigned __int16 *)v3 + 2);
  if ( v20 >= v8 )
    goto LABEL_68;
  v21 = a1 + (unsigned __int16)v20;
  v22 = *(unsigned __int16 *)(v21 + 1);
  if ( (unsigned __int16)v20 + *(unsigned __int16 *)(v21 + v22 + 3) + (unsigned int)v22 + 4 >= v8 )
    goto LABEL_68;
  v23 = v21 + 3;
  if ( (v41 & 0x80000000) != 0 )
  {
    v33 = 0;
    goto LABEL_47;
  }
  v24 = a3;
  v38 = v19;
  v25 = 1;
  v26 = (__int64)v24 + v42 + 2;
  while ( 1 )
  {
    v27 = v41;
    if ( v22 <= v41 )
      v27 = v22;
    v28 = v27;
    if ( v27 )
      break;
    LOWORD(i) = 1;
LABEL_44:
    if ( v22 == v41 )
    {
      v19 = v38;
      result = 1;
      goto LABEL_50;
    }
    if ( v22 >= v41 )
    {
      v19 = v38;
      v33 = v25 - 1;
      goto LABEL_47;
    }
LABEL_38:
    ++v5;
    v3 += 6;
    if ( v6 == v5 )
    {
      v19 = v38;
      goto LABEL_62;
    }
    if ( v36 != *v3 )
      goto LABEL_68;
    v32 = *((unsigned __int16 *)v3 + 2);
    if ( (unsigned int)v32 >= v8 )
      goto LABEL_68;
    v22 = *(unsigned __int16 *)(a1 + v32 + 1);
    if ( (unsigned int)v32 + *(unsigned __int16 *)(a1 + v32 + v22 + 3) + (_DWORD)v22 + 4 >= v8 )
      goto LABEL_68;
    v23 = a1 + v32 + 3;
    v25 = i;
  }
  v29 = 0;
  i = 1;
  while ( 1 )
  {
    v30 = *(_BYTE *)(v26 + v29);
    v31 = *(_BYTE *)(v23 + v29);
    if ( v30 != v31 )
      break;
    ++i;
    ++v29;
    if ( v28 < i )
      goto LABEL_44;
  }
  if ( v30 < v31 )
    i = -i;
  if ( i > 0 )
    goto LABEL_38;
  v19 = v38;
  result = 1;
  if ( !i )
    goto LABEL_50;
  v33 = v25 - 1;
LABEL_47:
  v42 += v33;
  if ( v6 < v5 )
LABEL_68:
    sub_743130();
  result = 0;
LABEL_50:
  *(_DWORD *)v19 = v5;
  *(_BYTE *)(v19 + 4) = result;
  *(_WORD *)(v19 + 6) = v42;
  return result;
}
