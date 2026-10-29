void __fastcall sub_17A5190(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _WORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _WORD *v16; // rdx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  _WORD *v21; // rax
  _QWORD *v22; // rax
  _WORD *v23; // rax
  unsigned __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rcx
  unsigned __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rax
  const __m128i ***v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  const __m128i **v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 *v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  _WORD **v48; // rax
  _WORD **v49; // rax
  _WORD **v50; // rax
  __int64 i; // rdi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __m128i *v57; // rax
  __int64 v58; // rsi
  __int64 v59; // r12
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  const __m128i **v68; // rax
  __int64 v69; // rcx
  __int64 *v70; // rax
  __int64 *v71; // rax
  const __m128i *v72; // rsi
  const __m128i **v73; // rax
  __int64 *v74; // rax
  __int64 v75; // rcx

  v4 = 0;
  v5 = sub_B8C200(a2, 0);
  if ( !v5 )
    return;
  while ( 1 )
  {
    v9 = ((_BYTE)v5[1] & 0x7Fu) - 34;
    if ( (unsigned int)v9 > 5 )
      return;
    v10 = (__int64)(v5 - 9);
    v11 = v10;
    if ( !v10 )
      return;
    if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
      goto LABEL_24;
    v12 = sub_B8C3D0(v10, 0, v9, v6, v7, v8);
    v16 = (_WORD *)*v12;
    v17 = *v12 + 8LL * *((unsigned int *)v12 + 2);
    if ( (unsigned __int64)v16 >= v17 )
    {
      if ( v16 != (_WORD *)v17 )
      {
        v13 = *(_WORD **)v17;
        if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) == 197 )
          goto LABEL_27;
        v48 = (_WORD **)(v17 + 8);
        while ( 1 )
        {
          v13 = v48;
          if ( v16 == (_WORD *)v48 )
            break;
          v13 = *v48++;
          if ( v13[18] == 197 )
            goto LABEL_27;
        }
      }
    }
    else
    {
      v13 = v16;
      while ( 1 )
      {
        v4 = *(_QWORD *)v13;
        if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 197 )
          break;
        v13 += 4;
        if ( (_WORD *)v17 == v13 )
          goto LABEL_9;
      }
      if ( (_WORD *)v17 != v13 )
      {
LABEL_27:
        while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 197 )
          v16 += 4;
        goto LABEL_29;
      }
    }
LABEL_9:
    if ( (*(_BYTE *)(v11 + 29) & 1) == 0 )
      goto LABEL_24;
    v18 = sub_B8C3D0(v11, v4, (__int64)v16, (__int64)v13, v14, v15);
    v16 = (_WORD *)*v18;
    v19 = *v18 + 8LL * *((unsigned int *)v18 + 2);
    if ( (unsigned __int64)v16 >= v19 )
      break;
    v13 = v16;
    while ( 1 )
    {
      v4 = *(_QWORD *)v13;
      if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 195 )
        break;
      v13 += 4;
      if ( (_WORD *)v19 == v13 )
        goto LABEL_14;
    }
    if ( (_WORD *)v19 != v13 )
      goto LABEL_66;
LABEL_14:
    if ( (*(_BYTE *)(v11 + 29) & 1) != 0 )
    {
      v20 = sub_B8C3D0(v11, v4, (__int64)v16, (__int64)v13, v14, v15);
      v16 = (_WORD *)*v20;
      v13 = (_WORD *)(*v20 + 8LL * *((unsigned int *)v20 + 2));
      if ( *v20 >= (unsigned __int64)v13 )
      {
        if ( v16 != v13 )
        {
          if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) == 196 )
            goto LABEL_29;
          v50 = (_WORD **)(v13 + 4);
          while ( 1 )
          {
            v13 = v50;
            if ( v16 == (_WORD *)v50 )
              break;
            v13 = *v50++;
            if ( v13[18] == 196 )
              goto LABEL_29;
          }
        }
      }
      else
      {
        v21 = (_WORD *)*v20;
        while ( 1 )
        {
          v16 = *(_WORD **)v21;
          if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) == 196 )
            break;
          v21 += 4;
          if ( v13 == v21 )
            goto LABEL_19;
        }
        if ( v13 != v21 )
          goto LABEL_29;
      }
