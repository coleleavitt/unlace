__int64 __fastcall sub_FBB790(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdi
  unsigned int *v3; // rdx
  char v4; // al
  __int64 v5; // rcx
  int v6; // eax
  bool v7; // zf

  if ( (a1 & 4) != 0 )
  {
    v2 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  }
  else
  {
    result = 0;
    if ( (a1 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      return result;
    v2 = a1 & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( !v2 )
    return 0;
  v3 = *(unsigned int **)(v2 + 16);
  v4 = *((_BYTE *)v3 + 16);
  v5 = *v3;
  if ( v4 == 105 )
  {
    result = 0;
    if ( v5 == 14 )
    {
      if ( *((_QWORD *)v3 + 2) == 0x6874695774696E69LL && v3[6] == 1836216134 && *((_WORD *)v3 + 14) == 29793 )
      {
        v6 = 0;
        return v6 ^ 1u;
      }
      goto LABEL_14;
    }
    return result;
  }
  if ( v4 > 105 )
  {
    if ( v4 == 108 )
    {
      result = 0;
      if ( v5 == 25 )
      {
        if ( !(*((_QWORD *)v3 + 2) ^ 0x657A696C61636F6CLL | *((_QWORD *)v3 + 3) ^ 0x57676E6972745364LL)
          && *((_QWORD *)v3 + 4) == 0x616D726F46687469LL
          && *((_BYTE *)v3 + 40) == 116 )
        {
          v6 = 0;
          return v6 ^ 1u;
        }
        goto LABEL_14;
      }
      return result;
    }
    if ( v4 == 115 )
    {
      if ( v5 == 23 )
      {
        if ( *((_QWORD *)v3 + 2) ^ 0x7942676E69727473LL | *((_QWORD *)v3 + 3) ^ 0x6E69646E65707041LL
          || v3[8] != 1919895143
          || *((_WORD *)v3 + 18) != 24941
          || *((_BYTE *)v3 + 38) != 116 )
        {
LABEL_14:
          v6 = 1;
          return v6 ^ 1u;
        }
LABEL_20:
        v6 = 0;
        return v6 ^ 1u;
      }
      result = 0;
      if ( v5 == 16 )
        return (*((_QWORD *)v3 + 2) ^ 0x6957676E69727473LL | *((_QWORD *)v3 + 3) ^ 0x74616D726F466874LL) == 0;
      return result;
    }
    return 0;
  }
  v7 = v4 == 97;
  result = 0;
  if ( v7 && v5 == 12 )
  {
    if ( *((_QWORD *)v3 + 2) != 0x6F46646E65707061LL || v3[6] != 1952542066 )
      goto LABEL_14;
    goto LABEL_20;
  }
  return result;
}

