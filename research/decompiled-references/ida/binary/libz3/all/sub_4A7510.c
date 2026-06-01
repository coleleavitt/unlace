__int64 __fastcall sub_4A7510(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v6; // rax
  _OWORD *v7; // rax
  unsigned __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  unsigned __int64 *v12; // rbx
  __int64 v13; // rax
  unsigned __int64 *v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // r8
  unsigned int v17; // r10d
  unsigned __int64 *v18; // rbp
  unsigned int v19; // r9d
  __int64 v20; // r8
  unsigned __int64 *v21; // r13
  int v22; // edi
  unsigned __int64 *v23; // r10
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 *v26; // rax
  __int64 v28; // r13
  unsigned __int64 *v29; // rax
  int v30; // r10d
  unsigned __int64 *v31; // rax
  unsigned __int64 *v32; // r11
  __int64 v33; // rdx
  unsigned __int64 *v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // [rsp+0h] [rbp-58h]
  __int64 v37; // [rsp+8h] [rbp-50h]
  int v38; // [rsp+10h] [rbp-48h]
  void *v39; // [rsp+18h] [rbp-40h]

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
  *(_QWORD *)(a1 + 224) = 8;
  v12 = *(unsigned __int64 **)a4;
  *(_QWORD *)(a1 + 216) = v7;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v13 = *(unsigned int *)(a4 + 8);
  *(_DWORD *)(a1 + 232) = 0;
  v14 = &v12[v13];
  if ( v12 == v14 )
    goto LABEL_32;
  while ( *v12 <= 1 )
  {
    if ( v14 == ++v12 )
      goto LABEL_32;
  }
  if ( v14 == v12 )
    goto LABEL_32;
  v15 = *v12;
  do
  {
    v16 = *(unsigned int *)(a1 + 200);
    LODWORD(a2) = *(_DWORD *)(a1 + 208);
    v17 = 2 * v16;
    LODWORD(v8) = 3 * v16;
    if ( 3 * (int)v16 < (unsigned int)(4 * (a2 + *(_DWORD *)(a1 + 204))) )
    {
      v28 = v17;
      LODWORD(v37) = 2 * v16;
      v36 = 8LL * v17;
      v29 = (unsigned __int64 *)sub_186B270(v36);
      v30 = v37;
      v20 = v36;
      v18 = v29;
      if ( (_DWORD)v37 )
      {
        memset(v29, 0, 8 * v28);
        v20 = v36;
        v30 = v37;
      }
      v31 = *(unsigned __int64 **)(a1 + 192);
      v8 = *(unsigned int *)(a1 + 200);
      v19 = v30 - 1;
      v21 = (unsigned __int64 *)((char *)v18 + v20);
      v32 = &v31[v8];
      if ( v31 != v32 )
      {
        do
        {
          while ( 1 )
          {
            v8 = *v31;
            if ( *v31 > 1 )
              break;
            if ( v32 == ++v31 )
              goto LABEL_44;
          }
          v9 = *(_DWORD *)(v8 + 12) & v19;
          v33 = 8LL * v9;
          v34 = &v18[(unsigned __int64)v33 / 8];
          if ( v20 == v33 )
          {
LABEL_48:
            if ( v18 == v34 )
            {
LABEL_56:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v8 = (unsigned __int64)v18;
            while ( *(_QWORD *)v8 )
            {
              v8 += 8LL;
              if ( v34 == (unsigned __int64 *)v8 )
                goto LABEL_56;
            }
          }
          else
          {
            v8 = (unsigned __int64)&v18[(unsigned __int64)v33 / 8];
            while ( *(_QWORD *)v8 )
            {
              v8 += 8LL;
              if ( v21 == (unsigned __int64 *)v8 )
                goto LABEL_48;
            }
          }
          v35 = *v31++;
          *(_QWORD *)v8 = v35;
        }
        while ( v32 != v31 );
LABEL_44:
        v32 = *(unsigned __int64 **)(a1 + 192);
      }
      if ( v32 )
      {
        LODWORD(v39) = v30;
        v37 = v20;
        LODWORD(v36) = v30 - 1;
        sub_186B220(v32);
        v30 = (int)v39;
        v20 = v37;
        v19 = v36;
      }
      *(_QWORD *)(a1 + 192) = v18;
      LODWORD(a2) = 0;
      *(_DWORD *)(a1 + 200) = v30;
      *(_DWORD *)(a1 + 208) = 0;
    }
    else
    {
      v18 = *(unsigned __int64 **)(a1 + 192);
      v19 = v16 - 1;
      v20 = 8 * v16;
      v21 = (unsigned __int64 *)((char *)v18 + v20);
    }
    v22 = *(_DWORD *)(v15 + 12);
    v11 = 8LL * (v22 & v19);
    v23 = &v18[(unsigned __int64)v11 / 8];
    if ( v11 != v20 )
    {
      v24 = &v18[(unsigned __int64)v11 / 8];
      v10 = nullptr;
      while ( 1 )
      {
        v8 = *v24;
        if ( *v24 > 1 )
        {
          if ( *(_DWORD *)(v8 + 12) == v22 && v8 == v15 )
          {
            *v24 = v15;
            goto LABEL_27;
          }
        }
        else
        {
          if ( !v8 )
          {
            if ( v10 )
              goto LABEL_54;
            v10 = v24;
            goto LABEL_55;
          }
          v10 = v24;
        }
        if ( ++v24 == v21 )
          goto LABEL_22;
      }
    }
    v10 = nullptr;
    while ( 1 )
    {
LABEL_22:
      if ( v23 == v18 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v25 = *v18;
      if ( *v18 <= 1 )
        break;
      if ( *(_DWORD *)(v25 + 12) == v22 && v25 == v15 )
      {
        *v18 = v15;
        goto LABEL_27;
      }
LABEL_21:
      ++v18;
    }
    if ( v25 )
    {
      v10 = v18;
      goto LABEL_21;
    }
    if ( v10 )
    {
LABEL_54:
      LODWORD(a2) = a2 - 1;
      *(_DWORD *)(a1 + 208) = a2;
    }
    else
    {
      v10 = v18;
    }
LABEL_55:
    *v10 = v15;
    ++*(_DWORD *)(a1 + 204);
LABEL_27:
    v26 = v12 + 1;
    if ( v14 == v12 + 1 )
      break;
    while ( 1 )
    {
      v15 = *v26;
      v12 = v26;
      if ( *v26 > 1 )
        break;
      if ( v14 == ++v26 )
        goto LABEL_32;
    }
  }
  while ( v14 != v26 );
LABEL_32:
  sub_4A7420(a1, a2, v8, v9, (int)v10, v11, v36, v37, v38, v39);
  return sub_4A52A0((__int64 *)a1);
}

