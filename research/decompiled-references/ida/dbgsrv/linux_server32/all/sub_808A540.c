/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808A540
// Address: 0x0808A540

//----- (0808A540) --------------------------------------------------------
int __cdecl sub_808A540(int a1)
{
  int result; // eax
  int *v2; // eax
  __int64 v3; // xmm0_8
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  int v7[3]; // [esp+10h] [ebp-1Ch] BYREF
  unsigned int v8; // [esp+1Ch] [ebp-10h]

  v8 = __readgsdword(0x14u);
  if ( a1 )
  {
    while ( 2 )
    {
      switch ( *(_BYTE *)a1 )
      {
        case 2:
          LODWORD(v4) = *(_DWORD *)(a1 + 4);
          *(_BYTE *)a1 = 9;
          v4 = (int)v4;
          result = 0;
          *(_DWORD *)(a1 + 8) = HIDWORD(v4);
          break;
        case 3:
          v5 = sub_80C9680(v7, (const __m128i *)(a1 + 4), 0);
          switch ( v5 )
          {
            case 1:
              goto LABEL_9;
            case 4:
              v6 = 86;
              break;
            case 5:
              v6 = 98;
              break;
            case 2:
              v6 = 97;
              break;
            default:
LABEL_10:
              result = 0;
              goto LABEL_4;
          }
          result = sub_80C7880(v6);
          break;
        case 7:
          v2 = &dword_80DDFD8;
          if ( *(_DWORD *)(a1 + 8) )
            v2 = *(int **)(a1 + 4);
          v7[0] = 0;
          v7[1] = 0;
          sub_80D3B90((int)v2, "%lli", (int)v7);
          sub_8089430(a1);
LABEL_9:
          v3 = *(_QWORD *)v7;
          *(_BYTE *)a1 = 9;
          *(_QWORD *)(a1 + 4) = v3;
          goto LABEL_10;
        case 9:
          goto LABEL_10;
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
  if ( v8 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
