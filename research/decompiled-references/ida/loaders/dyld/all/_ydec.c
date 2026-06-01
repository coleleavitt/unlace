_BYTE *__fastcall ydec(__int64 a1, __int64 (__fastcall *a2)(__int64), unsigned __int64 a3, int a4, int a5)
{
  _BYTE *result; // x0
  char *v8; // x21
  unsigned __int8 v9; // w23
  char v10; // w23
  unsigned __int8 *v11; // x24
  _BYTE *v12; // x8
  int v13; // t1
  unsigned __int8 *v14; // x8
  unsigned __int8 v15; // t1
  char *v16; // x21
  unsigned __int8 v17; // w23
  char v18; // w23
  unsigned __int8 *v19; // x24
  _BYTE *v20; // x8
  int v21; // t1
  unsigned __int8 *v22; // x8
  unsigned __int8 v23; // t1
  char v24; // w20
  unsigned __int8 *v25; // x21
  _BYTE *v26; // x8
  int v27; // t1
  _BYTE *v28; // x8

  if ( a3 < 0xA00000 )
  {
    if ( a3 >> 11 < 5 )
    {
      result = udec(a1, a2, a3, a4, a5);
      if ( a2 && (result = (_BYTE *)a2(98)) != nullptr )
      {
        v24 = *result;
        if ( *result )
        {
          v25 = result + 1;
          do
          {
            v26 = *(_BYTE **)(a1 + 8);
            if ( (unsigned __int64)v26 >= *(_QWORD *)(a1 + 16) )
            {
              result = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(a1 + 32))(a1);
              v26 = *(_BYTE **)(a1 + 8);
            }
            *(_QWORD *)(a1 + 8) = v26 + 1;
            *v26 = v24;
            v27 = *v25++;
            v24 = v27;
          }
          while ( v27 );
        }
      }
      else
      {
        v28 = *(_BYTE **)(a1 + 8);
        if ( (unsigned __int64)v28 >= *(_QWORD *)(a1 + 16) )
        {
          result = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(a1 + 32))(a1);
          v28 = *(_BYTE **)(a1 + 8);
        }
        *(_QWORD *)(a1 + 8) = v28 + 1;
        *v28 = 98;
      }
    }
    else
    {
      result = udec(a1, a2, (a3 + 512) >> 10, a4, a5);
      v16 = "KB";
      v17 = 75;
      do
      {
        if ( a2 && (result = (_BYTE *)a2(v17)) != nullptr )
        {
          v18 = *result;
          if ( *result )
          {
            v19 = result + 1;
            do
            {
              v20 = *(_BYTE **)(a1 + 8);
              if ( (unsigned __int64)v20 >= *(_QWORD *)(a1 + 16) )
              {
                result = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(a1 + 32))(a1);
                v20 = *(_BYTE **)(a1 + 8);
              }
              *(_QWORD *)(a1 + 8) = v20 + 1;
              *v20 = v18;
              v21 = *v19++;
              v18 = v21;
            }
            while ( v21 );
          }
        }
        else
        {
          v22 = *(unsigned __int8 **)(a1 + 8);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a1 + 16) )
          {
            result = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(a1 + 32))(a1);
            v22 = *(unsigned __int8 **)(a1 + 8);
          }
          *(_QWORD *)(a1 + 8) = v22 + 1;
          *v22 = v17;
        }
        v23 = *++v16;
        v17 = v23;
      }
      while ( v16 != "" );
    }
  }
  else
  {
    result = udec(a1, a2, (a3 + 0x80000) >> 20, a4, a5);
    v8 = "MB";
    v9 = 77;
    do
    {
      if ( a2 && (result = (_BYTE *)a2(v9)) != nullptr )
      {
        v10 = *result;
        if ( *result )
        {
          v11 = result + 1;
          do
          {
            v12 = *(_BYTE **)(a1 + 8);
            if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 16) )
            {
              result = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(a1 + 32))(a1);
              v12 = *(_BYTE **)(a1 + 8);
            }
            *(_QWORD *)(a1 + 8) = v12 + 1;
            *v12 = v10;
            v13 = *v11++;
            v10 = v13;
          }
          while ( v13 );
        }
      }
      else
      {
        v14 = *(unsigned __int8 **)(a1 + 8);
        if ( (unsigned __int64)v14 >= *(_QWORD *)(a1 + 16) )
        {
          result = (_BYTE *)(*(__int64 (__fastcall **)(__int64))(a1 + 32))(a1);
          v14 = *(unsigned __int8 **)(a1 + 8);
        }
        *(_QWORD *)(a1 + 8) = v14 + 1;
        *v14 = v9;
      }
      v15 = *++v8;
      v9 = v15;
    }
    while ( v8 != "" );
  }
  return result;
}
