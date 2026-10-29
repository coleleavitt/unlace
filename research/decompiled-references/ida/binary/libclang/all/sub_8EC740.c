__int64 __fastcall sub_8EC740(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  *(_QWORD *)(a1 + 800) = *a2;
  v3 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
  v4 = v3;
  if ( !*(_DWORD *)(v3 + 48) && *(_QWORD *)(v3 + 24) )
  {
    if ( *(_DWORD *)(v3 + 32) )
    {
      sub_A1DB00(v3);
      sub_A1C490(v4);
    }
  }
  return 1;
}

