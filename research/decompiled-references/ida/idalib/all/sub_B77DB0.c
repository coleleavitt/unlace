__int64 __fastcall sub_B77DB0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 *v6; // rdx

  v1 = *(_QWORD *)(a1 + 152);
  result = 0;
  if ( v1 )
  {
    v3 = (v1 >> 1) & 3;
    switch ( v3 )
    {
      case 2LL:
        v4 = v1 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v4 )
        {
          if ( (*(_BYTE *)(v4 + 8) & 4) != 0 && (v5 = *(__int64 **)(v4 + 48)) != nullptr )
            return ((unsigned int)(*v5 >> 1) & 3) + 1;
          else
            return ((unsigned int)(*(__int64 *)(v4 + 16) >> 1) & 3) + 1;
        }
        break;
      case 1LL:
        v6 = (__int64 *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v6 )
          return ((unsigned int)(*v6 >> 1) & 3) + 1;
        break;
      case 3LL:
        return 2 * (unsigned int)((*(_WORD *)(a1 + 30) & 0x180) == 0);
    }
  }
  return result;
}
