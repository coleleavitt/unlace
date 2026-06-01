__int64 __fastcall sub_883280(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  unsigned __int16 *v3; // rdx
  unsigned __int16 v4; // di
  char v5; // r10
  int v6; // r9d
  char v7; // r8
  unsigned __int16 *v8; // r11
  int v9; // eax
  int v10; // esi
  unsigned __int16 *v11; // rsi
  unsigned __int16 v12; // cx

  result = word_2CAD362;
  v3 = (unsigned __int16 *)(a1 + 2LL * word_2CAD362 - 2);
  if ( a2 == 16 )
  {
    if ( word_2CAD362 )
    {
      v11 = &v3[-(unsigned __int16)word_2CAD362];
      LOWORD(result) = 0;
      do
      {
        v12 = result;
        --v3;
        result = v3[1];
        v3[1] = v12;
      }
      while ( v3 != v11 );
    }
  }
  else if ( word_2CAD362 )
  {
    v4 = 0;
    v5 = a2;
    v6 = (1 << a2) - 1;
    v7 = 16 - a2;
    v8 = &v3[-(unsigned __int16)word_2CAD362];
    do
    {
      v9 = *v3;
      v10 = v4;
      --v3;
      v4 = v9 & v6;
      result = (v10 << v7) | (unsigned int)(v9 >> v5);
      v3[1] = result;
    }
    while ( v8 != v3 );
  }
  return result;
}

