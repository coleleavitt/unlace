__int64 __fastcall sub_899300(__int64 a1, unsigned __int64 a2, int a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  unsigned __int8 v6; // r10
  char v10; // r14
  unsigned __int64 v11; // r13
  unsigned int v12; // ebp
  __int64 v13; // r12
  char v14; // r8
  unsigned __int64 v15; // r8
  _BYTE *v16; // rax
  char v17; // dl
  __int64 v18; // rdi
  char v19; // dl
  unsigned int v21; // ebp
  unsigned __int64 v22; // r8
  char v23; // r8
  _BYTE *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned __int64 v31; // rbp
  _QWORD *v32; // rax
  _QWORD *v33; // r9
  bool v34; // zf
  _QWORD *v35; // rax
  _QWORD *v36; // rsi
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  _QWORD *i; // rax
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rdi
  unsigned int v43; // eax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  unsigned int v46; // r14d
  size_t v47; // rdx
  int v48; // ecx
  unsigned __int8 v51; // [rsp+17h] [rbp-51h]
  unsigned __int64 v52; // [rsp+18h] [rbp-50h]
  unsigned __int8 v54; // [rsp+18h] [rbp-50h]
  _QWORD *v55; // [rsp+18h] [rbp-50h]
  unsigned __int8 v56; // [rsp+18h] [rbp-50h]

  v6 = a6;
  v51 = *(_BYTE *)(a5 + 29) & 1;
  if ( !v51 )
  {
LABEL_2:
    v10 = 1;
    v11 = (unsigned __int64)&dword_0 + 1;
    if ( !a2 )
      return 1;
    goto LABEL_3;
  }
  v27 = sub_79A2B0(a5);
  v6 = a6;
  v28 = *v27;
  v29 = *v27 + 8LL * *((unsigned int *)v27 + 2);
  if ( v28 < v29 )
  {
    while ( *(_WORD *)(*(_QWORD *)v28 + 32LL) != 95 )
    {
      v28 += 8LL;
      if ( v29 == v28 )
        goto LABEL_2;
    }
  }
  else
  {
    if ( v28 == v29 )
      goto LABEL_2;
    while ( *(_WORD *)(*(_QWORD *)v29 + 32LL) != 95 )
    {
      v29 += 8LL;
      if ( v28 == v29 )
        goto LABEL_2;
    }
  }
  if ( v28 == v29 )
    goto LABEL_2;
  if ( (unsigned int)a2 > 0x39 )
  {
    v45 = (_QWORD *)operator new(0x48u);
    v46 = (unsigned int)(a2 + 63) >> 6;
    v6 = a6;
    v11 = (unsigned __int64)v45;
    *v45 = v45 + 2;
    v45[1] = 0x600000000LL;
    if ( v46 > 6 )
    {
      sub_25D6060(v45, v45 + 2, v46, 8);
      memset(*(void **)v11, 0, 8LL * v46);
      v6 = a6;
    }
    else if ( v46 )
    {
      memset(v45 + 2, 0, 8LL * v46);
      v6 = a6;
    }
    *(_DWORD *)(v11 + 8) = v46;
    *(_DWORD *)(v11 + 64) = a2;
    v10 = v11 & 1;
    if ( (*(_BYTE *)(a5 + 29) & 1) == 0 )
      goto LABEL_3;
LABEL_51:
    v54 = v6;
    v30 = sub_79A2B0(a5);
    v6 = v54;
    v31 = *v30 + 8LL * *((unsigned int *)v30 + 2);
    if ( (*(_BYTE *)(a5 + 29) & 1) != 0 )
    {
      v32 = sub_79A2B0(a5);
      v6 = v54;
      v33 = (_QWORD *)*v32;
    }
    else
    {
      v33 = nullptr;
    }
    v34 = v33 == (_QWORD *)v31;
    if ( (unsigned __int64)v33 < v31 )
      goto LABEL_54;
LABEL_69:
    if ( v34 )
    {
LABEL_93:
      v10 = v11 & 1;
      if ( !a2 )
        goto LABEL_21;
      goto LABEL_3;
    }
    v44 = (_QWORD *)v31;
    while ( 1 )
    {
      v37 = (unsigned __int64)v44;
      if ( *(_WORD *)(*v44 + 32LL) == 95 )
        break;
      if ( v33 == ++v44 )
        goto LABEL_93;
    }
    v36 = v33;
LABEL_58:
    if ( v36 == (_QWORD *)v37 )
      goto LABEL_93;
    v38 = *v33;
    for ( i = v33 + 1; *(_WORD *)(v38 + 32) != 95; ++i )
    {
      v38 = *i;
      v33 = i;
    }
    v40 = *(unsigned int *)(v38 + 36);
    if ( !(_DWORD)v40 )
    {
      v10 = v11 & 1;
      if ( (v11 & 1) != 0 )
      {
        v11 = 2 * ((v11 >> 58 << 57) | ~(-1LL << (v11 >> 58))) + 1;
        if ( !a2 )
          return 1;
      }
      else
      {
        v47 = 8LL * *(unsigned int *)(v11 + 8);
        if ( v47 )
        {
          v56 = v6;
          memset(*(void **)v11, 255, v47);
          v6 = v56;
        }
        v48 = *(_DWORD *)(v11 + 64) & 0x3F;
        if ( v48 )
          *(_QWORD *)(*(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 8) - 8) &= ~(-1LL << v48);
        if ( !a2 )
          goto LABEL_23;
      }
      goto LABEL_3;
    }
    v41 = *(_QWORD *)(v38 + 40);
    v55 = v33;
    v42 = v41 + 4 * v40;
    while ( 1 )
    {
      v43 = (*(_DWORD *)v41 & 0x3FFFFFFF) - 1 - ((*(_BYTE *)(v41 + 3) & 0x40) != 0);
      if ( v43 >= a2 )
        goto LABEL_64;
      if ( (v11 & 1) != 0 )
      {
        v11 = 2 * ((v11 >> 58 << 57) | ~(-1LL << (v11 >> 58)) & (~(-1LL << (v11 >> 58)) & (v11 >> 1) | (1LL << v43)))
            + 1;
LABEL_64:
        v41 += 4;
        if ( v42 == v41 )
          goto LABEL_68;
      }
      else
      {
        v41 += 4;
        *(_QWORD *)(*(_QWORD *)v11 + 8LL * (v43 >> 6)) |= 1LL << v43;
        if ( v42 == v41 )
        {
LABEL_68:
          ++v33;
          v34 = v55 + 1 == (_QWORD *)v31;
          if ( (unsigned __int64)(v55 + 1) >= v31 )
            goto LABEL_69;
LABEL_54:
          v35 = v33;
          while ( 1 )
          {
            v36 = v35;
            if ( *(_WORD *)(*v35 + 32LL) == 95 )
              break;
            if ( (_QWORD *)v31 == ++v35 )
              goto LABEL_93;
          }
          v37 = v31;
          goto LABEL_58;
        }
      }
    }
  }
  v11 = 2 * (((a2 & 0x3F) << 57) | (a2 << 57) & ~(-1LL << a2)) + 1;
  if ( (*(_BYTE *)(a5 + 29) & 1) != 0 )
    goto LABEL_51;
  v10 = v51;
  if ( !a2 )
    return 1;
LABEL_3:
  if ( !v6 )
  {
    v12 = 0;
    v52 = a2;
    v13 = 0;
    v51 = 1;
    while ( 1 )
    {
      v18 = 0;
      if ( v12 < (unsigned int)sub_77F620(a5) )
        v18 = *(_QWORD *)(*(_QWORD *)(a5 + 120) + 8 * v13);
      if ( !v10 )
        break;
      v14 = 0;
      if ( v11 >> 58 )
      {
        v15 = (~(-1LL << (v11 >> 58)) & (v11 >> 1)) >> v12;
LABEL_7:
        v14 = v15 & 1;
      }
LABEL_8:
      if ( !(unsigned __int8)sub_8990B0(v18, *(_QWORD *)(a1 + 8 * v13), a3, a4, v14) )
      {
        if ( !*(_DWORD *)(a4 + 48) )
          goto LABEL_20;
        v16 = *(_BYTE **)(a4 + 24);
        if ( *(_BYTE *)(a4 + 962) )
        {
          *v16 = 1;
        }
        else
        {
          v17 = *(_BYTE *)(a4 + 963);
          *v16 |= v17;
          if ( !v17 )
            goto LABEL_20;
        }
        v51 = 0;
      }
      v13 = ++v12;
      if ( v12 >= v52 )
        goto LABEL_21;
    }
    v14 = 0;
    if ( !*(_DWORD *)(v11 + 64) )
      goto LABEL_8;
    v15 = *(_QWORD *)(*(_QWORD *)v11 + 8LL * (v12 >> 6)) >> v12;
    goto LABEL_7;
  }
  v21 = a2 - 1;
  v51 = v6;
  while ( 1 )
  {
    v26 = 0;
    if ( v21 < (unsigned int)sub_77F620(a5) )
      v26 = *(_QWORD *)(*(_QWORD *)(a5 + 120) + 8LL * v21);
    v23 = 0;
    if ( v10 )
    {
      if ( !(v11 >> 58) )
        goto LABEL_32;
      v22 = (~(-1LL << (v11 >> 58)) & (v11 >> 1)) >> v21;
      goto LABEL_31;
    }
    if ( *(_DWORD *)(v11 + 64) )
    {
      v22 = *(_QWORD *)(*(_QWORD *)v11 + 8LL * (v21 >> 6)) >> v21;
LABEL_31:
      v23 = v22 & 1;
    }
LABEL_32:
    if ( (unsigned __int8)sub_8990B0(v26, *(_QWORD *)(a1 + 8LL * v21), a3, a4, v23) )
      goto LABEL_37;
    if ( !*(_DWORD *)(a4 + 48) )
      break;
    v24 = *(_BYTE **)(a4 + 24);
    if ( *(_BYTE *)(a4 + 962) )
    {
      *v24 = 1;
    }
    else
    {
      v19 = *(_BYTE *)(a4 + 963);
      *v24 |= v19;
      if ( !v19 )
        break;
    }
    v51 = 0;
LABEL_37:
    v25 = (unsigned int)a2 - v21--;
    if ( v25 >= a2 )
      goto LABEL_21;
  }
LABEL_20:
  v51 = 0;
LABEL_21:
  if ( !v10 && v11 )
  {
LABEL_23:
    if ( *(_QWORD *)v11 != v11 + 16 )
      free(*(void **)v11);
    operator delete((void *)v11, 0x48u);
  }
  return v51;
}

