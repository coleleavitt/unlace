/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043190
// Address: 0x0000000140043190

//----- (0000000140043190) ----------------------------------------------------
char sub_140043190(__int64 a1, struct __crt_locale_pointers *a2, ...)
{
  DWORD v3; // eax
  __int64 v4; // rdx
  DWORD v5; // edi
  const char *v6; // rax
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( *(_BYTE *)(a1 + 624) )
  {
    v3 = (*(__int64 (**)(void))(*(_QWORD *)a1 + 400LL))();
    v4 = *(_QWORD *)(a1 + 376);
    v5 = v3;
    if ( !v4 || *(_BYTE *)(v4 + 68) )
      sub_140054270(0, a2, va);
    else
      sub_140052690(0, v4);
    v6 = (const char *)sub_14005A890(v5);
    sub_140012410(a1, (struct __crt_locale_pointers *)": %s\n", v6);
  }
  return 0;
}
