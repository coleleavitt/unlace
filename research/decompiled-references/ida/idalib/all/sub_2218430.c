__int64 __fastcall sub_2218430(unsigned __int64 *a1, unsigned __int64 a2, __int64 *a3, unsigned __int64 a4, int a5)
{
  unsigned __int16 *v5; // r9
  __int64 v6; // r11
  int v7; // ebx
  unsigned int v8; // eax
  unsigned __int16 *v9; // r10
  char v10; // r9
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r11
  char v14; // r10
  char v15; // r14
  __int64 v16; // r15
  unsigned __int16 *v17; // r14
  __int64 v18; // rbx
  __int64 result; // rax

  v5 = (unsigned __int16 *)*a1;
  v6 = *a3;
  if ( *a1 >= a2 )
  {
    *a1 = (unsigned __int64)v5;
    *a3 = v6;
    return 0;
  }
  while ( 1 )
  {
    v12 = *v5;
    v17 = v5 + 1;
    if ( v12 - 55296 <= 0x3FF )
    {
      if ( a2 <= (unsigned __int64)v17 )
      {
        result = 1;
        goto LABEL_20;
      }
      v7 = v5[1];
      if ( (unsigned int)(v7 - 56320) > 0x3FF )
      {
        if ( !a5 )
          break;
LABEL_17:
        v11 = v6 + 3;
        if ( a4 < v6 + 3 )
          goto LABEL_19;
        ++v5;
        v14 = -32;
        v13 = 2;
      }
      else
      {
        v8 = v7 + ((v12 - 55296) << 10) + 9216;
        v9 = v5 + 2;
        if ( a4 < v6 + 4 )
          goto LABEL_19;
        v10 = v8;
        v11 = v6 + 3;
        v12 = v8 >> 6;
        *(_BYTE *)(v6 + 3) = v10 & 0x3F | 0x80;
        v5 = v9;
        v13 = 3;
        v14 = -16;
      }
      v15 = v12;
      v16 = v11 - 1;
      v12 >>= 6;
      *(_BYTE *)(v11 - 1) = v15 & 0x3F | 0x80;
      goto LABEL_8;
    }
    if ( !a5 && v12 - 56320 <= 0x3FF )
      break;
    if ( v12 > 0x7F )
    {
      if ( v12 > 0x7FF )
        goto LABEL_17;
      v16 = v6 + 2;
      if ( a4 < v6 + 2 )
      {
LABEL_19:
        result = 2;
        goto LABEL_20;
      }
      ++v5;
      v14 = -64;
      v13 = 1;
LABEL_8:
      v6 = v16 - 1 + v13;
      *(_BYTE *)(v16 - 1) = v12 & 0x3F | 0x80;
      *(_BYTE *)(v16 - 2) = v14 | (v12 >> 6);
      if ( a2 <= (unsigned __int64)v5 )
        goto LABEL_15;
    }
    else
    {
      v18 = v6 + 1;
      if ( v6 + 1 > a4 )
        goto LABEL_19;
      ++v5;
      ++v6;
      *(_BYTE *)(v18 - 1) = v12;
      if ( a2 <= (unsigned __int64)v17 )
      {
LABEL_15:
        result = 0;
        goto LABEL_20;
      }
    }
  }
  result = 3;
LABEL_20:
  *a1 = (unsigned __int64)v5;
  *a3 = v6;
  return result;
}
