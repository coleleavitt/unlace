unsigned __int64 __fastcall sub_754F50(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  const char *v5; // rbp
  size_t v6; // rdx
  size_t v7; // rax
  size_t v8; // rax
  __int64 v10; // rax
  _BYTE v11[5]; // [rsp+3h] [rbp-35h] BYREF
  _QWORD v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = a1[1];
  v12[0] = __readfsqword(0x28u);
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
    v5 = &byte_22CD811;
  }
  sub_753A60(a1, v5, v6);
  v7 = pack_dd(v11, v12, *(unsigned int *)(a2 + 160)) - (_QWORD)v11;
  if ( v7 )
    sub_753A60(a1, v11, v7);
  v8 = pack_dd(v11, v12, *(_DWORD *)(a2 + 164) & 0xFFFFFFFC) - (_QWORD)v11;
  if ( v8 )
    sub_753A60(a1, v11, v8);
  return sub_754DA0(a1, a2);
}

