__int64 __fastcall sub_949DB0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  char v5; // r13
  __int64 v6; // r13
  __int64 v7; // rax
  char v8; // [rsp+Fh] [rbp-69h] BYREF
  _BYTE v9[104]; // [rsp+10h] [rbp-68h] BYREF

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a2;
  v5 = *(_BYTE *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  v8 = v5;
  v6 = *(_QWORD *)(a1 + 568);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v9, v7);
  sub_A1A5E0(v6, 56);
  LODWORD(v4) = sub_9497A0(a1 + 384, v4, &v8, (__int64)v9, 1);
  sub_A1C0C0(v9);
  return (unsigned int)v4;
}

