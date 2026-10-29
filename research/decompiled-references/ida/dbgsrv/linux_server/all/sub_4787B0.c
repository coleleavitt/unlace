/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4787B0
// Address: 0x00000000004787B0

//----- (00000000004787B0) ----------------------------------------------------
void __fastcall sub_4787B0(__int64 a1, int a2)
{
  int v2; // eax
  unsigned __int64 v3; // rax
  __int64 v4; // rdx

  if ( a1 )
  {
    switch ( a2 )
    {
      case 1:
      case 8:
      case 11:
        v3 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)v3 <= 0xB )
        {
          v4 = 2306;
          if ( _bittest64(&v4, v3) )
            goto LABEL_13;
        }
        goto LABEL_5;
      case 2:
      case 4:
        if ( (((*(_DWORD *)(a1 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) == 0 )
          goto LABEL_13;
        goto LABEL_5;
      case 3:
      case 9:
      case 10:
        v2 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( (unsigned int)(v2 - 9) <= 1 || v2 == 3 )
        {
LABEL_13:
          *(_DWORD *)(a1 + 20) = a2;
        }
        else
        {
LABEL_5:
          sub_478720(a1);
LABEL_6:
          *(_DWORD *)(a1 + 20) = a2;
          switch ( a2 )
          {
            case 1:
            case 3:
            case 8:
            case 9:
            case 10:
            case 11:
              *(_QWORD *)(a1 + 24) = 0;
              *(_OWORD *)(a1 + 32) = 0;
              break;
            case 5:
              goto LABEL_16;
            case 7:
              goto LABEL_19;
            default:
              return;
          }
        }
        break;
      case 5:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) != 5 )
        {
          sub_478720(a1);
          *(_DWORD *)(a1 + 20) = 5;
LABEL_16:
          *(_OWORD *)(a1 + 24) = -1;
        }
        return;
      case 7:
        if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) != 7 )
        {
          sub_478720(a1);
          *(_DWORD *)(a1 + 20) = 7;
LABEL_19:
          *(_QWORD *)(a1 + 40) = 0;
          *(_OWORD *)(a1 + 48) = 0;
        }
        return;
      default:
        sub_478720(a1);
        if ( !a2 )
          return;
        goto LABEL_6;
    }
  }
}
