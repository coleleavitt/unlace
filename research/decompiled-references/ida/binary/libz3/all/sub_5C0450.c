__int64 __fastcall sub_5C0450(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // r15d
  unsigned int v5; // r13d
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // esi
  unsigned int i; // ecx
  _DWORD *v10; // rdi
  _DWORD *v11; // rbx
  unsigned int v12; // eax
  int v13; // edi
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdx
  _BYTE *v19; // rdi
  __int64 v20; // r8
  char v21; // cl
  __int64 v22; // r15
  _QWORD *v23; // rax
  unsigned int v24; // edx
  _QWORD *v25; // rsi
  int v26; // r8d
  unsigned int v27; // ecx
  __int64 v28; // rax
  _DWORD *v29; // r9
  int v30; // eax
  unsigned int v31; // r14d
  unsigned __int64 v32; // r15
  _QWORD *v33; // rax
  unsigned int v34; // esi
  _QWORD *v35; // rdi
  int v36; // r9d
  unsigned int v37; // ecx
  __int64 v38; // rax
  _DWORD *v39; // rdx
  int v40; // eax
  unsigned int v42; // edx
  unsigned int v43; // edx
  __int64 v44; // r10
  unsigned int v45; // esi
  __int64 v46; // r11
  int v47; // r8d
  __int64 v48; // rsi
  __int64 v49; // rcx
  _DWORD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // r9
  __int64 v54; // rdi
  __int64 v55; // r10
  __int64 v56; // r11
  __int64 v57; // rdx
  __int64 v58; // rax
  _BYTE *v59; // rsi
  __int64 v60; // r8
  char v61; // r14
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rax
  char v66; // si
  __int64 v67; // rsi
  int v68[2]; // [rsp+8h] [rbp-60h]
  int v69[2]; // [rsp+20h] [rbp-48h] BYREF
  int v70[2]; // [rsp+28h] [rbp-40h] BYREF

  sub_5C01D0(a1, a2);
  if ( *(_DWORD *)(a2 + 68) )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = *(_QWORD *)(a2 + 8LL * v4 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      v7 = sub_5BCCC0((__int64)a1, *(_QWORD *)(v6 + 16));
      v8 = *(_DWORD *)(v6 + 24);
      if ( v8 )
      {
        for ( i = 0; i < v8; ++i )
        {
          if ( *(_WORD *)(*(_QWORD *)(v6 + 8LL * i + 32) + 4LL) != 1 )
          {
            v10 = (_DWORD *)(v7[1] + 4LL * (i >> 5));
            if ( (*v10 & (1 << i)) != 0 )
            {
              v5 = 1;
              *v10 &= ~(1 << i);
              v8 = *(_DWORD *)(v6 + 24);
            }
          }
        }
      }
      ++v4;
    }
    while ( v4 < *(_DWORD *)(a2 + 68) );
  }
  else
  {
    v5 = 0;
  }
  sub_5BF950(a1, a2);
  *(_QWORD *)v69 = 0;
  *(_QWORD *)v70 = 0;
  sub_5BFB70(a1, a2, v69, v70);
  v11 = *(_DWORD **)v69;
  *(_QWORD *)v68 = *(_QWORD *)v70;
  if ( !*(_QWORD *)v69 )
  {
    v53 = a1[6];
    if ( !v53 )
      goto LABEL_29;
    v54 = *(unsigned int *)(v53 - 4);
    if ( *(_QWORD *)v70 )
    {
      if ( !(_DWORD)v54 )
        goto LABEL_29;
      v55 = a1[10];
      v56 = *(_QWORD *)v70;
      v57 = 0;
      v58 = 0;
      while ( 1 )
      {
        v59 = (_BYTE *)(v55 + v58);
        if ( *(_BYTE *)(v55 + v58) )
        {
          v60 = (unsigned int)v58 >> 5;
          v61 = *(_BYTE *)(a1[7] + v58);
          if ( *(_BYTE *)(v53 + v58) )
          {
            if ( !v61 )
              goto LABEL_118;
            if ( *(_QWORD *)(a1[9] + v57) )
              *v59 = 0;
            if ( (unsigned int)v60 >= *(_DWORD *)(v56 - 4) || (*(_DWORD *)(v56 + 4 * v60) & (1 << v58)) == 0 )
              goto LABEL_118;
          }
          else
          {
            if ( !v61 )
              goto LABEL_118;
            if ( (unsigned int)v60 < *(_DWORD *)(v56 - 4) && (*(_DWORD *)(v56 + 4 * v60) & (1 << v58)) != 0 )
              *v59 = 0;
            v62 = *(_QWORD *)(a1[9] + v57);
            if ( !v62 || *(_WORD *)(v62 + 4) == 1 )
              goto LABEL_118;
          }
          *v59 = 0;
        }
LABEL_118:
        ++v58;
        v57 += 8;
        if ( v58 == v54 )
          goto LABEL_29;
      }
    }
    if ( !(_DWORD)v54 )
      goto LABEL_29;
    v63 = a1[10];
    v64 = 0;
    v65 = 0;
    while ( 1 )
    {
      if ( *(_BYTE *)(v63 + v65) )
      {
        v66 = *(_BYTE *)(a1[7] + v65);
        if ( *(_BYTE *)(v53 + v65) )
        {
          if ( !v66 || !*(_QWORD *)(a1[9] + v64) )
            goto LABEL_133;
        }
        else
        {
          if ( !v66 )
            goto LABEL_133;
          v67 = *(_QWORD *)(a1[9] + v64);
          if ( !v67 || *(_WORD *)(v67 + 4) == 1 )
            goto LABEL_133;
        }
        *(_BYTE *)(v63 + v65) = 0;
      }
LABEL_133:
      ++v65;
      v64 += 8;
      if ( v54 == v65 )
        goto LABEL_29;
    }
  }
  v12 = *(_DWORD *)(*(_QWORD *)v69 - 4LL);
  v13 = 32 * v12;
  if ( !(32 * v12) || !v12 )
    goto LABEL_13;
  v42 = **(_DWORD **)v69 & 1;
  if ( v42 )
  {
    v43 = 0;
LABEL_55:
    v44 = a1[10];
    while ( 1 )
    {
      if ( v44 && v43 < *(_DWORD *)(v44 - 4) )
        *(_BYTE *)(v44 + v43) = 0;
      do
      {
        v45 = ++v43 >> 5;
        if ( v43 == v13 )
        {
          if ( v45 >= v12 )
            goto LABEL_13;
          goto LABEL_79;
        }
        if ( v45 < v12 )
        {
          v46 = v45;
          if ( (v11[v45] & (1 << (v43 & 0x1F))) != 0 )
            goto LABEL_62;
        }
      }
      while ( (v43 & 0x1F) != 0 );
      if ( v45 >= v12 )
        break;
LABEL_79:
      v46 = v45;
LABEL_62:
      v47 = v11[v46];
      if ( (v47 & (1 << v43)) == 0 )
      {
        if ( v43 == v13 )
          goto LABEL_13;
        goto LABEL_68;
      }
LABEL_75:
      if ( v43 == v13 )
        goto LABEL_13;
    }
    while ( 1 )
    {
      if ( v43 == v13 )
        goto LABEL_13;
      v47 = v11[v45];
LABEL_68:
      if ( v47 )
        break;
      ++v45;
      v43 += 32;
    }
    if ( v13 == v43 )
      goto LABEL_13;
    if ( v43 >> 5 < v12 && (v11[v43 >> 5] & (1 << v43)) != 0 )
      goto LABEL_73;
    while ( 1 )
    {
      if ( ++v43 == v13 )
        goto LABEL_13;
LABEL_73:
      v48 = v43 >> 5;
      if ( (unsigned int)v48 < v12 && (v11[v48] & (1 << (v43 & 0x1F))) != 0 || (v43 & 0x1F) == 0 )
        goto LABEL_75;
    }
  }
  v50 = *(_DWORD **)v69;
  while ( !*v50 )
  {
    v42 += 32;
    ++v50;
    if ( v42 == v13 )
      goto LABEL_13;
  }
  if ( v42 != v13 )
  {
    v51 = v42 >> 5;
    v43 = (unsigned int)v51 < v12 ? ((*(_DWORD *)(*(_QWORD *)v69 + 4 * v51) & 1) == 0) + v42 : v42 + 1;
    while ( 1 )
    {
      v52 = v43 >> 5;
      if ( (unsigned int)v52 < v12 && (*(_DWORD *)(*(_QWORD *)v69 + 4 * v52) & (1 << (v43 & 0x1F))) != 0 )
        break;
      if ( (v43 & 0x1F) == 0 )
        break;
      if ( ++v43 == v13 )
        goto LABEL_13;
    }
    if ( v43 != v13 )
      goto LABEL_55;
  }
