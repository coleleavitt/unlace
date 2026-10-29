__int64 __fastcall sub_B533A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 *v6; // r9
  __int64 *v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // ecx

  if ( (*(_BYTE *)(*(_QWORD *)(sub_B685F0(a1) + 2320) + 1LL) & 8) == 0 )
    return sub_B52330(a1, a2, v2, v3);
  v5 = *(__int64 **)(a1 + 120);
  v6 = &v5[(unsigned int)sub_B52330(a1, a2, v2, v3)];
  if ( v5 != v6 )
  {
    v7 = v5;
    result = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = *v7;
      if ( (*(_BYTE *)(*v7 + 28) & 0x7F) == 0x2F )
      {
        if ( !*(_BYTE *)(v9 + 80) )
          goto LABEL_11;
LABEL_6:
        if ( v6 == ++v7 )
          return result;
      }
      else
      {
        if ( (*(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          if ( v10 )
          {
            if ( *(_BYTE *)(v10 + 16) == 38 )
              goto LABEL_6;
          }
        }
LABEL_11:
        v11 = *(_DWORD *)(v9 + 96);
        ++v8;
        if ( (BYTE1(v11) & 6) == 2 || (BYTE1(v11) & 6) == 4 )
          goto LABEL_6;
        if ( (*(_QWORD *)(v9 + 88) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          result = v8;
        if ( v6 == ++v7 )
          return result;
      }
    }
  }
  return 0;
}

