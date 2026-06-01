/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14008DD10
// Address: 0x000000014008DD10

//----- (000000014008DD10) ----------------------------------------------------
__int64 __fastcall sub_14008DD10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // rdx

  v2 = *(_QWORD *)(a2 + 48);
  v3 = Str1;
  if ( *(_QWORD *)(v2 + 8) )
    v3 = *(const char **)v2;
  sub_140002CE0((struct __crt_locale_pointers *)"Failed fetching data: %s\n", v3);
  return 0;
}
