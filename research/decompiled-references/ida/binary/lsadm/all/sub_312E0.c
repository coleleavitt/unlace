void *__fastcall sub_312E0(__int64 a1, char **a2)
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
    sub_2FC00();
  v4 = sub_28E10(v6, (unsigned __int64)v7, v3) - v6;
  if ( v4 )
    sub_30190(a2, v6, v4);
  if ( v3 )
    return sub_30190(a2, v2, v3);
  else
    return (void *)(v7[0] - __readfsqword(0x28u));
}

