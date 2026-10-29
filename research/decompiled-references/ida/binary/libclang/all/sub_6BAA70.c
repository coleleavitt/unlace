__int64 __fastcall sub_6BAA70(_QWORD *a1, const void *a2, size_t a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // r9d
  __int64 v9; // r12
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  int v16; // edx
  __int64 v17; // rbp
  __int64 v18; // rax
  int v20; // r9d
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rcx
  unsigned __int64 v27; // r13
  int v28; // edx
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rdi
  int v32; // eax
  int v33; // [rsp+8h] [rbp-30h]
  int v34; // [rsp+8h] [rbp-30h]
  int v35; // [rsp+8h] [rbp-30h]
  int v36; // [rsp+8h] [rbp-30h]

  v6 = a1[270];
  v7 = a1[2168];
  if ( (*(_BYTE *)(v6 + 1) & 8) == 0 )
  {
    v20 = sub_600210(v7, a2, a3);
    v21 = *(_QWORD *)(a1[264] + 80LL);
    v22 = *(_QWORD *)(v21 + 72);
    v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v22 & 1) == 0 )
    {
      if ( v23 <= 3 )
        goto LABEL_29;
      v24 = v22 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v23 & 2) == 0 )
      {
LABEL_25:
        v28 = v24 + 40;
LABEL_26:
        v17 = sub_78A600((_DWORD)a1, a4, v28, 0, 0, v20, 0);
        goto LABEL_14;
      }
      v25 = *(_QWORD *)(v24 + 18200);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v24 + 2192);
        *(_QWORD *)(v24 + 2272) += 24LL;
        v23 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v24 + 2200) >= v23 + 24 && v26 )
        {
          *(_QWORD *)(v24 + 2192) = v23 + 24;
        }
        else
        {
          v35 = v20;
          v23 = sub_6A76A0(v24 + 2192, 24, 3);
          v20 = v35;
        }
        *(_QWORD *)v23 = v25;
        v22 = v23 | 5;
        *(_DWORD *)(v23 + 8) = 0;
        *(_QWORD *)(v23 + 16) = v21;
        *(_QWORD *)(v21 + 72) = v23 | 5;
        LOBYTE(v23) = v23 & 0xFA | 4;
LABEL_23:
        v24 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        v27 = v24;
        if ( (v23 & 4) != 0 )
        {
          if ( !v24 )
            goto LABEL_29;
          v31 = *(_QWORD *)v24;
          v32 = *(_DWORD *)(*(_QWORD *)v24 + 12LL);
          if ( *(_DWORD *)(v24 + 8) != v32 )
          {
            *(_DWORD *)(v24 + 8) = v32;
            v34 = v20;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 144LL))(v31, v21);
            v20 = v34;
          }
          v24 = *(_QWORD *)(v27 + 16);
        }
        if ( v24 )
          goto LABEL_25;
LABEL_29:
        v28 = 0;
        goto LABEL_26;
      }
      v23 = v21 & 0xFFFFFFFFFFFFFFFALL;
      v22 = v21 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v21 + 72) = v22;
    }
    if ( !v23 )
      goto LABEL_29;
    goto LABEL_23;
  }
  v8 = sub_600210(v7, a2, a3);
  v9 = *(_QWORD *)(a1[264] + 80LL);
  v10 = *(_QWORD *)(v9 + 72);
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v10 & 1) != 0 )
    goto LABEL_31;
  if ( v11 <= 3 )
    goto LABEL_32;
  v12 = v10 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v11 & 2) != 0 )
  {
    v13 = *(_QWORD *)(v12 + 18200);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v12 + 2192);
      *(_QWORD *)(v12 + 2272) += 24LL;
      v11 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v12 + 2200) >= v11 + 24 && v14 )
      {
        *(_QWORD *)(v12 + 2192) = v11 + 24;
      }
      else
      {
        v36 = v8;
        v11 = sub_6A76A0(v12 + 2192, 24, 3);
        v8 = v36;
      }
      *(_QWORD *)v11 = v13;
      v10 = v11 | 5;
      *(_DWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 16) = v9;
      *(_QWORD *)(v9 + 72) = v11 | 5;
      LOBYTE(v11) = v11 & 0xFA | 4;
LABEL_10:
      v12 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      v15 = v12;
      if ( (v11 & 4) != 0 )
      {
        if ( !v12 )
          goto LABEL_32;
        v29 = *(_QWORD *)v12;
        v30 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
        if ( *(_DWORD *)(v12 + 8) != v30 )
        {
          *(_DWORD *)(v12 + 8) = v30;
          v33 = v8;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 144LL))(v29, v9);
          v8 = v33;
        }
        v12 = *(_QWORD *)(v15 + 16);
      }
      if ( v12 )
        goto LABEL_12;
LABEL_32:
      v16 = 0;
      goto LABEL_13;
    }
    v11 = v9 & 0xFFFFFFFFFFFFFFFALL;
    v10 = v9 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v9 + 72) = v10;
LABEL_31:
    if ( !v11 )
      goto LABEL_32;
    goto LABEL_10;
  }
LABEL_12:
  v16 = v12 + 40;
LABEL_13:
  v17 = sub_7A2F00((_DWORD)a1, a4, v16, 0, 0, v8, 0, 0);
LABEL_14:
  *(_BYTE *)(v17 + 29) |= 2u;
  v18 = sub_75CA40(a1, 0, 0, 0);
  sub_799F60(v17, v18);
  return v17;
}

