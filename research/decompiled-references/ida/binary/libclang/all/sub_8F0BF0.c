__int64 __fastcall sub_8F0BF0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 v6; // rax
  _BYTE v7[56]; // [rsp-38h] [rbp-78h] BYREF
  __int64 v8; // [rsp+0h] [rbp-40h]
  int v9; // [rsp+8h] [rbp-38h]

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v3 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a2;
    v4 = sub_A1A5A0(v3, 72);
    sub_A1C070(v7, v4);
    v8 = *(_QWORD *)(v4 + 56);
    v9 = *(_DWORD *)(v4 + 64);
    sub_A1A5E0(v3, 72);
    v5 = sub_8CB420(*(_QWORD *)(a1 + 576), v8);
    v6 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
    *(_QWORD *)v6 = v5;
    *(_QWORD *)(v6 + 8) = 0;
    *(_BYTE *)(v6 + 16) = 1;
    sub_A1C0C0(v7);
  }
  return 1;
}

