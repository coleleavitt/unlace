__int64 __fastcall sub_8EA220(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rax
  _QWORD *v9; // rdi
  __int64 (*v10)(void); // rdx
  _QWORD **v11; // rdi
  __int64 v12; // rsi
  unsigned int v13; // r12d
  char v15; // al
  bool v16; // zf
  _BYTE v17[48]; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE v18[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v19[14]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int8 v20; // [rsp+A8h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 568);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v18, v4);
  sub_A1A5E0(v3, 56);
  if ( !(unsigned __int8)sub_9A0D60(a1 + 672, a1 + 384, *(_QWORD *)(a1 + 368), v18, a2) )
    goto LABEL_14;
  if ( !*(_BYTE *)(a1 + 761) )
  {
    v5 = *(_QWORD *)(a1 + 752);
    if ( !v5 )
      goto LABEL_8;
LABEL_4:
    v6 = v5 >> 1;
    if ( (v5 & 2) != 0 )
    {
      if ( (v6 & 1) == 0 )
      {
LABEL_24:
        v5 = 0;
        goto LABEL_8;
      }
      v5 &= 0xFFFFFFFFFFFFFFFCLL;
      if ( !v5 )
        goto LABEL_8;
    }
    else
    {
      v5 &= 0xFFFFFFFFFFFFFFFCLL;
      if ( !v5 )
        goto LABEL_8;
      if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 24 <= 0x1A )
      {
        v5 = *(_QWORD *)(v5 + 48);
        goto LABEL_8;
      }
      if ( (v6 & 1) == 0 )
        goto LABEL_24;
    }
    v5 = *(_QWORD *)(v5 + 8);
    goto LABEL_8;
  }
  if ( !(unsigned __int8)sub_9A0B70(a1 + 672, a1 + 384, v18) )
    goto LABEL_14;
  v5 = *(_QWORD *)(a1 + 752);
  if ( v5 )
    goto LABEL_4;
LABEL_8:
  v7 = *(_QWORD **)(a1 + 408);
  v8 = *(__int64 (**)(void))(*v7 + 104LL);
  if ( (char *)v8 != (char *)sub_8D7E60 )
  {
LABEL_22:
    v12 = v8();
    goto LABEL_12;
  }
  v9 = (_QWORD *)v7[3];
  v10 = *(__int64 (**)(void))(*v9 + 104LL);
  if ( v10 == v8 )
  {
    v11 = (_QWORD **)v9[3];
    v8 = (__int64 (*)(void))(*v11)[13];
    if ( v8 == v10 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11[3] + 104LL))(v11[3]);
      goto LABEL_12;
    }
    goto LABEL_22;
  }
  v12 = v10();
LABEL_12:
  sub_8C9AD0((__int64)v17, v12);
  sub_A24290(v19, v18, v17, v5);
  sub_8C9C10((__int64)v17);
  v13 = v20;
  if ( !v20 )
  {
    *(_DWORD *)(a1 + 744) = 3;
LABEL_14:
    v13 = 0;
    goto LABEL_15;
  }
  v15 = *(_BYTE *)(a1 + 736);
  if ( v15 == 3 )
  {
    sub_6A63E0(a1 + 680, (__int64)v19);
  }
  else
  {
    if ( v15 != -1 )
    {
      if ( v15 == 1 )
        sub_A1C0C0(a1 + 680);
      *(_BYTE *)(a1 + 736) = -1;
    }
    sub_6A4260(a1 + 680, v19);
    *(_BYTE *)(a1 + 736) = 3;
  }
  v16 = v20 == 0;
  *(_DWORD *)(a1 + 744) = 2;
  if ( !v16 )
  {
    v20 = 0;
    if ( v19[0] > 1u )
      sub_69F740((__int64)v19);
  }
LABEL_15:
  sub_A1C0C0(v18);
  return v13;
}

