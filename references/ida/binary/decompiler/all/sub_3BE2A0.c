__int64 __fastcall sub_3BE2A0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = *(__int64 **)(a2 + 32);
  if ( *(_DWORD *)(a2 + 80) == 3 )
  {
    v4 = *v3;
  }
  else
  {
    v6 = sub_3894C0(v3, a2 + 80);
    if ( !v6 )
      return 0;
    v7 = *(_QWORD *)(v6 + 24);
    if ( *(_DWORD *)(v7 + 8) != 64 )
      return 0;
    v4 = *(_QWORD *)(v7 + 24);
    if ( v4 == -1 )
      return 0;
  }
  if ( sub_3A8B80(0, v4, 1) )
  {
    sub_3BE0D0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL), v4);
    return 1;
  }
  return 0;
}
