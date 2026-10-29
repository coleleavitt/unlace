unsigned __int64 __fastcall sub_1E370(__int64 a1, __int16 a2, int a3, unsigned __int8 *a4, __int64 a5)
{
  unsigned int v5; // r13d
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int8 *v9; // rsi
  char v10; // r15
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rax
  unsigned __int8 *v14; // rcx
  char *v15; // rbp
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rbp
  int v19; // edx
  int v20; // ecx
  __int64 v21; // r8
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r14
  _QWORD *v25; // r14
  unsigned __int64 v26; // rbp
  _QWORD *v28; // r15
  unsigned __int64 v29; // rax
  _QWORD *v30; // r15
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  char *v34; // [rsp+0h] [rbp-48h]
  char *v35; // [rsp+0h] [rbp-48h]
  _QWORD *v36; // [rsp+0h] [rbp-48h]
  _QWORD *v37; // [rsp+0h] [rbp-48h]
  char v38; // [rsp+Dh] [rbp-3Bh]
  char v39; // [rsp+Eh] [rbp-3Ah]
  char v40; // [rsp+Fh] [rbp-39h]

  v5 = a3 + 1;
  v7 = *(_QWORD *)(a1 + 32);
  if ( !v7 )
  {
    v38 = 0;
    v16 = 0;
    v10 = 0;
    v39 = 0;
    v40 = 0;
    goto LABEL_20;
  }
  a4 = *(unsigned __int8 **)(a1 + 24);
  a3 = *a4;
  if ( (_BYTE)a3 == 122 )
  {
    --v7;
    v40 = 1;
    v10 = 0;
    *(_QWORD *)(a1 + 24) = a4 + 1;
    *(_QWORD *)(a1 + 32) = v7;
    if ( !v7 )
      goto LABEL_33;
    a3 = *++a4;
  }
  else
  {
    v40 = 0;
  }
  if ( (_BYTE)a3 == 121 )
  {
    v8 = v7 - 1;
    v9 = a4 + 1;
    *(_QWORD *)(a1 + 24) = a4 + 1;
    *(_QWORD *)(a1 + 32) = v8;
    if ( v8 )
    {
      a3 = a4[1];
      v10 = 1;
      if ( (_BYTE)a3 == 90 )
        goto LABEL_7;
LABEL_44:
      v39 = 0;
      v11 = *(_QWORD *)(a1 + 32);
      a4 = v9;
      if ( (_BYTE)a3 == 68 )
        goto LABEL_9;
LABEL_45:
      v38 = 0;
      v13 = *(_QWORD *)(a1 + 32);
      if ( (_BYTE)a3 == 89 )
        goto LABEL_16;
LABEL_46:
      v16 = 0;
      goto LABEL_20;
    }
    v10 = 1;
LABEL_33:
    v39 = 0;
    goto LABEL_34;
  }
  v8 = *(_QWORD *)(a1 + 32);
  v9 = a4;
  v10 = 0;
  if ( (_BYTE)a3 != 90 )
    goto LABEL_44;
LABEL_7:
  v11 = v8 - 1;
  a4 = v9 + 1;
  *(_QWORD *)(a1 + 24) = v9 + 1;
  *(_QWORD *)(a1 + 32) = v11;
  if ( !v11 )
  {
    v39 = 1;
    goto LABEL_34;
  }
  a3 = v9[1];
  v39 = 1;
  if ( (_BYTE)a3 != 68 )
    goto LABEL_45;
LABEL_9:
  a3 = v11 - 1;
  *(_QWORD *)(a1 + 24) = a4 + 1;
  *(_QWORD *)(a1 + 32) = v11 - 1;
  if ( v11 == 1 )
  {
LABEL_34:
    v38 = 0;
    v16 = 0;
    goto LABEL_20;
  }
  v12 = a4[1];
  v13 = v11 - 2;
  *(_QWORD *)(a1 + 24) = a4 + 2;
  LODWORD(a4) = v12 - 100;
  *(_QWORD *)(a1 + 32) = v13;
  if ( (unsigned __int8)(v12 - 100) > 0xEu )
  {
    v38 = 0;
  }
  else
  {
    a3 = 0;
    if ( ((0x4105uLL >> (char)a4) & 1) == 0 )
      LOBYTE(v12) = 0;
    v38 = v12;
  }
  if ( !v13 )
    goto LABEL_46;
  a4 = *(unsigned __int8 **)(a1 + 24);
  a3 = *a4;
  if ( (_BYTE)a3 != 89 )
    goto LABEL_46;
LABEL_16:
  v14 = a4 + 1;
  *(_QWORD *)(a1 + 24) = v14;
  *(_QWORD *)(a1 + 32) = v13 - 1;
  v15 = sub_1C940((_QWORD *)a1, v5, a3, (_DWORD)v14, a5);
  if ( !v15 )
    return 0;
  v16 = sub_C400(*(_QWORD **)(a1 + 40), 221);
  sub_C080(v16, (__int64)v15, *(_QWORD **)(a1 + 40));
  if ( !v16 )
    return 0;
LABEL_20:
  v34 = sub_1C940((_QWORD *)a1, v5, a3, (_DWORD)a4, a5);
  if ( v34 )
  {
    v18 = sub_C400(*(_QWORD **)(a1 + 40), 221);
    sub_C080(v18, (__int64)v34, *(_QWORD **)(a1 + 40));
    if ( v18 )
    {
      v35 = sub_1C940((_QWORD *)a1, v5, v19, v20, v21);
      if ( v35 )
      {
        v22 = sub_C400(*(_QWORD **)(a1 + 40), 221);
        sub_C080(v22, (__int64)v35, *(_QWORD **)(a1 + 40));
        if ( v22 )
        {
          v17 = sub_C400(*(_QWORD **)(a1 + 40), a2);
          if ( v40 )
          {
            v37 = *(_QWORD **)(a1 + 40);
            v33 = sub_C400(v37, 261);
            sub_C080(v17, v33, v37);
            if ( !v39 )
            {
LABEL_26:
              if ( !v10 )
                goto LABEL_27;
              goto LABEL_37;
            }
          }
          else if ( !v39 )
          {
            goto LABEL_26;
          }
          v36 = *(_QWORD **)(a1 + 40);
          v32 = sub_C400(v36, 260);
          sub_C080(v17, v32, v36);
          if ( !v10 )
          {
LABEL_27:
            if ( !v38 )
              goto LABEL_28;
            goto LABEL_35;
          }
LABEL_37:
          v30 = *(_QWORD **)(a1 + 40);
          v31 = sub_C400(v30, 63);
          sub_C080(v17, v31, v30);
          if ( !v38 )
          {
LABEL_28:
            if ( !v16 )
            {
LABEL_30:
              v24 = sub_C400(*(_QWORD **)(a1 + 40), 3);
              sub_C080(v17, v24, *(_QWORD **)(a1 + 40));
              sub_C080(v24, v18, *(_QWORD **)(a1 + 40));
              v25 = *(_QWORD **)(a1 + 40);
              v26 = sub_C400(v25, 196);
              sub_C080(v26, v22, *(_QWORD **)(a1 + 40));
              sub_C080(v17, v26, v25);
              return v17;
            }
LABEL_29:
            v23 = sub_C400(*(_QWORD **)(a1 + 40), 64);
            sub_C080(v23, v16, *(_QWORD **)(a1 + 40));
            sub_C080(v17, v23, *(_QWORD **)(a1 + 40));
            goto LABEL_30;
          }
LABEL_35:
          v28 = *(_QWORD **)(a1 + 40);
          v29 = sub_C480(v28, 65, v38);
          sub_C080(v17, v29, v28);
          if ( !v16 )
            goto LABEL_30;
          goto LABEL_29;
        }
      }
    }
  }
  return 0;
}

