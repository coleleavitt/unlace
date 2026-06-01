/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459D00
// Address: 0x00459D00

//----- (00459D00) --------------------------------------------------------
int __stdcall sub_459D00(unsigned int *a1, const char *a2, int a3, char *a4, const char *a5, int a6)
{
  int v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD *v12; // ebp
  unsigned int v13; // edi
  unsigned int v14; // [esp+8h] [ebp-8h] BYREF
  char *v15; // [esp+Ch] [ebp-4h] BYREF

  if ( !a2 )
    goto LABEL_23;
  if ( *a2 != 77 )
    goto LABEL_21;
  v6 = strcmp(a2, "MUTF-8");
  if ( v6 )
    v6 = v6 < 0 ? -1 : 1;
  if ( v6 )
  {
LABEL_21:
    if ( *a2 == aUtf8[0] )
    {
      v9 = strcmp(a2, "UTF-8");
      if ( v9 )
        v9 = v9 < 0 ? -1 : 1;
      if ( !v9 && a3 && *(_BYTE *)a3 == 77 )
      {
        v10 = strcmp((const char *)a3, "MUTF-8");
        if ( v10 )
          v10 = v10 < 0 ? -1 : 1;
        if ( !v10 )
          return sub_462000((int)a1, (unsigned int)a4, (int)a5);
      }
    }
LABEL_23:
    v11 = sub_457EE0((int)&dword_4B5D68, a2, (const char *)a3);
    v12 = (_DWORD *)v11;
    if ( v11 == -1 )
    {
      if ( dword_4B70EC < 0 )
        sub_402760("convert_encoding(%s, %s): could not initialize iconv (bad encoding name?)\n");
    }
    else
    {
      (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v11 + 8))(*(_DWORD *)v11, 0, 0, 0, 0);
      v13 = 1024;
      v15 = a4;
      a2 = a5;
      sub_4028B0((int)a1, 0x400u);
      a3 = 1024;
      v14 = *a1;
      if ( ((int (__cdecl *)(_DWORD, char **, const char **, unsigned int *, int *))v12[2])(*v12, &v15, &a2, &v14, &a3) != -1 )
      {
LABEL_27:
        if ( a2 )
        {
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(17);
        }
LABEL_38:
        sub_4028B0((int)a1, v13 - a3);
        return a5 - a2;
      }
      while ( *sub_46B984() == 7 )
      {
        v13 += 1024;
        sub_4028B0((int)a1, v13);
        a3 += 1024;
        v14 = v13 + *a1 - a3;
        if ( ((int (__cdecl *)(_DWORD, char **, const char **, unsigned int *, int *))v12[2])(
               *v12,
               &v15,
               &a2,
               &v14,
               &a3) != -1 )
          goto LABEL_27;
      }
      if ( *sub_46B984() == 42 )
      {
        if ( dword_4B70EC < 0 )
          sub_402760("convert_encoding(%s, %s): An invalid multibyte sequence is encountered in the input\n");
      }
      else if ( *sub_46B984() == 22 )
      {
        if ( dword_4B70EC < 0 )
          sub_402760(
            "convert_encoding(%s, %s): An incomplete multibyte sequence is encountered in the input, and the input byte s"
            "equence terminates after it.\n");
      }
      else if ( dword_4B70EC < 0 )
      {
        sub_46B984();
        sub_402760("convert_encoding(%s, %s): unknown error (%d).\n");
      }
      if ( (a6 & 1) == 0 )
        goto LABEL_38;
    }
    return -1;
  }
  if ( !a3 || *(_BYTE *)a3 != aUtf8[0] )
    return sub_461A00(a1, a3, a4, (int)a5, a6);
  v7 = strcmp((const char *)a3, "UTF-8");
  if ( v7 )
    v7 = v7 < 0 ? -1 : 1;
  if ( !v7 )
    return sub_461BD0((int)a1, (unsigned int)a4, (int)a5);
  else
    return sub_461A00(a1, a3, a4, (int)a5, a6);
}
// 4B5D68: using guessed type int dword_4B5D68;
// 4B70EC: using guessed type int dword_4B70EC;
// 4B70F0: using guessed type char byte_4B70F0;
