void __fastcall sub_824510(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  int v5; // edx
  char v6; // r14
  void *v7; // rsi
  __int64 v8; // rdi
  void *v9; // [rsp+0h] [rbp-A8h]
  unsigned int v10; // [rsp+8h] [rbp-A0h]
  char v11; // [rsp+Ch] [rbp-9Ch]
  unsigned int v12; // [rsp+10h] [rbp-98h]
  void *v13; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-80h]
  char v15; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v16; // [rsp+30h] [rbp-78h]
  void *v17; // [rsp+40h] [rbp-68h] BYREF
  void *v18; // [rsp+48h] [rbp-60h]
  unsigned int v19; // [rsp+50h] [rbp-58h]
  char v20; // [rsp+54h] [rbp-54h]
  unsigned int v21; // [rsp+58h] [rbp-50h]

  v3 = sub_70B7E0(*(_QWORD *)(*a1 + 16LL), a3);
  v4 = (unsigned __int16)v3;
  v14 = (unsigned __int16)v3;
  v5 = HIBYTE(v3) & 0x20;
  v6 = ((unsigned __int8)v5 >> 5) ^ 1;
  if ( (unsigned __int16)v3 <= 0x40u )
  {
    if ( (_WORD)v3 )
    {
      v10 = (unsigned __int16)v3;
      v9 = (void *)(a2 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v3));
    }
    else
    {
      v10 = 0;
      v9 = nullptr;
    }
    v11 = ((unsigned __int8)v5 >> 5) ^ 1;
    v12 = v3;
    goto LABEL_5;
  }
  sub_2585A50(&v13, a2, (v3 & 0x20000000) != 0);
  v4 = v14;
  LODWORD(v18) = v14;
  if ( v14 <= 0x40 )
  {
    v10 = v14;
    v11 = v6;
    v9 = v13;
    v12 = v3;
LABEL_5:
    v7 = v9;
    v13 = v9;
    goto LABEL_6;
  }
  sub_2585B30(&v17);
  v4 = (unsigned int)v18;
  v11 = v6;
  v12 = v3;
  v10 = (unsigned int)v18;
  v9 = v17;
  if ( v14 > 0x40 && v13 )
  {
    operator delete[](v13);
    v4 = v10;
  }
  v14 = v4;
  if ( v4 <= 0x40 )
    goto LABEL_5;
  sub_2585B30(&v13);
  v4 = v14;
  v7 = v13;
LABEL_6:
  v18 = v7;
  v8 = a1[1];
  BYTE4(v17) &= ~1u;
  v15 = v11;
  v16 = v12;
  v19 = v4;
  v14 = 0;
  v20 = v11;
  v21 = v12;
  LODWORD(v17) = 4;
  sub_6A01B0(v8, (__int64)&v17);
  if ( (unsigned int)v17 > 1 )
    sub_69F740((__int64)&v17);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  if ( v10 > 0x40 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}