LABEL_13:
  v14 = a1[6];
  if ( v14 )
  {
    v15 = *(unsigned int *)(v14 - 4);
    if ( (_DWORD)v15 )
    {
      v16 = a1[10];
      v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        v19 = (_BYTE *)(v16 + v18);
        if ( *(_BYTE *)(v16 + v18) )
        {
          v20 = (unsigned int)v18 >> 5;
          if ( (unsigned int)v20 >= v12 || (v11[(unsigned int)v20] & (1 << v18)) == 0 )
          {
            v21 = *(_BYTE *)(a1[7] + v18);
            if ( *(_BYTE *)(v14 + v18) )
            {
              if ( !v21 )
                goto LABEL_27;
              if ( *(_QWORD *)(a1[9] + v17) )
                *v19 = 0;
              if ( !*(_QWORD *)v68
                || (unsigned int)v20 >= *(_DWORD *)(*(_QWORD *)v68 - 4LL)
                || (*(_DWORD *)(*(_QWORD *)v68 + 4 * v20) & (1 << v18)) == 0 )
              {
                goto LABEL_27;
              }
            }
            else
            {
              if ( !v21 )
                goto LABEL_27;
              if ( *(_QWORD *)v68
                && (unsigned int)v20 < *(_DWORD *)(*(_QWORD *)v68 - 4LL)
                && (*(_DWORD *)(*(_QWORD *)v68 + 4 * v20) & (1 << v18)) != 0 )
              {
                *v19 = 0;
              }
              v49 = *(_QWORD *)(a1[9] + v17);
              if ( !v49 || *(_WORD *)(v49 + 4) == 1 )
                goto LABEL_27;
            }
          }
          *v19 = 0;
        }
LABEL_27:
        ++v18;
        v17 += 8;
        if ( v18 == v15 )
        {
          v5 = (unsigned __int8)v5;
          break;
        }
      }
    }
  }
