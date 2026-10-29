__int64 __fastcall sub_9D03A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int8 **v10; // r13
  unsigned int v11; // r13d
  char v12; // r13
  void *v13; // rdx
  unsigned int v14; // eax
  void *v15; // rdi
  void *v17; // rdi
  void *v18; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v19; // [rsp+18h] [rbp-70h]
  void *v20; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-60h]
  void *v22; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-50h]
  char v24; // [rsp+3Ch] [rbp-4Ch]
  void *v25; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v19 = v5;
  v18 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(_QWORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v25, 0x3Fu, v19);
    v23 = v19;
    if ( v19 > 0x40 )
      sub_2585B30(&v22);
    else
      v22 = v18;
    sub_9A31A0((__int64)&v22, &v25, (__int64)&v18);
    if ( v23 > 0x40 && v22 )
      operator delete[](v22);
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
  }
  sub_92A4D0((__int64)&v25, 0x40u, v19);
  if ( (int)sub_2586820(&v18, &v25) < 0 )
  {
    if ( v26 <= 0x40 || (v17 = v25) == nullptr )
    {
LABEL_10:
      sub_92A4D0((__int64)&v25, 0x3Fu, v19);
      v12 = sub_922400((__int64)&v18, (__int64)&v25);
      if ( v26 > 0x40 && v25 )
        operator delete[](v25);
      if ( v12 == 3 )
      {
        v7 = -1;
LABEL_26:
        v11 = 1;
        *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v7;
        goto LABEL_27;
      }
      v21 = v19;
      if ( v19 > 0x40 )
      {
        sub_2585B30(&v20);
        v23 = v21;
        if ( v21 > 0x40 )
        {
          sub_2585B30(&v22);
          if ( v23 > 0x40 )
          {
            sub_25877E0(&v25, &v22, 64);
            v14 = v26;
            v15 = v25;
            if ( v26 <= 0x40 )
            {
LABEL_18:
              if ( v14 )
                v7 >>= (__int64)((_QWORD)v15 << (64 - (unsigned __int8)v14)) >> (64 - (unsigned __int8)v14);
              goto LABEL_20;
            }
            v7 >>= *(_QWORD *)v25;
            goto LABEL_45;
          }
LABEL_17:
          sub_2587D60(&v25, &v22);
          v14 = v26;
          v15 = v25;
          if ( v26 <= 0x40 )
            goto LABEL_18;
          v7 >>= *(_QWORD *)v25;
          if ( !v25 )
          {
LABEL_20:
            if ( v23 > 0x40 && v22 )
              operator delete[](v22);
            if ( v21 > 0x40 && v20 )
              operator delete[](v20);
            goto LABEL_26;
          }
LABEL_45:
          operator delete[](v15);
          goto LABEL_20;
        }
        v13 = v20;
      }
      else
      {
        v13 = v18;
        v23 = v19;
        v20 = v18;
      }
      v22 = v13;
      goto LABEL_17;
    }
LABEL_33:
    operator delete[](v17);
    goto LABEL_10;
  }
  if ( v26 > 0x40 && v25 )
    operator delete[](v25);
  v8 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v25, &v18);
  v24 = 1;
  v23 = v26;
  v22 = v25;
  v9 = *(_QWORD *)(v8 + 8);
  v25 = (void *)sub_A2E240(a1, v8, 2220, 0);
  v10 = (unsigned __int8 **)v25;
  if ( v25 )
  {
    sub_9C19A0((unsigned __int8 ***)&v25, (__int64)&v22);
    sub_9B5660(v10, v9);
    sub_9B58B0(v10, 64);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v11 )
  {
    if ( v23 <= 0x40 )
      goto LABEL_10;
    v17 = v22;
    if ( !v22 )
      goto LABEL_10;
    goto LABEL_33;
  }
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
LABEL_27:
  if ( v19 > 0x40 && v18 )
    operator delete[](v18);
  return v11;
}

