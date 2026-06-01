/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E4800
// Address: 0x00000000000E4800

//----- (00000000000E4800) ----------------------------------------------------
__int64 __fastcall sub_E4800(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  _BYTE *v3; // rbx
  __int64 result; // rax

  v2 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v2 + 24LL))(v2);
  if ( v2[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v2 + 32LL))(v2, a2);
  v3 = *(_BYTE **)(a1 + 24);
  result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2);
  if ( v3[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
  return result;
}
