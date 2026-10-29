__int64 __fastcall sub_963AC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  _QWORD v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = 0;
  sub_B52330(a2);
  if ( v6 == 2 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + 8LL);
    v8 = *(_QWORD *)(v7 + 48);
    if ( sub_9634C0(v8, a2, v3, v4, v5) )
    {
      v14[0] = a1;
      v11 = sub_963580(v14, v7, 0, v9, v10);
      v12 = sub_BE66A0(v14[0], v8, 4, v11, 0, 0, 0);
      return sub_BE8290(a1, v12, 0, 0, *(_QWORD *)(a1 + 18632), 0, 0, 0, 0, 0);
    }
  }
  return v2;
}

