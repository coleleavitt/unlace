/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EF134
// Address: 0x00000000000EF134

//----- (00000000000EF134) ----------------------------------------------------
__int64 __fastcall sub_EF134(_QWORD *a1, __int64 *a2)
{
  int v4; // w24
  int v5; // w22
  __int64 result; // x0
  __int64 s[202]; // [xsp+40h] [xbp+40h] BYREF
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, _QWORD *, __int64 *); // [xsp+690h] [xbp+690h]

  while ( 1 )
  {
    v4 = sub_EE428(a2, (char *)s);
    v5 = Unwind_GetCFA((__int64)a2) - ((unsigned __int64)a2[104] >> 63) == a1[3] ? 4 : 0;
    if ( v4 )
      break;
    if ( v8 )
    {
      result = v8(1, v5 | 2u, *a1, a1, a2);
      if ( (_DWORD)result == 7 )
        return result;
      if ( (_DWORD)result != 8 )
        break;
    }
    if ( v5 )
      abort();
    sub_EF0E8(a2, s);
  }
  return 2;
}
