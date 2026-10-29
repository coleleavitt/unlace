unsigned __int64 __fastcall sub_8DE7F0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  __int64 i; // r15
  size_t v5; // rax
  _BYTE v7[5]; // [rsp+3h] [rbp-45h] BYREF
  _QWORD v8[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v8[0] = __readfsqword(0x28u);
  v3 = pack_dd(v7, v8, (unsigned int)v2) - (_QWORD)v7;
  if ( v3 )
    sub_8D77E0(a2, v7, v3);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v5 = pack_dd(v7, v8, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4 * i)) - (_QWORD)v7;
      if ( v5 )
        sub_8D77E0(a2, v7, v5);
    }
  }
  return v8[0] - __readfsqword(0x28u);
}
