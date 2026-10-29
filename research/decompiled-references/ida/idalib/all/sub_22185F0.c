__int64 __fastcall sub_22185F0(unsigned int **a1, unsigned __int64 a2, __int64 *a3, unsigned __int64 a4, int a5)
{
  unsigned int *v5; // r11
  __int64 result; // rax
  __int64 v7; // r15
  __int64 v8; // rbp
  unsigned int *v9; // r10
  unsigned int v10; // r9d
  __int64 v11; // r12
  unsigned int v12; // r9d
  unsigned int v13; // ebp
  __int64 v14; // r15
  __int64 v15; // rbx
  unsigned int v16; // r11d

  v5 = *a1;
  result = 0;
  v7 = *a3;
  if ( (unsigned __int64)*a1 < a2 )
  {
    while ( 1 )
    {
      v9 = v5 + 1;
      v10 = *v5;
      if ( !a5 && v10 - 55296 <= 0x7FF )
        break;
      if ( v10 <= 0x7F )
      {
        v8 = v7 + 1;
        if ( a4 < v7 + 1 )
          goto LABEL_22;
        ++v7;
        *(_BYTE *)(v8 - 1) = v10;
        ++v5;
        if ( a2 <= (unsigned __int64)v9 )
          goto LABEL_15;
      }
      else
      {
        if ( v10 <= 0x7FF )
        {
          v15 = v7 + 2;
          if ( a4 < v7 + 2 )
            goto LABEL_22;
          v14 = 1;
          v12 = (v10 >> 6) | 0xFFFFFFC0;
          LOBYTE(v5) = *v5 & 0x3F | 0x80;
        }
        else
        {
          if ( v10 <= 0xFFFF )
          {
            v11 = v7 + 3;
            if ( a4 < v7 + 3 )
              goto LABEL_22;
            v14 = 2;
            v12 = (v10 >> 12) | 0xFFFFFFE0;
            LOBYTE(v13) = *v5 & 0x3F | 0x80;
            LODWORD(v5) = (*v5 >> 6) & 0x3F | 0xFFFFFF80;
          }
          else if ( v10 <= 0x10FFFF )
          {
            if ( a4 < v7 + 4 )
            {
LABEL_22:
              result = 2;
              goto LABEL_15;
            }
            v11 = v7 + 3;
            *(_BYTE *)(v7 + 3) = v10 & 0x3F | 0x80;
            v16 = v10;
            v13 = (v10 >> 6) & 0x3F | 0xFFFFFF80;
            v12 = (v10 >> 18) | 0xFFFFFFF0;
            v14 = 3;
            LODWORD(v5) = (v16 >> 12) & 0x3F | 0xFFFFFF80;
          }
          else
          {
            v11 = v7 + 3;
            if ( a4 < v7 + 3 )
              goto LABEL_22;
            LOBYTE(v12) = -17;
            LOBYTE(v5) = -65;
            LOBYTE(v13) = -67;
            result = 3;
            v14 = 2;
          }
          *(_BYTE *)(v11 - 1) = v13;
          v15 = v11 - 1;
        }
        *(_BYTE *)(v15 - 1) = (_BYTE)v5;
        v5 = v9;
        v7 = v15 - 1 + v14;
        *(_BYTE *)(v15 - 2) = v12;
        if ( a2 <= (unsigned __int64)v9 )
          goto LABEL_15;
      }
    }
    result = 3;
  }
LABEL_15:
  *a1 = v5;
  *a3 = v7;
  return result;
}
