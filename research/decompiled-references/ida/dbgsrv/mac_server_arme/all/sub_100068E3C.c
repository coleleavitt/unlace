/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100068E3C
// Address: 0x0000000100068E3C

//----- (0000000100068E3C) ----------------------------------------------------
__int64 __fastcall sub_100068E3C(__int64 result, char *__s, __int64 a3, __int64 a4)
{
  __int64 v5; // x22
  _QWORD **v7; // x21
  __int64 v8; // x8
  char *v9; // x26
  char *v10; // x8
  char v11; // w8
  _BYTE *v12; // x25
  size_t v13; // x24
  _QWORD *v14; // x8
  bool v15; // cf
  char *v16; // x8
  char *v17; // x28
  unsigned __int64 v18; // x23
  _QWORD *v19; // x1
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  char v25; // t1
  char *v26; // [xsp+10h] [xbp-70h] BYREF
  _BYTE __src[16]; // [xsp+18h] [xbp-68h] BYREF

  v5 = a3;
  v7 = (_QWORD **)result;
  if ( a3 == -1 )
  {
    result = strlen(__s);
    v5 = result;
  }
  if ( v5 <= a4 )
    v8 = a4;
  else
    v8 = v5;
  if ( (unsigned __int64)v7[2] < v8 + 16 )
  {
    result = (__int64)qvector_reserve(v7, *v7, v8 + 16, 1u);
    *v7 = (_QWORD *)result;
  }
  v26 = __s;
  if ( v5 >= 1 )
  {
    v9 = __s;
    while ( 1 )
    {
      result = get_utf8_char(&v26);
      if ( (unsigned int)(result + 1) <= 1 )
      {
        v10 = v26++;
        result = (unsigned __int8)*v10;
      }
      if ( (int)result <= 10 )
      {
        if ( (int)result > 8 )
        {
          if ( (_DWORD)result == 9 )
            v11 = 116;
          else
            v11 = 110;
          goto LABEL_32;
        }
        if ( (_DWORD)result == 7 )
        {
          v11 = 97;
          goto LABEL_32;
        }
        if ( (_DWORD)result == 8 )
        {
          v11 = 98;
          goto LABEL_32;
        }
      }
      else
      {
        if ( (int)result <= 12 )
        {
          if ( (_DWORD)result == 11 )
            v11 = 118;
          else
            v11 = 102;
          goto LABEL_32;
        }
        switch ( (_DWORD)result )
        {
          case 0xD:
            v11 = 114;
            goto LABEL_32;
          case 0x22:
            v11 = 34;
            goto LABEL_32;
          case 0x5C:
            v11 = 92;
LABEL_32:
            __src[1] = v11;
            __src[0] = 92;
            v12 = __src;
            v13 = 2;
            goto LABEL_33;
        }
      }
      result = is_cp_graphical(result);
      if ( (result & 1) != 0 )
      {
        v13 = v26 - v9;
        v12 = v9;
      }
      else if ( v9 >= v26 )
      {
        v13 = 0;
        v12 = __src;
      }
      else
      {
        v13 = 0;
        do
        {
          v12 = __src;
          v25 = *v9++;
          result = qsnprintf(&__src[v13], 16 - v13, "\\x%02X", v20, v21, v22, v23, v24, v25);
          v13 += (int)result;
        }
        while ( v9 < v26 );
      }
LABEL_33:
      v14 = v7[1];
      v15 = v14 != nullptr;
      v16 = (char *)v14 - 1;
      if ( v15 )
        v17 = v16;
      else
        v17 = nullptr;
      v18 = (unsigned __int64)&v17[v13];
      if ( a4 < 1 || v18 < a4 )
      {
        v19 = *v7;
        if ( (unsigned __int64)v7[2] < v18 + 1 )
        {
          v19 = qvector_reserve(v7, v19, v18 + 1, 1u);
          *v7 = v19;
        }
        v7[1] = (_QWORD *)(v18 + 1);
        *((_BYTE *)v19 + v18) = 0;
        result = (__int64)memmove(&v17[(_QWORD)*v7], v12, v13);
        v9 = v26;
        if ( v26 - __s < v5 )
          continue;
      }
      return result;
    }
  }
  return result;
}
// 100068F84: conditional instruction was optimized away because w0.4==A
// 100068F9C: conditional instruction was optimized away because w0.4==C
// 100069070: variable 'v20' is possibly undefined
// 100069070: variable 'v21' is possibly undefined
// 100069070: variable 'v22' is possibly undefined
// 100069070: variable 'v23' is possibly undefined
// 100069070: variable 'v24' is possibly undefined
