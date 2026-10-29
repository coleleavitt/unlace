/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9C90
// Address: 0x00000000000A9C90

//----- (00000000000A9C90) ----------------------------------------------------
bool __fastcall sub_A9C90(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned __int32 v5; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v2 = a2[1];
  v3 = v2 - 1;
  if ( !v2 )
    v3 = 0;
  v5 = _byteswap_ulong(v3);
  if ( (*(__int64 (__fastcall **)(__int64, unsigned __int32 *, __int64))(*(_QWORD *)a1 + 64LL))(a1, &v5, 4) != 4 )
    return 0;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, *a2, v3) == v3;
  return 1;
}
