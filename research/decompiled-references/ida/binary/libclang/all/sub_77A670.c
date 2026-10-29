__int64 __fastcall sub_77A670(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax
  unsigned int *v3; // rax
  __int64 v4; // rcx
  int v5; // edx

  v1 = *(_QWORD *)(a1 + 40) & 7LL;
  if ( (*(_QWORD *)(a1 + 40) & 7) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v2 )
      return (unsigned int)v1;
    v3 = *(unsigned int **)(v2 + 16);
    v4 = *v3;
    if ( !*v3 || *((_BYTE *)v3 + 16) != 67 )
      return (unsigned int)v1;
    switch ( v4 )
    {
      case 24LL:
        if ( !(*((_QWORD *)v3 + 3) ^ 0x6957657461657243LL | *((_QWORD *)v3 + 2) ^ 0x676E697274534643LL)
          && *((_QWORD *)v3 + 4) == 0x74616D726F466874LL )
        {
          v5 = 0;
          goto LABEL_8;
        }
        break;
      case 36LL:
        if ( !(*((_QWORD *)v3 + 3) ^ 0x6957657461657243LL | *((_QWORD *)v3 + 2) ^ 0x676E697274534643LL)
          && !(*((_QWORD *)v3 + 5) ^ 0x6D75677241646E41LL | *((_QWORD *)v3 + 4) ^ 0x74616D726F466874LL)
          && v3[12] == 1937010277 )
        {
          v5 = 0;
          goto LABEL_8;
        }
        break;
      case 20LL:
        if ( !(*((_QWORD *)v3 + 3) ^ 0x6F46646E65707041LL | *((_QWORD *)v3 + 2) ^ 0x676E697274534643LL)
          && v3[8] == 1952542066 )
        {
          v5 = 0;
          goto LABEL_8;
        }
        break;
      case 32LL:
        if ( !(*((_QWORD *)v3 + 3) ^ 0x6F46646E65707041LL | *((_QWORD *)v3 + 2) ^ 0x676E697274534643LL)
          && !(*((_QWORD *)v3 + 5) ^ 0x73746E656D756772LL | *((_QWORD *)v3 + 4) ^ 0x41646E4174616D72LL) )
        {
          v5 = 0;
          goto LABEL_8;
        }
        break;
      default:
        return (unsigned int)v1;
    }
    v5 = 1;
LABEL_8:
    LODWORD(v1) = 2 * (v5 ^ 1);
    return (unsigned int)v1;
  }
  return 0;
}

