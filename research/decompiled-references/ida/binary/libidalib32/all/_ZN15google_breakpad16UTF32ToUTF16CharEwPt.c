_WORD *__fastcall google_breakpad::UTF32ToUTF16Char(google_breakpad *this, _WORD *a2, unsigned __int16 *a3)
{
  _WORD *result; // rax
  int v4; // [rsp+Ch] [rbp-34h] BYREF
  int v5; // [rsp+14h] [rbp-2Ch] BYREF
  _WORD *v6; // [rsp+18h] [rbp-28h] BYREF
  int *v7; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+2Ch] [rbp-14h]
  _WORD *v9; // [rsp+30h] [rbp-10h]
  int *v10; // [rsp+38h] [rbp-8h]

  v4 = (int)this;
  v7 = &v4;
  v10 = &v5;
  v6 = a2;
  v9 = a2 + 2;
  a2[1] = 0;
  *a2 = a2[1];
  result = (_WORD *)google_breakpad::ConvertUTF32toUTF16(&v7, v10, &v6, v9, 0);
  v8 = (int)result;
  if ( (_DWORD)result )
  {
    a2[1] = 0;
    *a2 = a2[1];
    return a2;
  }
  return result;
}

