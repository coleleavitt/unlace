unsigned __int64 __fastcall sub_8BB290(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  char v6; // r12
  __int64 v8; // rsi
  size_t v9; // rax
  __int64 v11; // rax
  _BYTE v12[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v13[4]; // [rsp+18h] [rbp-20h] BYREF

  v5 = a2[1];
  v6 = *(_BYTE *)(a1 + 9);
  v13[0] = __readfsqword(0x28u);
  v8 = *a2;
  if ( a2[2] < (unsigned __int64)(v5 + 1) )
  {
    v11 = qvector_reserve(a2, v8, v5 + 1, 1);
    *a2 = v11;
    v8 = v11;
    v5 = a2[1];
  }
  *(_BYTE *)(v8 + v5) = v6;
  ++a2[1];
  v9 = pack_dq(v12, v13, *(_QWORD *)(a1 + 16) + 1LL, a4, a5) - (_QWORD)v12;
  if ( v9 )
    sub_8B3AA0(a2, v12, v9);
  return v13[0] - __readfsqword(0x28u);
}

