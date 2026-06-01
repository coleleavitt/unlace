__int64 __fastcall sub_BEF430(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // ebp
  unsigned int v7; // r12d
  void *v8; // rsi
  bool v9; // al
  void *v10; // rsi
  __int64 v11; // rdi
  void *v13; // [rsp+0h] [rbp-A8h]
  unsigned int v14; // [rsp+8h] [rbp-A0h]
  bool v15; // [rsp+Ch] [rbp-9Ch]
  unsigned int v16; // [rsp+10h] [rbp-98h]
  void *v17; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-80h]
  bool v19; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v20; // [rsp+30h] [rbp-78h]
  void *v21; // [rsp+40h] [rbp-68h] BYREF
  void *v22; // [rsp+48h] [rbp-60h]
  unsigned int v23; // [rsp+50h] [rbp-58h]
  bool v24; // [rsp+54h] [rbp-54h]
  unsigned int v25; // [rsp+58h] [rbp-50h]

  v4 = sub_A8A3C0(*(_QWORD *)(*a1 + 16LL), *(_QWORD *)(a3 + 8), a3, a4);
  v5 = (unsigned __int16)v4;
  v6 = v4;
  v7 = HIBYTE(v4);
  v18 = (unsigned __int16)v4;
  if ( (unsigned __int16)v4 <= 0x40u )
  {
    v8 = (void *)(a2 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v4));
    if ( !(_WORD)v4 )
      v8 = nullptr;
    v9 = (v4 & 0x20000000) == 0;
    v17 = v8;
    goto LABEL_5;
  }
  sub_21E1730(&v17, a2, (v4 >> 29) & 1);
  v5 = v18;
  v9 = (v7 & 0x20) == 0;
  LODWORD(v22) = v18;
  if ( v18 <= 0x40 )
  {
LABEL_5:
    v14 = v5;
    v15 = v9;
    v13 = v17;
    v16 = v6;
LABEL_6:
    v10 = v13;
    v17 = v13;
    goto LABEL_7;
  }
  sub_21E17D0(&v21);
  v5 = (unsigned int)v22;
  v15 = (v7 & 0x20) == 0;
  v16 = v6;
  v14 = (unsigned int)v22;
  v13 = v21;
  if ( v18 > 0x40 && v17 )
  {
    operator delete[](v17);
    v5 = v14;
  }
  v18 = v5;
  if ( v5 <= 0x40 )
    goto LABEL_6;
  sub_21E17D0(&v17);
  v5 = v18;
  v10 = v17;
LABEL_7:
  v22 = v10;
  v11 = a1[1];
  BYTE4(v21) &= ~1u;
  v19 = v15;
  v20 = v16;
  v23 = v5;
  v18 = 0;
  v24 = v15;
  v25 = v16;
  LODWORD(v21) = 4;
  sub_A2BFE0(v11, (__int64)&v21);
  if ( (unsigned int)v21 > 1 )
    sub_A2BBA0((int *)&v21);
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return 1;
}

