bool __fastcall sub_1952E0(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // ecx
  __int64 v4; // rax

  v2 = *(_DWORD *)(a1 + 240);
  if ( !v2 )
    v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 64LL) + 1504LL) + 80LL);
  v3 = *(_DWORD *)(a2 + 68);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    return (unsigned int)sub_194D60(a2 + 48, v4, 0, v2 - v3) == 1;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 56) )
    return (unsigned int)sub_194D60(a2 + 48, v4, 0, v2 - v3) == 1;
  else
    return (unsigned int)sub_194D60(a2 + 48, v4, -v2, -v3) == 1;
}
