/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4089B0
// Address: 0x00000000004089B0

//----- (00000000004089B0) ----------------------------------------------------
__int64 __fastcall sub_4089B0(__int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned __int16 v7; // [xsp+36h] [xbp-Ah] BYREF
  __int64 v8; // [xsp+38h] [xbp-8h]

  sub_473918(a1, a2, a3);
  if ( *a3 == 2
    && (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int16 *, __int64, _QWORD))(*(_QWORD *)a1 + 288LL))(
         a1,
         *a2,
         &v7,
         2,
         0) > 0
    && sub_4740D0(v7) )
  {
    *a3 |= 0x80u;
  }
  return v8 ^ _stack_chk_guard;
}
