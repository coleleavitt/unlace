/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400482B0
// Address: 0x00000001400482B0

//----- (00000001400482B0) ----------------------------------------------------
void __fastcall sub_1400482B0(__int64 a1, _QWORD *a2, signed int a3, __int64 a4)
{
  _DWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  void *Block[2]; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]

  sub_140002D20(a2, a3);
  if ( a3 <= 0 )
  {
    sub_1400068C0(a2, a4);
  }
  else
  {
    v8[0] = 40;
    v8[1] = 8;
    *(_OWORD *)Block = 0;
    v10 = 0;
    v11 = -1;
    (*(void (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)(a1 + 440) + 544LL))(*(_QWORD *)(a1 + 440), v8);
    sub_1400507D0(a2, (__int64)v8);
    if ( *(_BYTE *)(a1 + 184) )
      sub_140002CE0(
        (struct __crt_locale_pointers *)"RPC: append_start_or_attach idaregs.nregs %zu\n",
        *(_QWORD *)(*(_QWORD *)(a1 + 440) + 512LL));
    sub_140050A70(a2, *(_QWORD *)(a1 + 440) + 504LL);
    if ( Block[0] )
    {
      Block[1] = nullptr;
      j_free(Block[0]);
    }
  }
}
// 140050A70: using guessed type __int64 __fastcall sub_140050A70(_QWORD, _QWORD);
