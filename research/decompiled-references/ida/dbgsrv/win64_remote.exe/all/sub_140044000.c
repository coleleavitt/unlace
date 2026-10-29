/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044000
// Address: 0x0000000140044000

//----- (0000000140044000) ----------------------------------------------------
void __fastcall sub_140044000(__int64 a1, __int64 a2, __int64 a3)
{
  double v3; // xmm2_8
  double v5; // rax
  const char *v6; // r9
  int v7; // ecx

  if ( !a3 || (*(_BYTE *)(a3 + 4) & 8) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(3299);
    }
    v5 = *(double *)(a2 + 32);
    v6 = Str1;
    v7 = *(_DWORD *)(a2 + 4);
    if ( v5 == NAN )
    {
      if ( *(_QWORD *)(a2 + 48) )
        v6 = *(const char **)(a2 + 40);
      sub_140012410(
        a1,
        (struct __crt_locale_pointers *)"%a: %s (exc.code %x, tid %d)\n",
        v3,
        v6,
        *(_DWORD *)(a2 + 24),
        v7);
    }
    else
    {
      if ( *(_QWORD *)(a2 + 48) )
        v6 = *(const char **)(a2 + 40);
      sub_140012410(
        a1,
        (struct __crt_locale_pointers *)"%a: %s -> %a (exc.code %x, tid %d)\n",
        v3,
        v6,
        v5,
        *(_DWORD *)(a2 + 24),
        v7);
    }
  }
}
// 14004405F: variable 'v3' is possibly undefined
// 1400CB61C: using guessed type char byte_1400CB61C;
