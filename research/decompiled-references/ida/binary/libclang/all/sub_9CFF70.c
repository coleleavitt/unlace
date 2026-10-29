__int64 __fastcall sub_9CFF70(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int8 **v10; // r13
  unsigned int v11; // r13d
  char v12; // r13
  __int64 v13; // r15
  void *v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // r12
  void *v18; // rdi
  void *v19; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-70h]
  void *v21; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v22; // [rsp+28h] [rbp-60h]
  void *v23; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-50h]
  char v25; // [rsp+3Ch] [rbp-4Ch]
  void *v26; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v20 = v5;
  v19 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(_QWORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v26, 0x3Fu, v20);
    v24 = v20;
    if ( v20 > 0x40 )
      sub_2585B30(&v23);
    else
      v23 = v19;
    sub_9A31A0((__int64)&v23, &v26, (__int64)&v19);
    if ( v24 > 0x40 && v23 )
      operator delete[](v23);
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
  }
  sub_92A4D0((__int64)&v26, 0x40u, v20);
  if ( (int)sub_2586820(&v19, &v26) < 0 )
  {
    if ( v27 <= 0x40 || (v18 = v26) == nullptr )
    {
LABEL_10:
      sub_92A4D0((__int64)&v26, 0x3Fu, v20);
      v12 = sub_922400((__int64)&v19, (__int64)&v26);
      if ( v27 > 0x40 && v26 )
        operator delete[](v26);
      v13 = -1;
      if ( v12 == 3 )
        goto LABEL_25;
      v22 = v20;
      if ( v20 > 0x40 )
      {
        sub_2585B30(&v21);
        v24 = v22;
        if ( v22 > 0x40 )
        {
          sub_2585B30(&v23);
          if ( v24 > 0x40 )
          {
            sub_25877E0(&v26, &v23, 64);
            LOBYTE(v15) = (_BYTE)v26;
            if ( v27 > 0x40 )
            {
              v15 = *(_QWORD *)v26;
              operator delete[](v26);
              if ( v24 > 0x40 )
              {
LABEL_22:
                if ( v23 )
                  operator delete[](v23);
              }
LABEL_24:
              v13 = v7 >> v15;
              if ( v22 > 0x40 && v21 )
                operator delete[](v21);
LABEL_25:
              v11 = 1;
              *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v13;
              goto LABEL_26;
            }
LABEL_21:
            if ( v24 > 0x40 )
              goto LABEL_22;
            goto LABEL_24;
          }
LABEL_17:
          sub_2587D60(&v26, &v23);
          LOBYTE(v15) = (_BYTE)v26;
          if ( v27 > 0x40 )
          {
            v16 = *(_QWORD *)v26;
            if ( v26 )
              operator delete[](v26);
            LOBYTE(v15) = v16;
          }
          goto LABEL_21;
        }
        v14 = v21;
      }
      else
      {
        v14 = v19;
        v24 = v20;
        v21 = v19;
      }
      v23 = v14;
      goto LABEL_17;
    }
LABEL_32:
    operator delete[](v18);
    goto LABEL_10;
  }
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
  v8 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v26, &v19);
  v25 = 1;
  v24 = v27;
  v23 = v26;
  v9 = *(_QWORD *)(v8 + 8);
  v26 = (void *)sub_A2E240(a1, v8, 2220, 0);
  v10 = (unsigned __int8 **)v26;
  if ( v26 )
  {
    sub_9C19A0((unsigned __int8 ***)&v26, (__int64)&v23);
    sub_9B5660(v10, v9);
    sub_9B58B0(v10, 64);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v11 )
  {
    if ( v24 <= 0x40 )
      goto LABEL_10;
    v18 = v23;
    if ( !v23 )
      goto LABEL_10;
    goto LABEL_32;
  }
  if ( v24 > 0x40 && v23 )
    operator delete[](v23);
LABEL_26:
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  return v11;
}

