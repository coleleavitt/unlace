__int64 __fastcall sub_1527940(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  unsigned int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // [rsp+8h] [rbp-70h]
  unsigned __int8 *v8[13]; // [rsp+10h] [rbp-68h] BYREF

  v1 = *(_DWORD *)(a1 + 20);
  if ( !v1 )
    v1 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v1;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) == 24 )
  {
    v3 = *(_DWORD *)(a1 + 16);
    sub_146B5E0((__int64 *)v8, a1, 0x400009u, 1, 0);
    sub_1C3F9A0(*(_QWORD *)(a1 + 96), v3, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), 0, 1);
    v5 = sub_1533300(a1, 0);
    if ( v8[0] )
    {
      sub_1564F70(v8[0]);
      v8[0] = nullptr;
    }
    v6 = *(_QWORD *)(a1 + 96);
    if ( v5 == 1 )
    {
      sub_1C37B90(v6, 0, v4);
      result = 1;
    }
    else
    {
      result = sub_1C37DC0(v6, v5 & 0xFFFFFFFFFFFFFFFELL);
    }
    if ( v8[0] )
    {
      v7 = result;
      sub_1564F70(v8[0]);
      return v7;
    }
  }
  else
  {
    sub_FC70B0((__int64)v8, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL), *(_DWORD *)(a1 + 16), 14);
    sub_AE9DF0(v8, 24, 4u);
    sub_AEA040((__int64)v8);
    return 1;
  }
  return result;
}
