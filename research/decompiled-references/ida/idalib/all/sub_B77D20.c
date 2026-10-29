__int64 __fastcall sub_B77D20(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 *v5; // rdx

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
          return ((unsigned int)(*(__int64 *)(v4 + 16) >> 1) & 3) + 1;
        break;
      case 1LL:
        v5 = (__int64 *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v5 )
          return ((unsigned int)(*v5 >> 1) & 3) + 1;
        break;
      case 3LL:
        return 2 * (unsigned int)((*(_WORD *)(a1 + 30) & 0x180) == 0);
    }
  }
  return result;
}
