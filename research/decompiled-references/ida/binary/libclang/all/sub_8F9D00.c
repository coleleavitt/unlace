__int64 __fastcall sub_8F9D00(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rax

  v2 = 1;
  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return v2;
  v4 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a2;
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
  v2 = sub_9E4580(a1 + 384, v4, v5, 0);
  if ( !(_BYTE)v2 )
    return v2;
  if ( *(_DWORD *)(v5 + 48) )
    return 0;
  v6 = *(_QWORD *)(a1 + 568);
  v7 = sub_8F9CB0((__int64 *)v5);
  v8 = sub_A1A4E0(v6, 56);
  sub_A1BFE0(v8, v7);
  return v2;
}

