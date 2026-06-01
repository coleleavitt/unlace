/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808A6A0
// Address: 0x0808A6A0

//----- (0808A6A0) --------------------------------------------------------
int __cdecl sub_808A6A0(int a1)
{
  int result; // eax
  char *v2; // eax
  __m128i v3; // xmm0
  char *v4; // [esp+18h] [ebp-24h] BYREF
  __m128i v5; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v6; // [esp+2Ch] [ebp-10h]

  v6 = __readgsdword(0x14u);
  if ( a1 )
  {
    while ( 2 )
    {
      switch ( *(_BYTE *)a1 )
      {
        case 2:
          sub_80C96E0(*(_DWORD *)(a1 + 4), a1 + 4);
          *(_BYTE *)a1 = 3;
          result = 0;
          break;
        case 3:
          goto LABEL_9;
        case 7:
          v2 = (char *)&dword_80DDFD8;
          if ( *(_DWORD *)(a1 + 8) )
            v2 = *(char **)(a1 + 4);
          v4 = v2;
          sub_80C98C0(&v4, &v5);
          sub_8089430(a1);
          v3 = _mm_loadu_si128(&v5);
          *(_BYTE *)a1 = 3;
          *(__m128i *)(a1 + 4) = v3;
LABEL_9:
          result = 0;
          break;
        case 9:
          sub_80C9790(*(int *)(a1 + 4), a1 + 4);
          *(_BYTE *)a1 = 3;
          result = 0;
          break;
        case 0xA:
          if ( sub_8089920((unsigned __int8 *)a1, 2) )
            continue;
          result = sub_80C7850();
          break;
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
  if ( v6 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
