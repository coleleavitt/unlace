__int64 __fastcall google_breakpad::UTF8ToUTF16Char(
        google_breakpad *this,
        const char *a2,
        _WORD *a3,
        unsigned __int16 *a4)
{
  _WORD *v5; // [rsp+28h] [rbp-28h] BYREF
  google_breakpad *v6; // [rsp+30h] [rbp-20h] BYREF
  _WORD *v8; // [rsp+40h] [rbp-10h]
  char *v9; // [rsp+48h] [rbp-8h]

  v6 = this;
  v9 = (char *)this + 1;
  v5 = a3;
  v8 = a3 + 2;
  a3[1] = 0;
  *a3 = a3[1];
  do
  {
    if ( !(unsigned int)google_breakpad::ConvertUTF8toUTF16(&v6, v9, &v5, v8, 0) )
      return v6 - this;
    v6 = this;
    ++v9;
  }
  while ( v9 <= (char *)this + (int)a2 );
  return 0;
}

