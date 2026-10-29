unsigned __int64 __fastcall sub_101FA90(__int64 a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edx
  int v4; // esi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 i; // rax
  unsigned __int64 v8; // rax
  char v10[9]; // [rsp+Fh] [rbp-9h] BYREF

  v2 = a2 & 0x7FFFFFFF;
  v3 = v2;
  if ( v2 < *(_DWORD *)(a1 + 476) || v2 >= *(_DWORD *)(a1 + 480) )
  {
    v4 = 0;
    if ( v3 )
    {
      if ( v3 < *(_DWORD *)(a1 + 312) )
      {
        v4 = sub_101D3D0(a1, v3);
      }
      else if ( v3 >= *(_DWORD *)(a1 + 316) )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 24LL))(*(_QWORD *)(a1 + 464), v3);
      }
    }
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 472);
  }
  v10[0] = 0;
  v5 = sub_101FA50(a1, v4, v10);
  if ( v10[0] )
    return 0;
  if ( !v5 )
    return 0;
  if ( *(char *)(v5 + 3) < 0 )
    return 0;
  v6 = *(_QWORD *)((*(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
  if ( !v6 )
    return 0;
  for ( i = *(_QWORD *)(v6 + 8); i; i = *(_QWORD *)(v8 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v8 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v8 )
      break;
    v6 = v8;
  }
  return v6 + 32;
}
