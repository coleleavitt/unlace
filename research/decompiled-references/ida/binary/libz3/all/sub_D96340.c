__int64 __fastcall sub_D96340(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rsi
  bool v7; // zf
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 *v15; // rax
  char *v16; // rdi
  int v17; // ecx
  __int64 v18; // rsi
  char *v19; // rax
  char *v20; // rdx
  unsigned int v21; // ebp
  size_t v22; // rbx
  _OWORD *v23; // rdx
  _OWORD *v24; // rcx
  _OWORD *v25; // rax
  char *v26; // rdi
  __int64 v27; // rsi
  char *v28; // rdx
  char *v29; // rax
  int v30; // ecx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  __int64 v33; // rax
  char *v34; // rax
  char *v35; // rax
  void *v36; // rdi
  void *v37; // rdi
  void *v38; // rdi
  size_t v40; // rsi

  *(_QWORD *)a1 = &off_1C5A7F0;
  sub_CA7120(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8), a1 + 120);
  sub_CA7120(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8), a1 + 144);
  v2 = *(__int64 **)(a1 + 168);
  v3 = &v2[2 * *(unsigned int *)(a1 + 176)];
  if ( v2 != v3 )
  {
    while ( (unsigned __int64)*v2 <= 1 )
    {
      v2 += 2;
      if ( v3 == v2 )
        goto LABEL_18;
    }
    if ( v3 != v2 )
    {
      v4 = *v2;
      v5 = *(_QWORD *)(a1 + 8);
      if ( *v2 )
        goto LABEL_16;
      while ( 1 )
      {
        v6 = v2[1];
        if ( v6 )
        {
          v7 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v5, v6);
        }
        v8 = v2 + 2;
        if ( v3 == v2 + 2 )
          break;
        while ( 1 )
        {
          v4 = *v8;
          v2 = v8;
          if ( (unsigned __int64)*v8 > 1 )
            break;
          v8 += 2;
          if ( v3 == v8 )
            goto LABEL_18;
        }
        if ( v3 == v8 )
          break;
        v5 = *(_QWORD *)(a1 + 8);
LABEL_16:
        v7 = (*(_DWORD *)(v4 + 8))-- == 1;
        if ( v7 )
        {
          sub_15D7BC0(v5, v4);
          v5 = *(_QWORD *)(a1 + 8);
        }
      }
    }
  }
LABEL_18:
  v9 = *(__int64 **)(a1 + 192);
  v10 = &v9[3 * *(unsigned int *)(a1 + 200)];
  if ( v9 != v10 )
  {
    while ( (unsigned __int64)*v9 <= 1 )
    {
      v9 += 3;
      if ( v10 == v9 )
        goto LABEL_38;
    }
    if ( v10 != v9 )
    {
      v11 = *v9;
      v12 = *(_QWORD *)(a1 + 8);
      if ( *v9 )
        goto LABEL_36;
      while ( 1 )
      {
        v13 = v9[1];
        if ( v13 )
        {
          v7 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v7 )
          {
            sub_15D7BC0(v12, v13);
            v12 = *(_QWORD *)(a1 + 8);
          }
        }
        v14 = v9[2];
        if ( v14 )
        {
          v7 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v7 )
            sub_15D7BC0(v12, v14);
        }
        v15 = v9 + 3;
        if ( v10 == v9 + 3 )
          break;
        while ( 1 )
        {
          v11 = *v15;
          v9 = v15;
          if ( (unsigned __int64)*v15 > 1 )
            break;
          v15 += 3;
          if ( v10 == v15 )
            goto LABEL_38;
        }
        if ( v10 == v15 )
          break;
        v12 = *(_QWORD *)(a1 + 8);
LABEL_36:
        v7 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v7 )
        {
          sub_15D7BC0(v12, v11);
          v12 = *(_QWORD *)(a1 + 8);
        }
      }
    }
  }
LABEL_38:
  if ( *(_DWORD *)(a1 + 180) || *(_DWORD *)(a1 + 184) )
  {
    v16 = *(char **)(a1 + 168);
    v17 = 0;
    v18 = *(unsigned int *)(a1 + 176);
    v19 = v16;
    v20 = &v16[16 * v18];
    if ( v16 == v20 )
      goto LABEL_53;
    do
    {
      while ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = 0;
        v19 += 16;
        if ( v20 == v19 )
          goto LABEL_45;
      }
      v19 += 16;
      ++v17;
    }
    while ( v20 != v19 );
