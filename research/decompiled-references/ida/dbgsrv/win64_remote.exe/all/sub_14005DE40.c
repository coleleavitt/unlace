/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005DE40
// Address: 0x000000014005DE40

//----- (000000014005DE40) ----------------------------------------------------
__int8 *__fastcall sub_14005DE40(__int8 *a1, __int64 a2, char *a3, __int64 a4)
{
  char *v4; // rax
  char v6; // bp
  unsigned __int64 v7; // rsi
  __int8 *v8; // rbx
  __int64 v9; // r14
  char v10; // cl
  __int8 *v11; // rax

  v4 = a3;
  if ( a2 < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  if ( a1 )
  {
    v6 = 0;
    v7 = (unsigned __int64)&a1[a2];
    v8 = a1;
    if ( a3 )
    {
      v9 = a4 - 8;
      while ( 1 )
      {
        if ( v8 != v4 )
          sub_140061AF0(v8, v4, v7 - (_QWORD)v8);
        v8 = sub_14006CA14((__int64)v8, 0);
        if ( v8 > a1 )
        {
          do
          {
            v10 = *(v8 - 1);
            v11 = v8 - 1;
            if ( v10 != 47 && v10 != 92 )
              break;
            v6 = 1;
            --v8;
          }
          while ( v11 > a1 );
        }
        v4 = *(char **)(v9 + 8);
        v9 += 8;
        if ( !v4 )
          break;
        while ( *v4 == 47 || *v4 == 92 )
          ++v4;
        if ( (unsigned __int64)v8 >= v7 )
          goto LABEL_30;
        *v8++ = 92;
        if ( (unsigned __int64)v8 >= v7 )
        {
          v8 = (__int8 *)(v7 - 1);
          *(_BYTE *)(v7 - 1) = 0;
        }
      }
      if ( v6 && v8 == a1 + 2 && *(v8 - 1) == 58 )
      {
        if ( (unsigned __int64)v8 >= v7 )
        {
LABEL_30:
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(518);
        }
        *v8++ = 92;
        if ( (unsigned __int64)v8 < v7 )
          goto LABEL_25;
        v8 = (__int8 *)(v7 - 1);
        *(_BYTE *)(v7 - 1) = 0;
      }
    }
    if ( (unsigned __int64)v8 >= v7 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(519);
    }
LABEL_25:
    *v8 = 0;
  }
  return a1;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
