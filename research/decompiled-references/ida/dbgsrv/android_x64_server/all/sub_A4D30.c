/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4D30
// Address: 0x00000000000A4D30

//----- (00000000000A4D30) ----------------------------------------------------
__int64 __fastcall sub_A4D30(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 *v6; // rbx
  __int64 v7; // r13
  char *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned int v11; // ebx

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 40);
  *(_BYTE *)a2 = 7;
  *(_OWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  if ( v5 )
  {
    v6 = (__int64 *)(a2 + 8);
    v7 = v5 + 1;
    if ( v5 != -1 )
    {
      v8 = (char *)qvector_reserve((__int64)v6, nullptr, v5 + 1, 1u);
      *v6 = (__int64)v8;
      memset(&v8[*(_QWORD *)(a2 + 16)], 0, v7 - *(_QWORD *)(a2 + 16));
      *(_QWORD *)(a2 + 16) = v7;
    }
    *(_BYTE *)(*v6 + v5) = 0;
    v9 = *v6;
    v10 = sub_A4110();
    v11 = 0;
    if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v10 + 288LL))(
           v10,
           v4,
           v9,
           v5,
           0) != v5 )
      return (unsigned int)throw_idc_exception(a2, "read error", 0.0, a4);
  }
  else
  {
    return 0;
  }
  return v11;
}
