__int64 __fastcall sub_6BAEC0(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rbp
  __int64 *v14; // r12
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rsi
  void *v23; // rdi
  _QWORD *v24; // rdx
  int v25; // ecx
  unsigned int v26; // ebp
  size_t v27; // rbx
  _OWORD *v28; // rdx
  _OWORD *v29; // rcx
  _OWORD *v30; // rax
  _QWORD *v31; // rdi
  int v32; // ecx
  __int64 v33; // rsi
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  unsigned int v36; // ebp
  size_t v37; // rbx
  _OWORD *v38; // rdx
  _OWORD *v39; // rcx
  _OWORD *v40; // rax
  _QWORD *v41; // rbx
  _QWORD *v42; // rbp
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rbx
  _QWORD *v47; // rbp
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 result; // rax
  _QWORD *v52; // rbx
  _QWORD *v53; // rbp
  __int64 v54; // rsi
  __int64 v55; // rdi
  size_t v56; // rsi
  size_t v57; // rsi

  v2 = *(_QWORD **)(a1 + 368);
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = *(_QWORD *)(a1 + 360);
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = *(_QWORD **)(a1 + 368);
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  v7 = *(_QWORD **)(a1 + 384);
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = *(_QWORD *)(a1 + 376);
          v6 = (*(_DWORD *)(v9 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_17;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_17:
    v7 = *(_QWORD **)(a1 + 384);
    if ( v7 )
LABEL_18:
      *((_DWORD *)v7 - 1) = 0;
  }
  v11 = *(_QWORD **)(a1 + 448);
  v12 = v11;
  v13 = &v11[2 * *(unsigned int *)(a1 + 456)];
  if ( v11 == v13 )
  {
    if ( *(_DWORD *)(a1 + 460) )
      goto LABEL_57;
  }
  else
  {
    while ( *v12 <= 1u )
    {
      v12 += 2;
      if ( v13 == v12 )
        goto LABEL_112;
    }
    if ( v13 == v12 )
    {
LABEL_112:
      if ( !*(_DWORD *)(a1 + 460) )
        goto LABEL_43;
      v23 = *(void **)(a1 + 448);
      v22 = *(unsigned int *)(a1 + 456);
      v24 = &v11[2 * v22];
      goto LABEL_45;
    }
    do
    {
      v14 = (__int64 *)v12[1];
      if ( v14 )
      {
        sub_2334C0(v14 + 19);
        v15 = (void *)v14[18];
        v14[12] = (__int64)&off_1C62200;
        if ( v15 )
          sub_186B220(v15);
        v16 = (void *)v14[15];
        if ( v16 )
          sub_186B220(v16);
        v17 = (void *)v14[11];
        v14[5] = (__int64)&off_1C62200;
        if ( v17 )
          sub_186B220(v17);
        v18 = (void *)v14[8];
        if ( v18 )
          sub_186B220(v18);
        v19 = *v14;
        if ( *v14 )
        {
          v20 = v14[1];
          v6 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v6 )
            sub_15D7BC0(v20, v19);
        }
        sub_186B220(v14);
      }
      v21 = v12 + 2;
      if ( v13 == v12 + 2 )
        break;
      while ( 1 )
      {
        v12 = v21;
        if ( *v21 > 1u )
          break;
        v21 += 2;
        if ( v13 == v21 )
          goto LABEL_42;
      }
    }
    while ( v13 != v21 );
LABEL_42:
    if ( *(_DWORD *)(a1 + 460) )
      goto LABEL_44;
  }
LABEL_43:
  if ( *(_DWORD *)(a1 + 464) )
  {
LABEL_44:
    v11 = *(_QWORD **)(a1 + 448);
    v22 = *(unsigned int *)(a1 + 456);
    v23 = v11;
    v24 = &v11[2 * v22];
    if ( v11 == v24 )
    {
LABEL_57:
      *(_QWORD *)(a1 + 460) = 0;
      goto LABEL_58;
    }
LABEL_45:
    v25 = 0;
    do
    {
      while ( *v11 )
      {
        *v11 = 0;
        v11 += 2;
        if ( v11 == v24 )
          goto LABEL_49;
      }
      v11 += 2;
      ++v25;
    }
    while ( v11 != v24 );
LABEL_49:
    if ( (unsigned int)v22 <= 0x10 || 3 * (int)v22 >= (unsigned int)(4 * v25) )
      goto LABEL_57;
    if ( v23 )
    {
      sub_186B220(v23);
      v26 = *(_DWORD *)(a1 + 456);
      *(_QWORD *)(a1 + 448) = 0;
      v26 >>= 1;
      *(_DWORD *)(a1 + 456) = v26;
      v27 = v26;
      v28 = (_OWORD *)sub_186B270(v27 * 16);
      if ( !v26 )
      {
LABEL_56:
        *(_QWORD *)(a1 + 448) = v28;
        goto LABEL_57;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 448) = 0;
      v57 = (unsigned int)v22 >> 1;
      *(_DWORD *)(a1 + 456) = v57;
      v27 = v57;
      v28 = (_OWORD *)sub_186B270(16 * v57);
    }
    v29 = &v28[v27];
    v30 = v28;
    if ( ((v27 * 16) & 0x10) == 0 || (v30 = v28 + 1, *v28 = 0, v29 != v28 + 1) )
    {
      do
      {
        *v30 = 0;
        v30 += 2;
        *(v30 - 1) = 0;
      }
      while ( v29 != v30 );
    }
    goto LABEL_56;
  }
LABEL_58:
  if ( !*(_DWORD *)(a1 + 436) && !*(_DWORD *)(a1 + 440) )
    goto LABEL_74;
  v31 = *(_QWORD **)(a1 + 424);
  v32 = 0;
  v33 = *(unsigned int *)(a1 + 432);
  v34 = v31;
  v35 = &v31[2 * v33];
  if ( v31 != v35 )
  {
    do
    {
      while ( *v34 )
      {
        *v34 = 0;
        v34 += 2;
        if ( v35 == v34 )
          goto LABEL_65;
      }
      v34 += 2;
      ++v32;
    }
    while ( v35 != v34 );
LABEL_65:
    if ( (unsigned int)v33 > 0x10 && 3 * (int)v33 < (unsigned int)(4 * v32) )
    {
      if ( v31 )
      {
        sub_186B220(v31);
        v36 = *(_DWORD *)(a1 + 432);
        *(_QWORD *)(a1 + 424) = 0;
        v36 >>= 1;
        *(_DWORD *)(a1 + 432) = v36;
        v37 = v36;
        v38 = (_OWORD *)sub_186B270(v37 * 16);
        if ( !v36 )
        {
LABEL_72:
          *(_QWORD *)(a1 + 424) = v38;
          goto LABEL_73;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 424) = 0;
        v56 = (unsigned int)v33 >> 1;
        *(_DWORD *)(a1 + 432) = v56;
        v37 = v56;
        v38 = (_OWORD *)sub_186B270(16 * v56);
      }
      v39 = &v38[v37];
      v40 = v38;
      if ( ((v37 * 16) & 0x10) == 0 || (v40 = v38 + 1, *v38 = 0, v39 != v38 + 1) )
      {
        do
        {
          *v40 = 0;
          v40 += 2;
          *(v40 - 1) = 0;
        }
        while ( v39 != v40 );
      }
      goto LABEL_72;
    }
  }
LABEL_73:
  *(_QWORD *)(a1 + 436) = 0;
LABEL_74:
  sub_6B1200(a1 + 496);
  v41 = *(_QWORD **)(a1 + 752);
  if ( v41 )
  {
    v42 = &v41[*((unsigned int *)v41 - 1)];
    if ( v41 >= v42 )
      goto LABEL_82;
    do
    {
      while ( 1 )
      {
        v43 = *v41;
        if ( *v41 )
        {
          v44 = *(_QWORD *)(a1 + 744);
          v6 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v41 >= v42 )
          goto LABEL_81;
      }
      sub_15D7BC0(v44, v43);
      ++v41;
    }
    while ( v41 < v42 );
LABEL_81:
    v41 = *(_QWORD **)(a1 + 752);
    if ( v41 )
LABEL_82:
      *((_DWORD *)v41 - 1) = 0;
  }
  sub_6A99C0(*(_QWORD *)(a1 + 392), *(_QWORD *)(a1 + 400));
  v45 = *(_QWORD *)(a1 + 912);
  *(_QWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 768) = 0;
  if ( v45 )
    *(_DWORD *)(v45 - 4) = 0;
  v46 = *(_QWORD **)(a1 + 888);
  if ( v46 )
  {
    v47 = &v46[*((unsigned int *)v46 - 1)];
    if ( v46 >= v47 )
      goto LABEL_93;
    do
    {
      while ( 1 )
      {
        v48 = *v46;
        if ( *v46 )
        {
          v49 = *(_QWORD *)(a1 + 880);
          v6 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v46 >= v47 )
          goto LABEL_92;
      }
      sub_15D7BC0(v49, v48);
      ++v46;
    }
    while ( v46 < v47 );
LABEL_92:
    v46 = *(_QWORD **)(a1 + 888);
    if ( v46 )
LABEL_93:
      *((_DWORD *)v46 - 1) = 0;
  }
  v50 = *(_QWORD *)(a1 + 920);
  if ( v50 )
    *(_DWORD *)(v50 - 4) = 0;
  sub_6BADC0(a1 + 832);
  sub_6BADC0(a1 + 856);
  sub_6BADC0(a1 + 1248);
  result = *(_QWORD *)(a1 + 1272);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v52 = *(_QWORD **)(a1 + 1288);
  if ( v52 )
  {
    result = *((unsigned int *)v52 - 1);
    v53 = &v52[result];
    if ( v52 >= v53 )
      goto LABEL_106;
    do
    {
      while ( 1 )
      {
        v54 = *v52;
        if ( *v52 )
        {
          v55 = *(_QWORD *)(a1 + 1280);
          v6 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v52 >= v53 )
          goto LABEL_105;
      }
      result = sub_15D7BC0(v55, v54);
      ++v52;
    }
    while ( v52 < v53 );
LABEL_105:
    v52 = *(_QWORD **)(a1 + 1288);
    if ( v52 )
LABEL_106:
      *((_DWORD *)v52 - 1) = 0;
  }
  return result;
}

