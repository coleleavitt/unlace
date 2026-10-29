unsigned __int64 __fastcall sub_7BD7A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 i; // r15
  size_t v4; // rax
  __int64 v5; // rbx
  __int64 j; // rbp
  unsigned int *v7; // r14
  size_t v8; // rax
  size_t v9; // r15
  const void *v10; // r14
  size_t v11; // rax
  _BYTE v13[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v14[8]; // [rsp+18h] [rbp-40h] BYREF

  v14[0] = __readfsqword(0x28u);
  sub_407AD0(a2, *(_DWORD *)(a1 + 12));
  v2 = *(_QWORD *)(a1 + 24);
  sub_407AD0(a2, v2);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = pack_dd(v13, v14, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4 * i)) - (_QWORD)v13;
      if ( v4 )
        sub_7BB300(a2, v13, v4);
    }
  }
  v5 = *(_QWORD *)(a1 + 48);
  sub_407AD0(a2, v5);
  if ( v5 )
  {
    for ( j = 0; j != v5; ++j )
    {
      v7 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 32 * j);
      v8 = pack_dd(v13, v14, *v7) - (_QWORD)v13;
      if ( v8 )
        sub_7BB300(a2, v13, v8);
      v9 = *((_QWORD *)v7 + 2);
      v10 = *((const void **)v7 + 1);
      if ( v9 > 0xFFFFFFFF )
      {
        if ( !under_debugger )
          interr(5);
        BUG();
      }
      v11 = pack_dd(v13, v14, (unsigned int)v9) - (_QWORD)v13;
      if ( v11 )
        sub_7BB300(a2, v13, v11);
      if ( v9 )
        sub_7BB300(a2, v10, v9);
    }
  }
  return v14[0] - __readfsqword(0x28u);
}

