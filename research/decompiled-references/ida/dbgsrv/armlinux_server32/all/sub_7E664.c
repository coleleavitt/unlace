/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E664
// Address: 0x0007E664

//----- (0007E664) --------------------------------------------------------
int __fastcall sub_7E664(__int64 a1, int a2, int a3)
{
  unsigned __int64 *v3; // r4
  int v6; // r6
  int v7; // r2
  unsigned __int64 v8; // kr00_8
  __int64 v9; // r0
  unsigned __int64 v10; // r2
  unsigned __int64 v11; // r8
  char v12; // r1
  int v13; // r1

  if ( (_DWORD)a1 )
  {
    v3 = (unsigned __int64 *)a1;
    v6 = HIDWORD(a1);
    if ( a3 )
    {
      v7 = HIDWORD(a1);
      HIDWORD(a1) = a1;
      LODWORD(a1) = sub_7E60C(a1, v7);
      switch ( v6 )
      {
        case 1:
LABEL_25:
          *(_BYTE *)v3 += a2;
          if ( a3 )
            goto LABEL_9;
          break;
        case 2:
LABEL_23:
          *(_WORD *)v3 += a2;
          if ( a3 )
            goto LABEL_9;
          break;
        case 4:
LABEL_21:
          *(_DWORD *)v3 += a2;
          if ( a3 )
            goto LABEL_9;
          break;
        case 8:
LABEL_19:
          a1 = *v3 + a2;
          *v3 = a1;
          if ( a3 )
            goto LABEL_9;
          break;
        case 16:
LABEL_10:
          v10 = *v3;
          v11 = a2 + *v3;
          if ( __CFADD__(__CFADD__(a2, *(_DWORD *)v3), a2 >> 31) | __CFADD__(*((_DWORD *)v3 + 1), HIDWORD(v11)) )
            v12 = 1;
          else
            v12 = 0;
          if ( a2 > 0 )
            v13 = v12 & 1;
          else
            v13 = 0;
          *v3 = v11;
          if ( v13 )
          {
            ++v3[1];
            if ( a3 )
              goto LABEL_9;
          }
          else
          {
            if ( ((v10 < v11) & ((unsigned int)a2 >> 31)) != 0 )
            {
              v8 = v3[1];
              *((_DWORD *)v3 + 2) = v8 - 1;
              *((_DWORD *)v3 + 3) = ((_DWORD)v8 != 0) + HIDWORD(v8) - 1;
            }
            if ( a3 )
              goto LABEL_9;
          }
          break;
        default:
LABEL_9:
          HIDWORD(v9) = v3;
          LODWORD(v9) = v3;
          LODWORD(a1) = sub_7E60C(v9, v6);
          break;
      }
    }
    else
    {
      switch ( HIDWORD(a1) )
      {
        case 1:
          goto LABEL_25;
        case 2:
          goto LABEL_23;
        case 4:
          goto LABEL_21;
        case 8:
          goto LABEL_19;
        case 0x10:
          goto LABEL_10;
        default:
          return a1;
      }
    }
  }
  return a1;
}
