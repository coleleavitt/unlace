void __fastcall sub_9B3860(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebp
  void *v5; // r12
  char v6; // dl
  bool v7; // si
  _BOOL8 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // eax
  void *v11; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v12; // [rsp+8h] [rbp-70h]
  void *v13; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-60h]
  void *v15; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-50h]
  void *v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-40h]
  char v19; // [rsp+3Ch] [rbp-3Ch]
  int v20; // [rsp+40h] [rbp-38h]

  v3 = sub_A1A5A0(a1, 24);
  v4 = *(_DWORD *)(v3 + 8);
  v5 = *(void **)v3;
  *(_DWORD *)(v3 + 8) = 0;
  v6 = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v18 = v4;
  v17 = v5;
  v19 = v6;
  v20 = v3;
  sub_A1A5E0(a1, 24);
  v7 = v5 == nullptr;
  if ( v4 > 0x40 )
    v7 = (unsigned int)sub_2587400(&v17) == v4;
  v14 = a2;
  v8 = !v7;
  if ( a2 > 0x40 )
  {
    sub_2585A50(&v13, v8, 0);
    v16 = v14;
    if ( v14 <= 0x40 )
    {
      v12 = v14;
      v11 = v13;
    }
    else
    {
      sub_2585B30(&v15);
      v12 = v16;
      if ( v16 <= 0x40 )
      {
        v10 = v14;
        v11 = v15;
      }
      else
      {
        sub_2585B30(&v11);
        if ( v16 > 0x40 && v15 )
          operator delete[](v15);
        v10 = v14;
      }
      if ( v10 > 0x40 && v13 )
        operator delete[](v13);
    }
  }
  else
  {
    v12 = a2;
    v11 = (void *)v8;
  }
  v9 = sub_A1A4E0(a1, 16);
  *(_DWORD *)(v9 + 8) = v12;
  *(_QWORD *)v9 = v11;
  if ( v4 > 0x40 )
  {
    if ( v5 )
      operator delete[](v5);
  }
}

