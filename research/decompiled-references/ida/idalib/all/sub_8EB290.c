unsigned __int64 __fastcall sub_8EB290(_QWORD *a1, __int64 *a2)
{
  const char *v3; // rsi
  const char *v4; // rsi
  const char *v5; // rsi
  size_t v6; // rax
  size_t v7; // rax
  _BYTE v9[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v10[6]; // [rsp+18h] [rbp-30h] BYREF

  v10[0] = __readfsqword(0x28u);
  sub_8EB0B0((__int64)a1, a2);
  v3 = haystack;
  if ( a1[11] )
    v3 = (const char *)a1[10];
  sub_649F10(a2, v3);
  v4 = haystack;
  if ( a1[14] )
    v4 = (const char *)a1[13];
  sub_649F10(a2, v4);
  v5 = haystack;
  if ( a1[17] )
    v5 = (const char *)a1[16];
  sub_649F10(a2, v5);
  v6 = pack_dq(v9, v10, a1[19]) - (_QWORD)v9;
  if ( v6 )
    sub_8D77E0(a2, v9, v6);
  v7 = pack_dq(v9, v10, a1[20]) - (_QWORD)v9;
  if ( v7 )
    sub_8D77E0(a2, v9, v7);
  return v10[0] - __readfsqword(0x28u);
}
