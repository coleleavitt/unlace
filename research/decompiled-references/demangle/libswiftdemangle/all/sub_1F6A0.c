unsigned __int64 __fastcall sub_1F6A0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rdx
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rbp
  _QWORD *v9; // rdx
  __int64 v10; // rsi
  _BYTE *v11; // rsi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int16 v14; // ax
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // r13
  _QWORD *v19; // rbp
  __int64 v20; // rdx
  char *v21; // rax
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  _QWORD *v27; // rax
  char *v28; // r12
  _QWORD v29[7]; // [rsp+0h] [rbp-38h] BYREF

  v29[1] = __readfsqword(0x28u);
  if ( a2 > 0x400 )
    return 0;
  v2 = *(_QWORD *)(a1 + 32);
  if ( !v2 )
    goto LABEL_5;
  v3 = *(_BYTE **)(a1 + 24);
  if ( *v3 == 83 )
  {
    *(_QWORD *)(a1 + 24) = v3 + 1;
    *(_QWORD *)(a1 + 32) = v2 - 1;
    v13 = sub_1BFA0((_QWORD *)a1);
    v8 = v13;
    if ( !v13 )
      return 0;
    v14 = *(_WORD *)(v13 + 16);
    if ( v14 == 169 )
      goto LABEL_11;
    if ( v14 != 143 )
      return 0;
    v12 = sub_1B760(a1);
    if ( !v12 )
      return v12;
    v16 = sub_C400(*(_QWORD **)(a1 + 40), 169);
    v17 = *(_QWORD **)(a1 + 40);
    v18 = v16;
    v29[0] = v16;
    sub_C080(v16, v8, v17);
    sub_C080(v18, v12, *(_QWORD **)(a1 + 40));
    v11 = *(_BYTE **)(a1 + 8);
    if ( v11 != *(_BYTE **)(a1 + 16) )
    {
      *(_QWORD *)v11 = v18;
      v8 = v18;
      *(_QWORD *)(a1 + 8) += 8LL;
      goto LABEL_10;
    }
LABEL_24:
    sub_18710(a1, v11, v29);
    v8 = v29[0];
LABEL_10:
    if ( v8 )
    {
LABEL_11:
      v12 = sub_C400(*(_QWORD **)(a1 + 40), 221);
      sub_C080(v12, v8, *(_QWORD **)(a1 + 40));
      return v12;
    }
    return 0;
  }
  if ( *v3 != 115 )
  {
LABEL_5:
    v4 = sub_1F0C0(a1, a2 + 2);
    if ( !v4 )
      return 0;
    v5 = sub_1B760(a1);
    if ( !v5 )
      return 0;
    v6 = sub_C400(*(_QWORD **)(a1 + 40), 169);
    v7 = *(_QWORD **)(a1 + 40);
    v29[0] = v6;
    v8 = v6;
    sub_C080(v6, v4, v7);
    v9 = *(_QWORD **)(a1 + 40);
    v10 = v5;
LABEL_8:
    sub_C080(v8, v10, v9);
    v11 = *(_BYTE **)(a1 + 8);
    if ( v11 != *(_BYTE **)(a1 + 16) )
    {
      *(_QWORD *)v11 = v8;
      *(_QWORD *)(a1 + 8) += 8LL;
      goto LABEL_10;
    }
    goto LABEL_24;
  }
  v19 = *(_QWORD **)(a1 + 40);
  *(_QWORD *)(a1 + 24) = v3 + 1;
  *(_QWORD *)(a1 + 32) = v2 - 1;
  v20 = v19[1];
  if ( !v20 || (v21 = (char *)(v20 + 5), (unsigned __int64)(v20 + 5) > v19[2]) )
  {
    v25 = 2LL * v19[4];
    if ( v25 < 6 )
      v25 = 6;
    v19[4] = v25;
    v26 = v25 + 8;
    v27 = malloc(v25 + 8);
    v28 = (char *)v27 + v26;
    *v27 = v19[3];
    v20 = (__int64)(v27 + 1);
    v19[3] = v27;
    v21 = (char *)v27 + 13;
    v19[2] = v28;
  }
  v19[1] = v21;
  *(_DWORD *)v20 = 1718187859;
  *(_BYTE *)(v20 + 4) = 116;
  v22 = sub_C510(v19, 143, v20, 5);
  v12 = sub_1B760(a1);
  if ( v12 )
  {
    v23 = sub_C400(*(_QWORD **)(a1 + 40), 169);
    v24 = *(_QWORD **)(a1 + 40);
    v29[0] = v23;
    v8 = v23;
    sub_C080(v23, v22, v24);
    v9 = *(_QWORD **)(a1 + 40);
    v10 = v12;
    goto LABEL_8;
  }
  return v12;
}
