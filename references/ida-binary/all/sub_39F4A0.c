unsigned __int64 __fastcall sub_39F4A0(
        _QWORD *a1,
        QT::QPainter *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10)
{
  __int64 v13; // r11
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  char v19; // si
  signed int v20; // r14d
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  signed int v23; // ebx
  signed int v24; // eax
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // rsi
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v35[2]; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v36[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]

  v13 = a1[86];
  v14 = a1[87];
  v15 = *(_DWORD *)(a1[4] + 32LL) - *(_DWORD *)(a1[4] + 24LL);
  v37 = __readfsqword(0x28u);
  v16 = v13 + 16 * v14;
  if ( v16 == v13 )
  {
    if ( a5 != -1 )
    {
      if ( a6 != -1 )
        return v37 - __readfsqword(0x28u);
      v19 = 0;
      v20 = 3;
      goto LABEL_30;
    }
LABEL_20:
    v26 = v14 - 1;
    v27 = v14;
    v28 = v13 + 16 * (v14 - 1);
    do
    {
      if ( !v27 )
        goto LABEL_23;
      v29 = v28;
      --v27;
      v28 -= 16;
    }
    while ( (*(_BYTE *)(v29 + 10) & 1) == 0 );
    if ( *(_QWORD *)v29 >= a5 )
    {
LABEL_23:
      v30 = sub_39B280((__int64)a1, a5, nullptr, 1);
      if ( !v30 )
        return v37 - __readfsqword(0x28u);
      v20 = *(unsigned __int16 *)(v30 + 8) + 3;
      sub_39F270((__int64)a1, a2, a4, *(_DWORD *)(a3 + 40), v20, a8, a9, a10);
      v14 = a1[87];
      v13 = a1[86];
      v16 = v13 + 16 * v14;
      if ( v13 != v16 )
      {
        v19 = 1;
        goto LABEL_8;
      }
      if ( a6 == -1 )
      {
        v19 = 1;
        v26 = v14 - 1;
        goto LABEL_31;
      }
      goto LABEL_43;
    }
    v20 = v15 - 3;
    if ( v16 != v13 )
    {
      v19 = 0;
      goto LABEL_8;
    }
    v19 = 0;
    if ( a6 == -1 )
      goto LABEL_31;
    goto LABEL_14;
  }
  v17 = v13;
  do
  {
    if ( (*(_BYTE *)(v17 + 10) & 1) != 0 )
    {
      v18 = *(_QWORD *)v17;
      goto LABEL_6;
    }
    v17 += 16;
  }
  while ( v16 != v17 );
  v18 = -1;
LABEL_6:
  if ( a5 >= v18 )
    goto LABEL_20;
  v19 = 0;
  v20 = 3;
LABEL_8:
  v21 = v13;
  do
  {
    if ( (*(_BYTE *)(v21 + 10) & 1) != 0 )
    {
      v22 = *(_QWORD *)v21;
      goto LABEL_12;
    }
    v21 += 16;
  }
  while ( v16 != v21 );
  v22 = -1;
LABEL_12:
  if ( a6 >= v22 )
  {
LABEL_30:
    v26 = v14 - 1;
LABEL_31:
    v31 = v13 + 16 * v26;
    while ( v14 )
    {
      v32 = v31;
      --v14;
      v31 -= 16;
      if ( (*(_BYTE *)(v32 + 10) & 1) != 0 )
      {
        if ( *(_QWORD *)v32 < a6 )
        {
          v23 = v15 - 3;
          if ( v19 )
            sub_39B470((__int64)a1, a2, a4, v23, 1, a8);
          goto LABEL_15;
        }
        break;
      }
    }
    v33 = sub_39B280((__int64)a1, a6, nullptr, 1);
    if ( !v33 )
      return v37 - __readfsqword(0x28u);
    v23 = *(unsigned __int16 *)(v33 + 8) + (a7 == 0 ? 6 : 0) - 3;
    goto LABEL_15;
  }
  if ( v19 )
LABEL_43:
    sub_39B470((__int64)a1, a2, a4, 3u, 0, a8);
LABEL_14:
  v23 = 3;
LABEL_15:
  if ( v23 != v20 )
  {
    if ( v23 >= v20 )
    {
      v24 = v23;
      v23 = v20;
      v20 = v24;
    }
    v35[0] = a4;
    v35[1] = v20;
    v36[0] = a4;
    v36[1] = v23;
    sub_39F050((__int64)a1, a2, v36, v35, a8, a10);
  }
  return v37 - __readfsqword(0x28u);
}
