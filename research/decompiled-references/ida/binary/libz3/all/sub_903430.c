__int64 __fastcall sub_903430(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // eax
  char v4; // dl
  __int64 v6; // rax

  v1 = *(_QWORD *)(a1 + 256);
  if ( !v1 || *(_DWORD *)(a1 + 264) >= *(_DWORD *)(v1 - 4) )
  {
    v6 = *(_QWORD *)(a1 + 336);
    if ( !v6 || *(_DWORD *)(a1 + 344) >= *(_DWORD *)(v6 - 4) )
      return 0;
  }
  v2 = *(_QWORD *)(a1 + 16);
  v3 = sub_966440(a1, *(_QWORD *)(a1 + 376));
  v4 = *(_BYTE *)(*(_QWORD *)(v2 + 8848) + (v3 ^ 1u));
  if ( v4 == -1 )
  {
    if ( *(_QWORD *)(v2 + 8984) == qword_1C7EC50 && !*(_BYTE *)(v2 + 2416) )
    {
      *(_QWORD *)(v2 + 8984) = 2;
      *(_DWORD *)(v2 + 8992) = v3;
    }
  }
  else if ( !v4 )
  {
    sub_8F28B0(v2, v3 ^ 1, 2, 0);
  }
  return 0;
}

