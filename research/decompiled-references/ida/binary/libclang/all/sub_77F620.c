__int64 __fastcall sub_77F620(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v2 = *(_QWORD *)v1;
  if ( *(_BYTE *)(*(_QWORD *)v1 + 16LL) == 26 )
    return (unsigned __int16)(*(_DWORD *)(v2 + 20) >> 6);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
    return 0;
  v4 = sub_B0D320(v2);
  if ( v4 )
    return (unsigned __int16)(*(_DWORD *)(v4 + 20) >> 6);
  else
    return 0;
}

