__int64 __fastcall sub_C6EC40(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int16 v4; // ax
  _DWORD *v5; // rdx
  __int64 *v6; // r8
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 *v9; // r12
  int v10; // edx
  _DWORD *v11; // rax
  char *v12; // rdi
  unsigned int v13; // ebx
  bool v14; // al
  char *v15; // rsi
  char *j; // rdx
  __int64 v17; // rcx
  char v19; // al
  int v20; // edx
  _QWORD *v21; // rcx
  __int64 v22; // r10
  __int64 v23; // rax
  int v24; // edi
  __int64 *v25; // rcx
  unsigned int v26; // edx
  __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 *v29; // r9
  __int64 *i; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // r14
  char *v35; // rax
  char *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rsi
  int v39; // eax
  unsigned __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // rax
  _DWORD *v43; // rax
  _DWORD *v44; // rax
  unsigned __int8 v45; // [rsp+Fh] [rbp-D9h]
  _QWORD *v46; // [rsp+10h] [rbp-D8h]
  __int64 v47; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h]
  __int64 v49; // [rsp+28h] [rbp-C0h]
  _BYTE v50[184]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a2;
  v4 = *(_WORD *)(a2 + 4);
  v47 = a2;
  if ( !v4 && (v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr && *v5 == 5 && v5[1] == 6 )
  {
    v7 = *(unsigned int *)(a2 + 24);
    v13 = 0;
    ptr = v50;
    v49 = 0x1000000000LL;
    if ( !(_DWORD)v7 )
      return v13;
    v3 = *(_QWORD *)(a2 + 32);
    v6 = (__int64 *)(a2 + 32);
    v4 = *(_WORD *)(v3 + 4);
  }
  else
  {
    v6 = &v47;
    ptr = v50;
    v49 = 0x1000000000LL;
    v7 = 1;
  }
  v45 = 1;
  v8 = v6;
  v9 = &v6[v7];
  while ( 1 )
  {
    if ( v4 )
    {
LABEL_11:
      v12 = (char *)ptr;
      v13 = 0;
      v14 = ptr == nullptr || ptr == v50;
      v15 = (char *)ptr + 8 * (unsigned int)v49;
      goto LABEL_12;
    }
    v10 = *(_DWORD *)(v3 + 24);
    v11 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
    if ( !v11 )
    {
      if ( v10 )
        goto LABEL_11;
      goto LABEL_18;
    }
    if ( *v11 != 5 )
    {
      if ( v10 || *v11 != -1 )
        goto LABEL_11;
      goto LABEL_18;
    }
    v39 = v11[1];
    if ( v39 == 9 )
    {
      if ( v10 != 2 )
        goto LABEL_11;
      v42 = *(_QWORD *)(v3 + 32);
      if ( *(_WORD *)(v42 + 4) )
        goto LABEL_11;
      v43 = *(_DWORD **)(*(_QWORD *)(v42 + 16) + 24LL);
      if ( !v43 )
        goto LABEL_11;
      if ( *v43 != 5 )
        goto LABEL_11;
      if ( v43[1] )
        goto LABEL_11;
      v3 = *(_QWORD *)(v3 + 40);
      if ( *(_WORD *)(v3 + 4) )
        goto LABEL_11;
      v10 = *(_DWORD *)(v3 + 24);
      v44 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
      if ( !v10 )
        goto LABEL_75;
      if ( !v44 || *v44 != 5 || v44[1] != 18 )
        goto LABEL_11;
    }
    else if ( v39 != 18 )
    {
      goto LABEL_11;
    }
    if ( v10 != 1 )
      goto LABEL_11;
    v3 = *(_QWORD *)(v3 + 32);
    if ( *(_WORD *)(v3 + 4) || *(_DWORD *)(v3 + 24) )
      goto LABEL_11;
    v44 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
LABEL_75:
    if ( v44 && *v44 != -1 )
      goto LABEL_11;
LABEL_18:
    v19 = *(_BYTE *)(v3 + 6);
    if ( (v19 & 2) != 0 )
      goto LABEL_11;
    *(_BYTE *)(v3 + 6) = v19 | 2;
    v20 = v49;
    if ( (unsigned int)v49 >= HIDWORD(v49) )
    {
      v34 = (unsigned int)(2 * HIDWORD(v49));
      v35 = (char *)sub_186B270(8 * v34);
      v20 = v49;
      v36 = (char *)ptr;
      v21 = v35;
      if ( (_DWORD)v49 )
      {
        if ( (unsigned int)(v49 - 1) <= 2 || v35 == (char *)ptr + 8 )
        {
          v40 = 0;
          v41 = 8LL * (unsigned int)v49;
          do
          {
            v21[v40 / 8] = *(_QWORD *)&v36[v40];
            v40 += 8LL;
          }
          while ( v41 != v40 );
        }
        else
        {
          v37 = 0;
          v38 = 16LL * ((unsigned int)v49 >> 1);
          do
          {
            *(__m128i *)&v21[v37 / 8] = _mm_loadu_si128((const __m128i *)&v36[v37]);
            v37 += 16LL;
          }
          while ( v38 != v37 );
          if ( (v20 & 1) != 0 )
            v21[v20 & 0xFFFFFFFE] = *(_QWORD *)&v36[8 * (v20 & 0xFFFFFFFE)];
        }
      }
      if ( v36 && v36 != v50 )
      {
        v46 = v21;
        sub_186B220(v36);
        v20 = v49;
        v21 = v46;
      }
      ptr = v21;
      HIDWORD(v49) = v34;
    }
    else
    {
      v21 = ptr;
    }
    v22 = *(_QWORD *)(v3 + 16);
    v21[v20] = v3;
    v23 = *(unsigned int *)(a1 + 688);
    v24 = *(_DWORD *)(v22 + 12);
    v25 = *(__int64 **)(a1 + 680);
    LODWORD(v49) = v20 + 1;
    v26 = v23 - 1;
    v23 *= 8;
    v27 = (__int64 *)((char *)v25 + v23);
    v28 = 8LL * (v24 & v26);
    v29 = &v25[(unsigned __int64)v28 / 8];
    if ( v28 != v23 )
    {
      for ( i = &v25[(unsigned __int64)v28 / 8]; v27 != i; ++i )
      {
        v31 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v31 + 12) == v24 && v22 == v31 )
            goto LABEL_30;
        }
        else if ( !v31 )
        {
          goto LABEL_28;
        }
      }
    }
    for ( ; v29 != v25; ++v25 )
    {
      v32 = *v25;
      if ( (unsigned __int64)*v25 > 1 )
      {
        if ( *(_DWORD *)(v32 + 12) == v24 && v22 == v32 )
          goto LABEL_30;
      }
      else if ( !v32 )
      {
        if ( *(_BYTE *)(a1 + 737) )
          goto LABEL_40;
        goto LABEL_29;
      }
    }
LABEL_28:
    if ( !*(_BYTE *)(a1 + 737) )
      break;
LABEL_40:
    v33 = *(_DWORD **)(sub_15D1F10(v3) + 24);
    if ( !v33 || *v33 != 5 )
      break;
    ++v8;
    v45 &= v33[1] == 1;
    if ( v8 == v9 )
      goto LABEL_43;
LABEL_31:
    v3 = *v8;
    v4 = *(_WORD *)(*v8 + 4);
  }
LABEL_29:
  v45 = 0;
LABEL_30:
  if ( ++v8 != v9 )
    goto LABEL_31;
LABEL_43:
  v12 = (char *)ptr;
  v13 = v45 ^ 1;
  v15 = (char *)ptr + 8 * (unsigned int)v49;
  v14 = ptr == v50 || ptr == nullptr;
LABEL_12:
  for ( j = v12; v15 != j; *(_BYTE *)(v17 + 6) &= ~2u )
  {
    v17 = *(_QWORD *)j;
    j += 8;
  }
  LODWORD(v49) = 0;
  if ( !v14 )
    sub_186B220(v12);
  return v13;
}

