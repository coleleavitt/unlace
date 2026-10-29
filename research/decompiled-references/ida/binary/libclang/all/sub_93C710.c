__int64 __fastcall sub_93C710(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r14
  signed __int64 v8; // rbp
  unsigned int v9; // r12d
  char v11; // r13
  void *v12; // rdx
  unsigned __int8 v13; // r13
  signed __int64 v14; // r13
  void *v15; // rdi
  signed __int64 v16; // r13
  void *v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // r14
  signed __int64 v20; // r13
  unsigned int v21; // esi
  unsigned __int64 v22; // rsi
  void *v23; // rdx
  __int64 v24; // r13
  __int64 v25; // r14
  signed __int64 v26; // [rsp+18h] [rbp-80h] BYREF
  void *v27; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-70h]
  void *v29; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-60h]
  void *v31; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v32; // [rsp+48h] [rbp-50h]
  void *v33; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-40h]

  a1[100] = a2;
  v3 = a1[71];
  v4 = a1[99];
  v5 = sub_A1A5A0(v3, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v28 = v6;
  v27 = *(void **)v5;
  sub_A1A5E0(v3, 16);
  v7 = a1[71];
  v8 = *(_QWORD *)sub_A1A5A0(v7, 8);
  sub_A1A5E0(v7, 8);
  v26 = v8;
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 48) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v33, 0x3Fu, v28);
    v32 = v28;
    if ( v28 > 0x40 )
      sub_2585B30(&v31);
    else
      v31 = v27;
    sub_8CC450((__int64)&v31, &v33, (__int64)&v27);
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
  }
  v9 = sub_93C410((__int64)(a1 + 48), v4, (unsigned __int64 *)&v26, (__int64)&v27, 0x40u);
  if ( (_BYTE)v9 )
  {
    sub_92A4D0((__int64)&v33, 0x3Fu, v28);
    v11 = sub_922400((__int64)&v27, (__int64)&v33);
    if ( v34 > 0x40 && v33 )
      operator delete[](v33);
    if ( v11 != 3 )
    {
      if ( v8 >= 0 )
      {
        v32 = v28;
        if ( v28 > 0x40 )
        {
          sub_2585B30(&v31);
          v34 = v32;
          if ( v32 > 0x40 )
          {
            sub_2585B30(&v33);
            goto LABEL_15;
          }
          v12 = v31;
        }
        else
        {
          v12 = v27;
          v34 = v28;
          v31 = v27;
        }
        v33 = v12;
LABEL_15:
        v13 = (unsigned __int8)sub_9301F0((__int64)&v33);
        if ( v34 > 0x40 && v33 )
          operator delete[](v33);
        v14 = v8 << v13;
        if ( v32 <= 0x40 )
          goto LABEL_21;
        v15 = v31;
        if ( !v31 )
          goto LABEL_21;
        goto LABEL_20;
      }
      v14 = 0;
      if ( v8 == 0x8000000000000000LL )
        goto LABEL_21;
      v16 = -v8;
      v30 = v28;
      if ( v28 > 0x40 )
      {
        sub_2585B30(&v29);
        v32 = v30;
        if ( v30 > 0x40 )
        {
          sub_2585B30(&v31);
          if ( v32 > 0x40 )
          {
            sub_25877E0(&v33, &v31, 64);
            LOBYTE(v18) = (_BYTE)v33;
            if ( v34 > 0x40 )
            {
              v18 = *(_QWORD *)v33;
              operator delete[](v33);
            }
            goto LABEL_38;
          }
LABEL_34:
          sub_2587D60(&v33, &v31);
          LOBYTE(v18) = (_BYTE)v33;
          if ( v34 > 0x40 )
          {
            v19 = *(_QWORD *)v33;
            if ( v33 )
              operator delete[](v33);
            LOBYTE(v18) = v19;
          }
LABEL_38:
          if ( v32 > 0x40 && v31 )
            operator delete[](v31);
          v20 = v16 << v18;
          if ( v30 > 0x40 && v29 )
            operator delete[](v29);
          v14 = -v20;
          goto LABEL_21;
        }
        v17 = v29;
      }
      else
      {
        v17 = v27;
        v32 = v28;
        v29 = v27;
      }
      v31 = v17;
      goto LABEL_34;
    }
    v14 = 0;
    if ( v8 < 0 )
      goto LABEL_21;
    v21 = 64;
    if ( v8 )
    {
      _BitScanReverse64(&v22, v8);
      v21 = v22 ^ 0x3F;
    }
    sub_92A4D0((__int64)&v33, v21, v28);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
    v23 = v33;
    v28 = v34;
    v27 = v33;
    v30 = v34;
    if ( v34 > 0x40 )
    {
      sub_2585B30(&v29);
      v32 = v30;
      if ( v30 > 0x40 )
      {
        sub_2585B30(&v31);
        if ( v32 > 0x40 )
        {
          sub_25877E0(&v33, &v31, 64);
          LOBYTE(v24) = (_BYTE)v33;
          if ( v34 > 0x40 )
          {
            v24 = *(_QWORD *)v33;
            operator delete[](v33);
          }
LABEL_56:
          if ( v32 > 0x40 && v31 )
            operator delete[](v31);
          v14 = v8 << v24;
          if ( v30 <= 0x40 )
            goto LABEL_21;
          v15 = v29;
          if ( !v29 )
            goto LABEL_21;
LABEL_20:
          operator delete[](v15);
LABEL_21:
          *(_QWORD *)sub_A1A4E0(a1[71], 8) = v14;
          goto LABEL_3;
        }
LABEL_52:
        sub_2587D60(&v33, &v31);
        LOBYTE(v24) = (_BYTE)v33;
        if ( v34 > 0x40 )
        {
          v25 = *(_QWORD *)v33;
          if ( v33 )
            operator delete[](v33);
          LOBYTE(v24) = v25;
        }
        goto LABEL_56;
      }
      v23 = v29;
    }
    else
    {
      v29 = v33;
      v32 = v34;
    }
    v31 = v23;
    goto LABEL_52;
  }
LABEL_3:
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  return v9;
}

