void *__fastcall sub_458B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  size_t v3; // rax
  size_t v4; // r14
  const void *v5; // rbp
  size_t v6; // rax
  _BYTE v8[5]; // [rsp+3h] [rbp-35h] BYREF
  _QWORD v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(unsigned int *)(a1 + 12);
  v9[0] = __readfsqword(0x28u);
  v3 = sub_93A50(v8, v9, v2) - (_QWORD)v8;
  if ( v3 )
    sub_3DC50(a2, v8, v3);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(const void **)(a1 + 16);
  if ( HIDWORD(v4) )
    sub_3C420();
  v6 = sub_93A50(v8, v9, (unsigned int)v4) - (_QWORD)v8;
  if ( v6 )
    sub_3DC50(a2, v8, v6);
  if ( v4 )
    return sub_3DC50(a2, v5, v4);
  else
    return (void *)(v9[0] - __readfsqword(0x28u));
}

