/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E29FC
// Address: 0x00000000000E29FC

//----- (00000000000E29FC) ----------------------------------------------------
__int64 __fastcall sub_E29FC(__int64 a1)
{
  unsigned __int8 *v1; // x8
  _BYTE *v2; // x11
  unsigned __int8 *v4; // x9
  unsigned __int8 *v5; // x10
  unsigned __int8 *v6; // x11
  unsigned __int8 *v7; // x12
  unsigned __int8 *v8; // x9
  unsigned __int8 *v9; // x11
  unsigned __int8 *v10; // x11
  unsigned __int8 *v11; // x10
  unsigned __int8 *v12; // x21
  unsigned __int8 *v13; // x20
  __int64 result; // x0
  _QWORD *v15; // x22
  _QWORD *v16; // x8
  __int64 v17; // x9
  _QWORD *v18; // x0

  v2 = *(_BYTE **)a1;
  v1 = *(unsigned __int8 **)(a1 + 8);
  if ( (unsigned __int64)&v1[-*(_QWORD *)a1] < 2 || *v2 != 102 )
    return 0;
  if ( v2[1] == 112 )
  {
    v4 = v2 + 2;
    *(_QWORD *)a1 = v2 + 2;
    if ( v2 + 2 == v1 )
    {
      v4 = v1;
    }
    else
    {
      if ( *v4 == 114 )
      {
        v4 = v2 + 3;
        *(_QWORD *)a1 = v2 + 3;
      }
      if ( v4 == v1 )
        goto LABEL_22;
      if ( *v4 == 86 )
        *(_QWORD *)a1 = ++v4;
      if ( v4 == v1 )
      {
LABEL_22:
        v4 = v1;
        goto LABEL_53;
      }
      if ( *v4 == 75 )
      {
        *(_QWORD *)a1 = ++v4;
        if ( v1 == v4 )
        {
LABEL_53:
          v13 = nullptr;
          v12 = nullptr;
          if ( v4 == v1 )
            return 0;
          goto LABEL_54;
        }
        goto LABEL_25;
      }
    }
    if ( v1 == v4 )
      goto LABEL_53;
LABEL_25:
    if ( (unsigned int)*v4 - 48 > 9 )
      goto LABEL_53;
    v10 = v4 + 1;
    while ( 1 )
    {
      v11 = v10;
      *(_QWORD *)a1 = v10;
      if ( v1 == v10 )
        goto LABEL_58;
      ++v10;
      if ( (unsigned int)*v11 - 48 >= 0xA )
        goto LABEL_29;
    }
  }
  if ( *v2 != 102 || v2[1] != 76 )
    return 0;
  v5 = v2 + 2;
  *(_QWORD *)a1 = v2 + 2;
  if ( v1 == v2 + 2 || (unsigned int)*v5 - 48 > 9 )
  {
    v9 = nullptr;
    v8 = nullptr;
  }
  else
  {
    v6 = v2 + 3;
    while ( 1 )
    {
      v7 = v6;
      *(_QWORD *)a1 = v6;
      if ( v1 == v6 )
        break;
      ++v6;
      if ( (unsigned int)*v7 - 48 >= 0xA )
      {
        v8 = v5;
        v9 = v7;
        v5 = v7;
        goto LABEL_32;
      }
    }
    v8 = v5;
    v5 = v6;
    v9 = v1;
  }
LABEL_32:
  result = 0;
  if ( v8 != v9 && v5 != v1 )
  {
    if ( *v5 != 112 )
      return 0;
    v4 = v5 + 1;
    *(_QWORD *)a1 = v5 + 1;
    if ( v5 + 1 == v1 )
    {
      v4 = v1;
    }
    else
    {
      if ( *v4 == 114 )
      {
        v4 = v5 + 2;
        *(_QWORD *)a1 = v5 + 2;
      }
      if ( v4 != v1 )
      {
        if ( *v4 == 86 )
          *(_QWORD *)a1 = ++v4;
        if ( v4 != v1 && *v4 == 75 )
        {
          *(_QWORD *)a1 = ++v4;
          if ( v1 == v4 )
            goto LABEL_53;
LABEL_48:
          if ( (unsigned int)*v4 - 48 > 9 )
            goto LABEL_53;
          v10 = v4 + 1;
          while ( 1 )
          {
            v11 = v10;
            *(_QWORD *)a1 = v10;
            if ( v1 == v10 )
              break;
            ++v10;
            if ( (unsigned int)*v11 - 48 >= 0xA )
            {
LABEL_29:
              v12 = v4;
              v13 = v10 - 1;
              v4 = v11;
              if ( v11 != v1 )
                goto LABEL_54;
              return 0;
            }
          }
LABEL_58:
          v12 = v4;
          v4 = v11;
          v13 = v1;
          if ( v11 == v1 )
            return 0;
LABEL_54:
          if ( *v4 == 95 )
          {
            v15 = *(_QWORD **)(a1 + 4832);
            *(_QWORD *)a1 = v4 + 1;
            v16 = v15 + 1;
            v17 = v15[1];
            if ( (unsigned __int64)(v17 + 32) >= 0xFF0 )
            {
              v18 = (_QWORD *)operator new[](0x1000u);
              v17 = 0;
              *v18 = v15;
              v18[1] = 0;
              v16 = v18 + 1;
              v15 = v18;
              *(_QWORD *)(a1 + 4832) = v18;
            }
            *v16 = v17 + 32;
            *(_QWORD *)((char *)v15 + v17 + 16) = off_161C48;
            result = (__int64)v15 + v17 + 16;
            *(_DWORD *)(result + 8) = 16843050;
            *(_QWORD *)(result + 16) = v12;
            *(_QWORD *)(result + 24) = v13;
            return result;
          }
          return 0;
        }
      }
    }
    if ( v1 == v4 )
      goto LABEL_53;
    goto LABEL_48;
  }
  return result;
}
// 161C48: using guessed type __int64 (__fastcall *off_161C48[7])();
