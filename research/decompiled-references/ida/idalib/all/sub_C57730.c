__int64 __fastcall sub_C57730(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned int v12; // r14d
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // r15
  __int64 *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rcx
  __int64 *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned __int64 v32; // r14
  __int64 *v33; // rsi
  bool v34; // zf
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // r8
  unsigned int v41; // eax
  __int64 *v42; // rax
  __int64 v43; // rdx
  char *v44; // r8
  __int64 v45; // r15
  __int64 v46; // rax
  int v47; // ecx
  _QWORD *v48; // rax
  unsigned int v49; // r15d
  unsigned int v50; // eax
  __int64 v51; // rdi
  __int64 v52; // [rsp-8h] [rbp-A0h]
  __int64 v53; // [rsp+8h] [rbp-90h]
  __int64 v54; // [rsp+10h] [rbp-88h]
  _DWORD *v57; // [rsp+30h] [rbp-68h]
  unsigned __int64 v58; // [rsp+38h] [rbp-60h]
  unsigned __int8 v59; // [rsp+47h] [rbp-51h]
  unsigned __int64 v60; // [rsp+48h] [rbp-50h]
  __int64 v61[8]; // [rsp+58h] [rbp-40h] BYREF

  v10 = a2;
  v54 = a3;
  if ( (*(_BYTE *)(a6 + 29) & 1) == 0 )
    goto LABEL_2;
  v18 = sub_B8C3D0(a6, a2, a3, a4, a5, a6);
  a3 = *v18;
  v21 = *v18 + 8LL * *((unsigned int *)v18 + 2);
  if ( *v18 >= v21 )
  {
    if ( a3 != v21 )
    {
      while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 100 )
      {
        v21 += 8LL;
        if ( a3 == v21 )
          goto LABEL_2;
      }
      goto LABEL_39;
    }
LABEL_2:
    if ( !a2 )
      return 1;
    v60 = 0;
    v11 = 1;
    v58 = 0;
    v53 = 1;
    goto LABEL_4;
  }
  v22 = (__int64 *)*v18;
  while ( 1 )
  {
    a3 = *v22;
    if ( *(_WORD *)(*v22 + 36) == 100 )
      break;
    if ( (__int64 *)v21 == ++v22 )
      goto LABEL_2;
  }
  if ( (__int64 *)v21 == v22 )
    goto LABEL_2;
LABEL_39:
  if ( (unsigned int)a2 > 0x39 )
  {
    v48 = (_QWORD *)operator new(0x48u);
    v49 = (unsigned int)(a2 + 63) >> 6;
    a2 = (__int64)(v48 + 2);
    v11 = (unsigned __int64)v48;
    *v48 = v48 + 2;
    v48[1] = 0x600000000LL;
    if ( v49 > 6 )
    {
      sub_2237220(v48, a2, v49, 8);
      a2 = 0;
      memset(*(void **)v11, 0, 8LL * v49);
      *(_DWORD *)(v11 + 8) = v49;
    }
    else
    {
      if ( v49 )
      {
        v48[2] = 0;
        v26 = 0;
        *(_QWORD *)(a2 + 8LL * v49 - 8) = 0;
        v24 = (unsigned __int64)(v48 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        a2 -= v24;
        if ( (((_DWORD)a2 + 8 * v49) & 0xFFFFFFF8) >= 8 )
        {
          v50 = (a2 + 8 * v49) & 0xFFFFFFF8;
          LODWORD(a2) = 0;
          do
          {
            v51 = (unsigned int)a2;
            a2 = (unsigned int)(a2 + 8);
            *(_QWORD *)(v24 + v51) = 0;
          }
          while ( (unsigned int)a2 < v50 );
        }
      }
      *(_DWORD *)(v11 + 8) = v49;
    }
    *(_DWORD *)(v11 + 64) = v10;
  }
  else
  {
    v23 = (a2 << 58) | 1;
    v24 = v23 >> 1;
    v23 >>= 58;
    v25 = -1LL << v23;
    v26 = v23 << 57;
    v11 = 2 * (v26 | v24 & ~v25) + 1;
  }
  if ( (*(_BYTE *)(a6 + 29) & 1) == 0 )
    goto LABEL_48;
  v27 = sub_B8C3D0(a6, a2, v24, v26, v19, v20);
  v31 = *((unsigned int *)v27 + 2);
  v32 = *v27 + 8 * v31;
  if ( (*(_BYTE *)(a6 + 29) & 1) != 0 )
    v33 = (__int64 *)*sub_B8C3D0(a6, a2, v31, v28, v29, v30);
  else
    v33 = nullptr;
  v34 = v33 == (__int64 *)v32;
  if ( (unsigned __int64)v33 < v32 )
    goto LABEL_45;
LABEL_66:
  if ( v34 )
  {
LABEL_48:
    v53 = v11 & 1;
    if ( v10 )
      goto LABEL_49;
    v59 = 1;
LABEL_25:
    if ( v53 )
      return v59;
LABEL_26:
    if ( *(_QWORD *)v11 != v11 + 16 )
      free(*(void **)v11);
    operator delete((void *)v11, 0x48u);
    return v59;
  }
  if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 100 )
  {
    v42 = (__int64 *)(v32 + 8);
    while ( v33 != v42 )
    {
      v43 = *v42++;
      if ( *(_WORD *)(v43 + 36) == 100 )
        goto LABEL_55;
    }
    goto LABEL_48;
  }
