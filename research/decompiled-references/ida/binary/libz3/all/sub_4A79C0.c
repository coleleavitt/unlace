__int64 __fastcall sub_4A79C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v6; // rax
  _OWORD *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // rcx
  int v10; // r8d
  __int64 v11; // r9
  unsigned __int64 *v12; // r13
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  unsigned int v15; // r10d
  unsigned __int64 *v16; // rbx
  size_t v17; // r14
  int v18; // r9d
  unsigned __int64 *v19; // rbp
  int v20; // edi
  unsigned __int64 *v21; // r10
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rax
  __int64 v25; // rbp
  unsigned __int64 *v26; // rax
  int v27; // r10d
  unsigned __int64 *v28; // rax
  unsigned __int64 *v29; // r11
  __int64 v30; // rdx
  unsigned __int64 *v31; // rsi
  __int64 v32; // rsi
  unsigned __int64 *v33; // [rsp+0h] [rbp-58h]
  int v34; // [rsp+8h] [rbp-50h]
  int v35; // [rsp+10h] [rbp-48h]
  void *v36; // [rsp+18h] [rbp-40h]

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = a2;
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 24) = &off_1C62200;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = &off_1C62200;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = &off_1C62200;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  v6 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 192) = v6;
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 200) = 8;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v7 = (_OWORD *)sub_186B270(0x40u);
  v12 = *(unsigned __int64 **)(a4 + 8);
  *(_QWORD *)(a1 + 216) = v7;
  *(_QWORD *)(a1 + 224) = 8;
  *(_DWORD *)(a1 + 232) = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  if ( !v12 )
    goto LABEL_24;
  v33 = &v12[*((unsigned int *)v12 - 1)];
  if ( v33 == v12 )
    goto LABEL_24;
  do
  {
    v13 = *(unsigned int *)(a1 + 200);
    LODWORD(a2) = *(_DWORD *)(a1 + 208);
    v14 = *v12;
    v15 = 2 * v13;
    LODWORD(v8) = 3 * v13;
    if ( 3 * (int)v13 < (unsigned int)(4 * (a2 + *(_DWORD *)(a1 + 204))) )
    {
      v25 = v15;
      v34 = 2 * v13;
      v17 = 8LL * v15;
      v26 = (unsigned __int64 *)sub_186B270(v17);
      v27 = v34;
      v16 = v26;
      if ( v34 )
      {
        memset(v26, 0, 8 * v25);
        v27 = v34;
      }
      v28 = *(unsigned __int64 **)(a1 + 192);
      v8 = *(unsigned int *)(a1 + 200);
      v18 = v27 - 1;
      v19 = &v16[v17 / 8];
      v29 = &v28[v8];
      if ( v28 != v29 )
      {
        do
        {
          while ( 1 )
          {
            v8 = *v28;
            if ( *v28 > 1 )
              break;
            if ( v29 == ++v28 )
              goto LABEL_36;
          }
          v30 = 8LL * (*(_DWORD *)(v8 + 12) & (unsigned int)v18);
          v31 = &v16[(unsigned __int64)v30 / 8];
          if ( v17 == v30 )
          {
LABEL_40:
            if ( v16 == v31 )
            {
LABEL_48:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v8 = (unsigned __int64)v16;
            while ( *(_QWORD *)v8 )
            {
              v8 += 8LL;
              if ( v31 == (unsigned __int64 *)v8 )
                goto LABEL_48;
            }
          }
          else
          {
            v8 = (unsigned __int64)&v16[(unsigned __int64)v30 / 8];
            while ( *(_QWORD *)v8 )
            {
              v8 += 8LL;
              if ( v19 == (unsigned __int64 *)v8 )
                goto LABEL_40;
            }
          }
          v32 = *v28++;
          *(_QWORD *)v8 = v32;
        }
        while ( v29 != v28 );
LABEL_36:
        v29 = *(unsigned __int64 **)(a1 + 192);
      }
      if ( v29 )
      {
        v35 = v27;
        v34 = v27 - 1;
        sub_186B220(v29);
        v27 = v35;
        v18 = v34;
      }
      *(_QWORD *)(a1 + 192) = v16;
      LODWORD(a2) = 0;
      *(_DWORD *)(a1 + 200) = v27;
      *(_DWORD *)(a1 + 208) = 0;
    }
    else
    {
      v16 = *(unsigned __int64 **)(a1 + 192);
      v17 = 8 * v13;
      v18 = v13 - 1;
      v19 = &v16[v13];
    }
    v20 = *(_DWORD *)(v14 + 12);
    v11 = 8LL * (v20 & (unsigned int)v18);
    v21 = &v16[(unsigned __int64)v11 / 8];
    if ( v11 != v17 )
    {
      v22 = &v16[(unsigned __int64)v11 / 8];
      v9 = nullptr;
      while ( 1 )
      {
        v8 = *v22;
        if ( *v22 > 1 )
        {
          if ( *(_DWORD *)(v8 + 12) == v20 && v14 == v8 )
          {
            *v22 = v14;
            goto LABEL_23;
          }
        }
        else
        {
          if ( !v8 )
          {
            if ( v9 )
              goto LABEL_46;
            v9 = v22;
            goto LABEL_47;
          }
          v9 = v22;
        }
        if ( ++v22 == v19 )
          goto LABEL_18;
      }
    }
    v9 = nullptr;
    while ( 1 )
    {
LABEL_18:
      if ( v21 == v16 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v23 = *v16;
      if ( *v16 <= 1 )
        break;
      if ( *(_DWORD *)(v23 + 12) == v20 && v14 == v23 )
      {
        *v16 = v14;
        goto LABEL_23;
      }
LABEL_17:
      ++v16;
    }
    if ( v23 )
    {
      v9 = v16;
      goto LABEL_17;
    }
    if ( v9 )
    {
LABEL_46:
      LODWORD(a2) = a2 - 1;
      *(_DWORD *)(a1 + 208) = a2;
    }
    else
    {
      v9 = v16;
    }
LABEL_47:
    *v9 = v14;
    ++*(_DWORD *)(a1 + 204);
LABEL_23:
    ++v12;
  }
  while ( v33 != v12 );
LABEL_24:
  sub_4A7420(a1, a2, v8, (int)v9, v10, v11, (int)v33, v34, v35, v36);
  return sub_4A52A0((__int64 *)a1);
}

