/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47DAE4
// Address: 0x0047DAE4

//----- (0047DAE4) --------------------------------------------------------
int __cdecl sub_47DAE4(UINT a1, int a2)
{
  UINT v2; // ebx
  unsigned int v3; // edi
  int v4; // ecx
  unsigned int v5; // eax
  bool v6; // zf
  BYTE *j; // eax
  BYTE v8; // cl
  unsigned int v9; // edx
  unsigned int k; // ecx
  _BYTE *v11; // eax
  int v12; // ecx
  int *v14; // eax
  int *v15; // ecx
  unsigned int i; // eax
  unsigned int v17; // edx
  _WORD *v18; // ecx
  int *v19; // edx
  int v20; // edi
  __int16 v21; // ax
  int v22; // [esp+Ch] [ebp-20h]
  int v23; // [esp+10h] [ebp-1Ch]
  int *v24; // [esp+10h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+14h] [ebp-18h] BYREF

  v2 = sub_47D67F(a1);
  if ( v2 )
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v23 = 0;
    do
    {
      if ( dword_4B6708[v5] == v2 )
      {
        sub_464890((__m128i *)(a2 + 24), 0, 0x101u);
        v22 = 12 * v23;
        v14 = &dword_4B6718[12 * v23];
        v24 = v14;
        do
        {
          v15 = v14;
          if ( *(_BYTE *)v14 )
          {
            do
            {
              LOBYTE(i) = *((_BYTE *)v15 + 1);
              if ( !(_BYTE)i )
                break;
              v17 = *(unsigned __int8 *)v15;
              for ( i = (unsigned __int8)i; v17 <= i && v17 < 0x100; i = *((unsigned __int8 *)v15 + 1) )
                *(_BYTE *)(a2 + v17++ + 25) |= byte_4B6700[v3];
              v15 = (int *)((char *)v15 + 2);
            }
            while ( *(_BYTE *)v15 );
            v14 = v24;
          }
          ++v3;
          v14 += 2;
          v24 = v14;
        }
        while ( v3 < 4 );
        *(_DWORD *)(a2 + 4) = v2;
        *(_DWORD *)(a2 + 8) = 1;
        *(_DWORD *)(a2 + 540) = sub_47D641(v2);
        v18 = (_WORD *)(a2 + 12);
        v19 = &dword_4B670C[v22];
        v20 = 6;
        do
        {
          v21 = *(_WORD *)v19;
          v19 = (int *)((char *)v19 + 2);
          *v18++ = v21;
          --v20;
        }
        while ( v20 );
        goto LABEL_10;
      }
      ++v4;
      v5 += 12;
      v23 = v4;
    }
    while ( v5 < 60 );
    if ( v2 == 65000 || !IsValidCodePage((unsigned __int16)v2) )
      return -1;
    if ( v2 == 65001 )
    {
      *(_DWORD *)(a2 + 4) = 65001;
      *(_DWORD *)(a2 + 540) = 0;
      *(_DWORD *)(a2 + 24) = 0;
      *(_WORD *)(a2 + 28) = 0;
      goto LABEL_9;
    }
    if ( GetCPInfo(v2, &CPInfo) )
    {
      sub_464890((__m128i *)(a2 + 24), 0, 0x101u);
      *(_DWORD *)(a2 + 4) = v2;
      v6 = CPInfo.MaxCharSize == 2;
      *(_DWORD *)(a2 + 540) = 0;
      if ( v6 )
      {
        for ( j = CPInfo.LeadByte; *j; j += 2 )
        {
          v8 = j[1];
          if ( !v8 )
            break;
          v9 = v8;
          for ( k = *j; k <= v9; ++k )
            *(_BYTE *)(a2 + k + 25) |= 4u;
        }
        v11 = (_BYTE *)(a2 + 26);
        v12 = 254;
        do
        {
          *v11++ |= 8u;
          --v12;
        }
        while ( v12 );
        *(_DWORD *)(a2 + 540) = sub_47D641(*(_DWORD *)(a2 + 4));
        v3 = 1;
      }
LABEL_9:
      *(_DWORD *)(a2 + 8) = v3;
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 20) = 0;
LABEL_10:
      sub_47D755(a2);
      return 0;
    }
    if ( !dword_4B7F84 )
      return -1;
  }
  sub_47D6F0(a2);
  return 0;
}
// 4B6708: using guessed type int dword_4B6708[];
// 4B670C: using guessed type int dword_4B670C[3];
// 4B6718: using guessed type int dword_4B6718[2];
// 4B7F84: using guessed type int dword_4B7F84;
