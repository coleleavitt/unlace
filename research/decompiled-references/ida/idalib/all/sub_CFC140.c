__int64 __fastcall sub_CFC140(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rbp
  __int64 v4; // r12
  unsigned __int16 v5; // r13
  int v6; // eax
  char v7; // cl
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  int v11; // edx
  char v12; // si
  unsigned __int8 **v13; // [rsp+18h] [rbp-40h] BYREF
  void *v14; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-30h]
  char v16; // [rsp+2Ch] [rbp-2Ch]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = *(_QWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 560);
  v5 = *(_WORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  if ( (*(_BYTE *)(sub_E32240(a1 + 384) + 47) & 0x20) != 0 )
  {
    LOBYTE(v3) = v3 & 0xF;
    v6 = v5;
LABEL_3:
    v7 = v3;
LABEL_4:
    *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v6 << v7;
    return 1;
  }
  if ( (unsigned int)v3 <= 0xF )
  {
    v11 = v5;
    v6 = v5;
    if ( v3 <= 0xF )
      goto LABEL_3;
LABEL_17:
    v7 = 16;
    if ( v5 )
    {
      v12 = 8;
      if ( v11 >> 8 )
      {
        v12 = 0;
        v11 >>= 8;
      }
      if ( v11 >> 4 )
        v11 = (unsigned __int16)(v11 >> 4);
      else
        v12 |= 4u;
      if ( v11 >> 2 )
        v11 >>= 2;
      else
        v12 |= 2u;
      v7 = v12 | 1;
      if ( (unsigned int)v11 >> 1 )
        v7 = v12;
    }
    goto LABEL_4;
  }
  v9 = sub_E1EF60(*(_QWORD *)(a1 + 784));
  v15 = 64;
  v14 = (void *)v3;
  v16 = 1;
  v10 = *(_QWORD *)(v9 + 8);
  v13 = (unsigned __int8 **)sub_E33C90(a1 + 384, v9, 2422, 0);
  if ( v13 )
  {
    sub_CF8A40(&v13, (__int64)&v14);
    if ( v13 )
    {
      sub_AE9DF0(v13, v10, 8u);
      if ( v13 )
        sub_AE9DF0(v13, 16, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)result )
  {
    if ( v15 > 0x40 && v14 )
      operator delete[](v14);
    v11 = v5;
    v6 = v5;
    goto LABEL_17;
  }
  if ( v15 > 0x40 && v14 )
  {
    operator delete[](v14);
    return 0;
  }
  return result;
}
