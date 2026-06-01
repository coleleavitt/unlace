char __fastcall sub_A72280(_QWORD *a1, __int64 *a2, __int64 *a3, char a4)
{
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // edx
  int v12; // edx
  unsigned __int8 v13; // al
  __int64 v14; // rsi
  unsigned __int8 v15; // dl
  _DWORD *v16; // rsi
  unsigned int v17; // edx
  void *v18; // rdi
  char v20; // [rsp+1Ch] [rbp-5Ch]
  unsigned int v21; // [rsp+1Ch] [rbp-5Ch]
  char v22; // [rsp+1Ch] [rbp-5Ch]
  void *v23; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-50h]
  void *v25; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-40h]

  while ( 1 )
  {
    v8 = sub_A72040(a1, *a2);
    v9 = v8;
    if ( !v8 )
      return v8;
    v8 = sub_A72040(a1, *a3);
    v10 = v8;
    if ( !v8 )
      return v8;
    v11 = *(unsigned __int8 *)(v9 + 16);
    LOBYTE(v8) = v11 - 2;
    if ( (unsigned int)(v11 - 2) > 1 )
    {
      if ( (_BYTE)v11 != 5 )
        return v8;
      LODWORD(v8) = *(unsigned __int8 *)(v10 + 16);
      if ( (_BYTE)v8 != 5 )
      {
        if ( !a4 )
          return v8;
        if ( *(char *)(a1[290] + 1LL) >= 0 )
          return v8;
        LODWORD(v8) = v8 - 2;
        if ( (unsigned int)v8 > 1 )
          return v8;
      }
      goto LABEL_25;
    }
    v12 = *(unsigned __int8 *)(v10 + 16);
    LOBYTE(v8) = v12 - 2;
    if ( (unsigned int)(v12 - 2) > 1 )
    {
      if ( !a4 )
        return v8;
      v8 = a1[290];
      if ( *(char *)(v8 + 1) >= 0 )
        return v8;
      LOBYTE(v8) = (_BYTE)v12 != 5;
      if ( (_BYTE)v12 != 5 )
        return v8;
      goto LABEL_25;
    }
    v13 = *(_BYTE *)(v10 + 19);
    v14 = *(_QWORD *)(v10 + 40);
    if ( (v13 & 2) != 0 )
    {
      v26 = *(_DWORD *)(v14 + 8);
      if ( v26 > 0x40 )
        sub_2205510(&v25);
      else
        v25 = *(void **)v14;
LABEL_8:
      v15 = *(_BYTE *)(v9 + 19);
      v16 = *(_DWORD **)(v9 + 40);
      if ( (v15 & 2) == 0 )
        goto LABEL_31;
      goto LABEL_9;
    }
    v26 = 8 * ((v13 >> 2) & 0x1F);
    if ( (int)v26 > 64 )
    {
      sub_2205470(&v25, v14, 0);
      goto LABEL_8;
    }
    v15 = *(_BYTE *)(v9 + 19);
    v25 = (void *)v14;
    v16 = *(_DWORD **)(v9 + 40);
    if ( (v15 & 2) == 0 )
    {
LABEL_31:
      v17 = 8 * ((v15 >> 2) & 0x1F);
      v24 = v17;
      if ( (int)v17 > 64 )
      {
        sub_2205470(&v23, v16, 0);
        v17 = v24;
      }
      else
      {
        v23 = v16;
      }
      goto LABEL_33;
    }
LABEL_9:
    v17 = v16[2];
    v24 = v17;
    if ( v17 <= 0x40 )
    {
      v23 = *(void **)v16;
LABEL_11:
      if ( v25 == v23 )
      {
        if ( v26 > 0x40 && v25 )
          operator delete[](v25);
        goto LABEL_25;
      }
      LOBYTE(v8) = 1;
      if ( !a4 )
        goto LABEL_15;
      if ( *(char *)(a1[290] + 1LL) >= 0 )
      {
        LOBYTE(v8) = a4;
        goto LABEL_15;
      }
LABEL_37:
      LOBYTE(v8) = *(_BYTE *)(v10 + 16) != 5;
      if ( v17 <= 0x40 )
        goto LABEL_15;
      goto LABEL_38;
    }
    sub_2205510(&v23);
    v17 = v24;
LABEL_33:
    if ( v17 <= 0x40 )
      goto LABEL_11;
    v21 = v17;
    if ( (unsigned __int8)sub_2205D70(&v23, &v25) )
    {
      v18 = v23;
      LOBYTE(v8) = 0;
      if ( !v23 )
        goto LABEL_15;
LABEL_39:
      v22 = v8;
      operator delete[](v18);
      LOBYTE(v8) = v22;
      goto LABEL_15;
    }
    v17 = v21;
    LOBYTE(v8) = 1;
    if ( a4 )
    {
      if ( *(char *)(a1[290] + 1LL) < 0 )
        goto LABEL_37;
      LOBYTE(v8) = a4;
    }
LABEL_38:
    v18 = v23;
    if ( v23 )
      goto LABEL_39;
LABEL_15:
    if ( v26 > 0x40 && v25 )
    {
      v20 = v8;
      operator delete[](v25);
      LOBYTE(v8) = v20;
    }
    if ( (_BYTE)v8 )
      return v8;
LABEL_25:
    *a2 = *(_QWORD *)(v9 + 32);
    *a3 = *(_QWORD *)(v10 + 32);
  }
}
