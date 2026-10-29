void __fastcall sub_8236A0(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  char v7; // al
  unsigned int v8; // eax
  int v9; // ebx
  char v10; // r13
  void *v11; // r14
  void *v12; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v13; // [rsp+8h] [rbp-70h]
  char v14; // [rsp+Ch] [rbp-6Ch]
  void *v15; // [rsp+10h] [rbp-68h] BYREF
  void *v16; // [rsp+18h] [rbp-60h]
  int v17; // [rsp+20h] [rbp-58h]
  char v18; // [rsp+24h] [rbp-54h]

  v6 = *(_QWORD *)(a1 + 16);
  v7 = sub_B10310(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL));
  v12 = a2;
  v13 = 64;
  v14 = v7 ^ 1;
  v8 = sub_70B280(v6, a3);
  v9 = 64;
  v10 = v14;
  if ( v8 == 64 )
  {
    v11 = v12;
  }
  else
  {
    if ( v14 )
      sub_2587E20(&v15, &v12, v8);
    else
      sub_2587E80(&v15, &v12, v8);
    v9 = (int)v16;
    v11 = v15;
    if ( v13 > 0x40 && v12 )
      operator delete[](v12);
  }
  BYTE4(v15) &= ~1u;
  LODWORD(v15) = 2;
  v16 = v11;
  v17 = v9;
  v18 = v10;
  sub_6A01B0(a4, (__int64)&v15);
  if ( (unsigned int)v15 > 1 )
    sub_69F740((__int64)&v15);
}

