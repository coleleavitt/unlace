__int64 __fastcall sub_2270D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rbp
  char *v9; // rdx
  char *v10; // r11
  char *v11; // r10
  char *v12; // rax
  char *v13; // r10
  signed __int64 v14; // rsi
  __int64 v15; // rcx
  char *v17; // r10
  char *v18; // r10
  char *v19; // r10
  const char *v20; // [rsp+0h] [rbp-58h] BYREF
  char *v21; // [rsp+8h] [rbp-50h]
  signed __int64 v22; // [rsp+10h] [rbp-48h]
  void *v23; // [rsp+18h] [rbp-40h]
  __int64 v24; // [rsp+20h] [rbp-38h]
  _BYTE v25[48]; // [rsp+28h] [rbp-30h] BYREF

  sub_2270A60(a1, -1, a3, a4, a5, a6);
  v8 = *(char **)(a1 + 40);
  *(_DWORD *)(a1 + 232) = 0;
  *(_WORD *)(a1 + 73) = 0;
  v9 = *(char **)(a1 + 48);
  if ( v8 == v9 )
  {
    v10 = v8;
    v12 = v8;
    goto LABEL_26;
  }
  if ( *v8 < 0 )
  {
    v20 = "Cannot consume non-ascii characters";
    LOWORD(v24) = 259;
    sub_226E270(a1, (__int64)&v20, v8);
    v10 = *(char **)(a1 + 40);
    v9 = *(char **)(a1 + 48);
    goto LABEL_24;
  }
  v10 = v8;
  if ( *v8 == 37 )
  {
    v10 = v8 + 1;
    ++*(_DWORD *)(a1 + 60);
    *(_QWORD *)(a1 + 40) = v8 + 1;
LABEL_24:
    if ( v9 != v10 )
      goto LABEL_4;
    v12 = v10;
LABEL_26:
    v9 = v12;
    v14 = v12 - v10;
LABEL_27:
    v12 = v9;
    goto LABEL_15;
  }
LABEL_4:
  if ( *v10 == 32 || (v11 = v10, *v10 == 9) )
  {
    v12 = v10;
LABEL_12:
    *(_QWORD *)(a1 + 40) = v12;
    v14 = v12 - v10;
  }
  else
  {
    while ( 1 )
    {
      v12 = sub_226DF60(a1, v11);
      v9 = *(char **)(a1 + 48);
      if ( v12 == v13 )
        break;
      if ( v9 == v12 )
        goto LABEL_26;
      if ( *v12 == 32 || *v12 == 9 )
        goto LABEL_12;
      v11 = v12;
    }
    *(_QWORD *)(a1 + 40) = v13;
    v14 = v13 - v10;
    if ( v9 == v13 )
      goto LABEL_27;
    v12 = v13;
  }
  if ( *v12 == 9 || *v12 == 32 )
  {
    while ( ++v12 != v9 )
    {
      if ( *v12 != 32 && *v12 != 9 )
        goto LABEL_15;
    }
    goto LABEL_27;
  }
LABEL_15:
  *(_QWORD *)(a1 + 40) = v12;
  v23 = v25;
  v15 = 0;
  LODWORD(v20) = 0;
  v21 = nullptr;
  v22 = 0;
  v24 = 0;
  v25[0] = 0;
  if ( v14 != 4 )
  {
    if ( v14 == 3 )
    {
      if ( *(_WORD *)v10 != 16724 || v10[2] != 71 )
        return 0;
      if ( v12 == v9 )
      {
LABEL_62:
        v9 = v12;
      }
      else
      {
        while ( 1 )
        {
          if ( *v12 == 32 || *v12 == 9 )
          {
            *(_QWORD *)(a1 + 40) = v12;
            goto LABEL_38;
          }
          v12 = sub_226DF60(a1, v12);
          if ( v12 == v17 )
            break;
          v9 = *(char **)(a1 + 48);
          if ( v9 == v12 )
            goto LABEL_62;
        }
        v12 = *(char **)(a1 + 48);
        *(_QWORD *)(a1 + 40) = v17;
        if ( v12 == v17 )
          goto LABEL_62;
        v9 = v12;
        v12 = v17;
LABEL_38:
        v15 = (unsigned __int8)*v12;
        if ( (_BYTE)v15 != 9 && (_BYTE)v15 != 32 )
        {
LABEL_40:
          *(_QWORD *)(a1 + 40) = v12;
          while ( *v12 != 32 )
          {
            if ( *v12 == 9 )
              break;
            v12 = sub_226DF60(a1, v12);
            if ( v18 == v12 )
              break;
            v9 = *(char **)(a1 + 48);
            if ( v12 == v9 )
              goto LABEL_45;
          }
          goto LABEL_46;
        }
        while ( ++v12 != v9 )
        {
          v15 = (unsigned __int8)*v12;
          if ( (_BYTE)v15 != 32 && (_BYTE)v15 != 9 )
            goto LABEL_40;
        }
      }
LABEL_45:
      v12 = v9;
LABEL_46:
      *(_QWORD *)(a1 + 40) = v12;
      LODWORD(v20) = 4;
      goto LABEL_56;
    }
    return (unsigned int)v15;
  }
  if ( *(_DWORD *)v10 != 1280131417 )
    return (unsigned int)v15;
  if ( v12 != v9 )
  {
    do
    {
      if ( *v12 == 32 )
        break;
      if ( *v12 == 9 )
        break;
      v12 = sub_226DF60(a1, v12);
      if ( v19 == v12 )
        break;
    }
    while ( *(char **)(a1 + 48) != v12 );
  }
  *(_QWORD *)(a1 + 40) = v12;
  LODWORD(v20) = 3;
LABEL_56:
  v21 = v8;
  v22 = v12 - v8;
  sub_2270C60((__int64 *)(a1 + 80), (unsigned __int64 *)(a1 + 176), (int *)&v20, v15, v6, v7);
  if ( v23 == v25 )
  {
    LODWORD(v15) = 1;
    return (unsigned int)v15;
  }
  operator delete(v23);
  return 1;
}
