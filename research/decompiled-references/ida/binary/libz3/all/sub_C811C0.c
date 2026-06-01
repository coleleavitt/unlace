__int64 __fastcall sub_C811C0(__int64 *a1)
{
  __int64 v2; // rdx
  char v3; // al
  int v4; // r12d
  __int64 v5; // r14
  unsigned int i; // r13d
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  char v10; // al
  unsigned int v11; // eax
  int v12; // eax
  char v13; // r8
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // ebx
  __int64 v18; // rax
  int v19; // edx
  _BYTE v20[16]; // [rsp+10h] [rbp-D8h] BYREF
  int *v21; // [rsp+20h] [rbp-C8h]
  int v22[2]; // [rsp+30h] [rbp-B8h] BYREF

  sub_F735C0(v22, *a1);
  v2 = a1[9];
  if ( !v2 )
    goto LABEL_23;
  v3 = *(_BYTE *)(v2 + 3) >> 6;
  if ( !v3 )
  {
    do
    {
      v2 = *(_QWORD *)(v2 + 16);
      v3 = *(_BYTE *)(v2 + 3) >> 6;
    }
    while ( !v3 );
    if ( v3 != 1 )
      goto LABEL_4;
LABEL_45:
    v4 = *(_DWORD *)(v2 + 4) + 1;
    goto LABEL_6;
  }
  if ( v3 == 1 )
    goto LABEL_45;
LABEL_4:
  if ( v3 == 2 )
    v4 = *(_DWORD *)(v2 + 4) - 1;
  else
    v4 = *(_DWORD *)(v2 + 4);
LABEL_6:
  if ( v4 )
  {
    v5 = 0;
    for ( i = 0; v4 != i; ++i )
    {
      v7 = a1[11];
      v8 = *a1;
      if ( !v7 )
        goto LABEL_17;
      v9 = a1[11];
      v10 = *(_BYTE *)(v7 + 3) >> 6;
      if ( v10 )
      {
        if ( v10 == 1 )
          goto LABEL_26;
      }
      else
      {
        do
        {
          v9 = *(_QWORD *)(v9 + 16);
          v10 = *(_BYTE *)(v9 + 3) >> 6;
        }
        while ( !v10 );
        if ( v10 == 1 )
        {
LABEL_26:
          if ( i < *(_DWORD *)(v9 + 4) + 1 )
            goto LABEL_14;
          goto LABEL_27;
        }
      }
      if ( v10 == 2 )
        v11 = *(_DWORD *)(v9 + 4) - 1;
      else
        v11 = *(_DWORD *)(v9 + 4);
      if ( i < v11 )
      {
LABEL_14:
        v12 = 17;
        do
        {
          if ( *(char *)(v7 + 3) >= 0 )
          {
            if ( *(_DWORD *)(v7 + 4) == i )
              goto LABEL_17;
          }
          else if ( *(_BYTE *)(v7 + 3) >> 6 != 2 )
          {
            goto LABEL_17;
          }
          v7 = *(_QWORD *)(v7 + 16);
          --v12;
        }
        while ( v12 );
        sub_233F80((__int64 *)(v8 + 616), (_DWORD *)a1 + 22);
        v8 = *a1;
LABEL_17:
        v13 = *((_BYTE *)a1 + 123);
        if ( (v13 & 0x10) != 0 )
          goto LABEL_18;
        goto LABEL_28;
      }
LABEL_27:
      v13 = *((_BYTE *)a1 + 123);
      if ( (v13 & 0x10) != 0 )
      {
LABEL_18:
        v14 = a1[13];
        v15 = 17;
        do
        {
          if ( *(char *)(v14 + 3) >= 0 )
          {
            if ( *(_DWORD *)(v14 + 4) == i )
              goto LABEL_21;
          }
          else if ( *(_BYTE *)(v14 + 3) >> 6 != 2 )
          {
            goto LABEL_21;
          }
          v14 = *(_QWORD *)(v14 + 16);
          --v15;
        }
        while ( v15 );
        sub_236900((_QWORD *)(v8 + 672), a1 + 13);
        v13 = *((_BYTE *)a1 + 123);
        v8 = *a1;
LABEL_21:
        if ( (v13 & 0x20) != 0 )
          goto LABEL_22;
LABEL_29:
        v18 = a1[9];
        v19 = 18;
        while ( --v19 )
        {
          if ( *(char *)(v18 + 3) >= 0 )
          {
            if ( *(_DWORD *)(v18 + 4) == i )
              goto LABEL_22;
          }
          else if ( *(_BYTE *)(v18 + 3) >> 6 != 2 )
          {
            goto LABEL_22;
          }
          v18 = *(_QWORD *)(v18 + 16);
        }
        sub_233F80((__int64 *)(v8 + 616), (_DWORD *)a1 + 18);
        goto LABEL_22;
      }
LABEL_28:
      if ( (v13 & 0x20) == 0 )
        goto LABEL_29;
LABEL_22:
      sub_F79EF0((int)v22);
      v5 += 8;
    }
  }
LABEL_23:
  sub_16669D0(v20, *(_QWORD *)v22);
  v21 = v22;
  v16 = sub_C83E20(a1, v20);
  sub_F74720(v22);
  return v16;
}

