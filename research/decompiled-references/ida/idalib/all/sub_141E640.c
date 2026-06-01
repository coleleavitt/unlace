unsigned __int64 __fastcall sub_141E640(_QWORD *a1, int a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r13
  bool v6; // r15
  int v7; // esi
  unsigned int v8; // esi
  unsigned int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // eax
  unsigned __int64 v14; // rsi
  bool v15; // dl
  bool v16; // zf
  __int64 i; // rax
  unsigned __int64 v18; // rax
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // r12
  __int64 *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  _QWORD *v32; // rcx
  char v33; // dl
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  _QWORD *v36; // r12
  char v37; // dl
  _DWORD *v38; // rax
  _DWORD *v39; // rdx
  _DWORD *v40; // rax
  _DWORD *v41; // rdx
  __int64 v42; // [rsp+0h] [rbp-78h]
  __int64 v43; // [rsp+8h] [rbp-70h]
  __int64 v44; // [rsp+8h] [rbp-70h]
  _QWORD *v45; // [rsp+8h] [rbp-70h]
  __int64 v46; // [rsp+18h] [rbp-60h]
  __int64 *v47; // [rsp+28h] [rbp-50h]
  _BYTE v48[57]; // [rsp+3Fh] [rbp-39h] BYREF

  v4 = sub_141E3D0((__int64)a1, a2, (*(_BYTE *)(a1[7] + 22LL) & 0x10) != 0);
  v5 = a1[11];
  v42 = v4;
  if ( !a3 )
    return 0;
  while ( 1 )
  {
    v6 = sub_1021600(v5, a3);
    if ( v6 )
      return 0;
    v7 = a3;
    if ( a3 < 0 )
      v7 = sub_10212A0(v5, a3);
    v8 = v7 & 0x7FFFFFFF;
    if ( v8 >= *(_DWORD *)(v5 + 476) && v8 < *(_DWORD *)(v5 + 480) )
    {
      v10 = *(unsigned int *)(v5 + 472);
      v48[0] = 0;
      if ( (unsigned int)(v10 + 1) <= 1 )
        return 0;
    }
    else
    {
      v9 = sub_101D590(v5, v8);
      v48[0] = 0;
      v10 = v9;
      if ( v9 + 1 <= 1 )
        return 0;
    }
    if ( (int)v10 < 0 )
    {
      v30 = (unsigned int)(-2 - v10);
      v31 = *(_QWORD *)(*(_QWORD *)(v5 + 320) + 8LL * ((unsigned int)(-2 - v10) >> 6));
      if ( _bittest64(&v31, v30) )
      {
        v32 = (_QWORD *)(*(_QWORD *)(v5 + 272) + 8 * ((unsigned __int64)(int)v30 >> 5));
        if ( *v32 )
        {
          v11 = *v32 + 24LL * ((-2 - (_BYTE)v10) & 0x1F);
          goto LABEL_10;
        }
        v45 = (_QWORD *)(*(_QWORD *)(v5 + 272) + 8 * ((unsigned __int64)(int)v30 >> 5));
        v38 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v5 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
        v39 = v38 + 192;
        *v45 = v38;
        do
        {
          *v38 = 0;
          v38 += 6;
          *((_OWORD *)v38 - 1) = 0;
          *((_QWORD *)v38 - 1) = 0;
        }
        while ( v38 != v39 );
        v33 = v48[0];
        v11 = *v45 + 24LL * ((-2 - (_BYTE)v10) & 0x1F);
      }
      else
      {
        v11 = sub_101F930(v5, v30, v48);
        v33 = v48[0];
      }
      if ( v33 )
        return 0;
    }
    else
    {
      v11 = *(_QWORD *)(v5 + 184) + 24LL * (unsigned int)v10;
    }
LABEL_10:
    if ( !v11 )
      return 0;
    if ( *(char *)(v11 + 3) < 0 )
      return 0;
    v12 = *(_QWORD *)((*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
    if ( !v12 )
      return 0;
    v43 = a1[13];
    v13 = sub_1021680(a1[11], a3);
    v14 = v12;
    v15 = v13 != 0;
    v16 = v13 == 3;
    for ( i = *(_QWORD *)(v12 + 8); i; i = *(_QWORD *)(v18 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v18 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v18 )
        break;
      v14 = v18;
    }
    sub_13C8450(v43, (char *)(v14 + 32), *(_QWORD *)v14, 0, v15 && !v16);
    v19 = (__int64 *)sub_13C2720(a1[13], v12);
    v21 = &v19[v20];
    if ( v21 != v19 )
      break;
LABEL_40:
    if ( (unsigned __int8)sub_13C2750(a1[13], v12) )
      return v12;
    v48[0] = 0;
    if ( (int)v10 >= 0 )
    {
      v29 = *(_QWORD *)(v5 + 184) + 24 * v10;
      goto LABEL_43;
    }
    v34 = (unsigned int)(-2 - v10);
    v35 = *(_QWORD *)(*(_QWORD *)(v5 + 320) + 8LL * ((unsigned int)(-2 - v10) >> 6));
    if ( _bittest64(&v35, v34) )
    {
      v36 = (_QWORD *)(*(_QWORD *)(v5 + 272) + 8 * ((unsigned __int64)(int)v34 >> 5));
      if ( *v36 )
      {
        v29 = *v36 + 24LL * ((-2 - (_BYTE)v10) & 0x1F);
        goto LABEL_43;
      }
      v40 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v5 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      *v36 = v40;
      v41 = v40 + 192;
      do
      {
        *v40 = 0;
        v40 += 6;
        *((_OWORD *)v40 - 1) = 0;
        *((_QWORD *)v40 - 1) = 0;
      }
      while ( v40 != v41 );
      v37 = v48[0];
      v29 = *v36 + 24LL * ((-2 - (_BYTE)v10) & 0x1F);
    }
    else
    {
      v29 = sub_101F930(v5, v34, v48);
      v37 = v48[0];
    }
    if ( v37 )
      return 0;
LABEL_43:
    if ( !v29 || *(char *)(v29 + 3) < 0 )
      return 0;
    a3 = *(_DWORD *)(v29 + 8);
    if ( !a3 )
      return 0;
  }
  v22 = v19 + 1;
  if ( v42 )
  {
    v23 = *v19;
    v24 = *v19 & 7;
    if ( (*(_BYTE *)v19 & 1) != 0 )
    {
LABEL_20:
      v47 = v22;
      v46 = v24;
      v44 = sub_FEEE40(v42);
      v25 = sub_FEEE40(v23 & 0xFFFFFFFFFFFFFFF8LL);
      v24 = v46;
      v22 = v47;
      if ( v44 == v25 )
        goto LABEL_24;
      if ( v21 != v47 )
      {
        v6 = 1;
        goto LABEL_23;
      }
      return 0;
    }
LABEL_24:
    while ( v24 == 4 || (v24 & 2) != 0 )
    {
      if ( v21 == v22 )
        goto LABEL_39;
LABEL_23:
      v23 = *v22++;
      v24 = v23 & 7;
      if ( (*(_BYTE *)(v22 - 1) & 1) != 0 )
        goto LABEL_20;
    }
LABEL_26:
    v26 = a1[7];
    if ( (*(_BYTE *)(v26 + 2) & 4) != 0 )
      return 0;
    if ( (*(_BYTE *)(v26 + 21) & 4) != 0 )
      return 0;
    return v12;
  }
  v28 = *v19 & 7;
  if ( (*(_BYTE *)(v22 - 1) & 1) == 0 )
  {
    while ( v28 == 4 || (v28 & 2) != 0 )
    {
      if ( v21 == v22 )
      {
LABEL_39:
        if ( v6 )
          return 0;
        goto LABEL_40;
      }
LABEL_35:
      v28 = *v22++ & 7;
      if ( (*(_BYTE *)(v22 - 1) & 1) != 0 )
        goto LABEL_33;
    }
    goto LABEL_26;
  }
LABEL_33:
  if ( v21 != v22 )
  {
    v6 = 1;
    goto LABEL_35;
  }
  return 0;
}
