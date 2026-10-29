/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD580
// Address: 0x00000000000AD580

//----- (00000000000AD580) ----------------------------------------------------
__int64 __fastcall sub_AD580(int a1, char *a2, void *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // rbx

  if ( !a1 )
    return (int)((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, int))callui)(
                  23,
                  (_DWORD)a2,
                  (_DWORD)a3,
                  (_DWORD)a3,
                  a5,
                  a6);
  if ( a1 <= 0 )
    verror(a2, a3, (__int64)a2, (__int64)a3, a5, a6);
  v6 = 0;
  ((void (__fastcall *)(int, int, _DWORD, _DWORD, unsigned int, int))callui)(
    24,
    2,
    (_DWORD)a2,
    (_DWORD)a3,
    (unsigned int)&callui,
    a6);
  return v6;
}
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
