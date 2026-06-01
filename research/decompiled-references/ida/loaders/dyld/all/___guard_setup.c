__int64 __fastcall __guard_setup(_QWORD *a1)
{
  __int64 v1; // x21
  _QWORD *v2; // x19
  __int64 result; // x0
  char v4; // w9
  unsigned __int8 *v5; // x8
  int v6; // w10
  unsigned int v7; // w9
  unsigned int v8; // w12
  unsigned int v9; // w11
  unsigned int v10; // w10
  __int64 v11; // x9
  __int64 v12; // x10
  int v13; // t1
  __int64 v14; // t1
  uint32_t v15; // w19

  v1 = *a1;
  if ( *a1 )
  {
    v2 = a1;
    while ( 1 )
    {
      result = _platform_strncmp((const char *)v1, "stack_guard=", 0xCu);
      if ( !(_DWORD)result )
      {
        v4 = *(_BYTE *)(v1 + 12);
        if ( v4 )
        {
          v5 = (unsigned __int8 *)(v1 + 13);
          do
          {
            v6 = v4;
            v7 = (unsigned __int8)(v4 - 97);
            v8 = v6 - 48;
            if ( (unsigned int)(v6 - 48) >= 0xA )
              v8 = 0;
            if ( (unsigned int)(v6 - 65) <= 5 )
              v9 = v6 - 55;
            else
              v9 = v8;
            v10 = v6 - 87;
            if ( v7 <= 5 )
              v11 = v10;
            else
              v11 = v9;
            v12 = v11 | (16 * __stack_chk_guard_0);
            __stack_chk_guard_0 = v12;
            v13 = *v5++;
            v4 = v13;
          }
          while ( v13 );
          if ( v12 )
            break;
        }
      }
      v14 = v2[1];
      ++v2;
      v1 = v14;
      if ( !v14 )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    v15 = arc4random();
    result = arc4random();
    __stack_chk_guard_0 = (unsigned int)result | ((unsigned __int64)v15 << 32);
  }
  return result;
}
