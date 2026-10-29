unsigned __int64 __fastcall sub_7753D0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  const char *v5; // rbp
  size_t v6; // rdx
  size_t v7; // rax
  size_t v8; // rax
  __int64 v10; // rax
  _BYTE v11[5]; // [rsp+Eh] [rbp-2Ah] BYREF
  _BYTE v12[5]; // [rsp+13h] [rbp-25h] BYREF
  unsigned __int64 v13[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = a1[1];
  v13[0] = __readfsqword(0x28u);
  v4 = *a1;
  if ( a1[2] < (unsigned __int64)(v2 + 1) )
  {
    v10 = qvector_reserve(a1, v4, v2 + 1, 1);
    *a1 = v10;
    v4 = v10;
    v2 = a1[1];
  }
  *(_BYTE *)(v4 + v2) = 1;
  v5 = haystack;
  ++a1[1];
  if ( *(_QWORD *)(a2 + 8) )
    v5 = *(const char **)a2;
  if ( v5 )
  {
    v6 = strlen(v5) + 1;
  }
  else
  {
    v6 = 1;
    v5 = &byte_22F0C30;
  }
  sub_773F00(a1, v5, v6);
  v7 = pack_dq(v11, v13, *(_QWORD *)(a2 + 160)) - (_QWORD)v11;
  if ( v7 )
    sub_773F00(a1, v11, v7);
  v8 = pack_dd(v11, v12, *(_DWORD *)(a2 + 168) & 0xFFFFFFFC) - (_QWORD)v11;
  if ( v8 )
    sub_773F00(a1, v11, v8);
  return sub_775220(a1, a2);
}
