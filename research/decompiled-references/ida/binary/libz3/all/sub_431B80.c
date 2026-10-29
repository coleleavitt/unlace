_BYTE *__fastcall sub_431B80(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  _QWORD *v6; // r15
  __int64 v7; // r14
  char v8; // al
  int v9; // edx
  __int64 v10; // r13
  char *v11; // rax
  char *v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 *v17; // rbx
  unsigned int v18; // r15d
  __int64 v19; // rsi
  char v20; // dl
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 *v23; // rax
  __int64 v24; // rsi
  bool v25; // zf
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rax
  _BYTE *v29; // rdi
  char *v30; // rcx
  char *v31; // rax
  __int64 v32; // rdx
  _BYTE *result; // rax
  unsigned __int64 v34; // r14
  __int64 *v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // [rsp+8h] [rbp-100h]
  __int64 v41; // [rsp+10h] [rbp-F8h]
  __int64 *v42; // [rsp+10h] [rbp-F8h]
  __int64 v43; // [rsp+28h] [rbp-E0h]
  __int64 v44; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+38h] [rbp-D0h]
  void *v46; // [rsp+40h] [rbp-C8h]
  __int64 v47; // [rsp+48h] [rbp-C0h]
  _BYTE v48[184]; // [rsp+50h] [rbp-B8h] BYREF

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 224);
  v40 = *(_QWORD *)(a1 + 8);
  v46 = v48;
  v47 = 0x1000000000LL;
  if ( v5 )
  {
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 8 * v4);
      v8 = *(_BYTE *)(v7 + 6);
      if ( (v8 & 1) == 0 )
      {
        *(_BYTE *)(v7 + 6) = v8 | 1;
        v9 = v47;
        if ( (unsigned int)v47 < HIDWORD(v47) )
        {
          v6 = v46;
        }
        else
        {
          v10 = (unsigned int)(2 * HIDWORD(v47));
          v11 = (char *)sub_186B270(8 * v10);
          v9 = v47;
          v12 = (char *)v46;
          v6 = v11;
          if ( (_DWORD)v47 )
          {
            if ( (unsigned int)(v47 - 1) <= 2 || v11 == (char *)v46 + 8 )
            {
              v38 = 0;
              v39 = 8LL * (unsigned int)v47;
              do
              {
                v6[v38 / 8] = *(_QWORD *)&v12[v38];
                v38 += 8LL;
              }
              while ( v38 != v39 );
            }
            else
            {
              v13 = 0;
              v14 = 16LL * ((unsigned int)v47 >> 1);
              do
              {
                *(__m128i *)&v6[v13 / 8] = _mm_loadu_si128((const __m128i *)&v12[v13]);
                v13 += 16LL;
              }
              while ( v14 != v13 );
              if ( (v9 & 1) != 0 )
                v6[v9 & 0xFFFFFFFE] = *(_QWORD *)&v12[8 * (v9 & 0xFFFFFFFE)];
            }
          }
          if ( v12 && v12 != v48 )
          {
            sub_186B220(v12);
            v9 = v47;
          }
          v46 = v6;
          v5 = *(_DWORD *)(a1 + 224);
          HIDWORD(v47) = v10;
        }
        v6[v9] = v7;
        LODWORD(v47) = v9 + 1;
      }
      ++v4;
    }
    while ( (unsigned int)v4 < v5 );
  }
  v15 = a2[1];
  if ( !v15 )
    goto LABEL_34;
  v16 = v15 + 8LL * *(unsigned int *)(v15 - 4);
  if ( v16 == v15 )
  {
    v28 = a2[1];
    v18 = 0;
    v15 = 0;
    goto LABEL_33;
  }
  v17 = (__int64 *)a2[1];
  v18 = 0;
  v15 = 0;
  do
  {
    v26 = *v17;
    if ( (*(_BYTE *)(*v17 + 6) & 1) != 0 )
      goto LABEL_28;
    if ( *(_BYTE *)(a1 + 228) )
    {
      v19 = *v17;
      v41 = v16;
      v44 = v15;
      v45 = v40;
      v20 = sub_431AC0(a1, v19, &v44);
      v21 = v18++;
      v15 = v44;
      v22 = *a2;
      v40 = v45;
      v16 = v41;
      v23 = (__int64 *)(a2[1] + 8 * v21);
      if ( v20 )
      {
        v26 = *(_QWORD *)(v44 + 40);
        if ( !v26 )
          goto LABEL_24;
      }
    }
    else
    {
      v27 = v18;
      v22 = *a2;
      ++v18;
      v23 = (__int64 *)(a2[1] + 8 * v27);
    }
    ++*(_DWORD *)(v26 + 8);
LABEL_24:
    v24 = *v23;
    if ( *v23 )
    {
      v25 = (*(_DWORD *)(v24 + 8))-- == 1;
      if ( v25 )
      {
        v43 = v16;
        v42 = v23;
        sub_15D7BC0(v22, v24);
        v16 = v43;
        v23 = v42;
      }
    }
    *v23 = v26;
LABEL_28:
    ++v17;
  }
  while ( (__int64 *)v16 != v17 );
  v28 = a2[1];
  if ( v28 )
  {
    v34 = v28 + 8LL * *(unsigned int *)(v28 - 4);
    v35 = (__int64 *)(v28 + 8LL * v18);
    if ( (unsigned __int64)v35 >= v34 )
      goto LABEL_33;
    do
    {
      v36 = *v35;
      if ( *v35 )
      {
        v37 = *a2;
        v25 = (*(_DWORD *)(v36 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v37, v36);
      }
      ++v35;
    }
    while ( (unsigned __int64)v35 < v34 );
    v28 = a2[1];
    if ( v28 )
LABEL_33:
      *(_DWORD *)(v28 - 4) = v18;
  }
LABEL_34:
  v29 = v46;
  v30 = (char *)v46 + 8 * (unsigned int)v47;
  v31 = (char *)v46;
  if ( v46 != v30 )
  {
    do
    {
      v32 = *(_QWORD *)v31;
      v31 += 8;
      *(_BYTE *)(v32 + 6) &= ~1u;
    }
    while ( v30 != v31 );
  }
  result = v48;
  LODWORD(v47) = 0;
  if ( v29 != v48 && v29 )
    result = (_BYTE *)sub_186B220(v29);
  if ( v15 )
  {
    v25 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v25 )
      return (_BYTE *)sub_15D7BC0(v40, v15);
  }
  return result;
}

