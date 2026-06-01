unsigned __int64 __fastcall sub_7E62A0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  size_t v4; // rdx
  _QWORD *v5; // rbx
  size_t v6; // rax
  size_t v7; // rax
  const char *v8; // rsi
  __int64 v10; // [rsp+10h] [rbp-68h]
  _BYTE v11[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _QWORD v12[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0;
  v12[0] = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 24);
  sub_3A0970(a2, v10);
  if ( v10 )
  {
    do
    {
      v5 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 160 * v3);
      v6 = pack_dq(v11, v12, *v5) - (_QWORD)v11;
      if ( v6 )
        sub_7DE6E0(a2, v11, v6);
      v7 = pack_dq(v11, v12, v5[1]) - (_QWORD)v11;
      if ( v7 )
        sub_7DE6E0(a2, v11, v7);
      v8 = haystack;
      if ( v5[3] )
        v8 = (const char *)v5[2];
      if ( v8 )
      {
        v4 = strlen(v8) + 1;
      }
      else
      {
        v4 = 1;
        v8 = &byte_22F0C30;
      }
      ++v3;
      sub_7DE6E0(a2, v8, v4);
      sub_7E6130((__int64)(v5 + 5), a2);
    }
    while ( v10 != v3 );
  }
  return sub_3A0970(a2, *(unsigned __int8 *)(a1 + 40));
}
