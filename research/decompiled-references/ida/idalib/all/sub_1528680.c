void __fastcall sub_1528680(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v5; // r12d
  __int64 v6; // rsi
  int v7; // ecx
  int v8; // edx
  unsigned __int16 v9; // r13
  char v10; // al
  __int64 v11; // r13
  int *v12; // rdx
  int v13; // ecx
  __int16 v14; // ax
  int v15; // r14d
  unsigned int v16; // r15d
  unsigned __int16 v17; // r13
  char v18; // al
  __m128i v19; // [rsp+0h] [rbp-88h] BYREF
  int v20; // [rsp+10h] [rbp-78h]

  v5 = *(_DWORD *)a4;
  sub_14634E0(a2, (int *)a4);
  if ( *(_WORD *)(a4 + 16) != 22 )
  {
    v6 = a2[6];
    v7 = 2192;
    v8 = v5;
LABEL_3:
    sub_FC70B0((__int64)&v19, v6, v8, v7);
    sub_1520A40((unsigned __int8 **)&v19, (__int64)"pointers_to_members");
    sub_AEA040((__int64)&v19);
    return;
  }
  sub_14634E0(a2, (int *)a4);
  v9 = *(_WORD *)(a4 + 16);
  v10 = sub_141A630(v9);
  if ( v9 == 1 || v10 || (v11 = *(_QWORD *)(a4 + 8)) == 0 )
  {
    v8 = *(_DWORD *)a4;
    v6 = a2[6];
    v7 = 2189;
    goto LABEL_3;
  }
  sub_14634E0(a2, (int *)a4);
  v12 = *(int **)(v11 + 16);
  v13 = *(_QWORD *)v12;
  if ( v13 == 9 )
  {
    if ( *((_QWORD *)v12 + 2) != 0x7361635F74736562LL )
      goto LABEL_19;
    v16 = 0;
    if ( *((_BYTE *)v12 + 24) != 101 )
      goto LABEL_19;
  }
  else
  {
    if ( (unsigned int)*(_QWORD *)v12 == 15 )
    {
      if ( *((_QWORD *)v12 + 2) != 0x6E65675F6C6C7566LL
        || v12[6] != 1818325605
        || *((_WORD *)v12 + 14) != 29801
        || *((_BYTE *)v12 + 30) != 121 )
      {
        goto LABEL_19;
      }
      v14 = *(_WORD *)(a4 + 16);
      if ( v14 != 66 )
      {
        v15 = *(_DWORD *)a4;
        v16 = 3;
        if ( v14 != 23 )
        {
          sub_FC70B0((__int64)&v19, a2[6], v15, 1636);
          sub_1520A40((unsigned __int8 **)&v19, (__int64)"full_generality");
          sub_AEA040((__int64)&v19);
          return;
        }
        goto LABEL_15;
      }
      sub_14634E0(a2, (int *)a4);
      v17 = *(_WORD *)(a4 + 16);
      v18 = sub_141A630(v17);
      if ( v17 == 1 || v18 || (v11 = *(_QWORD *)(a4 + 8)) == 0 )
      {
        sub_FC70B0((__int64)&v19, a2[6], *(_DWORD *)a4, 1872);
        sub_AE9DF0((unsigned __int8 **)&v19, *(unsigned __int16 *)(a4 + 16), 4u);
        sub_1520C80((unsigned __int8 **)&v19, 0);
        sub_AEA040((__int64)&v19);
        return;
      }
      sub_14634E0(a2, (int *)a4);
      v12 = *(int **)(v11 + 16);
      v13 = *v12;
    }
    if ( v13 == 18 )
    {
      if ( *((_QWORD *)v12 + 2) ^ 0x695F656C676E6973LL | *((_QWORD *)v12 + 3) ^ 0x6E6174697265686ELL )
        goto LABEL_19;
      v16 = 1;
      if ( *((_WORD *)v12 + 16) != 25955 )
        goto LABEL_19;
    }
    else
    {
      if ( v13 != 20 )
      {
        if ( v13 == 19
          && !(*((_QWORD *)v12 + 2) ^ 0x5F6C617574726976LL | *((_QWORD *)v12 + 3) ^ 0x6174697265686E69LL)
          && *((_WORD *)v12 + 16) == 25454 )
        {
          v16 = 3;
          if ( *((_BYTE *)v12 + 34) == 101 )
            goto LABEL_30;
        }
LABEL_19:
        sub_FC70B0((__int64)&v19, a2[6], *(_DWORD *)a4, 1872);
        sub_AE9DF0((unsigned __int8 **)&v19, v11, 5u);
        sub_1520C80((unsigned __int8 **)&v19, 1);
        sub_AEA040((__int64)&v19);
        return;
      }
      if ( *((_QWORD *)v12 + 2) ^ 0x656C7069746C756DLL | *((_QWORD *)v12 + 3) ^ 0x74697265686E695FLL )
        goto LABEL_19;
      v16 = 2;
      if ( v12[8] != 1701015137 )
        goto LABEL_19;
    }
  }
LABEL_30:
  v15 = *(_DWORD *)a4;
  if ( *(_WORD *)(a4 + 16) != 23 )
  {
    sub_FC70B0((__int64)&v19, a2[6], v15, 1638);
    sub_AEC220((unsigned __int8 **)&v19, (_BYTE *)(*(_QWORD *)(v11 + 16) + 16LL), **(unsigned int **)(v11 + 16));
    sub_AEA040((__int64)&v19);
    return;
  }
LABEL_15:
  sub_14634E0(a2, (int *)a4);
  if ( *(_WORD *)(a4 + 16) != 2 )
  {
    v8 = *(_DWORD *)a4;
    v6 = a2[6];
    v7 = 2202;
    goto LABEL_3;
  }
  v20 = 443;
  v19.m128i_i64[0] = __PAIR64__(v15, v5);
  v19.m128i_i64[1] = v16;
  sub_1479990((__int64)a2, &v19, 1u);
}
