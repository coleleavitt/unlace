__int64 __fastcall sub_9D07D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rbp
  unsigned int v7; // r14d
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int8 **v10; // r13
  unsigned int v11; // r13d
  char v12; // r13
  int v13; // r15d
  unsigned int v14; // eax
  void *v15; // rdx
  void *v16; // rdi
  int v17; // ebp
  void *v19; // rdi
  void *v20; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-70h]
  void *v22; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-60h]
  void *v24; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-50h]
  char v26; // [rsp+3Ch] [rbp-4Ch]
  void *v27; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v21 = v5;
  v20 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(_DWORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v27, 0x1Fu, v21);
    v25 = v21;
    if ( v21 > 0x40 )
      sub_2585B30(&v24);
    else
      v24 = v20;
    sub_9A31A0((__int64)&v24, &v27, (__int64)&v20);
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
  }
  sub_92A4D0((__int64)&v27, 0x20u, v21);
  if ( (int)sub_2586820(&v20, &v27) < 0 )
  {
    if ( v28 <= 0x40 || (v19 = v27) == nullptr )
    {
LABEL_10:
      sub_92A4D0((__int64)&v27, 0x1Fu, v21);
      v12 = sub_922400((__int64)&v20, (__int64)&v27);
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
      v13 = -1;
      if ( v12 == 3 )
        goto LABEL_27;
      v14 = v21;
      v23 = v21;
      if ( v21 > 0x40 )
      {
        sub_2585B30(&v22);
        v14 = v23;
        v25 = v23;
        if ( v23 > 0x40 )
        {
          sub_2585B30(&v24);
          v14 = v25;
LABEL_17:
          if ( v14 <= 0x20 )
          {
            sub_2587D60(&v27, &v24);
            v16 = v27;
            LOBYTE(v17) = (_BYTE)v27;
            if ( v28 <= 0x40 )
              goto LABEL_21;
            v17 = *(_DWORD *)v27;
            if ( !v27 )
              goto LABEL_21;
          }
          else
          {
            sub_25877E0(&v27, &v24, 32);
            v16 = v27;
            LOBYTE(v17) = (_BYTE)v27;
            if ( v28 <= 0x40 )
              goto LABEL_21;
            v17 = *(_DWORD *)v27;
          }
          operator delete[](v16);
LABEL_21:
          if ( v25 > 0x40 && v24 )
            operator delete[](v24);
          v13 = v7 >> v17;
          if ( v23 > 0x40 && v22 )
            operator delete[](v22);
LABEL_27:
          v11 = 1;
          *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v13;
          goto LABEL_28;
        }
        v15 = v22;
      }
      else
      {
        v15 = v20;
        v25 = v21;
        v22 = v20;
      }
      v24 = v15;
      goto LABEL_17;
    }
LABEL_34:
    operator delete[](v19);
    goto LABEL_10;
  }
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  v8 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v27, &v20);
  v26 = 1;
  v25 = v28;
  v24 = v27;
  v9 = *(_QWORD *)(v8 + 8);
  v27 = (void *)sub_A2E240(a1, v8, 2220, 0);
  v10 = (unsigned __int8 **)v27;
  if ( v27 )
  {
    sub_9C19A0((unsigned __int8 ***)&v27, (__int64)&v24);
    sub_9B5660(v10, v9);
    sub_9B58B0(v10, 32);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v11 )
  {
    if ( v25 <= 0x40 )
      goto LABEL_10;
    v19 = v24;
    if ( !v24 )
      goto LABEL_10;
    goto LABEL_34;
  }
  if ( v25 > 0x40 && v24 )
    operator delete[](v24);
LABEL_28:
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  return v11;
}