LABEL_19:
      if ( (*(_BYTE *)(v11 + 29) & 1) != 0 )
      {
        v22 = sub_B8C3D0(v11, v4, (__int64)v16, (__int64)v13, v14, v15);
        v16 = (_WORD *)*v22;
        v13 = (_WORD *)(*v22 + 8LL * *((unsigned int *)v22 + 2));
        if ( *v22 >= (unsigned __int64)v13 )
        {
          if ( v16 != v13 )
          {
            while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 198 )
            {
              v13 += 4;
              if ( v16 == v13 )
                goto LABEL_24;
            }
            goto LABEL_29;
          }
        }
        else
        {
          v23 = (_WORD *)*v22;
          while ( 1 )
          {
            v16 = *(_WORD **)v23;
            if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 198 )
              break;
            v23 += 4;
            if ( v13 == v23 )
              goto LABEL_24;
          }
          if ( v13 != v23 )
            goto LABEL_29;
        }
      }
    }
LABEL_24:
    v4 = 0;
    v5 = sub_B8C200(v11, 0);
    if ( !v5 )
      return;
  }
  if ( v16 == (_WORD *)v19 )
    goto LABEL_14;
  while ( 1 )
  {
    v13 = *(_WORD **)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 195 )
      break;
    v19 += 8LL;
    if ( v16 == (_WORD *)v19 )
      goto LABEL_14;
  }
LABEL_66:
  if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) != 195 )
  {
    v49 = (_WORD **)(v16 + 4);
    do
      v16 = *v49++;
    while ( v16[18] != 195 );
  }
LABEL_29:
  if ( (*(_BYTE *)(v11 + 29) & 1) == 0 )
    return;
  v24 = sub_B8C3D0(v11, v4, (__int64)v16, (__int64)v13, v14, v15);
  v28 = *v24;
  v29 = *v24 + 8LL * *((unsigned int *)v24 + 2);
  if ( v28 >= v29 )
  {
    if ( v28 == v29 )
      goto LABEL_36;
    if ( *(_WORD *)(*(_QWORD *)v29 + 36LL) != 197 )
    {
      v30 = (__int64 *)(v29 + 8);
      do
      {
        v25 = (__int64)v30;
        if ( (__int64 *)v28 == v30 )
          goto LABEL_36;
        v31 = *v30++;
      }
      while ( *(_WORD *)(v31 + 36) != 197 );
    }
LABEL_82:
    for ( i = *(_QWORD *)v28; *(_WORD *)(*(_QWORD *)v28 + 36LL) != 197; i = *(_QWORD *)v28 )
      v28 += 8LL;
LABEL_84:
    v52 = sub_B395B0(i, *(_QWORD *)(a1 + 248));
LABEL_85:
    *(_BYTE *)(v52 + 38) |= 1u;
    sub_B8CC60(a2, v52, v53, v54, v55, v56);
    return;
  }
  v25 = v28;
  while ( 1 )
  {
    v4 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) == 197 )
      break;
    v25 += 8;
    if ( v29 == v25 )
      goto LABEL_36;
  }
  if ( v29 != v25 )
    goto LABEL_82;
LABEL_36:
  if ( (*(_BYTE *)(v11 + 29) & 1) == 0 )
    return;
  v32 = sub_B8C3D0(v11, v4, v28, v25, v26, v27);
  v36 = *v32;
  v37 = *v32 + 8LL * *((unsigned int *)v32 + 2);
  if ( v36 >= v37 )
  {
    for ( ; v36 != v37; v37 += 8LL )
    {
      v33 = *(_QWORD *)v37;
      if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 195 )
        goto LABEL_99;
    }
  }
  else
  {
    v33 = v36;
    while ( 1 )
    {
      v4 = *(_QWORD *)v33;
      if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) == 195 )
        break;
      v33 += 8;
      if ( v37 == v33 )
        goto LABEL_41;
    }
    if ( v37 != v33 )
    {
LABEL_99:
      for ( i = *(_QWORD *)v36; *(_WORD *)(*(_QWORD *)v36 + 36LL) != 195; i = *(_QWORD *)v36 )
        v36 += 8LL;
      goto LABEL_84;
    }
  }
