__int64 __fastcall sub_4B4AC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx

  v2 = *(_QWORD *)(a1 + 152);
  if ( !v2 )
    return 0;
  v4 = *(__int64 **)(a1 + 144);
  v5 = 0;
  while ( 1 )
  {
    v6 = *v4;
    if ( *(_QWORD *)(*v4 + 8) == *(_QWORD *)(a2 + 8)
      && *(_QWORD *)(v6 + 16) == *(_QWORD *)(a2 + 16)
      && ((*(_DWORD *)(a2 + 24) ^ *(_DWORD *)(v6 + 24)) & 0xFFFF7FFF) == 0
      && *(_BYTE *)(v6 + 28) == *(_BYTE *)(a2 + 28) )
    {
      break;
    }
    ++v5;
    ++v4;
    if ( v5 == v2 )
      return 0;
  }
  memmove(v4, v4 + 1, 8 * (v2 - v5) - 8);
  --*(_QWORD *)(a1 + 152);
  return v6;
}
