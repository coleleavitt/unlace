unsigned __int64 __fastcall sub_45440(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  char v3; // r12
  __int64 v5; // rsi
  size_t v6; // rax
  __int64 v8; // rax
  _BYTE v9[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v10[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = a2[1];
  v3 = *(_BYTE *)(a1 + 9);
  v10[0] = __readfsqword(0x28u);
  v5 = *a2;
  if ( a2[2] < (unsigned __int64)(v2 + 1) )
  {
    v8 = sub_96080(a2, v5, v2 + 1, 1);
    *a2 = v8;
    v5 = v8;
    v2 = a2[1];
  }
  *(_BYTE *)(v5 + v2) = v3;
  ++a2[1];
  v6 = sub_93B90(v9, v10, *(_QWORD *)(a1 + 16) + 1LL) - (_QWORD)v9;
  if ( v6 )
    sub_3DC50(a2, v9, v6);
  return v10[0] - __readfsqword(0x28u);
}

