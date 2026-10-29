void *__fastcall sub_8DDC20(__int64 a1, __int64 *a2)
{
  const void *v2; // r13
  size_t v3; // rbx
  size_t v4; // rax
  _BYTE v6[5]; // [rsp+3h] [rbp-35h] BYREF
  unsigned __int64 v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(const void **)(a1 + 16);
  v7[0] = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 24);
  if ( HIDWORD(v3) )
    sub_8D5FB0();
  v4 = pack_dd(v6, v7, (unsigned int)v3) - (_QWORD)v6;
  if ( v4 )
    sub_8D77E0(a2, v6, v4);
  if ( v3 )
    return sub_8D77E0(a2, v2, v3);
  else
    return (void *)(v7[0] - __readfsqword(0x28u));
}
