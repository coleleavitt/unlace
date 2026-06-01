__int64 __fastcall sub_9D1C50(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rbp
  char v7; // r14
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int8 **v10; // r13
  unsigned int v11; // r13d
  char v12; // r15
  int v13; // r13d
  unsigned int v14; // eax
  void *v15; // rdx
  unsigned int v16; // eax
  void *v17; // rdi
  char v18; // bp
  void *v20; // rdi
  void *v21; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-70h]
  void *v23; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-60h]
  void *v25; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-50h]
  char v27; // [rsp+3Ch] [rbp-4Ch]
  void *v28; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v22 = v5;
  v21 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(_BYTE *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v28, 7u, v22);
    v26 = v22;
    if ( v22 > 0x40 )
      sub_2585B30(&v25);
    else
      v25 = v21;
    sub_9A31A0((__int64)&v25, &v28, (__int64)&v21);
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
  }
  sub_92A4D0((__int64)&v28, 8u, v22);
  if ( (int)sub_2586820(&v21, &v28) < 0 )
  {
    if ( v29 <= 0x40 || (v20 = v28) == nullptr )
    {
LABEL_10:
      sub_92A4D0((__int64)&v28, 7u, v22);
      v12 = sub_922400((__int64)&v21, (__int64)&v28);
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
      LOBYTE(v13) = -1;
      if ( v12 == 3 )
        goto LABEL_27;
      v14 = v22;
      v24 = v22;
      if ( v22 > 0x40 )
      {
        sub_2585B30(&v23);
        v14 = v24;
        v26 = v24;
        if ( v24 > 0x40 )
        {
          sub_2585B30(&v25);
          v14 = v26;
LABEL_17:
          if ( v14 <= 8 )
          {
            sub_2587D60(&v28, &v25);
            v16 = v29;
            v17 = v28;
            if ( v29 > 0x40 )
            {
              v18 = *(_BYTE *)v28;
              if ( !v28 )
              {
LABEL_21:
                if ( v26 > 0x40 && v25 )
                  operator delete[](v25);
                v13 = v7 >> v18;
                if ( v24 > 0x40 && v23 )
                  operator delete[](v23);
LABEL_27:
                *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v13;
                v11 = 1;
                goto LABEL_28;
              }
LABEL_20:
              operator delete[](v17);
              goto LABEL_21;
            }
          }
          else
          {
            sub_25877E0(&v28, &v25, 8);
            v16 = v29;
            v17 = v28;
            if ( v29 > 0x40 )
            {
              v18 = *(_BYTE *)v28;
              goto LABEL_20;
            }
          }
          v18 = 0;
          if ( v16 )
            v18 = (__int64)((_QWORD)v17 << (64 - (unsigned __int8)v16)) >> (64 - (unsigned __int8)v16);
          goto LABEL_21;
        }
        v15 = v23;
      }
      else
      {
        v15 = v21;
        v26 = v22;
        v23 = v21;
      }
      v25 = v15;
      goto LABEL_17;
    }
LABEL_34:
    operator delete[](v20);
    goto LABEL_10;
  }
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  v8 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v28, &v21);
  v27 = 1;
  v26 = v29;
  v25 = v28;
  v9 = *(_QWORD *)(v8 + 8);
  v28 = (void *)sub_A2E240(a1, v8, 2220, 0);
  v10 = (unsigned __int8 **)v28;
  if ( v28 )
  {
    sub_9C19A0((unsigned __int8 ***)&v28, (__int64)&v25);
    sub_9B5660(v10, v9);
    sub_9B58B0(v10, 8);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v11 )
  {
    if ( v26 <= 0x40 )
      goto LABEL_10;
    v20 = v25;
    if ( !v25 )
      goto LABEL_10;
    goto LABEL_34;
  }
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
LABEL_28:
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  return v11;
}

