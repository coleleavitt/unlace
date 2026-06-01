/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003B360
// Address: 0x000000014003B360

//----- (000000014003B360) ----------------------------------------------------
__int64 __fastcall sub_14003B360(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 *v10; // rdi
  void *v11; // rdx
  __int64 v12; // r8
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rcx
  struct __crt_locale_pointers *v16; // rdx
  signed __int64 v17; // r8
  va_list v18; // r9
  int v19; // eax
  va_list v20; // r9
  const char *v21; // rdx
  __int8 *v22; // rax
  __int8 *v23; // rdx
  __int8 *v24; // r8
  __int8 *v25; // rdi
  __int8 v26; // cl
  int v27; // [rsp+20h] [rbp-68h]
  _OWORD v28[2]; // [rsp+38h] [rbp-50h] BYREF

  sub_14003E470(a1);
  if ( !a2 )
  {
    *(_BYTE *)(a1 + 720) = 0;
    if ( !*(_QWORD *)(a1 + 648) )
    {
      v6 = operator new(0x40u);
      v7 = v6;
      if ( v6 )
      {
        *(_DWORD *)v6 = 0;
        v6[1] = 0;
        v6[2] = 0;
        v8 = operator new(0x50u);
        *v8 = v8;
        v8[1] = v8;
        v7[1] = v8;
        v7[3] = 0;
        v7[4] = 0;
        v7[5] = 0;
        v7[6] = 7;
        v7[7] = 8;
        *(_DWORD *)v7 = 1065353216;
        v9 = v7[1];
        if ( (unsigned __int64)((__int64)v7[4] >> 3) >= 0x10 )
        {
          v14 = (unsigned __int64)(v7[4] + 7LL) >> 3;
          if ( v14 )
            memset64(nullptr, v9, v14);
        }
        else
        {
          v10 = (unsigned __int64 *)operator new(0x80u);
          v11 = (void *)v7[3];
          v12 = (__int64)(v7[5] - (_QWORD)v11) >> 3;
          if ( v12 )
            sub_140011C80((__int64)(v7 + 3), v11, v12);
          v7[3] = v10;
          v13 = v10 + 16;
          v7[4] = v10 + 16;
          v7[5] = v10 + 16;
          do
            *v10++ = v9;
          while ( v10 != v13 );
        }
      }
      else
      {
        v7 = nullptr;
      }
      *(_QWORD *)(a1 + 648) = v7;
    }
    if ( sub_14003D180(a1, (const char **)off_1400963D0) )
    {
      if ( !byte_1400CAFC0 && (a3 & 1) == 0 )
        return 0;
      if ( sub_14003D180(a1, (const char **)off_140096520) )
      {
        if ( byte_1400CAFC0 )
        {
          v19 = dword_1400C6C30;
          if ( dword_1400C6C30 == -1 )
          {
            dword_1400C6C30 = (unsigned __int8)((__int64 (__fastcall *)(int, struct __crt_locale_pointers *, signed __int64, va_list))off_1400C6AE0)(
                                                 53,
                                                 v16,
                                                 v17,
                                                 v18);
            off_1400C6AE0(52, (struct __crt_locale_pointers *)&xmmword_1400CB048, 32, v20, v27);
            v19 = dword_1400C6C30;
          }
          if ( v19 )
          {
            sub_140037CF0(a1, "__QT__", "1", 0, 0, nullptr);
            v21 = "__GUI__";
          }
          else
          {
            v21 = "__TXT__";
          }
          sub_140037CF0(a1, v21, "1", 0, 0, nullptr);
          sub_140037CF0(a1, "__IDA_VERSION__", &xmmword_1400CB048, 0, 0, nullptr);
          v28[0] = xmmword_1400CB048;
          v28[1] = xmmword_1400CB058;
          v22 = sub_14006CA14((__int64)v28, 0x2Eu);
          if ( v22 )
          {
            v23 = v22 + 1;
            v24 = v22 + 1;
            do
            {
              v25 = v22;
              v26 = *v23++;
              *v22++ = v26;
            }
            while ( v26 );
            if ( (unsigned __int64)(v23 - v24 - 1) <= 1 )
            {
              *v25 = 48;
              *v22 = 0;
            }
          }
          sub_140037CF0(a1, "__IDAVER__", v28, 0, 0, nullptr);
        }
        return 0;
      }
    }
    return sub_140063DE0();
  }
  *(_QWORD *)(a1 + 648) = a2;
  *(_BYTE *)(a1 + 720) = 1;
  return 0;
}
// 14003B516: variable 'v16' is possibly undefined
// 14003B516: variable 'v17' is possibly undefined
// 14003B516: variable 'v18' is possibly undefined
// 14003B533: variable 'v20' is possibly undefined
// 14003B533: variable 'v27' is possibly undefined
// 1400963D0: using guessed type char *off_1400963D0[24];
// 140096520: using guessed type char *off_140096520[4];
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
// 1400C6C30: using guessed type int dword_1400C6C30;
// 1400CAFC0: using guessed type char byte_1400CAFC0;
// 1400CB048: using guessed type __int128 xmmword_1400CB048;
// 1400CB058: using guessed type __int128 xmmword_1400CB058;
