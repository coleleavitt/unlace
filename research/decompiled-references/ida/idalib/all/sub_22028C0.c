__int64 __fastcall sub_22028C0(__int64 *a1, _DWORD *a2, char a3, bool *a4)
{
  unsigned int v4; // r14d
  __int64 *v6; // r12
  char v7; // dl
  __int64 v8; // rax
  void *v9; // [rsp+0h] [rbp-98h] BYREF
  __int64 v10; // [rsp+8h] [rbp-90h]
  int v11; // [rsp+10h] [rbp-88h]
  char v12; // [rsp+14h] [rbp-84h]
  void *v13; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-70h]
  __int64 v15[2]; // [rsp+40h] [rbp-58h] BYREF
  int v16; // [rsp+50h] [rbp-48h]
  char v17; // [rsp+54h] [rbp-44h]

  if ( a2 == (_DWORD *)*a1 )
  {
    *a4 = 0;
    return 0;
  }
  else if ( a2 == (_DWORD *)&unk_26F7B20 || (_UNKNOWN *)*a1 == &unk_26F7B20 )
  {
    if ( a2 == (_DWORD *)&unk_26F7B20 && (_UNKNOWN *)*a1 != &unk_26F7B20 )
    {
      v4 = sub_21FDAB0((__int64)a1, dword_26F7B00, a3, a4);
      sub_21FEE00((__int64)&v13, (__int64)a1);
      sub_21FFDA0(v15, (__int64)&unk_26F7B20, &v13);
      sub_C177C0(a1, v15);
      sub_9955A0(v15);
      if ( v14 > 0x40 && v13 )
        operator delete[](v13);
    }
    else
    {
      v6 = a1;
      v4 = sub_21FDAB0(a1[1], a2, a3, a4);
      if ( (_UNKNOWN *)*a1 == &unk_26F7B20 )
        v6 = (__int64 *)a1[1];
      v9 = &unk_26F7B40;
      sub_21F9170(&v9);
      v7 = *((_BYTE *)v6 + 20);
      v9 = (void *)*v6;
      v10 = v6[1];
      v11 = *((_DWORD *)v6 + 4);
      v12 = v7 & 7 | v12 & 0xF8;
      v12 = *((_BYTE *)v6 + 20) & 8 | v12 & 0xF7;
      *v6 = (__int64)&unk_26F7B40;
      v15[0] = (__int64)&unk_26F7B40;
      sub_21F9170(v15);
      v8 = (__int64)v9;
      v9 = &unk_26F7B40;
      v15[0] = v8;
      v15[1] = v10;
      v16 = v11;
      v17 = v12 & 0xF | v17 & 0xF0;
      sub_22023D0((__int64)&v13, v15, a2);
      sub_21F9170(v15);
      sub_C177C0(a1, (__int64 *)&v13);
      sub_9955A0(&v13);
      sub_21F9170(&v9);
    }
  }
  else
  {
    return (unsigned int)sub_21FDAB0((__int64)a1, a2, a3, a4);
  }
  return v4;
}
