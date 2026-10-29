/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E218
// Address: 0x000000000043E218

//----- (000000000043E218) ----------------------------------------------------
__int64 __fastcall sub_43E218(__int64 *a1, unsigned __int8 *a2, char *a3)
{
  int v4; // w0
  unsigned int v5; // w20
  const char *v7; // x0
  unsigned __int8 *v8; // x0
  size_t v9; // x23
  void *v10; // x0
  void *v11; // x1
  char *v12; // [xsp+38h] [xbp-28h]
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  size_t v14; // [xsp+48h] [xbp-18h]
  __int64 v15; // [xsp+50h] [xbp-10h]

  if ( !a2 )
    return (unsigned int)sub_44DA00(a1, (__int64)a2, a3, 0) == 0;
  v4 = *a2;
  if ( v4 == 7 )
  {
    if ( *((_QWORD *)a2 + 2) )
      v7 = *((const char **)a2 + 1);
    else
      v7 = (const char *)&qword_4B2D48;
    v12 = a3;
    v8 = (unsigned __int8 *)sub_43E198(v7);
    a2 = v8;
    if ( !v8 )
    {
      v5 = 0;
      sub_4869C8(1532);
      return v5;
    }
    a3 = v12;
    if ( *v8 != 5 )
      return (unsigned int)sub_44DA00(a1, (__int64)a2, a3, 0) == 0;
  }
  else if ( v4 != 5 )
  {
    return (unsigned int)sub_44DA00(a1, (__int64)a2, a3, 0) == 0;
  }
  if ( a3 && *a3 )
    return (unsigned int)sub_44DA00(a1, (__int64)a2, a3, 0) == 0;
  ptr = nullptr;
  v14 = 0;
  v15 = 0;
  v5 = 0;
  if ( !(unsigned int)sub_444440((__int64)&ptr, (__int64)a2) )
  {
    sub_448310(a1);
    v9 = v14;
    v5 = 1;
    *(_BYTE *)a1 = 7;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    if ( v9 )
    {
      v10 = sub_491248(v9);
      v11 = ptr;
      a1[1] = (__int64)v10;
      a1[3] = v9;
      memcpy(v10, v11, v9);
      a1[2] = v9;
    }
  }
  if ( ptr )
  {
    v14 = 0;
    j__free(ptr);
  }
  return v5;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
