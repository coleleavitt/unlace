/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003B70
// Address: 0x0000000140003B70

//----- (0000000140003B70) ----------------------------------------------------
__int64 __fastcall sub_140003B70(__int64 a1, const wchar_t *a2, signed int a3)
{
  const char *v5; // rax

  if ( a3 )
  {
    if ( (dword_1400CB618 & 0x10000) != 0 )
    {
      if ( a3 == -2147418113 )
      {
        v5 = "Data source has already been prepared.";
      }
      else if ( a3 == -2147024809 )
      {
        v5 = "Invalid parameter.";
      }
      else if ( a3 < -2140340223 || (unsigned int)(a3 + 2140340223) >= 0x19 )
      {
        v5 = (const char *)sub_14005A890(a3);
      }
      else
      {
        v5 = off_140091880[a3 + 2140340223];
      }
      sub_140002CE0((struct __crt_locale_pointers *)"MSDIA: \"%S\": %s\n", a2, v5);
    }
  }
  else if ( (dword_1400CB618 & 0x10000) != 0 )
  {
    sub_140002CE0((struct __crt_locale_pointers *)"MSDIA: pdb file \"%S\" matched\n", a2);
    return 0;
  }
  return 0;
}
// 140091880: using guessed type char *off_140091880[25];
// 1400CB618: using guessed type int dword_1400CB618;
