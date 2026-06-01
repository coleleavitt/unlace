void __fastcall sub_15928D0(__int64 a1, __int64 a2, double a3)
{
  char ***v3; // rbx
  char v4; // r12
  int v5; // edx
  int v6; // edi
  char v7; // al
  char v8; // r15
  char v9; // r13
  int v10; // eax
  int v11; // edi
  int v12; // ecx
  int v13; // r8d
  bool v14; // al
  char **v15; // rax
  char ***v16; // rdi
  char ***v17; // rdx
  char v18; // bp
  char v19; // cl
  unsigned int v20; // eax
  unsigned int v21; // [rsp+4h] [rbp-84h]
  unsigned __int64 v22; // [rsp+10h] [rbp-78h]
  int v23; // [rsp+18h] [rbp-70h]
  char v24; // [rsp+1Ch] [rbp-6Ch]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v26; // [rsp+28h] [rbp-60h]
  _BYTE v27[88]; // [rsp+30h] [rbp-58h] BYREF

  v3 = (char ***)(a1 + 16);
  v4 = *(_BYTE *)(a1 + 11);
  v22 = *(_QWORD *)a1;
  v5 = *(_DWORD *)(a1 + 8);
  v24 = *(_BYTE *)(a1 + 12);
  v6 = *(_DWORD *)(a1 + 24);
  ptr = v27;
  v23 = v5;
  v26 = 0x200000000LL;
  if ( v6 )
  {
    a2 = (__int64)v3;
    sub_1591FE0((char ***)&ptr, v3);
    v4 = HIBYTE(v23);
  }
  while ( 1 )
  {
    v17 = v3 - 2;
    v18 = *((_BYTE *)v3 - 69);
    if ( v4 )
      break;
    v7 = v24;
    if ( !v18 )
      goto LABEL_20;
    if ( !v24 )
      goto LABEL_19;
LABEL_4:
    v8 = BYTE2(v23);
    v9 = *((_BYTE *)v3 - 70);
    if ( BYTE2(v23) )
    {
      if ( v9 )
        goto LABEL_30;
      if ( *((_BYTE *)v3 - 72) )
        goto LABEL_15;
      if ( *((_BYTE *)v3 - 71) )
      {
        v13 = 2;
        v11 = 4;
LABEL_13:
        v14 = v13 < v11;
        goto LABEL_14;
      }
      v10 = 4;
      v11 = 4;
LABEL_11:
      v12 = *((_DWORD *)v3 - 14);
      a2 = v12 != 0;
      v13 = v12 != 0;
      goto LABEL_12;
    }
    if ( (_BYTE)v23 )
    {
      v11 = 3;
      v10 = 3;
    }
    else if ( BYTE1(v23) )
    {
      v11 = 2;
      v10 = 2;
    }
    else
    {
      v10 = v26 != 0;
      v11 = v10;
    }
    if ( v9 )
      goto LABEL_23;
    if ( *((_BYTE *)v3 - 72) )
    {
      v13 = 3;
      a2 = 3;
    }
    else
    {
      if ( !*((_BYTE *)v3 - 71) )
        goto LABEL_11;
      v13 = 2;
      a2 = 2;
    }
LABEL_12:
    if ( (_DWORD)a2 != v10 )
      goto LABEL_13;
LABEL_30:
    v21 = sub_EEB7E0((unsigned __int64)*(v3 - 10), a2, a3);
    v20 = sub_EEB7E0(v22, a2, a3);
    v17 = v3 - 2;
    v14 = v20 < v21;
LABEL_14:
    if ( !v14 )
      goto LABEL_23;
LABEL_15:
    v15 = *(v3 - 10);
    *((_BYTE *)v3 - 5) = v18;
    v16 = v3;
    *((_BYTE *)v3 - 6) = v9;
    *(v3 - 2) = v15;
    *((_BYTE *)v3 - 8) = *((_BYTE *)v3 - 72);
    *((_BYTE *)v3 - 7) = *((_BYTE *)v3 - 71);
    *((_BYTE *)v3 - 4) = *((_BYTE *)v3 - 68);
    v3 -= 8;
    a2 = (__int64)v3;
    sub_1591FE0(v16, v3);
    v4 = HIBYTE(v23);
  }
  v7 = v4;
  if ( v18 )
    goto LABEL_4;
LABEL_20:
  v19 = *((_BYTE *)v3 - 68);
  if ( v7 == v19 )
    goto LABEL_4;
  if ( v19 )
  {
LABEL_19:
    v9 = *((_BYTE *)v3 - 70);
    goto LABEL_15;
  }
  v8 = BYTE2(v23);
LABEL_23:
  *((_BYTE *)v17 + 10) = v8;
  *((_BYTE *)v17 + 11) = v4;
  *v17 = (char **)v22;
  *((_WORD *)v17 + 4) = v23;
  *((_BYTE *)v17 + 12) = v24;
  sub_1591FE0(v3, (char ***)&ptr);
  if ( ptr != v27 )
    free(ptr);
}
