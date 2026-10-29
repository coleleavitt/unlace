__int64 __fastcall sub_92D8F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbp
  __int16 v8; // r14
  __int64 v9; // r13
  unsigned __int8 **v10; // r15
  unsigned int v11; // r13d
  char v12; // r15
  int v13; // r13d
  unsigned int v14; // eax
  void *v15; // rdx
  unsigned int v16; // eax
  void *v17; // rdi
  __int16 v18; // bp
  void *v20; // rdi
  __int64 v21; // [rsp+8h] [rbp-80h]
  void *v22; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-70h]
  void *v24; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-60h]
  void *v26; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-50h]
  char v28; // [rsp+3Ch] [rbp-4Ch]
  void *v29; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-40h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = *(_QWORD *)(a1 + 792);
  v5 = sub_A1A5A0(v3, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v23 = v6;
  v22 = *(void **)v5;
  sub_A1A5E0(v3, 16);
  v7 = *(_QWORD *)(a1 + 568);
  v8 = *(_WORD *)sub_A1A5A0(v7, 8);
  sub_A1A5E0(v7, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 384) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v29, 0xFu, v23);
    v27 = v23;
    if ( v23 > 0x40 )
      sub_2585B30(&v26);
    else
      v26 = v22;
    sub_8CC450((__int64)&v26, &v29, (__int64)&v22);
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
  }
  sub_92A4D0((__int64)&v29, 0x10u, v23);
  if ( (int)sub_2586820(&v22, &v29) < 0 )
  {
    if ( v30 <= 0x40 || (v20 = v29) == nullptr )
    {
LABEL_10:
      sub_92A4D0((__int64)&v29, 0xFu, v23);
      v12 = sub_922400((__int64)&v22, (__int64)&v29);
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
      LOWORD(v13) = -1;
      if ( v12 == 3 )
        goto LABEL_27;
      v14 = v23;
      v25 = v23;
      if ( v23 > 0x40 )
      {
        sub_2585B30(&v24);
        v14 = v25;
        v27 = v25;
        if ( v25 > 0x40 )
        {
          sub_2585B30(&v26);
          v14 = v27;
LABEL_17:
          if ( v14 <= 0x10 )
          {
            sub_2587D60(&v29, &v26);
            v16 = v30;
            v17 = v29;
            if ( v30 > 0x40 )
            {
              v18 = *(_WORD *)v29;
              if ( !v29 )
              {
LABEL_21:
                if ( v27 > 0x40 && v26 )
                  operator delete[](v26);
                v13 = v8 >> v18;
                if ( v25 > 0x40 && v24 )
                  operator delete[](v24);
LABEL_27:
                *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v13;
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
            sub_25877E0(&v29, &v26, 16);
            v16 = v30;
            v17 = v29;
            if ( v30 > 0x40 )
            {
              v18 = *(_WORD *)v29;
              goto LABEL_20;
            }
          }
          LOBYTE(v18) = 0;
          if ( v16 )
            LOBYTE(v18) = (__int64)((_QWORD)v17 << (64 - (unsigned __int8)v16)) >> (64 - (unsigned __int8)v16);
          goto LABEL_21;
        }
        v15 = v24;
      }
      else
      {
        v15 = v22;
        v27 = v23;
        v24 = v22;
      }
      v26 = v15;
      goto LABEL_17;
    }
LABEL_34:
    operator delete[](v20);
    goto LABEL_10;
  }
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  v9 = sub_A180F0(*(_QWORD *)(a1 + 584), v4);
  sub_2587D60(&v29, &v22);
  v28 = 1;
  v27 = v30;
  v26 = v29;
  v21 = *(_QWORD *)(v9 + 8);
  v29 = (void *)sub_A2E240(a1 + 384, v9, 2220, 0);
  v10 = (unsigned __int8 **)v29;
  if ( v29 )
  {
    sub_8DF340((unsigned __int8 ***)&v29, (__int64)&v26);
    sub_8D69A0(v10, v21);
    sub_8D6E40(v10, 16);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)v11 )
  {
    if ( v27 <= 0x40 )
      goto LABEL_10;
    v20 = v26;
    if ( !v26 )
      goto LABEL_10;
    goto LABEL_34;
  }
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
LABEL_28:
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
  return v11;
}

