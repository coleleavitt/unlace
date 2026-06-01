__int64 __fastcall sub_DDB9B0(__int64 a1)
{
  __int64 v1; // r12
  unsigned int v2; // ebp
  __int64 v3; // r13
  unsigned int v4; // r12d
  __int64 v6; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // [rsp+4h] [rbp-34h] BYREF
  char v10; // [rsp+Ch] [rbp-2Ch]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(_DWORD *)sub_E21760(v1, 8);
  sub_E21790(v1, 8);
  v3 = *(_QWORD *)(a1 + 176);
  v4 = *(_DWORD *)sub_E21760(v3, 8);
  sub_E21790(v3, 8);
  if ( v2 )
  {
    *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v4 % v2;
    return 1;
  }
  else
  {
    v6 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    v7 = (__int64 *)sub_E33C10(a1, v6, 2508, 0);
    v8 = sub_EEC8C0(*(_QWORD *)(v6 + 24));
    if ( v7 )
    {
      v9 = v8;
      v10 = 1;
      sub_AEC610(v7, &v9);
    }
    return 0;
  }
}
