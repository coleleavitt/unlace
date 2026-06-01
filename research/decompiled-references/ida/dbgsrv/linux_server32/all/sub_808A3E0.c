/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808A3E0
// Address: 0x0808A3E0

//----- (0808A3E0) --------------------------------------------------------
int __cdecl sub_808A3E0(int a1)
{
  int result; // eax
  int *v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // [esp+18h] [ebp-14h] BYREF
  unsigned int v7; // [esp+1Ch] [ebp-10h]

  v7 = __readgsdword(0x14u);
  if ( a1 )
  {
    while ( 2 )
    {
      switch ( *(_BYTE *)a1 )
      {
        case 2:
          goto LABEL_9;
        case 3:
          v3 = sub_80C9630(&v6, (const __m128i *)(a1 + 4), 0);
          if ( v3 == 1 )
          {
            v5 = v6;
            *(_BYTE *)a1 = 2;
            *(_DWORD *)(a1 + 4) = v5;
            result = 0;
          }
          else
          {
            switch ( v3 )
            {
              case 4:
                v4 = 86;
                break;
              case 5:
                v4 = 98;
                break;
              case 2:
                v4 = 97;
                break;
              default:
LABEL_9:
                result = 0;
                goto LABEL_4;
            }
            result = sub_80C7880(v4);
          }
          break;
        case 7:
          v2 = &dword_80DDFD8;
          if ( *(_DWORD *)(a1 + 8) )
            v2 = *(int **)(a1 + 4);
          v6 = 0;
          sub_80D3B90((int)v2, "%i", (int)&v6);
          sub_8089430(a1);
          *(_DWORD *)(a1 + 4) = v6;
          goto LABEL_9;
        case 9:
          *(_BYTE *)a1 = 2;
          result = 0;
          break;
        case 0xA:
          if ( sub_8089920((unsigned __int8 *)a1, 2) )
            continue;
          result = sub_80C7850();
          goto LABEL_4;
        default:
          goto LABEL_3;
      }
      break;
    }
  }
  else
  {
LABEL_3:
    result = sub_80C7880(1531);
  }
LABEL_4:
  if ( v7 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
