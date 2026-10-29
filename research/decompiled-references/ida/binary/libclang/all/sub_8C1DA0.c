__int64 __fastcall sub_8C1DA0(__int64 a1)
{
  __int64 i; // rdx
  int v2; // eax
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  __int64 result; // rax

  for ( i = *(_QWORD *)(a1 + 24); (*(_WORD *)i & 0x1FF) == 0x50; i = *(_QWORD *)(i + 16) )
  {
    v2 = (*(_WORD *)(i + 2) >> 3) & 0x7F;
    if ( (unsigned int)(v2 - 7) > 1 && v2 != 5 )
      break;
  }
  v3 = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(*(_QWORD *)v3 + 17LL) & 4) == 0
    || (result = 0, *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41) )
  {
    if ( *(_BYTE *)(v4 + 16) == 41 )
      return *(_QWORD *)(v4 + 32);
    else
      return *(_QWORD *)(sub_B0D320(v4) + 32);
  }
  return result;
}

