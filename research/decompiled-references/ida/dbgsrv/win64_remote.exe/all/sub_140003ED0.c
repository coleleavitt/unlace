/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003ED0
// Address: 0x0000000140003ED0

//----- (0000000140003ED0) ----------------------------------------------------
__int64 __fastcall sub_140003ED0(__int64 a1, int *a2, _BYTE *a3, va_list a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v10; // edx
  char *v11; // rcx

  v6 = a1 - 1;
  if ( !v6 )
  {
    v11 = (char *)a2;
    goto LABEL_19;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 2 )
      {
        if ( !*a3 )
          sub_1400085B0((signed __int64)"Downloading pdb...");
        *a3 = 1;
        return 1;
      }
      return 1;
    }
    v10 = *a2;
    if ( (v10 || a2[1] || *((_QWORD *)a2 + 2)) && (dword_1400CB618 & 0x10000) != 0 )
      sub_140002CE0(
        (struct __crt_locale_pointers *)"SYMSRV: event severity: %d code: %d object: %p\n",
        v10,
        a2[1],
        *((const void **)a2 + 2));
    v11 = *((char **)a2 + 1);
LABEL_19:
    sub_140008F70(v11);
    return 1;
  }
  if ( *a3
    && (unsigned __int8)((__int64 (__fastcall *)(int, struct __crt_locale_pointers *, signed __int64, va_list))off_1400C6AE0)(
                          27,
                          (struct __crt_locale_pointers *)off_1400C6AE0,
                          (signed __int64)a3,
                          a4) )
  {
    *a2 = 1;
    return 1;
  }
  else
  {
    *a2 = 0;
    return 1;
  }
}
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
// 1400CB618: using guessed type int dword_1400CB618;
