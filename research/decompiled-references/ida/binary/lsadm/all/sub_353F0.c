void *__fastcall sub_353F0(_QWORD *a1, char **a2, int a3)
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
  sub_338A0((__int64)a1, a2);
  v5 = a1[7];
  v6 = sub_28E10(v14, (unsigned __int64)v15, v5) - v14;
  if ( v6 )
    sub_30190(a2, v14, v6);
  if ( v5 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = v7 + a1[6];
      v7 += 176;
      sub_351F0(v9, a2, a3);
    }
    while ( v5 != v8 );
  }
  v10 = a1[10];
  v11 = (const void *)a1[9];
  if ( HIDWORD(v10) )
    sub_2FC00();
  v12 = sub_28E10(v14, (unsigned __int64)v15, v10) - v14;
  if ( v12 )
    sub_30190(a2, v14, v12);
  if ( v10 )
    return sub_30190(a2, v11, v10);
  else
    return (void *)(v15[0] - __readfsqword(0x28u));
}

