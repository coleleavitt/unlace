/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB7E0
// Address: 0x00000000000AB7E0

//----- (00000000000AB7E0) ----------------------------------------------------
__int64 __fastcall sub_AB7E0(__int64 result, char *s, __int64 a3, __int64 a4)
{
  __int64 v5; // x22
  __int64 v7; // x21
  __int64 v8; // x9
  unsigned __int64 v9; // x26
  _BYTE *v10; // x25
  size_t v11; // x24
  int v12; // t1
  unsigned __int8 *v13; // x8
  char v14; // w8
  __int64 v15; // x9
  __int64 v16; // x10
  __int64 v17; // x28
  void *v18; // x1
  unsigned __int64 v19; // x26
  unsigned __int8 *v20; // [xsp+10h] [xbp-80h] BYREF
  _BYTE v21[16]; // [xsp+18h] [xbp-78h] BYREF
  __int64 v22; // [xsp+28h] [xbp-68h]

  v5 = a3;
  v7 = result;
  v22 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 == -1 )
  {
    result = strlen(s);
    v5 = result;
  }
  if ( v5 <= a4 )
    v8 = a4;
  else
    v8 = v5;
  if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v8 + 16) )
  {
    result = (__int64)qvector_reserve((pthread_mutex_t *)v7, *(void **)v7, v8 + 16, 1u);
    *(_QWORD *)v7 = result;
  }
  v20 = (unsigned __int8 *)s;
  if ( v5 >= 1 )
  {
    v9 = (unsigned __int64)s;
    do
    {
      result = get_utf8_char(&v20);
      if ( (unsigned int)(result + 1) <= 1 )
      {
        v13 = v20++;
        result = *v13;
      }
      v14 = 97;
      switch ( (int)result )
      {
        case 7:
          goto LABEL_28;
        case 8:
          v14 = 98;
          goto LABEL_28;
        case 9:
          v14 = 116;
          goto LABEL_28;
        case 10:
          v14 = 110;
          goto LABEL_28;
        case 11:
          v14 = 118;
          goto LABEL_28;
        case 12:
          v14 = 102;
          goto LABEL_28;
        case 13:
          v14 = 114;
          goto LABEL_28;
        case 34:
          v14 = 34;
          goto LABEL_28;
        case 92:
          v14 = 92;
LABEL_28:
          v10 = v21;
          v21[1] = v14;
          v21[0] = 92;
          v11 = 2;
          break;
        default:
          result = is_cp_graphical((pthread_mutex_t *)result);
          if ( (result & 1) != 0 )
          {
            v10 = (_BYTE *)v9;
            v11 = (size_t)&v20[-v9];
          }
          else if ( v9 >= (unsigned __int64)v20 )
          {
            v11 = 0;
            v10 = v21;
          }
          else
          {
            v11 = 0;
            do
            {
              v12 = *(unsigned __int8 *)v9++;
              v10 = v21;
              result = qsnprintf((pthread_mutex_t *)&v21[v11], 16 - v11, "\\x%02X", v12);
              v11 += (int)result;
            }
            while ( v9 < (unsigned __int64)v20 );
          }
          break;
      }
      v15 = *(_QWORD *)(v7 + 8);
      if ( a4 > 0 )
      {
        v16 = v15 ? v15 - 1 : 0LL;
        if ( v16 + v11 >= a4 )
          break;
      }
      v17 = v15 ? v15 - 1 : 0LL;
      v18 = *(void **)v7;
      v19 = v17 + v11 + 1;
      if ( *(_QWORD *)(v7 + 16) < v19 )
      {
        v18 = qvector_reserve((pthread_mutex_t *)v7, v18, v17 + v11 + 1, 1u);
        *(_QWORD *)v7 = v18;
      }
      *(_QWORD *)(v7 + 8) = v19;
      *((_BYTE *)v18 + v17 + v11) = 0;
      result = (__int64)memmove((void *)(*(_QWORD *)v7 + v17), v10, v11);
      v9 = (unsigned __int64)v20;
    }
    while ( v20 - (unsigned __int8 *)s < v5 );
  }
  return result;
}
