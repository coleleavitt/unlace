/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_call_unexpected
// Address: 0x000807C8

//----- (000807C8) --------------------------------------------------------
void __noreturn _cxa_call_unexpected(void *a1)
{
  __int64 v1; // kr00_8

  if ( *(_BYTE *)a1 == 71
    && *((_BYTE *)a1 + 1) == 78
    && *((_BYTE *)a1 + 2) == 85
    && *((_BYTE *)a1 + 3) == 67
    && *((_BYTE *)a1 + 4) == 67
    && *((_BYTE *)a1 + 5) == 43
    && *((_BYTE *)a1 + 6) == 43
    && *((unsigned __int8 *)a1 + 7) <= 1u )
  {
    v1 = *((_QWORD *)a1 - 3);
    sub_8065C((int)a1);
    sub_7FF24((void (__fastcall *)(_DWORD))v1);
  }
  sub_8065C((int)a1);
  sub_7FF6C();
}
