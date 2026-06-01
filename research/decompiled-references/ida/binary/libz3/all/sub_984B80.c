__int64 __fastcall sub_984B80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _DWORD *v4; // rdx
  _DWORD *v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rdi

  v2 = *(_QWORD *)(a1 + 328);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  sub_984A90(a1, a2, a1 + 328);
  sub_9827B0(a1, 0);
  v4 = *(_DWORD **)(a1 + 328);
  if ( !v4 )
    return 0;
  v5 = &v4[*(v4 - 1)];
  if ( v5 == v4 )
    return 0;
  v6 = 0;
  do
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL);
    if ( v6 < (*(_DWORD *)(v7 + 16LL * (*v4 >> 1) + 8) & 0xFFFFFFu) )
      v6 = *(_DWORD *)(v7 + 16LL * (*v4 >> 1) + 8) & 0xFFFFFF;
    ++v4;
  }
  while ( v4 != v5 );
  return v6;
}

