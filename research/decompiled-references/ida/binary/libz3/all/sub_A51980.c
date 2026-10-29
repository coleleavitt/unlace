__int64 __fastcall sub_A51980(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rax
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
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4 * v4 + 3) & 0x40) != 0 )
    {
      v6 = sub_999800(a1, v4);
      if ( (*(_BYTE *)(v6 + 20) & 1) != 0 || *(_DWORD *)(v6 + 16) != 1 )
        break;
    }
    if ( v3 == ++v4 )
      return 0;
  }
  result = 2;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 336) + 37LL) )
  {
    if ( !(unsigned __int8)sub_A08060(a1) )
      return 1;
    v7 = *(_QWORD *)(a1 + 16);
    if ( qword_1C7EC98 != *(_QWORD *)(v7 + 8984) )
      return 1;
    if ( *(_BYTE *)(v7 + 2416) )
      return 1;
    sub_A4A940((_QWORD *)a1);
    ++*(_DWORD *)(a1 + 224);
    sub_9DBF80((_QWORD *)a1);
    sub_A4A3F0((_QWORD *)a1, a2);
    v8 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)(v8 + 8984) != qword_1C7EC98 )
      return 1;
    v9 = *(_BYTE *)(v8 + 2416);
    if ( v9 )
      return 1;
    if ( (unsigned int)sub_A47FE0(a1) != -1 )
    {
      v10 = *(_QWORD *)(a1 + 336);
      v11 = *(_DWORD *)(a1 + 928) + 1;
      *(_DWORD *)(a1 + 928) = v11;
      if ( v11 % *(_DWORD *)(v10 + 84) )
      {
        if ( *(_BYTE *)(v10 + 88) && (unsigned __int8)sub_A4F820(a1) )
        {
          ++*(_DWORD *)(a1 + 316);
        }
        else
        {
          v12 = sub_A47FE0(a1);
          if ( v12 == -1 )
            goto LABEL_22;
          sub_99C220(a1, v12);
          ++*(_DWORD *)(a1 + 320);
        }
      }
      else
      {
        sub_9DBD40((_QWORD *)a1);
        if ( (unsigned __int8)sub_A4A0C0(a1, a2) )
        {
          v13 = sub_A47FE0(a1);
          if ( v13 == -1 )
          {
LABEL_22:
            result = 0;
            if ( !*(_BYTE *)(a1 + 1184) )
              return *(unsigned __int8 *)(a1 + 1185);
            return result;
          }
          sub_A4D400(
            a1,
            *(_QWORD *)(a1 + 568) + 24LL * (*(_DWORD *)(*(_QWORD *)(a1 + 592) + 4LL * v13) & 0xFFFFFFF),
            a2);
        }
        else
        {
          sub_9CF9E0(a1);
        }
      }
      return 1;
    }
    ++*(_DWORD *)(a1 + 228);
    if ( !*(_BYTE *)(a1 + 1184) )
      return *(unsigned __int8 *)(a1 + 1185);
    return v9;
  }
  return result;
}

