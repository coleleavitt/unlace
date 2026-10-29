__int64 __fastcall sub_B97260(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 *v3; // rdx

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 60 <= 1 )
    return *(_BYTE *)(a1 + 180) & 7;
  v2 = *(_QWORD *)(a1 + 136);
  result = 0;
  if ( v2 && (v2 & 4) != 0 )
  {
    v3 = (__int64 *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v3 )
      return ((unsigned int)(*v3 >> 1) & 3) + 1;
  }
  return result;
}
