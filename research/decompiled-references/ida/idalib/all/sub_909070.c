__int64 __fastcall sub_909070(_DWORD *a1, unsigned __int64 a2, _DWORD *a3, unsigned __int64 a4, unsigned int a5)
{
  int v6; // r11d
  char v7; // r13
  int v8; // ecx
  int v9; // ebp
  bool v10; // zf
  bool v11; // sf
  int v12; // ecx
  char v13; // r9
  char v14; // r12
  int v15; // r10d
  char v16; // r9
  __int64 result; // rax
  _BYTE *v18; // rdx
  __int64 v19; // rsi

  if ( a3[10] )
  {
    v7 = 0;
    v6 = 0;
  }
  else
  {
    v6 = (a5 != 0) + (a5 > 0xFFFF) + (a5 > 0xFF);
    v7 = (a5 != 0) + (a5 > 0xFFFF) + (a5 > 0xFF);
  }
  v8 = a3[9];
  v9 = a3[8];
  v10 = v8 == 0;
  v11 = v8 < 0;
  v12 = a3[1];
  if ( v9 )
  {
    v14 = (unsigned int)(1 << v12) >= a4 ? 0x20 : 0;
    v9 = (unsigned int)(1 << v12) >= a4;
    v15 = (a4 > 0xFFFFFFFE) + (a4 > 0x100FF) + (a4 > 0xFF);
    v13 = ((a4 > 0xFFFFFFFE) + (a4 > 0x100FF) + (a4 > 0xFF)) << 6;
  }
  else
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
  }
  v16 = v14 + v7 + 4 * (!v11 && !v10) + v13;
  result = -70;
  if ( a2 > 0x11 )
  {
    if ( *a3 )
    {
      v18 = a1;
      result = 1;
      v19 = 0;
    }
    else
    {
      *a1 = -47205080;
      v18 = a1 + 1;
      result = 5;
      v19 = 4;
    }
    *v18 = v16;
    if ( !v9 )
    {
      *((_BYTE *)a1 + result) = 8 * v12 - 80;
      result = v19 + 2;
    }
    switch ( v6 )
    {
      case 2:
        *(_WORD *)((char *)a1 + result) = a5;
        result += 2;
        break;
      case 3:
        *(_DWORD *)((char *)a1 + result) = a5;
        result += 4;
        break;
      case 1:
        *((_BYTE *)a1 + result++) = a5;
        break;
    }
    switch ( v15 )
    {
      case 2:
        *(_DWORD *)((char *)a1 + result) = a4;
        result += 4;
        break;
      case 3:
        *(_QWORD *)((char *)a1 + result) = a4;
        result += 8;
        break;
      case 1:
        *(_WORD *)((char *)a1 + result) = a4 - 256;
        result += 2;
        break;
      default:
        if ( v9 )
          *((_BYTE *)a1 + result++) = a4;
        break;
    }
  }
  return result;
}
