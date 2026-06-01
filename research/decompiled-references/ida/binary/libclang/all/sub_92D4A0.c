__int64 __fastcall sub_92D4A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbp
  int v8; // r14d
  __int64 v9; // r13
  unsigned __int8 **v10; // r15
  unsigned int v11; // r13d
  char v12; // r13
  unsigned int v13; // eax
  void *v14; // rdx
  unsigned int v15; // eax
  void *v16; // rdi
  void *v18; // rdi
  __int64 v19; // [rsp+8h] [rbp-80h]
  void *v20; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-70h]
  void *v22; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-60h]
  void *v24; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-50h]
  char v26; // [rsp+3Ch] [rbp-4Ch]
  void *v27; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-40h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = *(_QWORD *)(a1 + 792);
  v5 = sub_A1A5A0(v3, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v21 = v6;
  v20 = *(void **)v5;
  sub_A1A5E0(v3, 16);
  v7 = *(_QWORD *)(a1 + 568);
  v8 = *(_DWORD *)sub_A1A5A0(v7, 8);
  sub_A1A5E0(v7, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 384) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v27, 0x1Fu, v21);
    v25 = v21;
    if ( v21 > 0x40 )
      sub_2585B30(&v24);
    else
      v24 = v20;
    sub_8CC450((__int64)&v24, &v27, (__int64)&v20);
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
  }
  sub_92A4D0((__int64)&v27, 0x20u, v21);
  if ( (int)sub_2586820(&v20, &v27) < 0 )
  {
    if ( v28 <= 0x40 || (v18 = v27) == nullptr )
    {
LABEL_10:
      sub_92A4D0((__int64)&v27, 0x1Fu, v21);
      v12 = sub_922400((__int64)&v20, (__int64)&v27);
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
      if ( v12 == 3 )
      {
        v8 = -1;
LABEL_27:
        v11 = 1;
        *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v8;
        goto LABEL_28;
      }
      v13 = v21;
      v23 = v21;
      if ( v21 > 0x40 )
      {
        sub_2585B30(&v22);
        v13 = v23;
        v25 = v23;
        if ( v23 > 0x40 )
        {
          sub_2585B30(&v24);
          v13 = v25;
LABEL_17:
          if ( v13 <= 0x20 )
          {
            sub_2587D60(&v27, &v24);
            v15 = v28;
            v16 = v27;
            if ( v28 > 0x40 )
            {
              v8 >>= *(_QWORD *)v27;
              if ( !v27 )
              {
LABEL_21:
                if ( v25 > 0x40 && v24 )
                  operator delete[](v24);
                if ( v23 > 0x40 && v22 )
                  operator delete[](v22);
                goto LABEL_27;
              }
LABEL_20:
              operator delete[](v16);
              goto LABEL_21;
            }
          }
          else
          {
            sub_25877E0(&v27, &v24, 32);
            v15 = v28;
            v16 = v27;
            if ( v28 > 0x40 )
            {
              v8 >>= *(_QWORD *)v27;
              goto LABEL_20;
            }
          }
          if ( v15 )
            v8 >>= (__int64)((_QWORD)v16 << (64 - (unsigned __int8)v15)) >> (64 - (unsigned __int8)v15);
          goto LABEL_21;
        }
        v14 = v22;
      }
      else
      {
        v14 = v20;
        v25 = v21;
        v22 = v20;
      }
      v24 = v14;
      goto LABEL_17;
    }
LABEL_34:
    operator delete[](v18);
    goto LABEL_10;
  }
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  v9 = sub_A180F0(*(_QWORD *)(a1 + 584), v4);
  sub_2587D60(&v27, &v20);
  v26 = 1;
  v25 = v28;
  v24 = v27;
  v19 = *(_QWORD *)(v9 + 8);
  v27 = (void *)sub_A2E240(a1 + 384, v9, 2220, 0);
  v10 = (unsigned __int8 **)v27;
  if ( v27 )
  {
    sub_8DF340((unsigned __int8 ***)&v27, (__int64)&v24);
    sub_8D69A0(v10, v19);
    sub_8D6E40(v10, 32);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)v11 )
  {
    if ( v25 <= 0x40 )
      goto LABEL_10;
    v18 = v24;
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

