__int64 __fastcall sub_8F28C0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  unsigned __int8 v8; // [rsp+1h] [rbp-69h]
  _BYTE v9[104]; // [rsp+2h] [rbp-68h] BYREF

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a2;
  v5 = sub_A1A5A0(v3, 56);
  sub_A1C070(v9, v5);
  sub_A1A5E0(v3, 56);
  v6 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
  v7 = sub_9E4580(a1 + 384, v4, v9, 0);
  if ( v7 )
    v7 = sub_98A3B0(a1 + 384, v4, v9, v6);
  v8 = v7;
  sub_A1C0C0(v9);
  return v8;
}

