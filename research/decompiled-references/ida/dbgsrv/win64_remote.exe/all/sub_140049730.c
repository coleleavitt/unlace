/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140049730
// Address: 0x0000000140049730

//----- (0000000140049730) ----------------------------------------------------
__int64 __fastcall sub_140049730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD **v6; // r10
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v8[0] = a3;
  v6 = (_QWORD **)(a1 - 192);
  if ( !a1 )
    v6 = nullptr;
  v8[1] = a3 + a4;
  if ( (int)a2 < 0x1000000 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*v6[55] + 392LL))(v6[55]);
  else
    return ((__int64 (__fastcall *)(_QWORD **, __int64, __int64, __int64, _QWORD *))(*v6)[3])(v6, a2, a5, a6, v8);
}
