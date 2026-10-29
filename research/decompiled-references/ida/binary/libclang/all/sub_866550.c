__int64 __fastcall sub_866550(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rbp
  unsigned int v8; // r14d
  __int64 v9; // rax
  unsigned int v10; // r15d
  unsigned __int64 v12; // rdi
  unsigned int v13; // eax
  void *v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  unsigned __int64 v19; // rdi
  unsigned int v20; // eax
  void *v21; // rdi
  unsigned int v22; // ebp
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // [rsp+8h] [rbp-D0h]
  unsigned int v28; // [rsp+18h] [rbp-C0h]
  void *v29; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-B0h]
  char v31; // [rsp+2Ch] [rbp-ACh]
  void *v32; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-A0h]
  char v34; // [rsp+3Ch] [rbp-9Ch]
  void *v35; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-90h]
  void *v37; // [rsp+50h] [rbp-88h] BYREF
  __int64 v38; // [rsp+58h] [rbp-80h]
  unsigned int v39; // [rsp+60h] [rbp-78h] BYREF
  char v40; // [rsp+64h] [rbp-74h]
  void *v41; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v42; // [rsp+70h] [rbp-68h]
  char v43; // [rsp+74h] [rbp-64h]

  v6 = sub_8216C0(a2 & 0xFFFFFFFFFFFFFFFCLL);
  v7 = sub_821520(v6);
  v8 = (*(_DWORD *)(v7 + 36) & 0x3FFFFFFF) - 1 - ((*(_DWORD *)(v7 + 36) >> 30) & 1);
  v9 = sub_6CABB0(a1);
  v27 = sub_6F6DE0((__int64)a1, *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v8 >= *(_DWORD *)(v6 + 16) )
    return 0;
  v30 = 1;
  v29 = nullptr;
  v31 = 0;
  v12 = *(_QWORD *)(v6 + 8LL * v8 + 8LL * ((*(_BYTE *)(v6 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(v6 + 3));
  v40 &= ~1u;
  LOWORD(v37) = 0;
  v38 = 0;
  v39 = 0;
  v10 = sub_865F40(v12, (__int64)&v37, (__int64)a1, 2, 0);
  if ( !(_BYTE)v10 )
  {
    if ( v39 > 1 )
    {
      sub_69F740((__int64)&v39);
      v13 = v30;
      goto LABEL_7;
    }
LABEL_6:
    v13 = v30;
LABEL_7:
    if ( v13 <= 0x40 )
      return v10;
    v14 = v29;
    goto LABEL_9;
  }
  if ( v42 <= 0x40 )
  {
    v16 = (unsigned __int64)v41;
    v30 = v42;
    v29 = v41;
    v31 = v43;
    if ( !v43 )
    {
      v15 = 1LL << ((unsigned __int8)v42 - 1);
      goto LABEL_49;
    }
LABEL_21:
    if ( !v29 )
      goto LABEL_25;
    _BitScanReverse64(&v17, (unsigned __int64)v29);
    if ( v27 >= (int)v17 + 1 )
      goto LABEL_25;
LABEL_23:
    if ( v39 <= 1 )
      return 0;
    goto LABEL_24;
  }
  sub_2585EA0(&v29, &v41);
  v31 = v43;
  if ( !v43 )
  {
    v14 = v29;
    v15 = 1LL << ((unsigned __int8)v30 - 1);
    v16 = (unsigned __int64)v29;
    if ( v30 > 0x40 )
    {
      if ( (*((_QWORD *)v29 + ((v30 - 1) >> 6)) & v15) != 0 )
      {
        if ( v39 <= 1 )
          goto LABEL_18;
        goto LABEL_24;
      }
      goto LABEL_15;
    }
LABEL_49:
    if ( (v15 & v16) != 0 )
      goto LABEL_23;
    goto LABEL_21;
  }
  if ( v30 <= 0x40 )
    goto LABEL_21;
LABEL_15:
  v28 = v30;
  if ( v27 < v28 - (unsigned int)sub_2587400(&v29) )
  {
    if ( v39 <= 1 )
    {
      v14 = v29;
LABEL_18:
      v10 = 0;
LABEL_9:
      if ( v14 )
        operator delete[](v14);
      return v10;
    }
LABEL_24:
    v10 = 0;
    sub_69F740((__int64)&v39);
    v13 = v30;
    goto LABEL_7;
  }
LABEL_25:
  sub_2587D60(&v35, &v29);
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  v29 = v35;
  v30 = v36;
  if ( v39 > 1 )
    sub_69F740((__int64)&v39);
  v18 = *(_DWORD *)(v7 + 40);
  if ( (v18 & 0x80000000) != 0 )
  {
    v33 = 1;
    v34 = 0;
    v32 = nullptr;
    v19 = *(_QWORD *)(v6
                    + 8LL * ((*(_BYTE *)(v6 + 2) & 8) != 0)
                    + 8
                    + 8LL * ((v18 & 0x3FFFFFFF) - 1 - ((v18 >> 30) & 1))
                    + *(unsigned __int8 *)(v6 + 3));
    v40 &= ~1u;
    LOWORD(v37) = 0;
    v38 = 0;
    v39 = 0;
    v10 = sub_865F40(v19, (__int64)&v37, (__int64)a1, 2, 0);
    if ( !(_BYTE)v10 )
    {
      if ( v39 > 1 )
      {
        sub_69F740((__int64)&v39);
        v20 = v33;
        goto LABEL_36;
      }
LABEL_35:
      v20 = v33;
LABEL_36:
      if ( v20 <= 0x40 )
        goto LABEL_6;
      v21 = v32;
LABEL_38:
      if ( v21 )
        operator delete[](v21);
      goto LABEL_6;
    }
    if ( v33 <= 0x40 && v42 <= 0x40 )
    {
      v24 = (unsigned __int64)v41;
      v33 = v42;
      v32 = v41;
      v34 = v43;
      if ( !v43 )
      {
        v23 = 1LL << ((unsigned __int8)v42 - 1);
        goto LABEL_62;
      }
    }
    else
    {
      sub_2585EA0(&v32, &v41);
      v22 = v33;
      v34 = v43;
      if ( !v43 )
      {
        v21 = v32;
        v23 = 1LL << ((unsigned __int8)v33 - 1);
        v24 = (unsigned __int64)v32;
        if ( v33 > 0x40 )
        {
          if ( (*((_QWORD *)v32 + ((v33 - 1) >> 6)) & v23) != 0 )
          {
            if ( v39 <= 1 )
            {
LABEL_46:
              v10 = 0;
              goto LABEL_38;
            }
            goto LABEL_66;
          }
          goto LABEL_57;
        }
LABEL_62:
        if ( (v23 & v24) != 0 )
          goto LABEL_65;
        goto LABEL_63;
      }
      if ( v33 > 0x40 )
      {
LABEL_57:
        if ( v27 < v22 - (unsigned int)sub_2587400(&v32) )
        {
          if ( v39 <= 1 )
          {
            v21 = v32;
            goto LABEL_46;
          }
LABEL_66:
          v10 = 0;
          sub_69F740((__int64)&v39);
          v20 = v33;
          goto LABEL_36;
        }
LABEL_67:
        sub_2587D60(&v35, &v32);
        if ( v33 > 0x40 && v32 )
          operator delete[](v32);
        v32 = v35;
        v33 = v36;
        if ( v39 > 1 )
          sub_69F740((__int64)&v39);
        sub_258F590(&v37, &v29, &v32, &v35);
        if ( (_BYTE)v35 )
        {
          if ( (unsigned int)v38 > 0x40 && v37 )
            operator delete[](v37);
          v20 = v33;
          v10 = 0;
          goto LABEL_36;
        }
        if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
          operator delete[](*(void **)a4);
        *(_QWORD *)a4 = v37;
        v26 = v38;
        LODWORD(v38) = 0;
        *(_DWORD *)(a4 + 8) = v26;
        goto LABEL_35;
      }
    }
LABEL_63:
    if ( !v32 )
      goto LABEL_67;
    _BitScanReverse64(&v25, (unsigned __int64)v32);
    if ( v27 >= (int)v25 + 1 )
      goto LABEL_67;
LABEL_65:
    v10 = 0;
    if ( v39 <= 1 )
      goto LABEL_6;
    goto LABEL_66;
  }
  if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
    operator delete[](*(void **)a4);
  *(_QWORD *)a4 = v29;
  *(_DWORD *)(a4 + 8) = v30;
  return v10;
}

