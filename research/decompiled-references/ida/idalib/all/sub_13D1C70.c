__int64 __fastcall sub_13D1C70(int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  const char *v7; // rax
  unsigned __int8 *v8; // rbp
  unsigned __int8 v9; // al
  bool v10; // dl
  unsigned int v11; // ebx
  unsigned __int8 *v13; // rdx
  unsigned __int64 v14; // rax
  _BYTE v15[41]; // [rsp+Fh] [rbp-29h] BYREF

  v5 = a2;
  v6 = 0;
  v15[0] = 0;
  v7 = sub_1021A70(a3, a1, v15);
  if ( !v15[0] )
  {
    v8 = (unsigned __int8 *)v7;
    v9 = *v7;
    v10 = v9 != 63 && v9 != 92;
    if ( a2 )
    {
      v11 = a2;
      if ( v10 )
      {
        while ( 1 )
        {
          v9 = *++v8;
          --v11;
          v6 = a2 - v11;
          if ( *v8 == 63 || v9 == 92 )
            break;
          if ( !v11 )
            return v6;
        }
        if ( v11 )
          goto LABEL_9;
LABEL_14:
        v5 = v6;
        return v5 + (unsigned int)sub_13D15E0(v8) - (_DWORD)v8;
      }
      do
      {
LABEL_9:
        while ( 1 )
        {
          v13 = v8;
          if ( v9 == 63 || v9 == 92 )
            break;
          ++v8;
          ++v6;
          v9 = v13[1];
          if ( !--v11 )
            goto LABEL_12;
        }
        v14 = sub_13D18F0(v8, a4) >> 32;
        v8 += v14;
        v6 += v14;
        v9 = *v8;
        --v11;
      }
      while ( v11 );
LABEL_12:
      if ( v9 == 63 || v9 == 92 )
        goto LABEL_14;
    }
    else
    {
      v6 = 0;
      if ( !v10 )
        return v5 + (unsigned int)sub_13D15E0(v8) - (_DWORD)v8;
    }
  }
  return v6;
}
