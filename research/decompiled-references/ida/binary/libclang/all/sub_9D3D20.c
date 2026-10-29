__int64 __fastcall sub_9D3D20(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r13
  signed __int64 v7; // r12
  unsigned int v8; // ebp
  char v10; // r15
  void *v11; // rdx
  unsigned __int8 v12; // r13
  signed __int64 v13; // r15
  void *v14; // rdi
  signed __int64 v15; // r15
  void *v16; // rdx
  __int64 v17; // r12
  __int64 v18; // r13
  signed __int64 v19; // r15
  unsigned int v20; // esi
  unsigned __int64 v21; // rsi
  void *v22; // rdx
  __int64 v23; // r13
  __int64 v24; // r14
  signed __int64 v25; // [rsp+18h] [rbp-80h] BYREF
  void *v26; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-70h]
  void *v28; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-60h]
  void *v30; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-50h]
  void *v32; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v27 = v5;
  v26 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(_QWORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  v25 = v7;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v32, 0x3Fu, v27);
    v31 = v27;
    if ( v27 > 0x40 )
      sub_2585B30(&v30);
    else
      v30 = v26;
    sub_9A31A0((__int64)&v30, &v32, (__int64)&v26);
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
  }
  v8 = sub_93C410(a1, a2, (unsigned __int64 *)&v25, (__int64)&v26, 0x40u);
  if ( (_BYTE)v8 )
  {
    sub_92A4D0((__int64)&v32, 0x3Fu, v27);
    v10 = sub_922400((__int64)&v26, (__int64)&v32);
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
    if ( v10 != 3 )
    {
      if ( v7 >= 0 )
      {
        v31 = v27;
        if ( v27 > 0x40 )
        {
          sub_2585B30(&v30);
          v33 = v31;
          if ( v31 > 0x40 )
          {
            sub_2585B30(&v32);
            goto LABEL_15;
          }
          v11 = v30;
        }
        else
        {
          v11 = v26;
          v33 = v27;
          v30 = v26;
        }
        v32 = v11;
LABEL_15:
        v12 = (unsigned __int8)sub_9301F0((__int64)&v32);
        if ( v33 > 0x40 && v32 )
          operator delete[](v32);
        v13 = v7 << v12;
        if ( v31 <= 0x40 )
          goto LABEL_21;
        v14 = v30;
        if ( !v30 )
          goto LABEL_21;
        goto LABEL_20;
      }
      v13 = 0;
      if ( v7 == 0x8000000000000000LL )
        goto LABEL_21;
      v15 = -v7;
      v29 = v27;
      if ( v27 > 0x40 )
      {
        sub_2585B30(&v28);
        v31 = v29;
        if ( v29 > 0x40 )
        {
          sub_2585B30(&v30);
          if ( v31 > 0x40 )
          {
            sub_25877E0(&v32, &v30, 64);
            LOBYTE(v17) = (_BYTE)v32;
            if ( v33 > 0x40 )
            {
              v17 = *(_QWORD *)v32;
              operator delete[](v32);
            }
            goto LABEL_38;
          }
LABEL_34:
          sub_2587D60(&v32, &v30);
          LOBYTE(v17) = (_BYTE)v32;
          if ( v33 > 0x40 )
          {
            v18 = *(_QWORD *)v32;
            if ( v32 )
              operator delete[](v32);
            LOBYTE(v17) = v18;
          }
LABEL_38:
          if ( v31 > 0x40 && v30 )
            operator delete[](v30);
          v19 = v15 << v17;
          if ( v29 > 0x40 && v28 )
            operator delete[](v28);
          v13 = -v19;
          goto LABEL_21;
        }
        v16 = v28;
      }
      else
      {
        v16 = v26;
        v31 = v27;
        v28 = v26;
      }
      v30 = v16;
      goto LABEL_34;
    }
    v13 = 0;
    if ( v7 < 0 )
      goto LABEL_21;
    v20 = 64;
    if ( v7 )
    {
      _BitScanReverse64(&v21, v7);
      v20 = v21 ^ 0x3F;
    }
    sub_92A4D0((__int64)&v32, v20, v27);
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
    v22 = v32;
    v27 = v33;
    v26 = v32;
    v29 = v33;
    if ( v33 > 0x40 )
    {
      sub_2585B30(&v28);
      v31 = v29;
      if ( v29 > 0x40 )
      {
        sub_2585B30(&v30);
        if ( v31 > 0x40 )
        {
          sub_25877E0(&v32, &v30, 64);
          LOBYTE(v23) = (_BYTE)v32;
          if ( v33 > 0x40 )
          {
            v23 = *(_QWORD *)v32;
            operator delete[](v32);
          }
LABEL_56:
          if ( v31 > 0x40 && v30 )
            operator delete[](v30);
          v13 = v7 << v23;
          if ( v29 <= 0x40 )
            goto LABEL_21;
          v14 = v28;
          if ( !v28 )
            goto LABEL_21;
LABEL_20:
          operator delete[](v14);
LABEL_21:
          *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v13;
          goto LABEL_3;
        }
LABEL_52:
        sub_2587D60(&v32, &v30);
        LOBYTE(v23) = (_BYTE)v32;
        if ( v33 > 0x40 )
        {
          v24 = *(_QWORD *)v32;
          if ( v32 )
            operator delete[](v32);
          LOBYTE(v23) = v24;
        }
        goto LABEL_56;
      }
      v22 = v28;
    }
    else
    {
      v28 = v32;
      v31 = v33;
    }
    v30 = v22;
    goto LABEL_52;
  }
LABEL_3:
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  return v8;
}

