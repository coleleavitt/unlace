__int64 __fastcall sub_8F9F20(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11[13]; // [rsp+0h] [rbp-68h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return v3;
  v5 = *(_QWORD *)(a1 + 792);
  v6 = a1 + 384;
  *(_QWORD *)(a1 + 800) = *a3;
  v7 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
  if ( (unsigned __int8)sub_9D4FE0(a1 + 384, v5, v7, 2) && (unsigned __int8)sub_9D7120(v6, v5, v7, 2) )
  {
    sub_A1C030(v11, *(_QWORD *)(v7 + 24), (unsigned int)(a2 + *(_DWORD *)v7), (unsigned int)(a2 + *(_DWORD *)v7));
    v3 = sub_9E4580(v6, v5, v11, 0);
    if ( (_BYTE)v3 )
    {
      v8 = *(_QWORD *)(a1 + 568);
      v9 = sub_8F9CB0(v11);
      v10 = sub_A1A4E0(v8, 56);
      sub_A1BFE0(v10, v9);
    }
    sub_A1C0C0(v11);
    return v3;
  }
  return 0;
}

