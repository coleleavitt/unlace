unsigned __int64 __fastcall sub_7C5210(__int64 a1, __int64 *a2)
{
  __int64 v2; // r13
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 i; // r15
  size_t v6; // rax
  __int64 v7; // r13
  __int64 j; // r15
  size_t v9; // rax
  _BYTE v11[5]; // [rsp+Eh] [rbp-4Ah] BYREF
  _BYTE v12[5]; // [rsp+13h] [rbp-45h] BYREF
  unsigned __int64 v13[8]; // [rsp+18h] [rbp-40h] BYREF

  v13[0] = __readfsqword(0x28u);
  sub_407AD0(a2, *(_DWORD *)a1);
  sub_407AD0(a2, *(_DWORD *)(a1 + 4));
  v2 = *(_QWORD *)(a1 + 16);
  sub_407AD0(a2, v2);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v6 = pack_dq(v11, v13, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i), v3, v4) - (_QWORD)v11;
      if ( v6 )
        sub_7BB300(a2, v11, v6);
    }
  }
  v7 = *(_QWORD *)(a1 + 40);
  sub_407AD0(a2, v7);
  if ( v7 )
  {
    for ( j = 0; j != v7; ++j )
    {
      v9 = pack_dd(v11, v12, *(unsigned int *)(*(_QWORD *)(a1 + 32) + 4 * j)) - (_QWORD)v11;
      if ( v9 )
        sub_7BB300(a2, v11, v9);
    }
  }
  return v13[0] - __readfsqword(0x28u);
}