LABEL_41:
  if ( (*(_BYTE *)(v11 + 29) & 1) == 0 )
    return;
  v38 = (const __m128i ***)sub_B8C3D0(v11, v4, v36, v33, v34, v35);
  v42 = *v38;
  v43 = (unsigned __int64)&(*v38)[*((unsigned int *)v38 + 2)];
  if ( (unsigned __int64)v42 >= v43 )
  {
    if ( v42 == (const __m128i **)v43 )
      goto LABEL_46;
    if ( *(_WORD *)(*(_QWORD *)v43 + 36LL) == 196 )
      goto LABEL_95;
    v68 = (const __m128i **)(v43 + 8);
    while ( 1 )
    {
      v39 = (__int64)v68;
      if ( v68 == v42 )
        break;
      v69 = (__int64)*v68++;
      if ( *(_WORD *)(v69 + 36) == 196 )
        goto LABEL_95;
    }
LABEL_46:
    if ( (*(_BYTE *)(v11 + 29) & 1) == 0 )
      return;
    v44 = sub_B8C3D0(v11, v4, (__int64)v42, v39, v40, v41);
    v45 = *v44;
    v46 = *v44 + 8LL * *((unsigned int *)v44 + 2);
    if ( v45 >= v46 )
    {
      if ( v45 == v46 )
        return;
      if ( *(_WORD *)(*(_QWORD *)v46 + 36LL) != 198 )
      {
        v74 = (__int64 *)(v46 + 8);
        while ( v74 != (__int64 *)v45 )
        {
          v75 = *v74++;
          if ( *(_WORD *)(v75 + 36) == 198 )
            goto LABEL_124;
        }
        return;
      }
    }
    else
    {
      v47 = v45;
      while ( *(_WORD *)(*(_QWORD *)v47 + 36LL) != 198 )
      {
        v47 += 8LL;
        if ( v46 == v47 )
          return;
      }
      if ( v46 == v47 )
        return;
    }
LABEL_124:
    v72 = *(const __m128i **)v45;
    if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 198 )
    {
      v73 = (const __m128i **)(v45 + 8);
      do
        v72 = *v73++;
      while ( v72[2].m128i_i16[2] != 198 );
    }
    v52 = (__int64)sub_B250D0(*(_QWORD *)(a1 + 248), v72);
    goto LABEL_85;
  }
  v39 = (__int64)v42;
  while ( 1 )
  {
    v4 = *(_QWORD *)v39;
    if ( *(_WORD *)(*(_QWORD *)v39 + 36LL) == 196 )
      break;
    v39 += 8;
    if ( v43 == v39 )
      goto LABEL_46;
  }
  if ( v43 == v39 )
    goto LABEL_46;
LABEL_95:
  while ( (*v42)[2].m128i_i16[2] != 196 )
    ++v42;
  v57 = sub_B24F80(*(_QWORD *)(a1 + 248), *v42);
  v57[2].m128i_i8[6] |= 1u;
  v58 = (__int64)v57;
  v59 = (__int64)v57;
  sub_B8CC60(a2, (__int64)v57, v60, v61, v62, v63);
  if ( (*(_BYTE *)(v11 + 29) & 1) != 0 )
  {
    v70 = sub_B8C3D0(v11, v58, v64, v65, v66, v67);
    v64 = *v70;
    v65 = *v70 + 8LL * *((unsigned int *)v70 + 2);
    if ( *v70 >= v65 )
    {
      if ( v64 == v65 )
        goto LABEL_97;
      while ( *(_WORD *)(*(_QWORD *)v65 + 36LL) != 195 )
      {
        v65 += 8LL;
        if ( v64 == v65 )
          goto LABEL_97;
      }
    }
    else
    {
      v71 = (__int64 *)*v70;
      while ( 1 )
      {
        v64 = *v71;
        if ( *(_WORD *)(*v71 + 36) == 195 )
          break;
        if ( (__int64 *)v65 == ++v71 )
          goto LABEL_97;
      }
      if ( (__int64 *)v65 == v71 )
        goto LABEL_97;
    }
  }
  else
  {
LABEL_97:
    sub_B8CC60(v11, v59, v64, v65, v66, v67);
  }
}
