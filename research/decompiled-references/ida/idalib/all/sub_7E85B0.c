unsigned __int64 __fastcall sub_7E85B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r13
  __int64 i; // r15
  size_t v4; // rax
  __int64 v5; // r13
  __int64 j; // r15
  size_t v7; // rax
  _BYTE v9[5]; // [rsp+Eh] [rbp-4Ah] BYREF
  _BYTE v10[5]; // [rsp+13h] [rbp-45h] BYREF
  unsigned __int64 v11[8]; // [rsp+18h] [rbp-40h] BYREF

  v11[0] = __readfsqword(0x28u);
  sub_3A0970(a2, *(_DWORD *)a1);
  sub_3A0970(a2, *(_DWORD *)(a1 + 4));
  v2 = *(_QWORD *)(a1 + 16);
  sub_3A0970(a2, v2);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = pack_dq(v9, v11, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i)) - (_QWORD)v9;
      if ( v4 )
        sub_7DE6E0(a2, v9, v4);
    }
  }
  v5 = *(_QWORD *)(a1 + 40);
  sub_3A0970(a2, v5);
  if ( v5 )
  {
    for ( j = 0; j != v5; ++j )
    {
      v7 = pack_dd(v9, v10, *(unsigned int *)(*(_QWORD *)(a1 + 32) + 4 * j)) - (_QWORD)v9;
      if ( v7 )
        sub_7DE6E0(a2, v9, v7);
    }
  }
  return v11[0] - __readfsqword(0x28u);
}
