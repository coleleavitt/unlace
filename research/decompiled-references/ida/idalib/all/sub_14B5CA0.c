__int64 __fastcall sub_14B5CA0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int8 v3; // dl
  int v4; // eax
  __int64 v5; // rax
  unsigned int v6; // r12d
  unsigned __int16 v7; // cx
  __int64 v8; // rax
  __int64 *v9; // rbp
  __int64 *v10; // rbx
  unsigned __int8 v11; // al
  int v12; // edx

  if ( !*(_DWORD *)(a2 + 24) )
    return 0;
  v2 = **(_QWORD **)(a2 + 16);
  if ( !v2 )
    goto LABEL_24;
  v3 = *(_BYTE *)(v2 + 28) & 0x7F;
  v4 = v3;
  if ( (unsigned int)v3 - 53 > 1 && ((v3 + 52) & 0x7Fu) > 1 )
    goto LABEL_7;
  v5 = sub_B72ED0(v2);
  if ( !v5 )
  {
LABEL_24:
    LOBYTE(v2) = v2 == 0;
    return (unsigned int)v2;
  }
  v4 = *(_BYTE *)(v5 + 28) & 0x7F;
LABEL_7:
  if ( (unsigned int)(v4 - 58) > 9 )
  {
    if ( *(_BYTE *)(a1 + 56) )
    {
      v6 = sub_1A37D70(a1, a2);
      if ( (_BYTE)v6 )
      {
        v7 = *(_WORD *)(a1 + 48) - 26;
        if ( v7 > 0x26u )
          return v6;
        if ( ((0x4000000801uLL >> v7) & 1) == 0 )
          return 1;
        v8 = *(unsigned int *)(a2 + 24);
        v9 = *(__int64 **)(a2 + 16);
        if ( (_DWORD)v8 && *v9 )
        {
          v10 = &v9[v8];
          while ( 1 )
          {
            v11 = *(_BYTE *)(*v9 + 28) & 0x7F;
            v12 = v11;
            if ( ((v11 + 52) & 0x7Fu) <= 1 || (unsigned int)v11 - 53 <= 1 )
              v12 = *(_BYTE *)(sub_B72ED0(*v9) + 28) & 0x7F;
            if ( (unsigned int)(v12 - 26) <= 0x1A && (unsigned int)(v12 - 34) > 5 )
              break;
            if ( v10 == ++v9 )
              return 0;
          }
          return v6;
        }
      }
    }
    return 0;
  }
  return *(unsigned __int8 *)(a1 + 8);
}
