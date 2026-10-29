unsigned __int64 __fastcall sub_7E87E0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  size_t v7; // rax
  __int64 v8; // rax
  char v9; // bp
  __int64 v10; // rsi
  __int64 v12; // rax
  _BYTE v13[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v14[4]; // [rsp+18h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(a1 + 16);
  v14[0] = __readfsqword(0x28u);
  v7 = pack_dq(v13, v14, v5, a4, a5) - (_QWORD)v13;
  if ( v7 )
    sub_7E7BD0(a2, v13, v7);
  v8 = a2[1];
  v9 = *(_BYTE *)(a1 + 24);
  v10 = *a2;
  if ( a2[2] < (unsigned __int64)(v8 + 1) )
  {
    v12 = qvector_reserve(a2, v10, v8 + 1, 1);
    *a2 = v12;
    v10 = v12;
    v8 = a2[1];
  }
  *(_BYTE *)(v10 + v8) = v9;
  ++a2[1];
  return v14[0] - __readfsqword(0x28u);
}

