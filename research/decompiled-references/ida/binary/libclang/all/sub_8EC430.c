__int64 __fastcall sub_8EC430(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v5; // rax

  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v3 = *(_QWORD *)(a1 + 568);
    *(_QWORD *)(a1 + 800) = *a2;
    v4 = sub_A1A5A0(v3, 56);
    v5 = sub_A1A4E0(v3, 56);
    sub_A1BFE0(v5, v4);
  }
  return 1;
}

