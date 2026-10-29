/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A640
// Address: 0x000000014005A640

//----- (000000014005A640) ----------------------------------------------------
void __fastcall __noreturn sub_14005A640(int Code)
{
  struct __crt_locale_pointers *v2; // rax
  struct __crt_locale_pointers *v3; // rbx
  va_list v4; // r9
  __int64 (__fastcall *v5)(__int64); // rdx
  void **(__fastcall *v6)(void **, char); // r8

  byte_1400CB600 = 1;
  if ( !qword_1400CB5F8 )
    goto LABEL_18;
  if ( qword_1400CB5F0 )
  {
    v2 = (struct __crt_locale_pointers *)operator new(0x20u);
    v3 = v2;
    if ( v2 )
    {
      v2->mbcinfo = nullptr;
      v2[1].locinfo = nullptr;
      v2->locinfo = (struct __crt_locale_data *)&off_1400AB3A8;
      LODWORD(v2[1].mbcinfo) = Code;
      BYTE4(v2[1].mbcinfo) = 1;
    }
    else
    {
      v3 = nullptr;
    }
    if ( sub_14005C830() )
    {
      v5 = *(__int64 (__fastcall **)(__int64))v3->locinfo;
      if ( v5 == sub_14005A250 )
        sub_14005A250((__int64)v3);
      else
        v5((__int64)v3);
    }
    else
    {
      ((void (__fastcall *)(int, struct __crt_locale_pointers *, signed __int64, va_list))off_1400C6AE0)(86, v3, 2, v4);
      if ( !v3 )
        goto LABEL_14;
    }
    v6 = *((void **(__fastcall **)(void **, char))v3->locinfo + 1);
    if ( v6 == sub_14005A1B0 )
      sub_14005A1B0((void **)&v3->locinfo, 1);
    else
      v6((void **)&v3->locinfo, 1);
  }
LABEL_14:
  if ( !byte_1400CB61D )
  {
    byte_1400CB61D = 1;
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(546);
  }
LABEL_18:
  exit(Code);
}
// 14005A6E3: variable 'v4' is possibly undefined
// 1400AB3A8: using guessed type __int64 (__fastcall *off_1400AB3A8)();
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
// 1400CB5F8: using guessed type __int64 qword_1400CB5F8;
// 1400CB600: using guessed type char byte_1400CB600;
// 1400CB61C: using guessed type char byte_1400CB61C;
// 1400CB61D: using guessed type char byte_1400CB61D;