LABEL_29:
  v22 = *(_QWORD *)(a2 + 40);
  v23 = sub_5BCCC0((__int64)a1, *(_QWORD *)(v22 + 16));
  v24 = *(_DWORD *)(v22 + 24);
  v25 = v23;
  v26 = 0;
  v27 = 0;
  if ( v24 )
  {
    do
    {
      while ( 1 )
      {
        v28 = *(_QWORD *)(v22 + 8LL * v27 + 32);
        if ( *(_WORD *)(v28 + 4) == 1 && !*(_BYTE *)(a1[10] + *(unsigned int *)(v28 + 16)) )
        {
          v29 = (_DWORD *)(v25[1] + 4LL * (v27 >> 5));
          v30 = 1 << v27;
          if ( ((1 << v27) & *v29) != 0 )
            break;
        }
        if ( ++v27 >= v24 )
          goto LABEL_36;
      }
      ++v27;
      v26 = 1;
      *v29 &= ~v30;
      v24 = *(_DWORD *)(v22 + 24);
    }
    while ( v27 < v24 );
LABEL_36:
    v5 |= v26;
  }
  if ( *(_DWORD *)(a2 + 68) )
  {
    v31 = 0;
    do
    {
      v32 = *(_QWORD *)(a2 + 8LL * v31 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      v33 = sub_5BCCC0((__int64)a1, *(_QWORD *)(v32 + 16));
      v34 = *(_DWORD *)(v32 + 24);
      v35 = v33;
      if ( v34 )
      {
        v36 = 0;
        v37 = 0;
        do
        {
          while ( 1 )
          {
            v38 = *(_QWORD *)(v32 + 8LL * v37 + 32);
            if ( *(_WORD *)(v38 + 4) == 1 && !*(_BYTE *)(a1[10] + *(unsigned int *)(v38 + 16)) )
            {
              v39 = (_DWORD *)(v35[1] + 4LL * (v37 >> 5));
              v40 = 1 << v37;
              if ( ((1 << v37) & *v39) != 0 )
                break;
            }
            if ( ++v37 >= v34 )
              goto LABEL_46;
          }
          ++v37;
          v36 = 1;
          *v39 &= ~v40;
          v34 = *(_DWORD *)(v32 + 24);
        }
        while ( v37 < v34 );
LABEL_46:
        v5 |= v36;
      }
      ++v31;
    }
    while ( v31 < *(_DWORD *)(a2 + 68) );
  }
  if ( *(_QWORD *)v68 )
    sub_186B220((void *)(*(_QWORD *)v68 - 8LL));
  if ( v11 )
    sub_186B220(v11 - 2);
  return v5;
}

