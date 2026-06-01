unsigned __int64 __fastcall sub_1C36480(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _WORD **a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int64 v7; // r14
  _BYTE *v11; // rdx
  unsigned int v12; // r15d
  _WORD **v13; // rcx
  int v14; // eax
  _WORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 *v20; // r15
  _WORD *v21; // rdx
  unsigned __int64 v22; // rsi
  int v23; // eax
  unsigned __int64 v24; // rcx
  unsigned int v25; // edx
  _WORD *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  char v31; // si
  int v32; // eax
  unsigned int v33; // edx
  int v34; // esi
  int v35; // edx
  unsigned int v36; // [rsp+8h] [rbp-D0h]
  unsigned int v37[50]; // [rsp+10h] [rbp-C8h] BYREF

  v7 = a5;
  v11 = *(_BYTE **)(a1 + 232);
  v36 = a5;
  v12 = (*v11 & 1) == 0 ? 5610 : 7113;
  if ( (v11[1] & 8) != 0
    || (unsigned __int8)sub_FD3830(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL), v12, a2, *(_QWORD *)(a1 + 264), a5, a6) == 1 )
  {
    v16 = *(unsigned int *)(a1 + 40);
    if ( !(_DWORD)v7 )
      goto LABEL_17;
  }
  else
  {
    if ( !(_DWORD)v7 )
    {
LABEL_15:
      v16 = *(unsigned int *)(a1 + 40);
      goto LABEL_17;
    }
    a5 = v36;
    if ( (**a4 & 0x1FF) == 0xF5 )
    {
      v13 = a4 + 1;
      v14 = 0;
      while ( v36 != ++v14 )
      {
        v15 = *v13++;
        if ( (*v15 & 0x1FF) != 0xF5 )
          goto LABEL_26;
      }
    }
    else
    {
      v14 = 0;
LABEL_26:
      while ( v36 != ++v14 )
      {
        v27 = a4[v14];
        if ( (*v27 & 0x1FF) == 0xF5 )
        {
          v28 = *((_QWORD *)v27 + 1);
          if ( (v28 & 1) != 0 )
          {
            v28 = *(_QWORD *)((v28 & 0xFFFFFFFFFFFFFFFELL) + 8);
          }
          else if ( !v28 )
          {
            BUG();
          }
          sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), *(_DWORD *)(v28 + 24), v12, 0);
          sub_15F7200(v37);
          v16 = *(unsigned int *)(a1 + 40);
          if ( *(_QWORD *)(a1 + 11280) )
            goto LABEL_17;
          goto LABEL_10;
        }
      }
    }
    v16 = *(unsigned int *)(a1 + 40);
  }
  if ( *(_QWORD *)(a1 + 11280) )
  {
LABEL_17:
    if ( !(_DWORD)v16 )
      BUG();
    v17 = *(_QWORD *)(a1 + 32);
    goto LABEL_19;
  }
LABEL_10:
  if ( !(_DWORD)v16 )
    BUG();
  v17 = *(_QWORD *)(a1 + 32);
  v18 = *(_QWORD *)(v17 + 8 * v16 - 8);
  v19 = *(unsigned int *)(v18 + 368);
  if ( *(_BYTE *)(*(_QWORD *)(v18 + 360) + 8 * v19 - 8) )
  {
    if ( (_DWORD)v7 == 1 )
    {
LABEL_19:
      v18 = *(_QWORD *)(v17 + 8 * v16 - 8);
      v19 = *(unsigned int *)(v18 + 368);
      goto LABEL_20;
    }
    v20 = (unsigned __int64 *)a4;
    do
    {
      v21 = (_WORD *)v20[1];
      v22 = *v20++;
      sub_16C71F0(a1, v22, v21, a7, v19, a5, a6);
    }
    while ( v20 != (unsigned __int64 *)&a4[(unsigned int)(v7 - 2) + 1] );
    goto LABEL_15;
  }
LABEL_20:
  if ( v19 == 1 )
  {
    v30 = *(_QWORD *)(a1 + 232);
    v32 = (*(_WORD *)(v30 + 206) >> 7) & 3;
    if ( v32 == 3 )
      v32 = 2;
    v31 = *(_BYTE *)(v30 + 46);
    v33 = v32
        | (((v31 & 8) != 0) << 14)
        | (((v31 & 4) != 0) << 13)
        | (((v31 & 2) != 0) << 12)
        | (8 * *(unsigned __int8 *)(v30 + 45)) & 0x400
        | (((*(_BYTE *)(v30 + 45) & 0x40) != 0) << 9)
        | (4 * ((unsigned int)*(char *)(v30 + 106) >> 31))
        | ((v31 & 1) << 11)
        | (((*(_BYTE *)(v30 + 207) >> 1) & 3) << 6);
    v34 = v33 | 0x38;
    v37[0] = v33 | 0x38;
    if ( (v33 & 3) == 1 && (v33 & 4) != 0 )
    {
      v35 = v33 | 0x138;
      if ( (unsigned __int8)v34 >> 6 == 2 )
        v34 = v35;
    }
    v23 = v34 | ((*(_BYTE *)(v30 + 202) & 7) << 22);
    v37[0] = v23;
  }
  else
  {
    v23 = *(_DWORD *)(*(_QWORD *)(v18 + 360) + 8 * v19 - 4);
    v37[0] = v23;
  }
  if ( *(_DWORD *)(a1 + 224) == v23 )
  {
    v24 = 0;
    v25 = 0;
  }
  else
  {
    v29 = sub_FEAE70((_DWORD *)(a1 + 224), v37);
    v25 = v29;
    v24 = HIDWORD(v29);
  }
  return sub_EEF560(*(_QWORD **)(a1 + 248), a4, v7, (v24 << 32) | v25, a2, a3);
}
