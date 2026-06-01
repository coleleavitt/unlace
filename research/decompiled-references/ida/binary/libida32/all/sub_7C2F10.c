unsigned __int64 __fastcall sub_7C2F10(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  __int64 v4; // rcx
  __int64 v5; // r8
  size_t v6; // rdx
  _QWORD *v7; // rbx
  size_t v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  size_t v11; // rax
  const char *v12; // rsi
  __int64 v14; // [rsp+10h] [rbp-68h]
  _BYTE v15[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _QWORD v16[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = 0;
  v16[0] = __readfsqword(0x28u);
  v14 = *(_QWORD *)(a1 + 24);
  sub_407AD0(a2, v14);
  if ( v14 )
  {
    do
    {
      v7 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 160 * v3);
      v8 = pack_dq(v15, v16, *v7, v4, v5) - (_QWORD)v15;
      if ( v8 )
        sub_7BB300(a2, v15, v8);
      v11 = pack_dq(v15, v16, v7[1], v9, v10) - (_QWORD)v15;
      if ( v11 )
        sub_7BB300(a2, v15, v11);
      v12 = haystack;
      if ( v7[3] )
        v12 = (const char *)v7[2];
      if ( v12 )
      {
        v6 = strlen(v12) + 1;
      }
      else
      {
        v6 = 1;
        v12 = &byte_22CD811;
      }
      ++v3;
      sub_7BB300(a2, v12, v6);
      sub_7C2DA0((__int64)(v7 + 5), a2);
    }
    while ( v14 != v3 );
  }
  return sub_407AD0(a2, *(unsigned __int8 *)(a1 + 40));
}

