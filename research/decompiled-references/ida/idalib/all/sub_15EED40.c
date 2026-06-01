__int16 __fastcall sub_15EED40(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // cl
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // rsi
  int v18; // edi
  int v19; // r9d
  unsigned int i; // edx
  unsigned __int64 v21; // r12
  unsigned int v22; // edx
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // r8d
  int v27; // r10d
  unsigned int j; // edx
  unsigned int v29; // edx
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned int v41; // edx
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdi
  __int64 v45; // rdx
  int v46; // edx
  int v47; // r9d
  unsigned int k; // eax
  _QWORD *v49; // r8
  unsigned int v50; // eax
  unsigned __int64 v51; // r12
  unsigned __int64 v53; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v54; // [rsp+8h] [rbp-30h]

  v4 = sub_BFD550(a2);
  LOWORD(v5) = *(_WORD *)v4 & 0x1FF;
  switch ( (_WORD)v5 )
  {
    case 0x11:
      LOWORD(v5) = sub_15EED40(a1, *(_QWORD *)(v4 + 16), v3);
      return v5;
    case 0x80:
      sub_15EED40(a1, *(_QWORD *)(v4 + 32), v3);
      LOWORD(v5) = sub_15EED40(a1, *(_QWORD *)(v4 + 40), v6);
      return v5;
    case 0x81:
      sub_15EED40(a1, *(_QWORD *)(v4 + 24), v3);
      LOWORD(v5) = sub_15EED40(a1, *(_QWORD *)(v4 + 48), v7);
      return v5;
  }
  v8 = *(_BYTE *)(a1 + 760) & 1;
  if ( v8 )
  {
    v9 = a1 + 768;
    v11 = 512;
    v10 = 8;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 768);
    v10 = *(unsigned int *)(a1 + 776);
    v11 = v10 << 6;
  }
  if ( (_WORD)v5 == 32 )
  {
    v12 = *(_QWORD *)(v4 + 40);
    if ( (v12 & 6) != 0 )
      return v5;
    v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_WORD *)v13 & 0x1FF) != 0x1A )
    {
      LOWORD(v5) = sub_15EED40(a1, v13, v10);
      return v5;
    }
    v14 = *(_QWORD *)(v4 + 16);
    v15 = sub_15EE760(*(_QWORD *)(v13 + 16));
    v16 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    v8 = *(_BYTE *)(a1 + 760) & 1;
    if ( v8 )
    {
      v17 = a1 + 768;
      v18 = 7;
    }
    else
    {
      v41 = *(_DWORD *)(a1 + 776);
      v17 = *(_QWORD *)(a1 + 768);
      if ( !v41 )
      {
LABEL_86:
        v51 = (unsigned __int64)v41 << 6;
LABEL_87:
        v21 = v17 + v51;
        goto LABEL_29;
      }
      v18 = v41 - 1;
    }
    v19 = 1;
    for ( i = v18
            & (((0xBF58476D1CE4E5B9LL
               * (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4)
                | ((unsigned __int64)((unsigned int)v15 ^ (unsigned int)(v15 >> 9)) << 32))) >> 31)
             ^ (484763065 * (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4)))); ; i = v18 & v22 )
    {
      v21 = v17 + ((unsigned __int64)i << 6);
      if ( v15 == *(_QWORD *)v21 && v16 == *(_QWORD *)(v21 + 8) )
        break;
      if ( !*(_QWORD *)v21 && !*(_QWORD *)(v21 + 8) )
      {
        v51 = 512;
        if ( v8 )
          goto LABEL_87;
        v41 = *(_DWORD *)(a1 + 776);
        goto LABEL_86;
      }
      v22 = v19 + i;
      ++v19;
    }
  }
  else if ( (_WORD)v5 == 34 )
  {
    v23 = sub_15EE760(*(_QWORD *)(v4 + 24));
    v24 = *(_QWORD *)(v4 + 16);
    v8 = *(_BYTE *)(a1 + 760) & 1;
    if ( v8 )
    {
      v25 = a1 + 768;
      v26 = 7;
    }
    else
    {
      v40 = *(unsigned int *)(a1 + 776);
      v25 = *(_QWORD *)(a1 + 768);
      if ( !(_DWORD)v40 )
      {
LABEL_75:
        v45 = v40 << 6;
LABEL_76:
        v21 = v25 + v45;
        goto LABEL_29;
      }
      v26 = v40 - 1;
    }
    v27 = 1;
    for ( j = v26
            & (((0xBF58476D1CE4E5B9LL
               * (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4)
                | ((unsigned __int64)((unsigned int)v23 ^ (unsigned int)(v23 >> 9)) << 32))) >> 31)
             ^ (484763065 * (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4)))); ; j = v26 & v29 )
    {
      v21 = v25 + ((unsigned __int64)j << 6);
      if ( v23 == *(_QWORD *)v21 && v24 == *(_QWORD *)(v21 + 8) )
        break;
      if ( !*(_QWORD *)v21 && !*(_QWORD *)(v21 + 8) )
      {
        v45 = 512;
        if ( v8 )
          goto LABEL_76;
        v40 = *(unsigned int *)(a1 + 776);
        goto LABEL_75;
      }
      v29 = v27 + j;
      ++v27;
    }
  }
  else
  {
    v21 = v9 + v11;
    if ( (_WORD)v5 == 71 )
    {
      v30 = *(_QWORD *)(v4 + 16);
      if ( (*(_BYTE *)(v30 + 28) & 0x7Fu) - 40 > 6 )
        goto LABEL_29;
      if ( v8 || *(_DWORD *)(a1 + 776) )
      {
        v46 = v10 - 1;
        v47 = 1;
        for ( k = v46
                & (((0xBF58476D1CE4E5B9LL * (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4) | 0x400000000LL)) >> 31)
                 ^ (484763065 * (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4)))); ; k = v46 & v50 )
        {
          v49 = (_QWORD *)(v9 + ((unsigned __int64)k << 6));
          if ( *v49 == 4 )
          {
            if ( v30 == v49[1] )
            {
              v21 = v9 + ((unsigned __int64)k << 6);
              goto LABEL_29;
            }
          }
          else if ( !*v49 && !v49[1] )
          {
            goto LABEL_29;
          }
          v50 = v47 + k;
          ++v47;
        }
      }
      goto LABEL_50;
    }
    if ( (_WORD)v5 != 33 )
      return v5;
    if ( (*(_BYTE *)(v4 + 27) & 1) != 0 )
    {
      v42 = *(_QWORD *)(v4 + 16);
      if ( v42 )
      {
        v43 = sub_BACEB0(v42, 1);
        if ( v43 )
        {
          if ( *(_BYTE *)(v4 + 26) == 1 )
          {
            v44 = *(_QWORD *)(v4 + 40);
            v53 = 4;
            v54 = v43;
            if ( v44 )
              v53 = sub_15EE760(v44);
          }
          else
          {
            v53 = 4;
            v54 = v43;
          }
          v21 = sub_15EEC30(a1 + 760, &v53);
        }
        v8 = *(_BYTE *)(a1 + 760) & 1;
      }
    }
  }
