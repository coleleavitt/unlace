__int64 __fastcall sub_9F2D50(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rbx
  int *v5; // rax
  int *v7; // rax

  v2 = *(_QWORD *)(a1 + 776);
  if ( v2 )
  {
    if ( a2 >= *(_DWORD *)(v2 - 4) )
      v2 = 0;
    else
      v2 = *(_QWORD *)(v2 + 8LL * a2);
  }
  v3 = *(_DWORD *)(v2 + 8);
  v4 = v2 + 120;
  if ( (*(_BYTE *)(v2 + 112) & 1) != 0 )
  {
    v5 = sub_9AD4F0(a1, v3);
    if ( !sub_33D280(v4, (__int64)v5) )
      return 1;
  }
  else
  {
    v7 = sub_9AD4F0(a1, v3);
    if ( !sub_33D280((__int64)v7, v4) )
      return 1;
  }
  return 0xFFFFFFFFLL;
}

