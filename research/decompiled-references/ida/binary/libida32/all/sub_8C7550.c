unsigned __int64 __fastcall sub_8C7550(_QWORD *a1, __int64 *a2)
{
  const char *v3; // rsi
  const char *v4; // rsi
  const char *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  size_t v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  size_t v11; // rax
  _BYTE v13[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v14[6]; // [rsp+18h] [rbp-30h] BYREF

  v14[0] = __readfsqword(0x28u);
  sub_8C7370((__int64)a1, a2);
  v3 = haystack;
  if ( a1[11] )
    v3 = (const char *)a1[10];
  sub_62C910(a2, v3);
  v4 = haystack;
  if ( a1[14] )
    v4 = (const char *)a1[13];
  sub_62C910(a2, v4);
  v5 = haystack;
  if ( a1[17] )
    v5 = (const char *)a1[16];
  sub_62C910(a2, v5);
  v8 = pack_dq(v13, v14, a1[19], v6, v7) - (_QWORD)v13;
  if ( v8 )
    sub_8B3AA0(a2, v13, v8);
  v11 = pack_dq(v13, v14, a1[20], v9, v10) - (_QWORD)v13;
  if ( v11 )
    sub_8B3AA0(a2, v13, v11);
  return v14[0] - __readfsqword(0x28u);
}

