__int64 __fastcall sub_CF96F0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  void *v3; // rbp
  __int64 v4; // r12
  __int64 v5; // r13
  char v6; // cl
  __int64 v7; // r13
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int8 **v11; // [rsp+18h] [rbp-40h] BYREF
  void *v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-30h]
  char v14; // [rsp+2Ch] [rbp-2Ch]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = (void *)*(unsigned __int8 *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 560);
  v5 = *(_QWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  if ( (*(_BYTE *)(sub_E32240(a1 + 384) + 47) & 0x20) != 0 )
  {
    v6 = (unsigned __int8)v3 & 0x3F;
LABEL_3:
    v7 = v5 >> v6;
LABEL_4:
    *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v7;
    return 1;
  }
  if ( (unsigned __int8)v3 <= 0x3Fu )
  {
    v6 = (char)v3;
    goto LABEL_3;
  }
  v9 = sub_E1EF60(*(_QWORD *)(a1 + 784));
  v13 = 8;
  v12 = v3;
  v14 = 1;
  v10 = *(_QWORD *)(v9 + 8);
  v11 = (unsigned __int8 **)sub_E33C90(a1 + 384, v9, 2422, 0);
  if ( v11 )
  {
    sub_CF8A40(&v11, (__int64)&v12);
    if ( v11 )
    {
      sub_AE9DF0(v11, v10, 8u);
      if ( v11 )
        sub_AE9DF0(v11, 64, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)result )
  {
    if ( v13 > 0x40 )
    {
      if ( v12 )
        operator delete[](v12);
    }
    v7 = -1;
    goto LABEL_4;
  }
  if ( v13 > 0x40 && v12 )
  {
    operator delete[](v12);
    return 0;
  }
  return result;
}