LABEL_29:
  if ( v8 )
  {
    v31 = a1 + 768;
    v32 = 512;
    goto LABEL_31;
  }
LABEL_50:
  v31 = *(_QWORD *)(a1 + 768);
  v32 = (unsigned __int64)*(unsigned int *)(a1 + 776) << 6;
LABEL_31:
  v5 = v32 + v31;
  if ( v21 == v5 )
    return v5;
  v33 = *(_QWORD *)(v21 + 16);
  v34 = v4 | 2;
  v35 = 8LL * *(unsigned int *)(v21 + 24);
  v36 = v33 + v35;
  v37 = v35 >> 5;
  if ( v37 )
  {
    if ( v34 == *(_QWORD *)(v36 - 8) )
    {
      v5 = v36;
      goto LABEL_48;
    }
    if ( v34 == *(_QWORD *)(v36 - 16) )
    {
      v5 = v36 - 8;
      goto LABEL_48;
    }
    if ( v34 == *(_QWORD *)(v36 - 24) )
    {
      v5 = v36 - 16;
      goto LABEL_48;
    }
    v38 = v36 - 32 * v37;
    if ( v34 == *(_QWORD *)(v36 - 32) )
    {
      v5 = v36 - 24;
      goto LABEL_48;
    }
    while ( 1 )
    {
      v5 = v36 - 32;
      if ( v38 == v36 - 32 )
        break;
      if ( v34 == *(_QWORD *)(v36 - 40) )
        goto LABEL_48;
      if ( v34 == *(_QWORD *)(v36 - 48) )
      {
        v5 = v36 - 40;
        goto LABEL_48;
      }
      if ( v34 == *(_QWORD *)(v36 - 56) )
      {
        v5 = v36 - 48;
        goto LABEL_48;
      }
      if ( v34 == *(_QWORD *)(v36 - 64) )
      {
        v5 = v36 - 56;
        goto LABEL_48;
      }
      v36 -= 32;
    }
  }
  else
  {
    v5 = v36;
  }
  v39 = (v5 - v33) >> 3;
  if ( v39 == 2 )
    goto LABEL_90;
  if ( v39 != 3 )
  {
    if ( v39 != 1 )
      return v5;
    goto LABEL_47;
  }
  if ( v34 != *(_QWORD *)(v5 - 8) )
  {
    v5 -= 8;
LABEL_90:
    if ( v34 != *(_QWORD *)(v5 - 8) )
    {
      v5 -= 8;
LABEL_47:
      if ( v34 != *(_QWORD *)(v5 - 8) )
        return v5;
    }
  }
LABEL_48:
  if ( v33 != v5 )
    *(_QWORD *)(v5 - 8) &= ~2uLL;
  return v5;
}
