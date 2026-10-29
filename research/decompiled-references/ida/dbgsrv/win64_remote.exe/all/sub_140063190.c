/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063190
// Address: 0x0000000140063190

//----- (0000000140063190) ----------------------------------------------------
void __fastcall sub_140063190(__int64 a1, int a2)
{
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  unsigned int v9; // edx
  int v10; // eax
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  void *v14; // rcx

  if ( a1 )
  {
    v4 = a2 - 1;
    switch ( a2 )
    {
      case 1:
      case 8:
      case 11:
        v5 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( v5 != 1 && v5 != 11 && v5 != 8 )
          goto LABEL_16;
        goto LABEL_6;
      case 2:
      case 4:
        v6 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( v6 == 2 )
          goto LABEL_6;
        if ( v6 != 4 )
          goto LABEL_16;
        *(_DWORD *)(a1 + 20) = a2;
        return;
      case 3:
      case 9:
      case 10:
        v7 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
        if ( v7 == 3 )
        {
LABEL_6:
          *(_DWORD *)(a1 + 20) = a2;
        }
        else if ( (unsigned int)(v7 - 9) > 1 )
        {
LABEL_16:
          v9 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
          switch ( v9 )
          {
            case 1u:
            case 8u:
            case 0xBu:
              if ( v9 > 0xB || (v10 = 2306, !_bittest(&v10, v9)) )
              {
                if ( byte_1400CB61C )
                  __debugbreak();
                sub_14005A480(3295);
              }
              goto LABEL_22;
            case 3u:
            case 9u:
            case 0xAu:
              if ( v9 != 3 && v9 - 9 > 1 )
              {
                if ( byte_1400CB61C )
                  __debugbreak();
                sub_14005A480(3297);
              }
LABEL_22:
              v11 = *(void **)(a1 + 24);
              if ( v11 )
              {
                *(_QWORD *)(a1 + 32) = 0;
                j_free(v11);
                *(_QWORD *)(a1 + 24) = 0;
                *(_QWORD *)(a1 + 40) = 0;
              }
              break;
            case 5u:
              sub_14000E220(a1);
              break;
            case 7u:
              v12 = sub_140012670(a1);
              v13 = v12;
              v14 = *(void **)(v12 + 16);
              if ( v14 )
              {
                *(_QWORD *)(v12 + 24) = 0;
                j_free(v14);
                *(_QWORD *)(v13 + 16) = 0;
                *(_QWORD *)(v13 + 32) = 0;
              }
              break;
            default:
              break;
          }
          *(_DWORD *)(a1 + 20) = 0;
          if ( a2 )
          {
            *(_DWORD *)(a1 + 20) = a2;
            switch ( v4 )
            {
              case 0:
              case 2:
              case 7:
              case 8:
              case 9:
              case 10:
                *(_QWORD *)(a1 + 24) = 0;
                *(_QWORD *)(a1 + 32) = 0;
                goto LABEL_32;
              case 4:
                *(_QWORD *)(a1 + 24) = -1;
                *(_QWORD *)(a1 + 32) = -1;
                break;
              case 6:
                *(_QWORD *)(a1 + 48) = 0;
                *(_QWORD *)(a1 + 56) = 0;
LABEL_32:
                *(_QWORD *)(a1 + 40) = 0;
                break;
              default:
                return;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 20) = a2;
        }
        break;
      case 5:
        v8 = (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 5;
        goto LABEL_15;
      case 7:
        v8 = (*(_DWORD *)(a1 + 20) & 0xFFFFFFF) == 7;
LABEL_15:
        if ( !v8 )
          goto LABEL_16;
        return;
      default:
        goto LABEL_16;
    }
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
