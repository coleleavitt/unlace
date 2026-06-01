/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48A0E0
// Address: 0x000000000048A0E0

//----- (000000000048A0E0) ----------------------------------------------------
__int64 sub_48A0E0(char **a1, char a2, unsigned __int8 *a3, ...)
{
  size_t v5; // x0
  size_t v6; // x21
  size_t v7; // x20
  char *v8; // x24
  char *v9; // x25
  __int64 v10; // x21
  void *v11; // x27
  size_t v12; // x28
  char *v13; // x19
  const char *v14; // x22
  const char *v15; // x1
  void *v17; // x19
  char *v18; // x1
  gcc_va_list va; // [xsp+60h] [xbp-1110h] BYREF
  void *src; // [xsp+80h] [xbp-10F0h] BYREF
  size_t v21; // [xsp+88h] [xbp-10E8h]
  __int64 v22; // [xsp+90h] [xbp-10E0h]
  gcc_va_list va1; // [xsp+98h] [xbp-10D8h] BYREF
  char s[4096]; // [xsp+B8h] [xbp-10B8h] BYREF
  __int64 v25; // [xsp+10B8h] [xbp-B8h]

  va_start(va, a3);
  va_start(va1, a3);
  sub_48F078(s, 4096, a3, (__int64)va);
  if ( (a2 & 4) == 0 || (unsigned __int8)sub_4902C8(s) )
  {
    src = nullptr;
    v21 = 0;
    v22 = 0;
    v5 = strlen(s);
    v6 = v5 + 1;
    v7 = v5;
    src = sub_491288((__int64)&src, nullptr, v5 + 1, 1u);
    v21 = v6;
    memmove(src, s, v7);
    *((_BYTE *)src + v7) = 0;
    v9 = *a1;
    v8 = a1[1];
    v10 = (__int64)&(*a1)[24 * (_QWORD)v8];
    if ( *a1 == (char *)v10 )
    {
      v12 = v21;
LABEL_15:
      v17 = nullptr;
      if ( v12 )
      {
        v17 = sub_491248(v12);
        memcpy(v17, src, v12);
        v9 = *a1;
        v8 = a1[1];
      }
      if ( v8 + 1 > a1[2] )
      {
        v9 = (char *)sub_491288((__int64)a1, v9, (unsigned __int64)(v8 + 1), 0x18u);
        v8 = a1[1];
        *a1 = v9;
      }
      v18 = &v9[24 * (_QWORD)v8];
      *(_QWORD *)v18 = v17;
      *((_QWORD *)v18 + 1) = v12;
      *((_QWORD *)v18 + 2) = v12;
      v11 = src;
      ++a1[1];
    }
    else
    {
      v11 = src;
      v12 = v21;
      v13 = *a1;
      if ( v21 )
        v14 = (const char *)src;
      else
        v14 = (const char *)&qword_4B2D48;
      while ( 1 )
      {
        v15 = (const char *)&qword_4B2D48;
        if ( *((_QWORD *)v13 + 1) )
          v15 = *(const char **)v13;
        if ( !strcmp(v14, v15) )
          break;
        v13 += 24;
        if ( (char *)v10 == v13 )
          goto LABEL_15;
      }
    }
    if ( v11 )
    {
      v21 = 0;
      j__free(v11);
    }
  }
  return v25 ^ _stack_chk_guard;
}
// 48A0E0: could not find valid save-restore pair for x21
// 48A0E0: could not find valid save-restore pair for x22
// 48A0E0: could not find valid save-restore pair for x24
// 48A0E0: could not find valid save-restore pair for x25
// 48A0E0: could not find valid save-restore pair for x27
// 48A0E0: could not find valid save-restore pair for x28
// 4B2D48: using guessed type __int64 qword_4B2D48;
