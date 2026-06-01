/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1DF10
// Address: 0x0001DF10

//----- (0001DF10) --------------------------------------------------------
unsigned int __cdecl sub_1DF10(int a1)
{
  _DWORD *v1; // eax
  int v2; // eax
  unsigned int v3; // edi
  int v4; // esi
  _DWORD v6[2]; // [esp+0h] [ebp-2Ch] BYREF
  char *v7; // [esp+8h] [ebp-24h] BYREF
  unsigned int v8; // [esp+Ch] [ebp-20h]
  int v9; // [esp+10h] [ebp-1Ch]
  unsigned int v10; // [esp+18h] [ebp-14h]

  v10 = __readgsdword(0x14u);
  v1 = *(_DWORD **)(a1 + 464);
  if ( v1 )
  {
    v7 = nullptr;
    v8 = 0;
    v9 = 0;
    v6[0] = a1;
    v6[1] = &v7;
    v2 = sub_19AC0(v1, (int (__cdecl *)(_DWORD *, int))sub_1E190, (int)v6);
    switch ( v2 )
    {
      case 0:
        if ( v8 )
        {
          v3 = 0;
          v4 = 8;
          do
          {
            if ( v3 )
              sub_1E2C0(a1, *(_DWORD *)&v7[v4], 0);
            sub_1DE40(a1, *(_DWORD *)&v7[v4], -1);
            ++v3;
            v4 += 12;
          }
          while ( v3 < v8 );
        }
        break;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
        goto LABEL_11;
      default:
        qsnprintf(dword_13BCE0, 64, "tdb error %d", v2);
LABEL_11:
        sub_1C900();
        break;
    }
    if ( v7 )
    {
      v8 = 0;
      qfree(v7);
      v7 = nullptr;
      v9 = 0;
    }
  }
  return __readgsdword(0x14u);
}
// 13BCE0: using guessed type int dword_13BCE0[10];
