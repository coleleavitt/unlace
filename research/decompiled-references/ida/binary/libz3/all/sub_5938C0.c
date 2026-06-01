__int64 __fastcall sub_5938C0(__int64 a1)
{
  unsigned int i; // ecx
  __int64 v3; // rax
  bool (__fastcall *v4)(__int64); // rax
  __int64 v5; // rdi
  int v6; // r8d
  unsigned int j; // ecx
  unsigned int v8; // ecx
  __int64 result; // rax

  for ( i = *(_DWORD *)(a1 + 24) + 1; ; i = v8 + 1 )
  {
    v3 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 24) = i;
    v4 = *(bool (__fastcall **)(__int64))(v3 + 16);
    if ( v4 == sub_5936A0 )
      break;
    if ( v4(a1) )
      goto LABEL_12;
    v8 = *(_DWORD *)(a1 + 24);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 4LL * (v8 >> 5)) & (1 << v8)) != 0 )
      goto LABEL_12;
  }
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v5 + 40) != i && (*(_DWORD *)(*(_QWORD *)(v5 + 48) + 4LL * (i >> 5)) & (1 << i)) == 0 )
  {
    v6 = *(_DWORD *)(v5 + 40);
    for ( j = i + 1; ; ++j )
    {
      *(_DWORD *)(a1 + 24) = j;
      if ( j == v6 || (*(_DWORD *)(*(_QWORD *)(v5 + 48) + 4LL * (j >> 5)) & (1 << j)) != 0 )
        break;
    }
  }
LABEL_12:
  result = *(_QWORD *)(a1 + 48);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

