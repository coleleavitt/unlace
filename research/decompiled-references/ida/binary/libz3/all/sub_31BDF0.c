__int64 __fastcall sub_31BDF0(__int64 a1)
{
  __int64 v2; // r12
  void *v3; // rbp
  void *v4; // rbp
  int **v5; // rax
  int *v6; // rax
  int *v7; // rbp
  int v8; // edx
  int *v9; // r14
  int *v10; // r13
  int v11; // edx
  void *v12; // rdi
  int *i; // rdx
  int v14; // edx
  void *v15; // rdi
  int *v16; // rax
  char v18; // dl
  char v19; // dl
  char v20; // dl
  int v21; // edx
  int v22; // edx
  __int64 v23; // rcx
  int *v24; // rdx
  __int64 v25; // [rsp+8h] [rbp-60h]
  void *v26; // [rsp+10h] [rbp-58h]
  int *v27; // [rsp+10h] [rbp-58h]
  void *v28; // [rsp+10h] [rbp-58h]
  int *v29; // [rsp+10h] [rbp-58h]
  __int64 v30; // [rsp+18h] [rbp-50h]
  __int64 v31; // [rsp+20h] [rbp-48h]

  v2 = a1 + 104;
  v25 = a1 + 72;
  v3 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, a1 + 72);
  v31 = a1 + 88;
  sub_182CBA0(v3, a1 + 88);
  *(_BYTE *)(a1 + 92) &= ~1u;
  v4 = qword_1C7F2C0;
  *(_DWORD *)(a1 + 88) = 1;
  sub_182CEF0(v4, a1 + 104);
  v30 = a1 + 120;
  sub_182CBA0(v4, a1 + 120);
  v5 = *(int ***)(a1 + 32);
  *(_BYTE *)(a1 + 124) &= ~1u;
  *(_DWORD *)(a1 + 120) = 1;
  v6 = *v5;
  if ( !v6 )
    return sub_302130(a1, "maxlex");
  v7 = &v6[14 * *(v6 - 1)];
  if ( v7 == v6 )
    return sub_302130(a1, "maxlex");
  v8 = v6[12];
  v9 = v6 + 8;
  v10 = v6;
  if ( v8 == -1 )
    goto LABEL_12;
LABEL_4:
  if ( !v8 )
  {
    v11 = *(v9 - 4);
    v12 = qword_1C7F2C0;
    if ( v11 )
    {
      if ( *(_DWORD *)(a1 + 104) )
      {
        if ( (*(_BYTE *)(a1 + 124) & 1) != 0
          || *(_DWORD *)(a1 + 120) != 1
          || (v10[9] & 1) != 0
          || (v23 = v2, v24 = v9 - 4, *v9 != 1) )
        {
          sub_1851D20(qword_1C7F2C0, v2, v9 - 4, v2);
          goto LABEL_10;
        }
LABEL_46:
        sub_1831A80(v12, v2, v24, v23);
        sub_182CBA0(v12, v30);
        *(_DWORD *)(a1 + 120) = 1;
        goto LABEL_26;
      }
      if ( (v10[5] & 1) != 0 )
      {
        v28 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v2, v9 - 4);
        v12 = v28;
      }
      else
      {
LABEL_32:
        *(_BYTE *)(a1 + 108) &= ~1u;
        *(_DWORD *)(a1 + 104) = v11;
      }
      if ( (v10[9] & 1) != 0 )
      {
LABEL_37:
        sub_182C690(v12, v30, v9);
      }
      else
      {
LABEL_34:
        v21 = *v9;
        *(_BYTE *)(a1 + 124) &= ~1u;
        *(_DWORD *)(a1 + 120) = v21;
      }
    }
    else
    {
LABEL_23:
      v18 = *(_BYTE *)(a1 + 108);
      if ( (v18 & 1) != 0 )
        sub_182C690(v12, v2, v2);
      else
        *(_BYTE *)(a1 + 108) = v18 & 0xFE;
      if ( (*(_BYTE *)(a1 + 124) & 1) == 0 )
      {
LABEL_26:
        *(_BYTE *)(a1 + 124) &= ~1u;
        goto LABEL_10;
      }
      sub_182C690(v12, v30, v30);
    }
  }
LABEL_10:
  for ( i = v9 + 14; v7 != v9 + 6; i = v9 + 14 )
  {
    v9 = i;
    v8 = i[4];
    v10 = v9 - 8;
    if ( v8 != -1 )
      goto LABEL_4;
LABEL_12:
    v14 = *(v9 - 4);
    v15 = qword_1C7F2C0;
    v16 = v9 - 4;
    if ( v14 )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        if ( (*(_BYTE *)(a1 + 92) & 1) != 0 || *(_DWORD *)(a1 + 88) != 1 || (v10[9] & 1) != 0 || *v9 != 1 )
        {
          sub_1851D20(qword_1C7F2C0, v25, v9 - 4, v25);
          v16 = v9 - 4;
        }
        else
        {
          sub_1831A80(qword_1C7F2C0, v25, v9 - 4, v25);
          sub_182CBA0(v15, v31);
          *(_BYTE *)(a1 + 92) &= ~1u;
          v16 = v9 - 4;
          *(_DWORD *)(a1 + 88) = 1;
        }
      }
      else
      {
        if ( (v10[5] & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v25, v9 - 4);
          v16 = v9 - 4;
          if ( (v10[9] & 1) == 0 )
          {
LABEL_40:
            v22 = *v9;
            *(_BYTE *)(a1 + 92) &= ~1u;
            *(_DWORD *)(a1 + 88) = v22;
            goto LABEL_17;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 76) &= ~1u;
          *(_DWORD *)(a1 + 72) = v14;
          if ( (v10[9] & 1) == 0 )
            goto LABEL_40;
        }
        v29 = v16;
        sub_182C690(v15, v31, v9);
        v16 = v29;
      }
    }
    else
    {
      v19 = *(_BYTE *)(a1 + 76);
      if ( (v19 & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v25, v25);
        v16 = v9 - 4;
      }
      else
      {
        *(_BYTE *)(a1 + 76) = v19 & 0xFE;
      }
      v20 = *(_BYTE *)(a1 + 92);
      if ( (v20 & 1) != 0 )
      {
        v27 = v16;
        sub_182C690(v15, v31, v31);
        v16 = v27;
      }
      else
      {
        *(_BYTE *)(a1 + 92) = v20 & 0xFE;
      }
    }
LABEL_17:
    v11 = *(v9 - 4);
    v12 = qword_1C7F2C0;
    if ( !v11 )
      goto LABEL_23;
    if ( !*(_DWORD *)(a1 + 104) )
    {
      if ( (v10[5] & 1) == 0 )
        goto LABEL_32;
      v26 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, v2, v16);
      v12 = v26;
      if ( (v10[9] & 1) == 0 )
        goto LABEL_34;
      goto LABEL_37;
    }
    if ( (*(_BYTE *)(a1 + 124) & 1) == 0 && *(_DWORD *)(a1 + 120) == 1 && (v10[9] & 1) == 0 && *v9 == 1 )
    {
      v23 = v2;
      v24 = v16;
      goto LABEL_46;
    }
    sub_1851D20(qword_1C7F2C0, v2, v16, v2);
  }
  return sub_302130(a1, "maxlex");
}

