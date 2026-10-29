__int64 __fastcall sub_8EB910(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r13
  __int64 v4; // rbp
  unsigned int v5; // ebp
  __int64 v6; // rax
  _BYTE v7[56]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int8 v8; // [rsp+38h] [rbp-80h]
  _BYTE v9[56]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v10; // [rsp+78h] [rbp-40h]
  int v11; // [rsp+80h] [rbp-38h]

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  v3 = *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a1 + 800) = *a2;
  v4 = sub_A1A5A0(v3, 72);
  sub_A1C070(v9, v4);
  v10 = *(_QWORD *)(v4 + 56);
  v11 = *(_DWORD *)(v4 + 64);
  sub_A1A5E0(v3, 72);
  sub_A2E2D0(v7, v9, *(_QWORD *)(a1 + 576));
  v5 = v8;
  if ( v8 )
  {
    v6 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
    sub_A1BFE0(v6, v7);
    if ( v8 )
    {
      v8 = 0;
      sub_A1C0C0(v7);
    }
  }
  sub_A1C0C0(v9);
  return v5;
}

