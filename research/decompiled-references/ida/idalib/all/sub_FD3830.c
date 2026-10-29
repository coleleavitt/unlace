__int64 __fastcall sub_FD3830(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  int *v10; // rax
  char v11; // r8
  int v12; // r13d
  unsigned __int8 v13; // si
  unsigned int v14; // r12d
  unsigned __int16 *v15; // rax
  unsigned __int8 v16; // al
  bool v17; // al
  __int64 v18; // rbp
  unsigned int v19; // eax
  int v20; // eax
  char v21; // al
  int v22; // ebx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned __int16 *v26; // rax
  _BOOL4 v27; // edx
  unsigned int v28; // eax
  unsigned __int16 *v29; // rax
  int v30; // eax
  unsigned __int16 *v31; // rax
  int v32; // edx
  unsigned __int16 *v33; // rax
  char *v34; // [rsp+8h] [rbp-70h]
  char *v35; // [rsp+8h] [rbp-70h]
  int v36; // [rsp+1Ch] [rbp-5Ch]
  char *s; // [rsp+20h] [rbp-58h] BYREF
  int v38; // [rsp+28h] [rbp-50h]

  v8 = *(_QWORD *)(a4 + 64);
  v36 = a3;
  if ( v8 )
    v9 = sub_FCFC90((_QWORD *)(a4 + 96), v8, a3, a4, a5, a6);
  else
    v9 = *(_QWORD *)(a4 + 152);
  v10 = (int *)sub_FCE460(v9, a2, a3, a4, a5, a6);
  v11 = *(_BYTE *)(v9 + 24);
  v12 = *v10;
  v13 = *(_BYTE *)v10 & 7;
  v14 = v13;
  if ( v13 )
  {
    if ( (v11 & 2) == 0 )
    {
      if ( a2 > 0x233B )
        goto LABEL_14;
      v15 = sub_FD2C00(a2);
      if ( !v15 )
        goto LABEL_14;
      goto LABEL_8;
    }
    if ( v13 != 1 )
    {
LABEL_6:
      if ( a2 <= 0x233B )
        goto LABEL_7;
LABEL_83:
      if ( (v11 & 1) == 0 )
        goto LABEL_54;
      goto LABEL_53;
    }
    if ( (v12 & 8) != 0 )
    {
      if ( a2 > 0x233B )
        return 1;
      v15 = sub_FD2C00(a2);
      if ( !v15 || ((*((_BYTE *)v15 + 2) >> 3) & 7) != 4 )
        return 1;
LABEL_9:
      if ( (v15[1] & 7) == 1 && *(_BYTE *)(a4 + 4) )
        return 1;
      LOBYTE(v12) = v13 & 7 | v12 & 0xF8;
      if ( (v12 & 8) == 0 && (unsigned __int8)v14 < *(_BYTE *)(v9 + 25) )
        v14 = *(unsigned __int8 *)(v9 + 25);
LABEL_14:
      if ( (_BYTE)v14 == 1 )
        return 1;
      goto LABEL_15;
    }
    if ( a2 > 0x233B )
    {
      v14 = 3;
      goto LABEL_83;
    }
    v26 = sub_FD2C00(a2);
    if ( v26 )
    {
      v14 = 3;
      if ( ((*((_BYTE *)v26 + 2) >> 3) & 7) == 2 )
        return 1;
    }
    else
    {
      v14 = 3;
    }
LABEL_7:
    v15 = sub_FD2C00(a2);
    if ( !v15 )
    {
LABEL_15:
      if ( (v11 & 1) == 0 )
        goto LABEL_54;
      if ( a2 <= 0x233B )
        goto LABEL_17;
      goto LABEL_53;
    }
LABEL_8:
    if ( ((*((_BYTE *)v15 + 2) >> 3) & 7) != 4 )
      goto LABEL_14;
    goto LABEL_9;
  }
  if ( (v11 & 2) != 0 )
  {
    v14 = 5;
    goto LABEL_6;
  }
  v14 = 5;
  if ( a2 <= 0x233B )
    goto LABEL_7;
  if ( (v11 & 1) == 0 )
    goto LABEL_23;
LABEL_53:
  if ( (*(_BYTE *)(**(_QWORD **)(a1 + 8) + 40LL * (a2 - 9020) + 1) & 1) != 0 )
  {
LABEL_17:
    if ( (_BYTE)v14 == 3 )
      return 1;
    if ( (unsigned __int8)v14 > 3u )
    {
      if ( a2 <= 0x233B )
      {
        v29 = sub_FD2C00(a2);
        if ( !v29 )
          goto LABEL_22;
        v16 = v29[1] & 7;
      }
      else
      {
        v16 = *(_BYTE *)(**(_QWORD **)(a1 + 8) + 40LL * (a2 - 9020)) & 7;
      }
      if ( v16 <= 3u )
        return 1;
    }
LABEL_22:
    if ( (_BYTE)v14 != 4 )
    {
LABEL_23:
      v17 = a2 != 98 && (_BYTE)v14 == 5;
      goto LABEL_24;
    }
LABEL_57:
    if ( (v11 & 8) == 0 || (LOBYTE(v12) = v13 & 7 | v12 & 0xF8, (v12 & 0x40) != 0) )
    {
LABEL_64:
      v14 = 4;
      goto LABEL_27;
    }
    v14 = 5;
    v17 = a2 != 98;
LABEL_24:
    if ( !v17 )
      goto LABEL_27;
    if ( !*(_BYTE *)(a4 + 5) )
    {
      v14 = 5;
      goto LABEL_27;
    }
    goto LABEL_64;
  }
LABEL_54:
  if ( (_BYTE)v14 != 3 )
    goto LABEL_22;
  if ( (v11 & 4) != 0 )
  {
    LOBYTE(v12) = v13 & 7 | v12 & 0xF8;
    if ( (v12 & 0x20) == 0 )
      goto LABEL_57;
  }
LABEL_27:
  v18 = *(_QWORD *)(a4 + 64);
  if ( !v18 )
    return v14;
  if ( (v11 & 0x10) != 0 && v36 )
  {
    v19 = v36;
    if ( v36 >= 0 || (v19 = sub_10212A0(*(_QWORD *)(a4 + 64), (unsigned int)v36)) != 0 )
    {
      v20 = sub_1021680(v18, v19);
      if ( v20 )
      {
        if ( v20 != 3 )
        {
          if ( a2 > 0x233B )
          {
            v21 = (*(_BYTE *)(**(_QWORD **)(a1 + 8) + 40LL * (a2 - 9020)) & 0x40) != 0;
            goto LABEL_35;
          }
          v33 = sub_FD2C00(a2);
          if ( v33 )
          {
            v21 = *((_BYTE *)v33 + 3) >> 7;
LABEL_35:
            if ( v21 )
              goto LABEL_36;
            return 1;
          }
        }
      }
    }
LABEL_36:
    if ( (*(_BYTE *)(v9 + 24) & 0x10) != 0 )
    {
      v22 = v36;
      while ( v22 < 0 )
      {
        v23 = sub_1021B90(v18, (unsigned int)v22);
        sub_1022900(&s, v18, v23, 1);
        if ( !s
          || (v34 = s, strlen(s) != 15)
          || *(_QWORD *)v34 != 0x686374617263733CLL
          || *((_DWORD *)v34 + 2) != 1634759456
          || *((_WORD *)v34 + 6) != 25955
          || v34[14] != 62 )
        {
          v24 = sub_1021B90(v18, (unsigned int)v22);
          if ( !v24 )
            break;
          v30 = sub_1021680(v18, v24);
          if ( !v30 )
            break;
          if ( v30 == 3 )
            break;
          v31 = sub_FD2C00(a2);
          if ( !v31 || (v31[2] & 1) != 0 )
            break;
          return 1;
        }
LABEL_76:
        if ( (unsigned __int8)sub_1020490(v18, (unsigned int)v22, 0) )
        {
          v22 = sub_10205A0(v18, (unsigned int)v22);
        }
        else
        {
          s = (char *)sub_101FC50(v18, (unsigned int)v22);
          v22 = (int)s;
          v38 = v32;
        }
        if ( v22 >= 0 )
          v28 = v22;
        else
          v28 = sub_1021B90(v18, (unsigned int)v22);
        while ( 1 )
        {
          sub_1022900(&s, v18, v28, 1);
          if ( !s )
            break;
          v35 = s;
          if ( strlen(s) != 15 )
            break;
          v27 = *(_QWORD *)v35 != 0x686374617263733CLL
             || *((_DWORD *)v35 + 2) != 1634759456
             || *((_WORD *)v35 + 6) != 25955
             || v35[14] != 62;
          v28 = v22;
          if ( v27 )
            break;
          if ( v22 < 0 )
            goto LABEL_76;
        }
      }
    }
  }
  if ( (v12 & 0x10) == 0 && (unsigned __int8)sub_FC7020((_QWORD *)a4) )
    return 1;
  return v14;
}
