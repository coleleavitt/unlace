__int64 __fastcall sub_14F7020(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // [rsp+8h] [rbp-70h]
  unsigned __int8 *v8[13]; // [rsp+10h] [rbp-68h] BYREF

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) == 24 )
  {
    sub_146B5E0((__int64 *)v8, a1, 0x400008u, 1, 0);
    v4 = sub_153CA60(a1, 0);
    if ( v8[0] )
    {
      sub_1564F70(v8[0]);
      v8[0] = nullptr;
    }
    v5 = *(_QWORD *)(a1 + 96);
    if ( v4 == 1 )
    {
      v6 = sub_1C36210(v5, *(unsigned int *)(a1 + 16), 0);
      v5 = *(_QWORD *)(a1 + 96);
      v4 = v6;
    }
    result = sub_1A86230(*(_QWORD *)(v5 + 736), a2, v4 & 0xFFFFFFFFFFFFFFFELL);
    if ( v8[0] )
    {
      v7 = result;
      sub_1564F70(v8[0]);
      return v7;
    }
  }
  else
  {
    sub_1564840(v8, a1, a1 + 16, 14);
    sub_AE9DF0(v8, 24, 4u);
    sub_AEA040((__int64)v8);
    return 1;
  }
  return result;
}
