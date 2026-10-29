__int64 __fastcall sub_2052D20(__int64 *a1, int *a2, __int64 *a3)
{
  int v3; // r12d
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r13
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // r12d
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int i; // r14d
  __int64 v15; // r15
  int v16; // eax
  unsigned int v17; // r14d
  unsigned __int8 v18; // al
  char v19; // al
  char v20; // al
  __int64 v21; // [rsp+10h] [rbp-B8h]
  unsigned __int8 v22; // [rsp+10h] [rbp-B8h]
  __int64 v24; // [rsp+20h] [rbp-A8h]
  __int64 v25; // [rsp+20h] [rbp-A8h]
  __int64 v26; // [rsp+20h] [rbp-A8h]
  int v27; // [rsp+2Ch] [rbp-9Ch]
  int v28; // [rsp+2Ch] [rbp-9Ch]
  int v29; // [rsp+2Ch] [rbp-9Ch]
  _QWORD v30[4]; // [rsp+30h] [rbp-98h] BYREF
  int v31; // [rsp+50h] [rbp-78h] BYREF
  char v32; // [rsp+54h] [rbp-74h]
  _QWORD v33[3]; // [rsp+58h] [rbp-70h] BYREF
  __int64 v34; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v35[10]; // [rsp+78h] [rbp-50h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return 0;
  }
  v21 = *a1;
  v5 = sub_21F90F0();
  v7 = sub_21F90D0(a1, a2, v6);
  if ( v5 == v7 )
    sub_21FFCB0(&v34, v5, 1);
  else
    sub_21FAF40(&v34, v5, 1);
  v32 = 1;
  v31 = -1;
  if ( v34 == v7 )
    sub_21FFED0(v33, &v34);
  else
    sub_21F97D0(v33, &v34);
  sub_9955A0(&v34);
  if ( v5 == v7 )
    sub_21FFCB0(v30, v7, 2);
  else
    sub_21FAF40(v30, v5, 2);
  LODWORD(v34) = -2;
  BYTE4(v34) = 0;
  if ( v7 == v30[0] )
    sub_21FFED0(v35, v30);
  else
    sub_21F97D0(v35, v30);
  sub_9955A0(v30);
  v8 = sub_2205190(a2 + 2);
  v9 = *a2;
  v10 = 1;
  v11 = v3 - 1;
  v12 = 0xBF58476D1CE4E5B9LL * (((unsigned __int64)((unsigned int)(*((_BYTE *)a2 + 4) == 0) + 37 * *a2 - 1) << 32) | v8);
  v13 = 0;
  for ( i = v11 & ((v12 >> 31) ^ v12); ; i = v11 & v17 )
  {
    v15 = v21 + 40LL * i;
    v16 = *(_DWORD *)v15;
    if ( *(_DWORD *)v15 == v9 && *((_BYTE *)a2 + 4) == *(_BYTE *)(v15 + 4) )
    {
      v27 = v10;
      v24 = v13;
      v18 = sub_2051060((__int64 *)a2 + 1, (_QWORD *)(v15 + 8), v13);
      if ( v18 )
      {
        *a3 = v15;
        goto LABEL_19;
      }
      v16 = *(_DWORD *)v15;
      v13 = v24;
      v10 = v27;
    }
    if ( v31 == v16 )
      break;
LABEL_14:
    if ( (_DWORD)v34 == v16 )
    {
      v29 = v10;
      v26 = v13;
      v20 = sub_2050E10(v15, (__int64)&v34, v13);
      v13 = v26;
      v10 = v29;
      if ( !v26 )
      {
        if ( v20 )
          v13 = v21 + 40LL * i;
      }
    }
    v17 = v10 + i;
    v9 = *a2;
    ++v10;
  }
  v28 = v10;
  v25 = v13;
  v19 = sub_2050E10(v15, (__int64)&v31, v13);
  v13 = v25;
  v10 = v28;
  if ( !v19 )
  {
    v16 = *(_DWORD *)v15;
    goto LABEL_14;
  }
  if ( !v25 )
    v13 = v21 + 40LL * i;
  *a3 = v13;
  v18 = 0;
LABEL_19:
  v22 = v18;
  sub_9955A0(v35);
  sub_9955A0(v33);
  return v22;
}
