char __fastcall sub_6D4EA0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  int *v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  int v11; // r15d
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  unsigned int v14; // esi
  _DWORD *v15; // rdx
  _DWORD *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  __int64 *v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  _QWORD *v26; // r11
  __int64 v27; // rax
  __int64 *v28; // rdi
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 *v32; // rdi
  __int64 v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  __int64 v37; // [rsp+0h] [rbp-58h]
  __int64 v38; // [rsp+0h] [rbp-58h]
  __int64 v39; // [rsp+0h] [rbp-58h]
  __int64 v40; // [rsp+0h] [rbp-58h]
  __int64 v41; // [rsp+8h] [rbp-50h]
  __int64 v42; // [rsp+8h] [rbp-50h]
  __int64 v43; // [rsp+8h] [rbp-50h]
  __int64 v44; // [rsp+8h] [rbp-50h]
  unsigned int v45; // [rsp+10h] [rbp-48h]
  int v46; // [rsp+10h] [rbp-48h]
  unsigned int v47; // [rsp+10h] [rbp-48h]
  int v48; // [rsp+10h] [rbp-48h]
  _QWORD *v49; // [rsp+18h] [rbp-40h]

  v5 = sub_13CDF20(a3);
  v6 = v5;
  if ( v5 )
    v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_BYTE *)(v6 + 36) & 0x10) != 0 )
    return v5;
  v7 = (int *)a1[1];
  v8 = *(_QWORD *)(*(_QWORD *)(a1[4] + 56LL) + 72LL);
  v5 = a1[2];
  v9 = (__int64)&v7[v5];
  if ( v7 == (int *)v9 )
    return v5;
  while ( 1 )
  {
    v10 = *v7;
    v11 = v10 + 1;
    v12 = *(_DWORD *)v6 & 0x7FFFFFFF;
    if ( (unsigned int)(v10 + 1) <= 1 )
    {
      v13 = *(_DWORD **)(v8 + 184);
      LODWORD(v5) = *v13 & 0x7FFFFFFF;
      if ( (unsigned int)v12 < (unsigned int)v5 )
        goto LABEL_24;
      if ( *(_DWORD *)(v8 + 192) != v11 )
        goto LABEL_8;
      goto LABEL_40;
    }
    if ( (int)v10 < 0 )
      break;
    v13 = *(_DWORD **)(v8 + 184);
    LODWORD(v5) = v13[6 * v10] & 0x7FFFFFFF;
    if ( (unsigned int)v12 < (unsigned int)v5 )
      goto LABEL_24;
    if ( v11 != *(_DWORD *)(v8 + 192) )
    {
      if ( v11 >= 0 )
      {
LABEL_8:
        v5 = (__int64)&v13[6 * v11];
      }
      else
      {
        v11 = 0x80000000;
LABEL_31:
        v20 = (unsigned int)(-2 - v11);
        v21 = *(_QWORD *)(*(_QWORD *)(v8 + 320) + 8LL * ((unsigned int)(-2 - v11) >> 6));
        if ( _bittest64(&v21, v20) )
        {
          v22 = (__int64 *)(*(_QWORD *)(v8 + 272) + 8 * ((unsigned __int64)(int)v20 >> 5));
          v23 = *v22;
          if ( !*v22 )
          {
            v28 = (__int64 *)(*(_QWORD *)(v8 + 288) & 0xFFFFFFFFFFFFFFF8LL);
            v29 = *v28;
            v28[10] += 768;
            v30 = (_QWORD *)((v29 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v28[1] >= (unsigned __int64)(v30 + 96) && v29 )
            {
              *v28 = (__int64)(v30 + 96);
            }
            else
            {
              v48 = v12;
              v44 = v9;
              v40 = v8;
              v30 = (_QWORD *)sub_6CF090((__int64)v28, 768, 3, v12, v8, v9);
              LODWORD(v12) = v48;
              v9 = v44;
              v8 = v40;
            }
            *v22 = (__int64)v30;
            v31 = v30 + 96;
            do
            {
              *v30 = 0;
              v30 += 3;
              *((_OWORD *)v30 - 1) = 0;
            }
            while ( v31 != v30 );
            v23 = *v22;
          }
          v5 = v23 + 24 * (v20 & 0x1F);
        }
        else
        {
          v46 = v12;
          v42 = v9;
          v38 = v8;
          v5 = sub_FFBBF0(v8, (unsigned int)v20, 0);
          v8 = v38;
          v9 = v42;
          LODWORD(v12) = v46;
        }
      }
      LOBYTE(v5) = (unsigned int)v12 < (*(_DWORD *)v5 & 0x7FFFFFFFu);
      goto LABEL_10;
    }
LABEL_40:
    LOBYTE(v5) = (unsigned int)v12 < *(_DWORD *)(v8 + 312);
LABEL_10:
    if ( (_BYTE)v5 )
      goto LABEL_11;
LABEL_24:
    if ( (int *)v9 == ++v7 )
      return v5;
  }
  v24 = (unsigned int)(-2 - v10);
  v25 = *(_QWORD *)(*(_QWORD *)(v8 + 320) + 8LL * ((unsigned int)(-2 - v10) >> 6));
  if ( _bittest64(&v25, v24) )
  {
    v26 = (_QWORD *)(*(_QWORD *)(v8 + 272) + 8 * ((unsigned __int64)(int)v24 >> 5));
    v27 = *v26;
    if ( !*v26 )
    {
      v32 = (__int64 *)(*(_QWORD *)(v8 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v33 = *v32;
      v32[10] += 768;
      v34 = (_QWORD *)((v33 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v32[1] >= (unsigned __int64)(v34 + 96) && v33 )
      {
        *v32 = (__int64)(v34 + 96);
      }
      else
      {
        v49 = v26;
        v47 = v12;
        v43 = v9;
        v39 = v8;
        v34 = (_QWORD *)sub_6CF090((__int64)v32, 768, 3, v12, v8, v9);
        v26 = v49;
        LOBYTE(v24) = -2 - v10;
        v12 = v47;
        v9 = v43;
        v8 = v39;
      }
      *v26 = v34;
      v35 = v34 + 96;
      do
      {
        *v34 = 0;
        v34 += 3;
        *((_OWORD *)v34 - 1) = 0;
      }
      while ( v34 != v35 );
      v27 = *v26;
    }
    v5 = v27 + 24 * (v24 & 0x1F);
  }
  else
  {
    v45 = *(_DWORD *)v6 & 0x7FFFFFFF;
    v41 = v9;
    v37 = v8;
    v5 = sub_FFBBF0(v8, (unsigned int)v24, 0);
    v8 = v37;
    v9 = v41;
    v12 = v45;
  }
  LODWORD(v5) = *(_DWORD *)v5 & 0x7FFFFFFF;
  if ( (unsigned int)v12 < (unsigned int)v5 )
    goto LABEL_24;
  if ( (_DWORD)v10 != -2 )
  {
    if ( *(_DWORD *)(v8 + 192) != v11 )
      goto LABEL_31;
    goto LABEL_40;
  }
LABEL_11:
  v14 = *(_DWORD *)v6 & 0x7FFFFFFF;
  if ( v14 >= *(_DWORD *)(v8 + 476) && v14 < *(_DWORD *)(v8 + 480) )
    LODWORD(v5) = *(_DWORD *)(v8 + 472);
  else
    LODWORD(v5) = sub_FF9850(v8);
  v15 = (_DWORD *)a1[1];
  v16 = &v15[a1[2]];
  if ( v15 != v16 )
  {
    while ( (_DWORD)v5 != *v15 )
    {
      if ( v16 == ++v15 )
        return v5;
    }
    if ( v15 != v16 )
    {
      v17 = *(unsigned __int16 *)(a2 + 16);
      if ( (unsigned __int16)v17 > 0x13u || (v18 = 982656, v19 = 0, !_bittest64(&v18, v17)) )
      {
        if ( (((_WORD)v17 - 8) & 0xFFF7) == 0 || (_WORD)v17 == 1 )
          v19 = 0;
        else
          v19 = *(_QWORD *)(a2 + 8);
      }
      LOBYTE(v5) = *(_BYTE *)(v6 + 36);
      if ( (v5 & 4) == 0 && (v5 & 8) == 0 )
        LOBYTE(v5) = sub_6D4690(a1[4], v19, v6);
    }
  }
  return v5;
}