LABEL_45:
    if ( (unsigned int)v18 <= 0x10 || 3 * (int)v18 >= (unsigned int)(4 * v17) )
      goto LABEL_53;
    if ( v16 )
    {
      sub_186B220(v16);
      v21 = *(_DWORD *)(a1 + 176);
      *(_QWORD *)(a1 + 168) = 0;
      v21 >>= 1;
      *(_DWORD *)(a1 + 176) = v21;
      v22 = v21;
      v23 = (_OWORD *)sub_186B270(v22 * 16);
      if ( !v21 )
      {
LABEL_52:
        *(_QWORD *)(a1 + 168) = v23;
LABEL_53:
        *(_QWORD *)(a1 + 180) = 0;
        goto LABEL_54;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 168) = 0;
      v40 = (unsigned int)v18 >> 1;
      *(_DWORD *)(a1 + 176) = v40;
      v22 = v40;
      v23 = (_OWORD *)sub_186B270(16 * v40);
    }
    v24 = &v23[v22];
    v25 = v23;
    if ( ((v22 * 16) & 0x10) == 0 || (v25 = v23 + 1, *v23 = 0, v23 + 1 != v24) )
    {
      do
      {
        *v25 = 0;
        v25 += 2;
        *(v25 - 1) = 0;
      }
      while ( v25 != v24 );
    }
    goto LABEL_52;
  }
LABEL_54:
  v26 = *(char **)(a1 + 192);
  if ( *(_DWORD *)(a1 + 204) || *(_DWORD *)(a1 + 208) )
  {
    v27 = *(unsigned int *)(a1 + 200);
    v28 = &v26[24 * v27];
    if ( v28 != v26 )
    {
      v29 = *(char **)(a1 + 192);
      v30 = 0;
      do
      {
        while ( *(_QWORD *)v29 )
        {
          *(_QWORD *)v29 = 0;
          v29 += 24;
          if ( v28 == v29 )
            goto LABEL_61;
        }
        v29 += 24;
        ++v30;
      }
      while ( v28 != v29 );
LABEL_61:
      if ( (unsigned int)v27 > 0x10 && 3 * (int)v27 < (unsigned int)(4 * v30) )
      {
        if ( v26 )
        {
          sub_186B220(v26);
          v31 = *(_DWORD *)(a1 + 200);
          *(_QWORD *)(a1 + 192) = 0;
          v32 = v31 >> 1;
          *(_DWORD *)(a1 + 200) = v32;
          v33 = sub_186B270(24LL * v32);
          v26 = (char *)v33;
          if ( v32 )
          {
            if ( v32 != 1 )
            {
LABEL_66:
              v34 = v26;
              do
              {
                *(_OWORD *)v34 = 0;
                v34 += 48;
                *((_OWORD *)v34 - 2) = 0;
                *((_OWORD *)v34 - 1) = 0;
              }
              while ( &v26[48 * (v32 >> 1)] != v34 );
              if ( (v32 & 1) != 0 )
              {
                v35 = &v26[24 * (v32 & 0x7FFFFFFE)];
                *((_QWORD *)v35 + 2) = 0;
                *(_OWORD *)v35 = 0;
              }
              goto LABEL_70;
            }
            *(_QWORD *)(v33 + 16) = 0;
            *(_OWORD *)v33 = 0;
          }
LABEL_70:
          *(_QWORD *)(a1 + 192) = v26;
          *(_QWORD *)(a1 + 204) = 0;
LABEL_71:
          sub_186B220(v26);
          goto LABEL_72;
        }
        *(_QWORD *)(a1 + 192) = 0;
        v32 = (unsigned int)v27 >> 1;
        *(_DWORD *)(a1 + 200) = (unsigned int)v27 >> 1;
        v26 = (char *)sub_186B270(24LL * ((unsigned int)v27 >> 1));
        goto LABEL_66;
      }
    }
    *(_QWORD *)(a1 + 204) = 0;
  }
  if ( v26 )
    goto LABEL_71;
LABEL_72:
  v36 = *(void **)(a1 + 168);
  if ( v36 )
    sub_186B220(v36);
  v37 = *(void **)(a1 + 144);
  if ( v37 )
    sub_186B220(v37);
  v38 = *(void **)(a1 + 120);
  if ( v38 )
    sub_186B220(v38);
  return sub_14B63F0(a1 + 104);
}

