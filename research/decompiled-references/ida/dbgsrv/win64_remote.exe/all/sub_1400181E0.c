/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400181E0
// Address: 0x00000001400181E0

//----- (00000001400181E0) ----------------------------------------------------
_BOOL8 __fastcall sub_1400181E0(__int64 a1, _QWORD *a2)
{
  bool v4; // di
  void *v5; // rcx
  BOOL v6; // eax

  v4 = 1;
  v5 = (void *)*a2;
  if ( *a2 != -1 && v5 )
  {
    v6 = CloseHandle(v5);
    v4 = v6;
    if ( !v6 )
      sub_140043190(a1, (struct __crt_locale_pointers *)"CloseHandle(%08X)", *a2);
    *a2 = -1;
  }
  return v4;
}
