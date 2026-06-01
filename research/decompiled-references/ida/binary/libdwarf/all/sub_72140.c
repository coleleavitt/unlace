unsigned __int64 __fastcall sub_72140(
        _QWORD *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        char a5,
        unsigned __int16 a6,
        int a7)
{
  unsigned __int64 result; // rax
  __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // eax
  int v13; // r8d
  __int64 v14; // r11
  int v15; // ecx
  unsigned __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // eax

  result = a4;
  v8 = (unsigned int)(1 << (a5 - a4));
  if ( (_DWORD)v8 == 2 )
  {
    if ( a2 != a3 )
    {
      v21 = (a4 << 16) + (a7 << 24);
      do
      {
        v22 = *a2;
        if ( a7 != 1 )
          v22 = a6 + (*a2 << 8);
        ++a2;
        ++a1;
        result = (unsigned int)(v21 + v22);
        *((_WORD *)a1 - 4) = result;
        *((_WORD *)a1 - 2) = result;
        *((_BYTE *)a1 - 6) = BYTE2(result);
        *((_BYTE *)a1 - 5) = BYTE3(result);
        *((_BYTE *)a1 - 2) = BYTE2(result);
        *((_BYTE *)a1 - 1) = BYTE3(result);
      }
      while ( a3 != a2 );
    }
  }
  else if ( (unsigned int)v8 <= 2 )
  {
    if ( (_DWORD)v8 != 1 )
    {
LABEL_18:
      if ( a2 != a3 )
      {
        v14 = 4 * v8;
        v15 = (a4 << 16) + (a7 << 24);
        v16 = ((4 * v8 - 32) & 0xFFFFFFFFFFFFFFE0LL) + 32;
        do
        {
          v17 = *a2;
          if ( a7 != 1 )
            v17 = a6 + (*a2 << 8);
          v18 = 0x100000001LL * (unsigned int)(v15 + v17);
          result = (unsigned __int64)a1;
          do
          {
            *(_QWORD *)result = v18;
            result += 32LL;
            *(_QWORD *)(result - 24) = v18;
            *(_QWORD *)(result - 16) = v18;
            *(_QWORD *)(result - 8) = v18;
          }
          while ( (_QWORD *)((char *)a1 + v14) != (_QWORD *)result );
          ++a2;
          a1 = (_QWORD *)((char *)a1 + v16);
        }
        while ( a3 != a2 );
      }
      return result;
    }
    if ( a2 != a3 )
    {
      v11 = (a4 << 16) + (a7 << 24);
      do
      {
        v12 = *a2;
        if ( a7 != 1 )
          v12 = a6 + (*a2 << 8);
        a1 = (_QWORD *)((char *)a1 + 4);
        ++a2;
        v13 = v11 + v12;
        *((_WORD *)a1 - 2) = v11 + v12;
        result = (unsigned int)(v11 + v12) >> 24;
        *((_BYTE *)a1 - 1) = result;
        *((_BYTE *)a1 - 2) = BYTE2(v13);
      }
      while ( a3 != a2 );
    }
  }
  else
  {
    if ( (_DWORD)v8 != 4 )
    {
      if ( (_DWORD)v8 == 8 )
      {
        if ( a2 != a3 )
        {
          result = (a7 << 24) + (a4 << 16);
          do
          {
            v9 = *a2;
            if ( a7 != 1 )
              v9 = a6 + (*a2 << 8);
            ++a2;
            a1 += 4;
            v10 = 0x100000001LL * (unsigned int)(v9 + result);
            *(a1 - 4) = v10;
            *(a1 - 3) = v10;
            *(a1 - 2) = v10;
            *(a1 - 1) = v10;
          }
          while ( a3 != a2 );
        }
        return result;
      }
      goto LABEL_18;
    }
    if ( a2 != a3 )
    {
      result = (a7 << 24) + (a4 << 16);
      do
      {
        v19 = *a2;
        if ( a7 != 1 )
          v19 = a6 + (*a2 << 8);
        ++a2;
        a1 += 2;
        v20 = 0x100000001LL * (unsigned int)(v19 + result);
        *(a1 - 2) = v20;
        *(a1 - 1) = v20;
      }
      while ( a3 != a2 );
    }
  }
  return result;
}

