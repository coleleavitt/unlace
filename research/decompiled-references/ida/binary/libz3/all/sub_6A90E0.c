__int64 __fastcall sub_6A90E0(_BYTE *a1, __int64 **a2, __int64 a3)
{
  __int64 *v5; // r15
  __int64 v6; // rbp
  char v7; // al
  __int64 v8; // rdi
  __int64 v9; // r13
  unsigned int v10; // ebx
  bool v11; // zf
  __int64 *v12; // r15
  __int64 v13; // rax
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rax
  int v18; // edx
  __int64 *v19; // rax
  __int64 v20; // r15
  __int16 v21; // ax
  __int64 *v22; // r13
  unsigned int v23; // edx
  unsigned int v24; // ebx
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rdx
  char v34; // al
  unsigned int v35; // eax
  int v36; // eax
  __int64 *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rbx
  _QWORD *v40; // rdi
  __int64 v41; // rax
  __int64 i; // rax
  __int64 v43; // [rsp+0h] [rbp-88h]
  __int64 *v44; // [rsp+8h] [rbp-80h]
  __int64 v45; // [rsp+10h] [rbp-78h]
  __int64 v46; // [rsp+18h] [rbp-70h]
  __int64 *v47; // [rsp+28h] [rbp-60h]
  char v48[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v49; // [rsp+40h] [rbp-48h] BYREF
  __int64 v50; // [rsp+48h] [rbp-40h]

  v45 = a3;
  sub_EE4940(v48, "qe", *a2);
  v5 = *a2;
  v49 = 0;
  v6 = v5[9];
  a1[723] = (*((_BYTE *)v5 + 123) & 4) != 0;
  v46 = *(_QWORD *)a1;
  v50 = *(_QWORD *)a1;
  HIBYTE(v43) = *((_BYTE *)v5 + 123) & 8;
  if ( !v6 )
    goto LABEL_29;
  v7 = *(_BYTE *)(v6 + 3) >> 6;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
LABEL_4:
      if ( v7 == 2 )
        LODWORD(v43) = *(_DWORD *)(v6 + 4) - 1;
      else
        LODWORD(v43) = *(_DWORD *)(v6 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v6 = *(_QWORD *)(v6 + 16);
      v7 = *(_BYTE *)(v6 + 3) >> 6;
    }
    while ( !v7 );
    if ( v7 != 1 )
      goto LABEL_4;
  }
  LODWORD(v43) = *(_DWORD *)(v6 + 4) + 1;
LABEL_6:
  if ( !(_DWORD)v43 )
  {
    v6 = 0;
    goto LABEL_29;
  }
  v8 = v46;
  v9 = 0;
  v6 = 0;
  v44 = &v49;
  v10 = 0;
LABEL_20:
  sub_EE4F40(v8);
  v5 = *a2;
  if ( (*((_BYTE *)*a2 + 123) & 0x20) != 0 )
    goto LABEL_29;
  v17 = v5[9];
  v18 = 17;
  while ( 1 )
  {
    if ( *(char *)(v17 + 3) < 0 )
    {
      if ( *(_BYTE *)(v17 + 3) >> 6 != 2 )
      {
        v19 = (__int64 *)(v9 + *(_QWORD *)(v17 + 16));
        goto LABEL_25;
      }
      goto LABEL_41;
    }
    if ( v10 == *(_DWORD *)(v17 + 4) )
      break;
LABEL_41:
    v17 = *(_QWORD *)(v17 + 16);
    if ( !--v18 )
    {
      sub_233F80((__int64 *)(*v5 + 616), (_DWORD *)v5 + 18);
      v19 = (__int64 *)(v9 + *(_QWORD *)(v5[9] + 16));
      goto LABEL_25;
    }
  }
  v19 = (__int64 *)(v17 + 8);
LABEL_25:
  v20 = *v19;
  v21 = *(_WORD *)(*v19 + 4);
  if ( !v21 )
  {
    if ( (*(_BYTE *)(v20 + 30) & 2) == 0 )
      goto LABEL_18;
LABEL_9:
    sub_6AEE10((_DWORD)a1 + 768, *(_QWORD *)(*(_QWORD *)a1 + 856LL), v20, (_DWORD)v44, v15, v16, v43, (__int64)v44, v45);
    if ( v6 )
    {
      v11 = (*(_DWORD *)(v6 + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v46, v6);
    }
    v6 = 0;
    if ( !HIBYTE(v43) )
      goto LABEL_13;
    v29 = sub_15DE370(*(_QWORD *)a1);
    v30 = v29;
    if ( v29 )
      ++*(_DWORD *)(v29 + 8);
    v31 = *(_QWORD *)a1;
    v32 = (*a2)[11];
    if ( !v32 )
      goto LABEL_61;
    v33 = (*a2)[11];
    v34 = *(_BYTE *)(v32 + 3) >> 6;
    if ( v34 )
    {
      if ( v34 != 1 )
        goto LABEL_52;
    }
    else
    {
      do
      {
        v33 = *(_QWORD *)(v33 + 16);
        v34 = *(_BYTE *)(v33 + 3) >> 6;
      }
      while ( !v34 );
      if ( v34 != 1 )
      {
LABEL_52:
        if ( v34 == 2 )
          v35 = *(_DWORD *)(v33 + 4) - 1;
        else
          v35 = *(_DWORD *)(v33 + 4);
        if ( v10 < v35 )
        {
LABEL_55:
          v36 = 18;
          while ( 1 )
          {
            if ( !--v36 )
            {
              v47 = *a2;
              sub_233F80((__int64 *)(**a2 + 616), (_DWORD *)*a2 + 22);
              v37 = (__int64 *)(v9 + *(_QWORD *)(v47[11] + 16));
              goto LABEL_60;
            }
            if ( *(char *)(v32 + 3) >= 0 )
            {
              if ( *(_DWORD *)(v32 + 4) == v10 )
              {
                v37 = (__int64 *)(v32 + 8);
LABEL_60:
                v32 = *v37;
LABEL_61:
                v38 = sub_15DE0E0(v31, v32, v30);
                v6 = v38;
                if ( v38 )
                  ++*(_DWORD *)(v38 + 8);
                if ( v30 )
                {
                  v11 = (*(_DWORD *)(v30 + 8))-- == 1;
                  if ( v11 )
                    sub_15D7BC0(v46, v30);
                }
LABEL_13:
                v12 = *a2;
                if ( (*((_BYTE *)*a2 + 123) & 0x10) != 0 )
                {
                  v13 = v12[13];
                  v14 = 17;
                  do
                  {
                    if ( *(char *)(v13 + 3) >= 0 )
                    {
                      if ( *(_DWORD *)(v13 + 4) == v10 )
                        goto LABEL_17;
                    }
                    else if ( *(_BYTE *)(v13 + 3) >> 6 != 2 )
                    {
                      goto LABEL_17;
                    }
                    v13 = *(_QWORD *)(v13 + 16);
                    --v14;
                  }
                  while ( v14 );
                  sub_236900((_QWORD *)(*v12 + 672), v12 + 13);
                }
LABEL_17:
                sub_EDBFA0((int)v12);
LABEL_18:
                ++v10;
                v9 += 8;
                if ( v10 == (_DWORD)v43 )
                  goto LABEL_28;
LABEL_19:
                v8 = *(_QWORD *)a1;
                goto LABEL_20;
              }
            }
            else if ( *(_BYTE *)(v32 + 3) >> 6 != 2 )
            {
              v37 = (__int64 *)(v9 + *(_QWORD *)(v32 + 16));
              goto LABEL_60;
            }
            v32 = *(_QWORD *)(v32 + 16);
          }
        }
LABEL_71:
        v32 = 0;
        goto LABEL_61;
      }
    }
    if ( v10 < *(_DWORD *)(v33 + 4) + 1 )
      goto LABEL_55;
    goto LABEL_71;
  }
  if ( v21 == 2 )
    goto LABEL_9;
  ++v10;
  v9 += 8;
  if ( v10 != (_DWORD)v43 )
    goto LABEL_19;
LABEL_28:
  v5 = *a2;
LABEL_29:
  *((_DWORD *)v5 + 30) = (*((_DWORD *)v5 + 30) + 1) & 0x3FFFFFF | v5[15] & 0xFC000000;
  sub_ED9A60(*a2);
  v22 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v22 + 8);
  v23 = *(_DWORD *)(v45 + 8);
  v24 = *(_DWORD *)(v45 + 12);
  if ( v23 >= v24 )
  {
    v39 = 2 * v24;
    v25 = sub_186B270(8 * v39);
    v23 = *(_DWORD *)(v45 + 8);
    v40 = *(_QWORD **)v45;
    if ( v23 )
    {
      if ( v23 - 1 <= 2 || (_QWORD *)v25 == v40 + 1 )
      {
        for ( i = 0; i != v23; ++i )
          *(_QWORD *)(v25 + i * 8) = v40[i];
      }
      else
      {
        v41 = 0;
        do
        {
          *(__m128i *)(v25 + v41 * 8) = _mm_loadu_si128((const __m128i *)&v40[v41]);
          v41 += 2;
        }
        while ( 2LL * (v23 >> 1) != v41 );
        if ( (v23 & 1) != 0 )
          *(_QWORD *)(v25 + 8LL * (v23 & 0xFFFFFFFE)) = v40[v23 & 0xFFFFFFFE];
      }
    }
    if ( v40 != (_QWORD *)(v45 + 16) && v40 )
    {
      sub_186B220(v40);
      v23 = *(_DWORD *)(v45 + 8);
    }
    *(_QWORD *)v45 = v25;
    *(_DWORD *)(v45 + 12) = v39;
  }
  else
  {
    v25 = *(_QWORD *)v45;
  }
  v26 = v49;
  *(_QWORD *)(v25 + 8LL * v23) = v22;
  *(_DWORD *)(v45 + 8) = v23 + 1;
  if ( v26 )
  {
    v27 = v50;
    v11 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v27, v26);
  }
  if ( v6 )
  {
    v11 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v46, v6);
  }
  return sub_EE4A00(v48);
}

