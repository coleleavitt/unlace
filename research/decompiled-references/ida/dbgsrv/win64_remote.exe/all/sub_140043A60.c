/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043A60
// Address: 0x0000000140043A60

//----- (0000000140043A60) ----------------------------------------------------
char __fastcall sub_140043A60(__int64 a1, int a2, struct __crt_locale_pointers *a3, __int64 a4)
{
  __int64 v7; // rax
  char *v8; // rdx

  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( v7 )
  {
    v8 = (char *)Str1;
    if ( *(_QWORD *)(v7 + 16) )
      v8 = *(char **)(v7 + 8);
    sub_1400621E0(a3, v8, a4);
    return 1;
  }
  else
  {
    sub_14005B0A0(a3, a4, "%08X", a2);
    return 0;
  }
}
