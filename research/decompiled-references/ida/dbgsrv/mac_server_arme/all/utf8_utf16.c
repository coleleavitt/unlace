/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: utf8_utf16
// Address: 0x000000010006BBA4

//----- (000000010006BBA4) ----------------------------------------------------
__int64 __fastcall utf8_utf16(void **a1, char *a2, unsigned __int64 a3)
{
  int v3; // w19
  int v5; // w8
  int v6; // w23
  unsigned int utf8_char; // w0
  unsigned int v8; // w21
  unsigned __int64 v9; // x8
  _QWORD *v10; // x1
  _QWORD *v11; // x9
  bool v12; // cf
  char *v13; // x9
  char *v14; // x24
  _QWORD *v15; // x1
  _QWORD *v16; // x8
  char *v17; // x8
  char *v18; // x24
  _QWORD *v19; // x9
  char *v20; // x9
  char *v22; // [xsp+0h] [xbp-40h] BYREF

  v3 = a3;
  v22 = a2;
  if ( (int)a3 <= 0 )
    a3 = 16;
  else
    a3 = (unsigned int)a3;
  if ( (unsigned __int64)a1[2] < a3 )
    *a1 = qvector_reserve(a1, *a1, a3, 2u);
  if ( v3 )
  {
    v5 = 1;
    while ( 1 )
    {
      v6 = v5;
      utf8_char = get_utf8_char(&v22);
      v8 = utf8_char;
      if ( !utf8_char )
        break;
      if ( utf8_char == -1 )
        return 0;
      v9 = (unsigned __int64)a1[2];
      v10 = *a1;
      if ( !HIWORD(utf8_char) )
        goto LABEL_24;
      v11 = a1[1];
      v12 = v11 != nullptr;
      v13 = (char *)v11 - 1;
      if ( v12 )
        v14 = v13;
      else
        v14 = nullptr;
      if ( v9 < (unsigned __int64)(v14 + 2) )
      {
        v10 = qvector_reserve(a1, v10, (unsigned __int64)(v14 + 2), 2u);
        *a1 = v10;
      }
      a1[1] = v14 + 2;
      *((_WORD *)v10 + (_QWORD)v14) = ((v8 + 983040) >> 10) & 0x3FF | 0xD800;
      *((_WORD *)*a1 + (_QWORD)v14 + 1) = 0;
      v15 = *a1;
      v16 = a1[1];
      v12 = v16 != nullptr;
      v17 = (char *)v16 - 1;
      if ( v12 )
        v18 = v17;
      else
        v18 = nullptr;
      if ( a1[2] < v18 + 2 )
      {
        v15 = qvector_reserve(a1, v15, (unsigned __int64)(v18 + 2), 2u);
        *a1 = v15;
      }
      a1[1] = v18 + 2;
      *((_WORD *)v15 + (_QWORD)v18) = v8 & 0x3FF | 0xDC00;
LABEL_30:
      *((_WORD *)*a1 + (_QWORD)v18 + 1) = 0;
      v5 = v6 + 1;
      if ( (v3 & 0x80000000) == 0 && v6 >= v3 )
        return 1;
    }
    if ( v3 < 0 )
      return 1;
    ++v22;
    v9 = (unsigned __int64)a1[2];
    v10 = *a1;
LABEL_24:
    v19 = a1[1];
    v12 = v19 != nullptr;
    v20 = (char *)v19 - 1;
    if ( v12 )
      v18 = v20;
    else
      v18 = nullptr;
    if ( v9 < (unsigned __int64)(v18 + 2) )
    {
      v10 = qvector_reserve(a1, v10, (unsigned __int64)(v18 + 2), 2u);
      *a1 = v10;
    }
    a1[1] = v18 + 2;
    *((_WORD *)v10 + (_QWORD)v18) = v8;
    goto LABEL_30;
  }
  return 1;
}
