/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4AE0
// Address: 0x00000000000A4AE0

//----- (00000000000A4AE0) ----------------------------------------------------
__int64 __fastcall sub_A4AE0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned int v6; // r15d
  unsigned __int8 v8; // [rsp+Fh] [rbp-29h] BYREF
  unsigned __int64 v9; // [rsp+10h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = sub_A4110();
  v6 = 0;
  if ( (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int8 *, __int64, _QWORD))(*(_QWORD *)v5 + 288LL))(
         v5,
         v4,
         &v8,
         1,
         0) == 1 )
    *(_QWORD *)(a2 + 8) = v8;
  else
    return (unsigned int)throw_idc_exception(a2, "read error", a3, a4);
  return v6;
}
