__int64 __fastcall sub_8EAB10(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // r12
  __int64 v5; // r13
  unsigned int v6; // eax

  v2 = 1;
  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return v2;
  v4 = *(_QWORD *)(a1 + 568);
  v5 = *(_QWORD *)(a1 + 792);
  *(_QWORD *)(a1 + 800) = *a2;
  v2 = *(unsigned __int8 *)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  if ( (_BYTE)v2 )
    return v2;
  v6 = sub_A1A260(*(_QWORD *)(a1 + 584), v5);
  sub_A2E050(a1 + 384, v6, 2180, 0);
  return v2;
}

