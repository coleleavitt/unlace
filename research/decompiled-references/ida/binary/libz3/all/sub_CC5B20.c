_QWORD *__fastcall sub_CC5B20(unsigned int *a1, unsigned __int64 a2, unsigned __int64 **a3)
{
  unsigned __int64 *v5; // r13
  unsigned __int64 v6; // r13
  size_t v8; // r15
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rsi
  unsigned __int64 *v11; // r14
  char *v12; // rax
  size_t v13; // rdx
  unsigned __int64 *v14; // rax
  __int64 v15; // rdx
  size_t v16; // rdx
  __int64 v17; // rbp
  unsigned int v18; // edi
  unsigned int v19; // esi
  unsigned int v20; // eax
  unsigned __int64 *v21; // r14
  size_t v22; // rbp
  unsigned __int64 *v23; // r15
  int v24; // eax
  __int64 v25; // rdx
  unsigned __int64 *v26; // rsi
  unsigned __int64 *v27; // rdx
  unsigned __int64 *v28; // rbp
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rbp
  unsigned __int64 *v33; // rax
  unsigned __int64 *v34; // r10
  __int64 v35; // rax
  unsigned __int64 *v36; // rcx
  char *v37; // r11
  unsigned __int64 *v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 *v41; // rsi
  unsigned __int64 *v42; // rax
  unsigned __int64 v43; // rdx
  char *v44; // rcx
  char *v45; // rax
  __int64 v46; // rdi
  unsigned __int64 v47; // rax
  char *src; // [rsp+0h] [rbp-68h]
  unsigned __int64 *v49; // [rsp+8h] [rbp-60h]
  char *v50; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v51; // [rsp+10h] [rbp-58h]
  char *v52; // [rsp+10h] [rbp-58h]
  char *v53; // [rsp+18h] [rbp-50h]
  char *v54; // [rsp+18h] [rbp-50h]
  unsigned int v55; // [rsp+20h] [rbp-48h]
  unsigned int v56; // [rsp+24h] [rbp-44h]
  unsigned __int64 *v57; // [rsp+28h] [rbp-40h]

  v5 = *a3;
  if ( *a3 )
  {
    v6 = *(v5 - 1);
    v8 = 8LL * (unsigned int)_mm_cvtsi128_si32((__m128i)v6) + 8;
    v9 = (unsigned __int64 *)sub_186B270(v8);
    v10 = *a3;
    *v9 = v6;
    v11 = v9;
    v12 = (char *)(v9 + 1);
    src = v12;
    if ( v10 )
    {
      v13 = 8LL * *((unsigned int *)v10 - 1);
      if ( v13 <= 8 )
      {
        if ( v13 == 8 )
          v11[1] = *v10;
      }
      else
      {
        memmove(v12, v10, v13);
      }
    }
    v14 = (unsigned __int64 *)sub_186B270(v8);
    v15 = *((unsigned int *)v11 + 1);
    *v14 = v6;
    v5 = v14 + 1;
    v16 = 8 * v15;
    if ( v16 <= 8 )
    {
      if ( v16 == 8 )
        v14[1] = v11[1];
    }
    else
    {
      memcpy(v14 + 1, src, v16);
    }
  }
  else
  {
    src = nullptr;
  }
  v17 = a1[2];
  v18 = a1[4];
  v19 = 2 * v17;
  v56 = 2 * v17;
  if ( 3 * (int)v17 < 4 * (v18 + a1[3]) )
  {
    v22 = 16LL * v19;
    v33 = (unsigned __int64 *)sub_186B270(v22);
    v21 = v33;
    v34 = &v33[v22 / 8];
    if ( v19 )
    {
      if ( (v22 & 0x10) == 0 || (*(_OWORD *)v33 = 0, v33 += 2, v34 != v33) )
      {
        do
        {
          *(_OWORD *)v33 = 0;
          v33 += 4;
          *((_OWORD *)v33 - 1) = 0;
        }
        while ( v34 != v33 );
      }
    }
    v23 = v34;
    v35 = a1[2];
    v36 = (unsigned __int64 *)(*(_QWORD *)a1 + 8LL);
    v37 = (char *)(*(_QWORD *)a1 + 16 * v35);
    v55 = v56 - 1;
    if ( *(char **)a1 == v37 )
    {
LABEL_49:
      if ( v37 )
      {
        if ( (_DWORD)v35 )
        {
          v50 = &v37[16 * v35];
          v45 = v37;
          do
          {
            while ( 1 )
            {
              v46 = *((_QWORD *)v45 + 1);
              if ( !v46 )
                break;
              v54 = v45;
              v52 = v37;
              sub_186B220((void *)(v46 - 8));
              v37 = v52;
              v45 = v54 + 16;
              if ( v50 == v54 + 16 )
                goto LABEL_54;
            }
            v45 += 16;
          }
          while ( v45 != v50 );
        }
LABEL_54:
        sub_186B220(v37);
      }
      *(_QWORD *)a1 = v21;
      v18 = 0;
      a1[4] = 0;
      a1[2] = v56;
      goto LABEL_9;
    }
    while ( 1 )
    {
      v39 = *(v36 - 1);
      if ( v39 <= 1 )
      {
LABEL_37:
        v38 = v36 + 2;
        if ( v37 == (char *)(v36 + 1) )
          goto LABEL_48;
        goto LABEL_38;
      }
      v40 = 16LL * (*(_DWORD *)(v39 + 12) & v55);
      v41 = &v21[(unsigned __int64)v40 / 8];
      if ( v22 == v40 )
      {
LABEL_56:
        if ( v21 == v41 )
        {
LABEL_72:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v42 = v21;
        while ( *v42 )
        {
          v42 += 2;
          if ( v41 == v42 )
            goto LABEL_72;
        }
        *v42 = v39;
        if ( v36 == v42 + 1 )
          goto LABEL_37;
        v43 = v42[1];
        if ( v43 )
          goto LABEL_46;
      }
      else
      {
        v42 = &v21[(unsigned __int64)v40 / 8];
        while ( *v42 )
        {
          v42 += 2;
          if ( v34 == v42 )
            goto LABEL_56;
        }
        *v42 = v39;
        if ( v36 == v42 + 1 )
          goto LABEL_37;
        v43 = v42[1];
        if ( v43 )
        {
LABEL_46:
          v57 = v34;
          v53 = v37;
          v51 = v36;
          v49 = v42;
          sub_186B220((void *)(v43 - 8));
          v34 = v57;
          v37 = v53;
          v36 = v51;
          v42 = v49;
        }
      }
      v42[1] = 0;
      v42[1] = *v36;
      v38 = v36 + 2;
      v44 = (char *)(v36 + 1);
      *((_QWORD *)v44 - 1) = 0;
      if ( v37 == v44 )
      {
LABEL_48:
        v35 = a1[2];
        v37 = *(char **)a1;
        goto LABEL_49;
      }
LABEL_38:
      v36 = v38;
    }
  }
  v20 = v17 - 1;
  v21 = *(unsigned __int64 **)a1;
  v22 = 16 * v17;
  v55 = v20;
  v23 = (unsigned __int64 *)(*(_QWORD *)a1 + v22);
LABEL_9:
  v24 = *(_DWORD *)(a2 + 12);
  v25 = 16LL * (v24 & v55);
  v26 = &v21[(unsigned __int64)v25 / 8];
  if ( v25 == v22 )
  {
    v28 = nullptr;
    while ( 1 )
    {
LABEL_20:
      if ( v26 == v21 )
      {
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      v30 = *v21;
      if ( *v21 > 1 )
      {
        if ( *(_DWORD *)(v30 + 12) == v24 && a2 == v30 )
        {
          v28 = v21;
LABEL_26:
          if ( v5 )
            sub_186B220(v5 - 1);
          goto LABEL_28;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( v28 )
            a1[4] = v18 - 1;
          else
            v28 = v21;
          v47 = v28[1];
          *v28 = a2;
          if ( v47 )
            goto LABEL_68;
          goto LABEL_69;
        }
        v28 = v21;
      }
      v21 += 2;
    }
  }
  v27 = &v21[(unsigned __int64)v25 / 8];
  v28 = nullptr;
  while ( 1 )
  {
    v29 = *v27;
    if ( *v27 <= 1 )
      break;
    if ( *(_DWORD *)(v29 + 12) == v24 && a2 == v29 )
    {
      v28 = v27;
      goto LABEL_26;
    }
LABEL_13:
    v27 += 2;
    if ( v27 == v23 )
      goto LABEL_20;
  }
  if ( v29 )
  {
    v28 = v27;
    goto LABEL_13;
  }
  if ( v28 )
    a1[4] = v18 - 1;
  else
    v28 = v27;
  v47 = v28[1];
  *v28 = a2;
  if ( v47 )
LABEL_68:
    sub_186B220((void *)(v47 - 8));
LABEL_69:
  v28[1] = (unsigned __int64)v5;
  ++a1[3];
LABEL_28:
  v31 = v28 + 1;
  if ( src )
    sub_186B220(src - 8);
  return v31;
}

