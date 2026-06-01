__int64 __fastcall sub_A5E250(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 result; // rax
  int *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int8 v9; // bl
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // esi
  unsigned int v13; // eax

  v2 = *(_QWORD *)(a1 + 32);
  if ( !v2 )
    return 0;
  v3 = *(unsigned int *)(v2 - 4);
  if ( (int)v3 <= 0 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4 * v4 + 3) & 0x40) != 0 )
    {
      v6 = sub_9AD4F0(a1, v4);
      if ( *v6 || (v6[13] & 1) != 0 || v6[12] != 1 || v6[16] )
        break;
    }
    if ( v3 == ++v4 )
      return 0;
  }
  result = 2;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 464) + 37LL) )
  {
    if ( !(unsigned __int8)sub_A0B560(a1) )
      return 1;
    v7 = *(_QWORD *)(a1 + 16);
    if ( qword_1C7EC98 != *(_QWORD *)(v7 + 8984) )
      return 1;
    if ( *(_BYTE *)(v7 + 2416) )
      return 1;
    sub_A56B20((_QWORD *)a1);
    ++*(_DWORD *)(a1 + 352);
    sub_9FD760((_QWORD *)a1);
    sub_A562B0((_QWORD *)a1, a2);
    v8 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v8 + 8984) != qword_1C7EC98 )
      return 1;
    v9 = *(_BYTE *)(v8 + 2416);
    if ( v9 )
      return 1;
    if ( (unsigned int)sub_A53CE0(a1) != -1 )
    {
      v10 = *(_QWORD *)(a1 + 464);
      v11 = *(_DWORD *)(a1 + 1120) + 1;
      *(_DWORD *)(a1 + 1120) = v11;
      if ( v11 % *(_DWORD *)(v10 + 84) )
      {
        if ( *(_BYTE *)(v10 + 88) && (unsigned __int8)sub_A5C060(a1) )
        {
          ++*(_DWORD *)(a1 + 444);
        }
        else
        {
          v12 = sub_A53CE0(a1);
          if ( v12 == -1 )
            goto LABEL_23;
          sub_9ADF90(a1, v12);
          ++*(_DWORD *)(a1 + 448);
        }
      }
      else
      {
        sub_9FD4A0((_QWORD *)a1);
        if ( (unsigned __int8)sub_A55F80(a1, a2) )
        {
          v13 = sub_A53CE0(a1);
          if ( v13 == -1 )
          {
LABEL_23:
            result = 0;
            if ( !*(_BYTE *)(a1 + 1376) )
              return *(unsigned __int8 *)(a1 + 1377);
            return result;
          }
          sub_A59C00(
            a1,
            *(_QWORD *)(a1 + 696) + 24LL * (*(_DWORD *)(*(_QWORD *)(a1 + 720) + 4LL * v13) & 0xFFFFFFF),
            a2);
        }
        else
        {
          sub_9CFB40(a1);
        }
      }
      return 1;
    }
    ++*(_DWORD *)(a1 + 356);
    if ( !*(_BYTE *)(a1 + 1376) )
      return *(unsigned __int8 *)(a1 + 1377);
    return v9;
  }
  return result;
}

