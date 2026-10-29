/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_990D0
// Address: 0x000990D0

//----- (000990D0) --------------------------------------------------------
char __cdecl sub_990D0(_DWORD *a1, _BYTE *a2)
{
  char result; // al
  char *v3; // esi
  size_t v4; // eax
  void **v5; // edx
  unsigned int v6; // ecx
  void *v7; // eax
  size_t v8; // eax
  void **v9; // edx
  unsigned int v10; // ecx
  void *v11; // eax
  int v12; // eax
  size_t v13; // [esp+1Ch] [ebp-30h]
  unsigned int v14; // [esp+24h] [ebp-28h]
  unsigned int v15; // [esp+24h] [ebp-28h]
  int v16[9]; // [esp+28h] [ebp-24h] BYREF

  v16[4] = __readgsdword(0x14u);
  if ( *a2 != 45 )
  {
    if ( !(_BYTE)under_debugger )
      interr(2756);
    BUG();
  }
  result = 0;
  v3 = a2 + 2;
  switch ( a2[1] )
  {
    case 'P':
      a1[21] |= 0x402u;
      sub_1B530((int)v16, v3);
      sub_99360((int)(a1 + 11), (int)v16, 1);
      if ( !v16[0] )
        return 1;
      goto LABEL_10;
    case 'h':
      sub_1B530((int)v16, v3);
      sub_99360((int)(a1 + 1), (int)v16, 1);
      if ( v16[0] )
      {
LABEL_10:
        v16[1] = 0;
        qfree((void *)v16[0]);
        v16[0] = 0;
        v16[2] = 0;
      }
      return 1;
    case 'p':
      if ( a2 == (_BYTE *)-2 || (v4 = strlen(v3)) == 0 )
      {
        a1[9] = 0;
        return 1;
      }
      v5 = (void **)(a1 + 8);
      v13 = v4;
      v6 = v4 + 1;
      if ( a1[10] >= v4 + 1 )
      {
        v7 = *v5;
      }
      else
      {
        v14 = v4 + 1;
        v7 = qvector_reserve((int)(a1 + 8), *v5, v6, 1u);
        v6 = v14;
        a1[8] = v7;
      }
      a1[9] = v6;
      memmove(v7, v3, v13);
      v12 = a1[8];
      goto LABEL_21;
    case 'u':
      if ( a2 == (_BYTE *)-2 || (v8 = strlen(v3)) == 0 )
      {
        a1[6] = 0;
      }
      else
      {
        v9 = (void **)(a1 + 5);
        v13 = v8;
        v10 = v8 + 1;
        if ( a1[7] >= v8 + 1 )
        {
          v11 = *v9;
        }
        else
        {
          v15 = v8 + 1;
          v11 = qvector_reserve((int)(a1 + 5), *v9, v10, 1u);
          v10 = v15;
          a1[5] = v11;
        }
        a1[6] = v10;
        memmove(v11, v3, v13);
        v12 = a1[5];
LABEL_21:
        *(_BYTE *)(v12 + v13) = 0;
      }
      return 1;
    default:
      return result;
  }
}
// 13E34C: using guessed type int under_debugger;
