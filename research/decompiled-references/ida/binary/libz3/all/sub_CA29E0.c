void __fastcall sub_CA29E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  int v5; // esi
  __int64 v6; // r11
  unsigned int v7; // edx
  __int64 *v8; // rcx
  __int64 v9; // r9
  int v10; // r8d
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 *v13; // r10
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // r12
  unsigned int *v17; // r13
  unsigned int *v18; // r14
  int v19; // eax
  __int64 v20; // rax
  __int64 *v21; // rcx
  unsigned int v22; // edx
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 *v25; // rdi
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned int *v30; // r13
  int v31; // eax
  __int64 v32; // rax

  v3 = *((unsigned int *)a1 + 20);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *a1;
  v7 = v3 - 1;
  v8 = (__int64 *)a1[9];
  v3 *= 16;
  v9 = *a1;
  v10 = v5;
  v11 = 16LL * (v5 & v7);
  v12 = (__int64 *)((char *)v8 + v3);
  v13 = &v8[(unsigned __int64)v11 / 8];
  if ( v11 != v3 )
  {
    for ( i = &v8[(unsigned __int64)v11 / 8]; v12 != i; i += 2 )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v5 && a2 == v15 )
        {
LABEL_12:
          v17 = (unsigned int *)a1[71];
          v18 = (unsigned int *)i[1];
          if ( v17 )
          {
            if ( !v18 || v18 == v17 )
            {
              v16 = a1[71];
              *v17 = (*v17 + 1) & 0x3FFFFFFF | *v17 & 0xC0000000;
            }
            else
            {
              v16 = sub_17E9C90(*(_QWORD *)(v6 + 656), 24);
              *v17 = (*v17 + 1) & 0x3FFFFFFF | *v17 & 0xC0000000;
              *v18 = (*v18 + 1) & 0x3FFFFFFF | *v18 & 0xC0000000;
              *(_QWORD *)v16 = 0;
              v19 = *(_DWORD *)v16;
              *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v18);
              v17 = (unsigned int *)a1[71];
              *(_DWORD *)v16 = v19 & 0xC0000000 | 1;
              if ( !v17 )
              {
                v6 = *a1;
                v5 = *(_DWORD *)(a2 + 12);
                goto LABEL_17;
              }
            }
LABEL_10:
            sub_234C20((__int64 *)(a1[72] + 648), v17);
            v9 = *a1;
            v10 = *(_DWORD *)(a2 + 12);
          }
          else
          {
            v16 = 0;
            if ( v18 )
            {
              v16 = i[1];
              *v18 = (*v18 + 1) & 0x3FFFFFFF | *v18 & 0xC0000000;
LABEL_17:
              v9 = v6;
              v10 = v5;
            }
          }
          goto LABEL_18;
        }
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v13 != v8; v8 += 2 )
  {
    v29 = *v8;
    if ( (unsigned __int64)*v8 > 1 )
    {
      if ( *(_DWORD *)(v29 + 12) == v5 && a2 == v29 )
      {
        i = v8;
        goto LABEL_12;
      }
    }
    else if ( !v29 )
    {
      break;
    }
  }
LABEL_8:
  v16 = a1[71];
  if ( v16 )
  {
    v17 = (unsigned int *)a1[71];
    *(_DWORD *)v16 = (*(_DWORD *)v16 + 1) & 0x3FFFFFFF | *(_DWORD *)v16 & 0xC0000000;
    goto LABEL_10;
  }
LABEL_18:
  v20 = *((unsigned int *)a1 + 26);
  v21 = (__int64 *)a1[12];
  a1[71] = v16;
  v22 = v20 - 1;
  v20 *= 16;
  v23 = (__int64 *)((char *)v21 + v20);
  v24 = 16LL * (v10 & v22);
  v25 = &v21[(unsigned __int64)v24 / 8];
  if ( v24 == v20 )
  {
LABEL_43:
    while ( v25 != v21 )
    {
      v32 = *v21;
      if ( (unsigned __int64)*v21 > 1 )
      {
        if ( *(_DWORD *)(v32 + 12) == v10 && a2 == v32 )
        {
          v26 = v21;
          goto LABEL_38;
        }
      }
      else if ( !v32 )
      {
        break;
      }
      v21 += 2;
    }
LABEL_25:
    if ( !v16 )
    {
      v28 = 0;
      goto LABEL_28;
    }
    goto LABEL_26;
  }
  v26 = &v21[(unsigned __int64)v24 / 8];
  while ( 1 )
  {
    v27 = *v26;
    if ( (unsigned __int64)*v26 > 1 )
      break;
    if ( !v27 )
      goto LABEL_25;
LABEL_22:
    v26 += 2;
    if ( v23 == v26 )
      goto LABEL_43;
  }
  if ( *(_DWORD *)(v27 + 12) != v10 || a2 != v27 )
    goto LABEL_22;
LABEL_38:
  v30 = (unsigned int *)v26[1];
  if ( !v16 )
  {
    v28 = 0;
    if ( v30 )
    {
      v28 = v26[1];
      *v30 = (*v30 + 1) & 0x3FFFFFFF | *v30 & 0xC0000000;
    }
    goto LABEL_28;
  }
  if ( v30 == (unsigned int *)v16 || !v30 )
  {
LABEL_26:
    v28 = v16;
    *(_DWORD *)v16 = (*(_DWORD *)v16 + 1) & 0x3FFFFFFF | *(_DWORD *)v16 & 0xC0000000;
LABEL_27:
    sub_234C20((__int64 *)(a1[72] + 648), (unsigned int *)v16);
LABEL_28:
    a1[71] = v28;
    return;
  }
  v28 = sub_17E9C90(*(_QWORD *)(v9 + 656), 24);
  *(_DWORD *)v16 = (*(_DWORD *)v16 + 1) & 0x3FFFFFFF | *(_DWORD *)v16 & 0xC0000000;
  *v30 = (*v30 + 1) & 0x3FFFFFFF | *v30 & 0xC0000000;
  *(_QWORD *)v28 = 0;
  v31 = *(_DWORD *)v28;
  *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v30);
  v16 = a1[71];
  *(_DWORD *)v28 = v31 & 0xC0000000 | 1;
  if ( v16 )
    goto LABEL_27;
  a1[71] = v28;
}

