/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4C90
// Address: 0x00000000000A4C90

//----- (00000000000A4C90) ----------------------------------------------------
__int64 __fastcall sub_A4C90(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // r15
  __int64 v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // rbx
  _QWORD v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v9[1] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = sub_A4110();
  v6 = 0;
  if ( (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64, _QWORD))(*(_QWORD *)v5 + 288LL))(
         v5,
         v4,
         v9,
         8,
         0) == 8 )
  {
    v7 = v9[0];
    free_idcv((char *)a2, a3, a4);
    *(_BYTE *)a2 = 9;
    *(_QWORD *)(a2 + 8) = v7;
  }
  else
  {
    return (unsigned int)throw_idc_exception(a2, "read error", a3, a4);
  }
  return v6;
}
