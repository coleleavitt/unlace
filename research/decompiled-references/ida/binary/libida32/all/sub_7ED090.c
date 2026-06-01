void *__fastcall sub_7ED090(_QWORD *a1, __int64 *a2, int a3)
{
  __int64 v5; // r13
  size_t v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  size_t v10; // r12
  const void *v11; // rbx
  size_t v12; // rax
  _BYTE v14[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v15[8]; // [rsp+18h] [rbp-40h] BYREF

  v15[0] = __readfsqword(0x28u);
  sub_7EB540((__int64)a1, a2);
  v5 = a1[7];
  v6 = pack_dd(v14, v15, (unsigned int)v5) - (_QWORD)v14;
  if ( v6 )
    sub_7E7BD0(a2, v14, v6);
  if ( v5 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = v7 + a1[6];
      v7 += 176;
      sub_7ECE90(v9, a2, a3);
    }
    while ( v5 != v8 );
  }
  v10 = a1[10];
  v11 = (const void *)a1[9];
  if ( HIDWORD(v10) )
    sub_7E7640();
  v12 = pack_dd(v14, v15, (unsigned int)v10) - (_QWORD)v14;
  if ( v12 )
    sub_7E7BD0(a2, v14, v12);
  if ( v10 )
    return sub_7E7BD0(a2, v11, v10);
  else
    return (void *)(v15[0] - __readfsqword(0x28u));
}

