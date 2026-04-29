unsigned __int64 __fastcall sub_29A480(_QWORD *a1, const __m128i **a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbp
  int v4; // eax
  _DWORD *v5; // r15
  __int64 v6; // rdx
  int v7; // esi
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r13
  _QWORD *v16; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  int v23; // [rsp+10h] [rbp-A0h]
  int v24; // [rsp+14h] [rbp-9Ch]
  int tinfo_size; // [rsp+18h] [rbp-98h]
  __int64 tinfo_property; // [rsp+30h] [rbp-80h] BYREF
  __int64 v28; // [rsp+38h] [rbp-78h] BYREF
  __int128 v29; // [rsp+40h] [rbp-70h]
  _DWORD v30[6]; // [rsp+58h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v2 = (_QWORD *)a1[2];
  v29 = 0;
  v28 = 0;
  if ( !v2 )
    return v31 - __readfsqword(0x28u);
  if ( !a1[3] )
    return v31 - __readfsqword(0x28u);
  v3 = (_QWORD *)v2[1];
  if ( v3 == v2 )
    return v31 - __readfsqword(0x28u);
  do
  {
LABEL_4:
    v4 = *((_DWORD *)v3 + 14);
    if ( (unsigned int)(v4 - 1) > 1 )
      goto LABEL_25;
    if ( *((_DWORD *)v3 + 10) == 8 )
    {
      v5 = (_DWORD *)v3[6];
      v23 = 0;
      v6 = *(_QWORD *)(*(_QWORD *)v5 + 24LL);
      if ( *(_DWORD *)(v6 + 8) == 68 )
        goto LABEL_25;
      goto LABEL_7;
    }
    do
    {
      if ( *((_DWORD *)v3 + 6) != 8 )
        break;
      v5 = (_DWORD *)v3[4];
      v23 = 1;
      v6 = *(_QWORD *)(*(_QWORD *)v5 + 24LL);
      if ( *(_DWORD *)(v6 + 8) == 68 )
        break;
LABEL_7:
      tinfo_property = 0;
      v7 = v5[2];
      if ( (unsigned int)(v7 + 1) <= 0x100 )
        tinfo_property = get_tinfo_property(*(_QWORD *)(v6 + 48), (unsigned int)(v7 + 25));
      v8 = *(_QWORD **)(*(_QWORD *)(a1[1] + 8LL) + 1376LL);
      if ( !v8 )
        goto LABEL_12;
      v9 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v9 )
        goto LABEL_13;
      if ( (*(_BYTE *)(*v8 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_12;
      v21 = **(_QWORD **)v5;
      while ( 1 )
      {
        v22 = *(_QWORD *)(v9 + 24);
        if ( v21 >= v22 )
          break;
        v9 = *(_QWORD *)(v9 + 8);
LABEL_53:
        if ( (*(_BYTE *)v9 & 2) != 0 )
          goto LABEL_12;
      }
      if ( v22 < v21 )
      {
        v9 = *(_QWORD *)(v9 + 16);
        goto LABEL_53;
      }
      if ( v8 != (_QWORD *)v9 )
      {
LABEL_13:
        v10 = (unsigned int *)(v3 + 5);
        if ( !v23 )
          v10 = (unsigned int *)(v3 + 3);
        v11 = v10;
        v24 = *((_DWORD *)v3 + 16);
        tinfo_size = get_tinfo_size(0, tinfo_property, 0);
        v30[0] = 0;
        sub_2983F0((__int64)v30, v11);
        v12 = v29;
        v13 = v28;
        v14 = v28;
        if ( 8LL * (_QWORD)v29 )
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)v14;
            if ( !sub_252720(*(_QWORD *)(**(_QWORD **)v14 + 24LL), *(_QWORD *)(*(_QWORD *)v5 + 24LL))
              && *(_DWORD *)(v15 + 8) == v5[2]
              && **(_QWORD **)v15 == **(_QWORD **)v5 )
            {
              break;
            }
            v13 = v28;
            v12 = v29;
            v14 += 8;
            if ( v14 == v28 + 8LL * (_QWORD)v29 )
              goto LABEL_47;
          }
          v5 = *(_DWORD **)v14;
        }
        else
        {
LABEL_47:
          if ( *((_QWORD *)&v29 + 1) < (unsigned __int64)(v12 + 1) )
          {
            v28 = qvector_reserve(&v28, v13, v12 + 1, 8);
            v13 = v28;
            v12 = v29;
          }
          *(_QWORD *)(v13 + 8 * v12) = v5;
          *(_QWORD *)&v29 = v29 + 1;
        }
        sub_299E00(*(_QWORD *)(a1[1] + 8LL), a2, (__int64)v5, (__int64)v30, v24, tinfo_size);
        sub_2978B0((__int64)v30);
        clear_tinfo_t(&tinfo_property);
        goto LABEL_23;
      }
LABEL_12:
      if ( (unsigned int)sub_326E00(&tinfo_property) )
        goto LABEL_13;
      clear_tinfo_t(&tinfo_property);
LABEL_23:
      if ( v23 == 1 )
        break;
      v4 = *((_DWORD *)v3 + 14);
LABEL_25:
      ;
    }
    while ( (unsigned int)(v4 - 1) <= 1 );
    if ( (*v3 & 2) != 0 )
      continue;
    v16 = (_QWORD *)v3[2];
    if ( (*(_BYTE *)v16 & 2) != 0 )
    {
      v18 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
      v19 = *v18;
      if ( (*v18 & 2) == 0 )
      {
        while ( v3 == (_QWORD *)v18[2] )
        {
          v3 = v18;
          v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
          v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v19 & 2) != 0 )
          {
            v3 = (_QWORD *)v20;
            if ( a1[2] != v20 )
              goto LABEL_4;
            goto LABEL_30;
          }
          v18 = (_QWORD *)v20;
        }
      }
      v3 = v18;
      if ( (_QWORD *)a1[2] == v18 )
        break;
      goto LABEL_4;
    }
    do
    {
      v3 = v16;
      v16 = (_QWORD *)v16[1];
    }
    while ( (*(_BYTE *)v16 & 2) == 0 );
  }
  while ( (_QWORD *)a1[2] != v3 );
LABEL_30:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  return v31 - __readfsqword(0x28u);
}
