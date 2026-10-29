unsigned __int64 __fastcall sub_1F370(_QWORD *a1, int a2)
{
  unsigned int v2; // r14d
  _QWORD *v4; // rdi
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  char *v8; // rdx
  char v9; // cl
  __int64 v11; // rbp
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // r15
  _BYTE *v15; // rsi
  unsigned __int64 v16; // rbp
  _QWORD *v17; // rbp
  __int64 v18; // rdx
  char *v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int16 v22; // ax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  _QWORD *v25; // rdx
  __int64 v26; // rbp
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r15
  _QWORD *v29; // rax
  char *v30; // rcx
  unsigned __int64 v31; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+0h] [rbp-58h]
  _QWORD v34[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = a2 + 1;
  v4 = (_QWORD *)a1[5];
  v34[1] = __readfsqword(0x28u);
  v5 = sub_C400(v4, 179);
  v6 = sub_C400((_QWORD *)a1[5], 224);
  sub_C080(v5, v6, (_QWORD *)a1[5]);
  while ( 1 )
  {
    v7 = a1[4];
    if ( !v7 )
    {
      if ( v2 > 0x400 )
        return 0;
      goto LABEL_7;
    }
    v8 = (char *)a1[3];
    v9 = *v8;
    if ( *v8 == 95 )
    {
      a1[3] = v8 + 1;
      a1[4] = v7 - 1;
      return v5;
    }
    if ( v2 > 0x400 )
      return 0;
    if ( v9 != 83 )
    {
      if ( v9 == 115 )
      {
        v17 = (_QWORD *)a1[5];
        a1[3] = v8 + 1;
        a1[4] = v7 - 1;
        v18 = v17[1];
        if ( !v18 || (v19 = (char *)(v18 + 5), (unsigned __int64)(v18 + 5) > v17[2]) )
        {
          v27 = 2LL * v17[4];
          if ( v27 < 6 )
            v27 = 6;
          v17[4] = v27;
          v28 = v27 + 8;
          v29 = malloc(v27 + 8);
          v30 = (char *)v29 + v28;
          *v29 = v17[3];
          v18 = (__int64)(v29 + 1);
          v17[3] = v29;
          v19 = (char *)v29 + 13;
          v17[2] = v30;
        }
        v17[1] = v19;
        *(_DWORD *)v18 = 1718187859;
        *(_BYTE *)(v18 + 4) = 116;
        v11 = sub_C510(v17, 143, v18, 5);
        v20 = sub_1B760((__int64)a1);
        if ( !v20 )
          return 0;
        v31 = v20;
LABEL_9:
        v12 = sub_C400((_QWORD *)a1[5], 169);
        v13 = (_QWORD *)a1[5];
        v14 = v12;
        v34[0] = v12;
        sub_C080(v12, v11, v13);
        sub_C080(v14, v31, (_QWORD *)a1[5]);
        v15 = (_BYTE *)a1[1];
        if ( v15 != (_BYTE *)a1[2] )
        {
          *(_QWORD *)v15 = v14;
          a1[1] += 8LL;
          goto LABEL_11;
        }
        goto LABEL_28;
      }
LABEL_7:
      v11 = sub_1F0C0((__int64)a1, a2 + 3);
      if ( !v11 )
        return 0;
      v31 = sub_1B760((__int64)a1);
      if ( !v31 )
        return 0;
      goto LABEL_9;
    }
    a1[3] = v8 + 1;
    a1[4] = v7 - 1;
    v21 = sub_1BFA0(a1);
    v14 = v21;
    if ( !v21 )
      return 0;
    v22 = *(_WORD *)(v21 + 16);
    if ( v22 != 169 )
    {
      if ( v22 != 143 )
        return 0;
      v23 = sub_1B760((__int64)a1);
      if ( !v23 )
        return 0;
      v32 = v23;
      v24 = sub_C400((_QWORD *)a1[5], 169);
      v25 = (_QWORD *)a1[5];
      v26 = v24;
      v34[0] = v24;
      sub_C080(v24, v14, v25);
      sub_C080(v26, v32, (_QWORD *)a1[5]);
      v15 = (_BYTE *)a1[1];
      if ( v15 != (_BYTE *)a1[2] )
      {
        *(_QWORD *)v15 = v26;
        v14 = v26;
        a1[1] += 8LL;
        goto LABEL_11;
      }
LABEL_28:
      sub_18710((__int64)a1, v15, v34);
      v14 = v34[0];
LABEL_11:
      if ( !v14 )
        return 0;
    }
    v16 = sub_C400((_QWORD *)a1[5], 221);
    sub_C080(v16, v14, (_QWORD *)a1[5]);
    if ( !v16 )
      return 0;
    sub_C080(v6, v16, (_QWORD *)a1[5]);
  }
}

