/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140005B50
// Address: 0x0000000140005B50

//----- (0000000140005B50) ----------------------------------------------------
__int64 __fastcall sub_140005B50(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 144LL))(
         *(_QWORD *)(a1 + 48),
         a3,
         &v6);
  if ( !v4 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 272LL))(a2) )
    {
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(30543);
    }
    *(_QWORD *)(a2 + 16) = v6;
    *(_BYTE *)(a2 + 24) = 1;
  }
  return v4;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
