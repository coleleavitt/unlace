__int64 __fastcall sub_7E16B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r12
  __int64 result; // rax
  _QWORD *v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  char v17; // r15
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rdi
  int v29; // eax
  unsigned __int64 v30; // [rsp+8h] [rbp-50h]
  __int64 v31; // [rsp+8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+8h] [rbp-50h]
  unsigned __int64 v33[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = sub_7D7F60(a2);
  v4 = *(_QWORD *)(v3 + 16) + 8LL * *(unsigned int *)(v3 + 24);
  v5 = *(_QWORD *)(sub_7D7F60(a2) + 16);
  if ( v4 != v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)v5 + 80LL);
        v7 = *(_QWORD *)(v6 + 72);
        v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v7 & 1) == 0 )
        {
          if ( v8 <= 3 )
            goto LABEL_6;
          v12 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
          v10 = v12;
          if ( (v8 & 2) == 0 )
            goto LABEL_17;
          v13 = v12[2275];
          if ( v13 )
          {
            v12[284] += 24LL;
            v14 = v12[274];
            v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v10[275] >= v15 + 24 && v14 )
              v10[274] = v15 + 24;
            else
              v15 = sub_7DAE50((__int64)(v10 + 274), 24, 3);
            *(_QWORD *)v15 = v13;
            *(_DWORD *)(v15 + 8) = 0;
            *(_QWORD *)(v15 + 16) = v6;
            *(_QWORD *)(v6 + 72) = v15 | 5;
            v9 = v15 & 0xFFFFFFFFFFFFFFF8LL;
            goto LABEL_5;
          }
          v8 = v6 & 0xFFFFFFFFFFFFFFFALL;
          v7 = v6 & 0xFFFFFFFFFFFFFFFALL | 1;
          *(_QWORD *)(v6 + 72) = v7;
        }
        if ( v8 )
          break;
LABEL_6:
        v5 += 8;
        if ( v4 == v5 )
          return 1;
      }
      v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      v10 = (_QWORD *)v9;
      if ( (v8 & 4) == 0 )
      {
        if ( v9 )
          goto LABEL_17;
        goto LABEL_6;
      }
LABEL_5:
      if ( !v9 )
        goto LABEL_6;
      v28 = *(_QWORD *)v9;
      v29 = *(_DWORD *)(*(_QWORD *)v9 + 12LL);
      if ( *(_DWORD *)(v9 + 8) != v29 )
      {
        *(_DWORD *)(v9 + 8) = v29;
        v32 = v9;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 144LL))(v28, v6);
        v9 = v32;
      }
      v10 = *(_QWORD **)(v9 + 16);
      if ( !v10 )
        goto LABEL_6;
LABEL_17:
      v16 = (unsigned __int64)v10;
      v17 = 0;
LABEL_18:
      if ( (*(_BYTE *)(v16 + 140) & 7u) > 1 )
      {
LABEL_19:
        v18 = *(_QWORD *)(v16 + 72);
        if ( (v18 & 1) == 0 )
          goto LABEL_20;
        goto LABEL_28;
      }
      while ( 1 )
      {
        v21 = *a1;
        v33[0] = v16;
        result = sub_7E09C0((__int64)a1, v16, v16, (__int64 *)v33, a1, v21);
        if ( !(_BYTE)result )
          return result;
        v18 = *(_QWORD *)(v16 + 72);
        if ( (v18 & 1) == 0 )
        {
LABEL_20:
          if ( (v18 & 2) != 0 )
          {
            if ( v17 )
              goto LABEL_6;
            v17 = 1;
            v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v18 & 1) != 0 )
              goto LABEL_36;
            goto LABEL_30;
          }
          v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v18 & 1) == 0 )
          {
            if ( v19 <= 3 )
              goto LABEL_6;
            goto LABEL_23;
          }
          goto LABEL_51;
        }
LABEL_28:
        if ( v17 )
          goto LABEL_6;
        v17 = 1;
        v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v18 & 1) != 0 )
          goto LABEL_51;
LABEL_30:
        if ( v19 <= 3 )
        {
          v17 = 1;
          v16 = v18 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_32:
          if ( !v16 )
            goto LABEL_6;
          goto LABEL_18;
        }
LABEL_23:
        v20 = v18 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v19 & 2) != 0 )
          break;
        if ( v10 == (_QWORD *)v20 )
          goto LABEL_6;
        v16 = v20;
        if ( (*(_BYTE *)(v20 + 140) & 7u) > 1 )
          goto LABEL_19;
      }
      v25 = *(_QWORD *)(v20 + 18200);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v20 + 2192);
        *(_QWORD *)(v20 + 2272) += 24LL;
        v27 = (v26 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v20 + 2200) >= v27 + 24 && v26 )
        {
          *(_QWORD *)(v20 + 2192) = v27 + 24;
        }
        else
        {
          v31 = v25;
          v27 = sub_7DAE50(v20 + 2192, 24, 3);
          v25 = v31;
        }
        *(_QWORD *)v27 = v25;
        *(_DWORD *)(v27 + 8) = 0;
        *(_QWORD *)(v27 + 16) = v16;
        *(_QWORD *)(v16 + 72) = v27 | 5;
        v22 = v27 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_37:
        if ( !v22 )
          goto LABEL_6;
        v23 = *(_QWORD *)v22;
        v24 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
        if ( *(_DWORD *)(v22 + 8) != v24 )
        {
          *(_DWORD *)(v22 + 8) = v24;
          v30 = v22;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 144LL))(v23, v16);
          v22 = v30;
        }
        v16 = *(_QWORD *)(v22 + 16);
        goto LABEL_41;
      }
      v19 = v16 & 0xFFFFFFFFFFFFFFFALL;
      v18 = v16 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v16 + 72) = v18;
LABEL_51:
      if ( v19 )
      {
LABEL_36:
        v22 = v18 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v19 & 4) != 0 )
          goto LABEL_37;
        v16 = v18 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_41:
        if ( (_QWORD *)v16 != v10 )
          goto LABEL_32;
        v5 += 8;
        if ( v4 == v5 )
          return 1;
      }
      else
      {
        v5 += 8;
        if ( v4 == v5 )
          return 1;
      }
    }
  }
  return 1;
}

