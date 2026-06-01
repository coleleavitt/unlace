/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140061280
// Address: 0x0000000140061280

//----- (0000000140061280) ----------------------------------------------------
__int64 __fastcall sub_140061280(unsigned __int64 *a1, const char *a2, const char *a3, char *a4, __int64 a5, int a6)
{
  __int64 v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, _QWORD *, __int64 *, unsigned __int64 *, __int64 *); // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  int *v18; // rax
  __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v21[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

  if ( !a2 )
    goto LABEL_15;
  if ( *a2 != 77 || strcmp(a2, "MUTF-8") )
  {
    if ( *a2 == aUtf8[0] && !strcmp(a2, "UTF-8") && a3 && *a3 == 77 && !strcmp(a3, "MUTF-8") )
      return sub_140069F90((__int64)a1, a4, a5);
LABEL_15:
    v11 = sub_14005F2F0((const char **)&qword_1400C9FA8, a2, a3);
    v12 = (_QWORD *)v11;
    if ( v11 == -1 )
    {
      if ( dword_1400CB618 < 0 )
        sub_140002CE0(
          (struct __crt_locale_pointers *)"convert_encoding(%s, %s): could not initialize iconv (bad encoding name?)\n",
          a2,
          a3);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v11 + 16))(*(_QWORD *)v11, 0, 0, 0, 0);
      v13 = a5;
      v21[0] = a4;
      v14 = 1024;
      v19 = a5;
      sub_140002EF0((__int64)a1, 0x400u);
      v20 = *a1;
      v15 = (__int64 (__fastcall *)(__int64, _QWORD *, __int64 *, unsigned __int64 *, __int64 *))v12[2];
      v16 = *v12;
      v22 = 1024;
      if ( v15(v16, v21, &v19, &v20, &v22) != -1 )
      {
LABEL_19:
        if ( v19 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(17);
        }
LABEL_30:
        sub_140002EF0((__int64)a1, v14 - v22);
        return v13 - v19;
      }
      while ( *errno() == 7 )
      {
        v14 += 1024LL;
        sub_140002EF0((__int64)a1, v14);
        v17 = *a1 - (v22 + 1024);
        v22 += 1024;
        v20 = v14 + v17;
        if ( ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64 *, unsigned __int64 *, __int64 *))v12[2])(
               *v12,
               v21,
               &v19,
               &v20,
               &v22) != -1 )
          goto LABEL_19;
      }
      if ( *errno() == 42 )
      {
        if ( dword_1400CB618 < 0 )
          sub_140002CE0(
            (struct __crt_locale_pointers *)"convert_encoding(%s, %s): An invalid multibyte sequence is encountered in the input\n",
            a2,
            a3);
      }
      else if ( *errno() == 22 )
      {
        if ( dword_1400CB618 < 0 )
          sub_140002CE0(
            (struct __crt_locale_pointers *)"convert_encoding(%s, %s): An incomplete multibyte sequence is encountered in"
                                            " the input, and the input byte sequence terminates after it.\n",
            a2,
            a3);
      }
      else if ( dword_1400CB618 < 0 )
      {
        v18 = errno();
        sub_140002CE0((struct __crt_locale_pointers *)"convert_encoding(%s, %s): unknown error (%d).\n", a2, a3, *v18);
      }
      if ( (a6 & 1) == 0 )
        goto LABEL_30;
    }
    return -1;
  }
  if ( a3 && *a3 == aUtf8[0] && !strcmp(a3, "UTF-8") )
    return sub_140069C30((__int64)a1, (unsigned __int8 *)a4, a5);
  else
    return sub_140069A20(a1, a3, a4, a5, a6);
}
// 1400CB618: using guessed type int dword_1400CB618;
// 1400CB61C: using guessed type char byte_1400CB61C;
