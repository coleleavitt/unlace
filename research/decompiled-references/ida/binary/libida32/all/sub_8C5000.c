unsigned __int64 __fastcall sub_8C5000(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  size_t v4; // rax
  __int64 i; // r14
  __int64 v6; // rdi
  _BYTE v8[5]; // [rsp+3h] [rbp-35h] BYREF
  unsigned __int64 v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v9[0] = __readfsqword(0x28u);
  v4 = pack_dd(v8, v9, (unsigned int)v3) - (_QWORD)v8;
  if ( v4 )
    sub_8B3AA0(a2, v8, v4);
  if ( v3 )
  {
    for ( i = 0; i != v3; ++i )
    {
      v6 = 3 * i;
      sub_8C4F00(*(_QWORD *)(a1 + 16) + 16 * v6, a2);
    }
  }
  return v9[0] - __readfsqword(0x28u);
}

