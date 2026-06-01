__int64 __fastcall sub_92C7F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbp
  unsigned __int16 v8; // r14
  __int64 v9; // r13
  unsigned __int8 **v10; // r15
  unsigned int v11; // r13d
  char v12; // r13
  int v13; // r15d
  unsigned int v14; // eax
  void *v15; // rdx
  void *v16; // rdi
  __int16 v17; // bp
  void *v19; // rdi
  __int64 v20; // [rsp+8h] [rbp-80h]
  void *v21; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-70h]
  void *v23; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-60h]
  void *v25; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+38h] [rbp-50h]
  char v27; // [rsp+3Ch] [rbp-4Ch]
  void *v28; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-40h]

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = *(_QWORD *)(a1 + 792);
  v5 = sub_A1A5A0(v3, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v22 = v6;
  v21 = *(void **)v5;
  sub_A1A5E0(v3, 16);
  v7 = *(_QWORD *)(a1 + 568);
  v8 = *(_WORD *)sub_A1A5A0(v7, 8);
  sub_A1A5E0(v7, 8);
  if ( (*(_BYTE *)(sub_A2CB40(a1 + 384) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v28, 0xFu, v22);
    v26 = v22;
    if ( v22 > 0x40 )
      sub_2585B30(&v25);
    else
      v25 = v21;
    sub_8CC450((__int64)&v25, &v28, (__int64)&v21);
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
  }
  sub_92A4D0((__int64)&v28, 0x10u, v22);
  if ( (int)sub_2586820(&v21, &v28) < 0 )
  {
    if ( v29 <= 0x40 || (v19 = v28) == nullptr )
    {
LABEL_10:
      sub_92A4D0((__int64)&v28, 0xFu, v22);
      v12 = sub_922400((__int64)&v21, (__int64)&v28);
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
      LOWORD(v13) = -1;
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
          if ( v14 <= 0x10 )
          {
            sub_2587D60(&v28, &v25);
            v16 = v28;
            LOBYTE(v17) = (_BYTE)v28;
            if ( v29 <= 0x40 )
              goto LABEL_21;
            v17 = *(_WORD *)v28;
            if ( !v28 )
              goto LABEL_21;
          }
          else
          {
            sub_25877E0(&v28, &v25, 16);
            v16 = v28;
            LOBYTE(v17) = (_BYTE)v28;
            if ( v29 <= 0x40 )
              goto LABEL_21;
            v17 = *(_WORD *)v28;
          }
          operator delete[](v16);
LABEL_21:
          if ( v26 > 0x40 && v25 )
            operator delete[](v25);
          v13 = (int)v8 >> v17;
          if ( v24 > 0x40 && v23 )
            operator delete[](v23);
LABEL_27:
          v11 = 1;
          *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v13;
          goto LABEL_28;
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
    operator delete[](v19);
    goto LABEL_10;
  }
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  v9 = sub_A180F0(*(_QWORD *)(a1 + 584), v4);
  sub_2587D60(&v28, &v21);
  v27 = 1;
  v26 = v29;
  v25 = v28;
  v20 = *(_QWORD *)(v9 + 8);
  v28 = (void *)sub_A2E240(a1 + 384, v9, 2220, 0);
  v10 = (unsigned __int8 **)v28;
  if ( v28 )
  {
    sub_8DF340((unsigned __int8 ***)&v28, (__int64)&v25);
    sub_8D69A0(v10, v20);
    sub_8D6E40(v10, 16);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)v11 )
  {
    if ( v26 <= 0x40 )
      goto LABEL_10;
    v19 = v25;
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

