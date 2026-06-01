/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043130
// Address: 0x0000000140043130

//----- (0000000140043130) ----------------------------------------------------
void sub_140043130(__int64 a1, struct __crt_locale_pointers *a2, ...)
{
  __int64 v2; // rax
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  if ( *(_BYTE *)(a1 + 624) )
  {
    v2 = *(_QWORD *)(a1 + 376);
    if ( !v2 || *(_BYTE *)(v2 + 68) )
      sub_140054270(0, a2, va);
    else
      sub_140052690(0, v2);
  }
}
