unsigned __int64 __fastcall sub_7E0AF0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 i; // r15
  size_t v4; // rax
  _BYTE v6[5]; // [rsp+3h] [rbp-45h] BYREF
  unsigned __int64 v7[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v7[0] = __readfsqword(0x28u);
  sub_3A0970(a2, v2);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = pack_dd(v6, v7, *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4 * i)) - (_QWORD)v6;
      if ( v4 )
        sub_7DE6E0(a2, v6, v4);
    }
  }
  return v7[0] - __readfsqword(0x28u);
}
