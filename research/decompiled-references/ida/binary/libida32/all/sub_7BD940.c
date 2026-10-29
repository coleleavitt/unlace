unsigned __int64 __fastcall sub_7BD940(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 i; // rbp
  unsigned int *v4; // r15
  size_t v5; // rax
  size_t v6; // r14
  const void *v7; // r15
  size_t v8; // rax
  _BYTE v10[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v11[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v11[0] = __readfsqword(0x28u);
  sub_407AD0(a2, v2);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = (unsigned int *)(*(_QWORD *)(a1 + 16) + 32 * i);
      v5 = pack_dd(v10, v11, *v4) - (_QWORD)v10;
      if ( v5 )
        sub_7BB300(a2, v10, v5);
      v6 = *((_QWORD *)v4 + 2);
      v7 = *((const void **)v4 + 1);
      if ( v6 > 0xFFFFFFFF )
      {
        if ( !under_debugger )
          interr(5);
        BUG();
      }
      v8 = pack_dd(v10, v11, (unsigned int)v6) - (_QWORD)v10;
      if ( v8 )
        sub_7BB300(a2, v10, v8);
      if ( v6 )
        sub_7BB300(a2, v7, v6);
    }
  }
  return sub_407AD0(a2, *(_DWORD *)(a1 + 40));
}