LABEL_55:
  v36 = *v33;
  if ( *(_WORD *)(*v33 + 36) != 100 )
  {
    v37 = v33 + 1;
    do
    {
      v36 = *v37;
      v33 = v37++;
    }
    while ( *(_WORD *)(v36 + 36) != 100 );
  }
  v38 = *(unsigned int *)(v36 + 40);
  if ( (_DWORD)v38 )
  {
    v39 = *(_QWORD *)(v36 + 48);
    v40 = v39 + 4 * v38;
    while ( 1 )
    {
      v41 = (*(_DWORD *)v39 & 0x3FFFFFFF) - 1 - ((*(_BYTE *)(v39 + 3) & 0x40) != 0);
      if ( v41 >= v10 )
        goto LABEL_61;
      if ( (v11 & 1) != 0 )
      {
        v11 = 2 * ((v11 >> 58 << 57) | ~(-1LL << (v11 >> 58)) & (~(-1LL << (v11 >> 58)) & (v11 >> 1) | (1LL << v41)))
            + 1;
LABEL_61:
        v39 += 4;
        if ( v40 == v39 )
          goto LABEL_65;
      }
      else
      {
        v39 += 4;
        *(_QWORD *)(*(_QWORD *)v11 + 8LL * (v41 >> 6)) |= 1LL << v41;
        if ( v40 == v39 )
        {
LABEL_65:
          v34 = ++v33 == (__int64 *)v32;
          if ( (unsigned __int64)v33 >= v32 )
            goto LABEL_66;
LABEL_45:
          v35 = v33;
          while ( *(_WORD *)(*v35 + 36) != 100 )
          {
            if ( (__int64 *)v32 == ++v35 )
              goto LABEL_48;
          }
          goto LABEL_55;
        }
      }
    }
  }
  v53 = v11 & 1;
  if ( (v11 & 1) == 0 )
  {
    v44 = *(char **)v11;
    v45 = 8LL * *(unsigned int *)(v11 + 8);
    v46 = *(_QWORD *)v11 + v45;
    if ( *(_QWORD *)v11 != v46 )
      v44 = (char *)memset(*(void **)v11, 255, 8 * ((unsigned __int64)(v46 - (_QWORD)v44 - 8) >> 3) + 8);
    v47 = *(_DWORD *)(v11 + 64) & 0x3F;
    if ( v47 )
      *(_QWORD *)&v44[v45 - 8] &= ~(-1LL << v47);
    if ( v10 )
      goto LABEL_49;
    v59 = 1;
    goto LABEL_26;
  }
  v11 = 2 * ((v11 >> 58 << 57) | ~(-1LL << (v11 >> 58))) + 1;
  if ( !v10 )
    return 1;
LABEL_49:
  a3 = v11 >> 1;
  a2 = v11 >> 58;
  v58 = v11 >> 58;
  v60 = (v11 >> 1) & ~(-1LL << (v11 >> 58));
LABEL_4:
  v59 = 1;
  v12 = 1;
  v57 = (_DWORD *)v11;
  do
  {
    v15 = v10 - v12;
    if ( !a7 )
      v15 = v12 - 1;
    v16 = 0;
    if ( (unsigned int)sub_B76070(a6, a2, a3, (unsigned int)v10 - v12) > v15 )
      v16 = *(_QWORD *)(*(_QWORD *)(a6 + 120) + 8LL * v15);
    LOBYTE(v13) = 0;
    if ( v53 )
    {
      if ( v58 )
        v13 = (v60 >> v15) & 1;
    }
    else if ( v57[16] )
    {
      v13 = (*(_QWORD *)(*(_QWORD *)v57 + 8LL * (v15 >> 6)) >> v15) & 1LL;
    }
    v61[0] = 0;
    a2 = v52;
    if ( !(unsigned __int8)sub_C57580(v16, *(_QWORD *)(a1 + 8LL * v15), v54, a4, a5, v13, v61) )
    {
      a3 = *(unsigned int *)(a5 + 48);
      if ( !(_DWORD)a3 )
        goto LABEL_24;
      v59 = *(_BYTE *)(a5 + 914);
      if ( v59 )
      {
        v59 = 0;
        **(_BYTE **)(a5 + 24) = 1;
      }
      else
      {
        if ( !*(_BYTE *)(a5 + 915) )
        {
LABEL_24:
          v59 = 0;
          v11 = (unsigned __int64)v57;
          goto LABEL_25;
        }
        **(_BYTE **)(a5 + 24) = 1;
      }
    }
    if ( v16 )
    {
      if ( *(_DWORD *)(v16 + 100) )
      {
        a3 = v61[0];
        if ( v61[0] )
        {
          if ( *(_DWORD *)v61[0] == 7 )
          {
            a2 = *(_QWORD *)(a5 + 16);
            sub_C245D0(a8, (_QWORD *)a2, v61[0]);
          }
        }
      }
    }
    v14 = v12++;
  }
  while ( v14 < v10 );
  v11 = (unsigned __int64)v57;
  if ( !v53 )
    goto LABEL_26;
  return v59;
}
