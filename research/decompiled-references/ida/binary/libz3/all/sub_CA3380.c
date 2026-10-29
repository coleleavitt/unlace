double __fastcall sub_CA3380(__int64 a1, __int64 *a2)
{
  __int64 v2; // r13
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned int v5; // r12d
  __int64 v6; // rax
  int v7; // edx
  char v8; // al
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  char v12; // al
  unsigned int v13; // eax
  int v14; // eax
  char v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rdx
  char v20; // al
  unsigned int v21; // edx
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rdx
  int v27; // ecx
  __int64 *v28; // rdx
  void *v29; // rdi
  char *v30; // rcx
  bool v31; // si
  char *v32; // rax
  __int64 v33; // rdx
  void *v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r15
  void *v42; // r14
  __int64 v43; // rsi
  _BYTE v45[8]; // [rsp+18h] [rbp-1C0h] BYREF
  _QWORD v46[2]; // [rsp+20h] [rbp-1B8h] BYREF
  _QWORD v47[4]; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v48; // [rsp+50h] [rbp-188h] BYREF
  int v49; // [rsp+58h] [rbp-180h]
  __int128 v50; // [rsp+60h] [rbp-178h]
  _QWORD v51[2]; // [rsp+70h] [rbp-168h] BYREF
  _QWORD v52[2]; // [rsp+80h] [rbp-158h] BYREF
  int v53[32]; // [rsp+90h] [rbp-148h] BYREF
  void *ptr; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+118h] [rbp-C0h]
  _BYTE v56[184]; // [rsp+120h] [rbp-B8h] BYREF

  v2 = *a2;
  sub_F735C0(v53, *a2);
  v3 = a2[9];
  if ( v3 )
  {
    v4 = *a2;
    v5 = 0;
    while ( 1 )
    {
      v8 = *(_BYTE *)(v3 + 3) >> 6;
      if ( v8 )
      {
        if ( v8 == 1 )
          goto LABEL_31;
      }
      else
      {
        do
        {
          v3 = *(_QWORD *)(v3 + 16);
          v8 = *(_BYTE *)(v3 + 3) >> 6;
        }
        while ( !v8 );
        if ( v8 == 1 )
        {
LABEL_31:
          if ( v5 >= *(_DWORD *)(v3 + 4) + 1 )
            break;
          goto LABEL_14;
        }
      }
      if ( v8 == 2 )
        v9 = *(_DWORD *)(v3 + 4) - 1;
      else
        v9 = *(_DWORD *)(v3 + 4);
      if ( v5 >= v9 )
        break;
LABEL_14:
      v10 = a2[11];
      if ( !v10 )
        goto LABEL_23;
      v11 = a2[11];
      v12 = *(_BYTE *)(v10 + 3) >> 6;
      if ( v12 )
      {
        if ( v12 != 1 )
          goto LABEL_17;
      }
      else
      {
        do
        {
          v11 = *(_QWORD *)(v11 + 16);
          v12 = *(_BYTE *)(v11 + 3) >> 6;
        }
        while ( !v12 );
        if ( v12 != 1 )
        {
LABEL_17:
          if ( v12 == 2 )
            v13 = *(_DWORD *)(v11 + 4) - 1;
          else
            v13 = *(_DWORD *)(v11 + 4);
          if ( v5 >= v13 )
            goto LABEL_23;
          goto LABEL_20;
        }
      }
      if ( v5 >= *(_DWORD *)(v11 + 4) + 1 )
        goto LABEL_23;
LABEL_20:
      v14 = 17;
      do
      {
        if ( *(char *)(v10 + 3) >= 0 )
        {
          if ( v5 == *(_DWORD *)(v10 + 4) )
            goto LABEL_23;
        }
        else if ( *(_BYTE *)(v10 + 3) >> 6 != 2 )
        {
          goto LABEL_23;
        }
        v10 = *(_QWORD *)(v10 + 16);
        --v14;
      }
      while ( v14 );
      sub_233F80((__int64 *)(v4 + 616), (_DWORD *)a2 + 22);
      v4 = *a2;
LABEL_23:
      v15 = *((_BYTE *)a2 + 123);
      v16 = v4;
      if ( (v15 & 0x10) == 0 )
      {
        if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
          goto LABEL_7;
LABEL_25:
        v17 = a2[9];
        v18 = 17;
        do
        {
          if ( *(char *)(v17 + 3) >= 0 )
          {
            if ( v5 == *(_DWORD *)(v17 + 4) )
              goto LABEL_7;
          }
          else if ( *(_BYTE *)(v17 + 3) >> 6 != 2 )
          {
            goto LABEL_7;
          }
          v17 = *(_QWORD *)(v17 + 16);
          --v18;
        }
        while ( v18 );
        sub_233F80((__int64 *)(v16 + 616), (_DWORD *)a2 + 18);
        goto LABEL_7;
      }
      v6 = a2[13];
      v7 = 17;
      do
      {
        if ( *(char *)(v6 + 3) >= 0 )
        {
          if ( v5 == *(_DWORD *)(v6 + 4) )
            goto LABEL_6;
        }
        else if ( *(_BYTE *)(v6 + 3) >> 6 != 2 )
        {
          goto LABEL_6;
        }
        v6 = *(_QWORD *)(v6 + 16);
        --v7;
      }
      while ( v7 );
      sub_236900((_QWORD *)(v4 + 672), a2 + 13);
      v15 = *((_BYTE *)a2 + 123);
      v16 = *a2;
LABEL_6:
      if ( (v15 & 0x20) == 0 )
        goto LABEL_25;
LABEL_7:
      sub_F79EF0((int)v53);
      v3 = a2[9];
      ++v5;
      if ( !v3 )
        break;
      v4 = *a2;
    }
  }
  sub_16669D0(v46, v2);
  v48 = v2;
  sub_180C5A0(v45, "pb");
  v49 = sub_15DA4C0(v2 + 560, v45);
  v19 = a2[9];
  ptr = v56;
  v51[0] = 0;
  v55 = 0x1000000000LL;
  v51[1] = 0;
  v47[0] = v46[0];
  v52[0] = 1;
  v52[1] = 0;
  v47[1] = v46;
  v47[2] = &v48;
  v47[3] = v53;
  v50 = 0;
  if ( !v19 )
    goto LABEL_69;
  v20 = *(_BYTE *)(v19 + 3) >> 6;
  if ( v20 )
  {
    if ( v20 != 1 )
    {
LABEL_35:
      if ( v20 == 2 )
        v21 = *(_DWORD *)(v19 + 4) - 1;
      else
        v21 = *(_DWORD *)(v19 + 4);
      goto LABEL_37;
    }
  }
  else
  {
    do
    {
      v19 = *(_QWORD *)(v19 + 16);
      v20 = *(_BYTE *)(v19 + 3) >> 6;
    }
    while ( !v20 );
    if ( v20 != 1 )
      goto LABEL_35;
  }
  v21 = *(_DWORD *)(v19 + 4) + 1;
