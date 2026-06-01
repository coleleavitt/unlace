__int64 __fastcall sub_8F0980(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rax
  _BYTE v7[64]; // [rsp-40h] [rbp-B8h] BYREF
  _QWORD v8[8]; // [rsp+0h] [rbp-78h] BYREF
  int v9; // [rsp+40h] [rbp-38h]

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v3 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a2;
    v4 = sub_A1A5A0(v3, 72);
    sub_A1C070(v8, v4);
    v8[7] = *(_QWORD *)(v4 + 56);
    v9 = *(_DWORD *)(v4 + 64);
    sub_A1A5E0(v3, 72);
    v5 = *(_QWORD *)(a1 + 568);
    sub_A1C030(v7, v8[3], (unsigned int)(LODWORD(v8[0]) - v9), (unsigned int)(LODWORD(v8[0]) - v9));
    v6 = sub_A1A4E0(v5, 56);
    sub_A1C070(v6, v7);
    sub_A1C0C0(v7);
    sub_A1C0C0(v8);
  }
  return 1;
}

