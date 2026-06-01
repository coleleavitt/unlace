__int64 __fastcall sub_CF98A0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r13
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned __int8 **v10; // [rsp+18h] [rbp-40h] BYREF
  void *v11; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-30h]
  char v13; // [rsp+2Ch] [rbp-2Ch]

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = *(_DWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 560);
  v5 = *(_QWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  if ( (*(_BYTE *)(sub_E32240(a1 + 384) + 47) & 0x20) != 0 )
  {
    LOBYTE(v3) = v3 & 0x3F;
LABEL_3:
    v6 = v5 >> v3;
LABEL_4:
    *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v6;
    return 1;
  }
  if ( v3 <= 0x3F )
    goto LABEL_3;
  v8 = sub_E1EF60(*(_QWORD *)(a1 + 784));
  v11 = (void *)v3;
  v12 = 32;
  v13 = 1;
  v9 = *(_QWORD *)(v8 + 8);
  v10 = (unsigned __int8 **)sub_E33C90(a1 + 384, v8, 2422, 0);
  if ( v10 )
  {
    sub_CF8A40(&v10, (__int64)&v11);
    if ( v10 )
    {
      sub_AE9DF0(v10, v9, 8u);
      if ( v10 )
        sub_AE9DF0(v10, 64, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 32LL))(*(_QWORD *)(a1 + 408));
  if ( (_BYTE)result )
  {
    if ( v12 > 0x40 )
    {
      if ( v11 )
        operator delete[](v11);
    }
    v6 = -1;
    goto LABEL_4;
  }
  if ( v12 > 0x40 && v11 )
  {
    operator delete[](v11);
    return 0;
  }
  return result;
}