LABEL_37:
  v22 = v21;
  v23 = 0;
  if ( !v21 )
    goto LABEL_69;
  while ( 2 )
  {
    v25 = *a2;
    if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
    {
      v24 = *(_QWORD *)(v25 + 864);
      goto LABEL_40;
    }
    v26 = a2[9];
    v27 = 17;
    while ( 1 )
    {
      if ( *(char *)(v26 + 3) < 0 )
      {
        if ( *(_BYTE *)(v26 + 3) >> 6 != 2 )
        {
          v28 = (__int64 *)(*(_QWORD *)(v26 + 16) + 8 * v23);
          goto LABEL_46;
        }
        goto LABEL_63;
      }
      if ( *(_DWORD *)(v26 + 4) == (_DWORD)v23 )
        break;
LABEL_63:
      v26 = *(_QWORD *)(v26 + 16);
      if ( !--v27 )
      {
        sub_233F80((__int64 *)(v25 + 616), (_DWORD *)a2 + 18);
        v28 = (__int64 *)(*(_QWORD *)(a2[9] + 16) + 8 * v23);
        goto LABEL_46;
      }
    }
    v28 = (__int64 *)(v26 + 8);
LABEL_46:
    v24 = *v28;
LABEL_40:
    sub_CA18E0(v47, (__int64)&ptr, v24);
    if ( v22 != ++v23 )
      continue;
    break;
  }
  v29 = ptr;
  v30 = (char *)ptr + 8 * (unsigned int)v55;
  v31 = ptr == nullptr || ptr == v56;
  v32 = (char *)ptr;
  if ( ptr != v30 )
  {
    do
    {
      v33 = *(_QWORD *)v32;
      v32 += 8;
      *(_BYTE *)(v33 + 6) &= ~1u;
    }
    while ( v32 != v30 );
  }
  LODWORD(v55) = 0;
  if ( !v31 )
    sub_186B220(v29);
LABEL_69:
  v34 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v51);
  sub_182CBA0(v34, v52);
  v35 = *((_QWORD *)&v50 + 1);
  if ( *((_QWORD *)&v50 + 1) )
  {
    v36 = *(unsigned int *)(*((_QWORD *)&v50 + 1) - 4LL);
    if ( (_DWORD)v36 )
    {
      v37 = *((_QWORD *)&v50 + 1) + 16 * v36;
      do
      {
        v38 = v35;
        v35 += 16;
        sub_15D0DF0(v38);
      }
      while ( v35 != v37 );
      v35 = *((_QWORD *)&v50 + 1);
    }
    sub_186B220((void *)(v35 - 8));
  }
  v39 = v50;
  if ( (_QWORD)v50 )
  {
    v40 = *(unsigned int *)(v50 - 4);
    if ( (_DWORD)v40 )
    {
      v41 = v50 + 32 * v40;
      do
      {
        v42 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v39);
        v43 = v39 + 16;
        v39 += 32;
        sub_182CBA0(v42, v43);
      }
      while ( v39 != v41 );
      v39 = v50;
    }
    sub_186B220((void *)(v39 - 8));
  }
  sub_F74720(v53);
  return 1.0;
}

