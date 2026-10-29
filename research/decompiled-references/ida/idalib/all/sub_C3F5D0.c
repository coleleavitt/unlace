__int64 __fastcall sub_C3F5D0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // r15d
  __int64 v6; // r14
  __int64 v7; // rbp
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // edx
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned __int64 v18; // rdi
  unsigned int v19; // ebx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // ebx
  unsigned int v23; // [rsp+8h] [rbp-D0h]
  unsigned int v24; // [rsp+18h] [rbp-C0h]
  void *v25; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-B0h]
  char v27; // [rsp+2Ch] [rbp-ACh]
  void *v28; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-A0h]
  char v30; // [rsp+3Ch] [rbp-9Ch]
  void *v31; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-90h]
  void *v33; // [rsp+50h] [rbp-88h] BYREF
  __int64 v34; // [rsp+58h] [rbp-80h]
  unsigned int v35; // [rsp+60h] [rbp-78h] BYREF
  char v36; // [rsp+64h] [rbp-74h]
  void *v37; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v38; // [rsp+70h] [rbp-68h]
  char v39; // [rsp+74h] [rbp-64h]

  v3 = 0;
  v6 = sub_C11780(*a2 & 0xFFFFFFFFFFFFFFFCLL, (__int64)a2);
  v7 = sub_C115D0(v6, (__int64)a2);
  v8 = (*(_DWORD *)(v7 + 40) & 0x3FFFFFFF) - 1 - ((*(_DWORD *)(v7 + 40) >> 30) & 1);
  v9 = sub_A63CE0(a1);
  v23 = sub_A97D20((__int64)a1, *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v8 >= *(_DWORD *)(v6 + 16) )
    return v3;
  v27 = 0;
  v26 = 1;
  v25 = nullptr;
  v12 = *(_QWORD *)(v6 + 8 * (v8 + (unsigned __int64)((*(_BYTE *)(v6 + 2) & 8) != 0)) + 40);
  LOWORD(v33) = 0;
  v34 = 0;
  v35 = 0;
  v36 &= ~1u;
  v3 = sub_C3F220(v12, (__int64)&v33, (__int64)a1, 2, 0, v10);
  if ( !(_BYTE)v3 )
    goto LABEL_21;
  if ( v38 <= 0x40 )
  {
    v13 = (unsigned __int64)v37;
    v26 = v38;
    v25 = v37;
    v27 = v39;
    if ( !v39 )
    {
      v14 = 1LL << ((unsigned __int8)v38 - 1);
LABEL_20:
      if ( (v13 & v14) != 0 )
      {
LABEL_21:
        v3 = 0;
        if ( v35 > 1 )
          sub_A4F8E0((int *)&v35);
        goto LABEL_23;
      }
      goto LABEL_46;
    }
  }
  else
  {
    sub_22056A0(&v25, &v37);
    v27 = v39;
    if ( !v39 )
    {
      v13 = (unsigned __int64)v25;
      v14 = 1LL << ((unsigned __int8)v26 - 1);
      if ( v26 > 0x40 )
      {
        if ( (v14 & *((_QWORD *)v25 + ((v26 - 1) >> 6))) != 0 )
          goto LABEL_21;
        goto LABEL_8;
      }
      goto LABEL_20;
    }
    if ( v26 > 0x40 )
    {
LABEL_8:
      v24 = v26;
      v15 = v24 - sub_2206780(&v25);
      goto LABEL_9;
    }
  }
  v13 = (unsigned __int64)v25;
LABEL_46:
  if ( !v13 )
    goto LABEL_10;
  _BitScanReverse64(&v13, v13);
  v15 = 64 - (v13 ^ 0x3F);
LABEL_9:
  if ( v23 < v15 )
    goto LABEL_21;
LABEL_10:
  sub_2206CD0(&v31, &v25, v23);
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  v25 = v31;
  v26 = v32;
  if ( v35 > 1 )
    sub_A4F8E0((int *)&v35);
  v17 = *(_DWORD *)(v7 + 44);
  if ( (v17 & 0x80000000) == 0 )
  {
    if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
      operator delete[](*(void **)a3);
    *(_QWORD *)a3 = v25;
    *(_DWORD *)(a3 + 8) = v26;
    return v3;
  }
  v29 = 1;
  v30 = 0;
  v28 = nullptr;
  v18 = *(_QWORD *)(v6
                  + 8 * ((v17 & 0x3FFFFFFF) - 1 - ((v17 >> 30) & 1) + (unsigned __int64)((*(_BYTE *)(v6 + 2) & 8) != 0))
                  + 40);
  v36 &= ~1u;
  LOWORD(v33) = 0;
  v34 = 0;
  v35 = 0;
  v3 = sub_C3F220(v18, (__int64)&v33, (__int64)a1, 2, 0, v16);
  if ( !(_BYTE)v3 )
    goto LABEL_51;
  if ( v29 <= 0x40 && v38 <= 0x40 )
  {
    v20 = (unsigned __int64)v37;
    v29 = v38;
    v28 = v37;
    v30 = v39;
    if ( !v39 )
    {
      v21 = 1LL << ((unsigned __int8)v38 - 1);
LABEL_50:
      if ( (v20 & v21) != 0 )
        goto LABEL_51;
      goto LABEL_64;
    }
LABEL_63:
    v20 = (unsigned __int64)v28;
LABEL_64:
    if ( !v20 )
    {
LABEL_34:
      sub_2206CD0(&v31, &v28, v23);
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
      v28 = v31;
      v29 = v32;
      if ( v35 > 1 )
        sub_A4F8E0((int *)&v35);
      sub_220B260(&v33, &v25, &v28, &v31);
      if ( !(_BYTE)v31 )
      {
        if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
          operator delete[](*(void **)a3);
        *(_QWORD *)a3 = v33;
        *(_DWORD *)(a3 + 8) = v34;
        goto LABEL_53;
      }
      if ( (unsigned int)v34 > 0x40 )
      {
        v3 = 0;
        if ( v33 )
          operator delete[](v33);
        goto LABEL_53;
      }
      goto LABEL_52;
    }
    _BitScanReverse64(&v20, v20);
    v22 = 64 - (v20 ^ 0x3F);
    goto LABEL_33;
  }
  sub_22056A0(&v28, &v37);
  v19 = v29;
  v30 = v39;
  if ( !v39 )
  {
    v20 = (unsigned __int64)v28;
    v21 = 1LL << ((unsigned __int8)v29 - 1);
    if ( v29 > 0x40 )
    {
      if ( (v21 & *((_QWORD *)v28 + ((v29 - 1) >> 6))) != 0 )
        goto LABEL_51;
      goto LABEL_32;
    }
    goto LABEL_50;
  }
  if ( v29 <= 0x40 )
    goto LABEL_63;
LABEL_32:
  v22 = v19 - sub_2206780(&v28);
LABEL_33:
  if ( v23 >= v22 )
    goto LABEL_34;
LABEL_51:
  if ( v35 > 1 )
  {
    v3 = 0;
    sub_A4F8E0((int *)&v35);
    goto LABEL_53;
  }
LABEL_52:
  v3 = 0;
LABEL_53:
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
LABEL_23:
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  return v3;
}
