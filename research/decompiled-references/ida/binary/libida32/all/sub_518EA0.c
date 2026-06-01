__int64 __fastcall sub_518EA0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // al

  v2 = *a2;
  v3 = *a1;
  v4 = *(_BYTE *)(*a2 + 88) & 0xF;
  if ( (*a1 & 0xFFFFFF0F) != 0 || (_DWORD)v3 == 192 )
  {
    *(_DWORD *)(v2 + 28) = *a1;
    *(_BYTE *)(v2 + 88) = v4 | 0xC0;
    return 0;
  }
  else
  {
    *(_BYTE *)(v2 + 88) = v3 | v4;
    *(_DWORD *)(v2 + 28) = 0;
    return 0;
  }
}

