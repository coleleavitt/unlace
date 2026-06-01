/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400059E0
// Address: 0x00000001400059E0

//----- (00000001400059E0) ----------------------------------------------------
__int64 __fastcall sub_1400059E0(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 16) + 64LL))(*(_QWORD *)(a1 + 16), &v8);
  v4 = v8;
  v5 = v3;
  if ( !a2 )
    return 1;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 272LL))(a2) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30545);
  }
  v7 = 0;
  *(_BYTE *)(a2 + 24) = 1;
  result = v5;
  if ( !v5 )
    v7 = v4;
  *(_QWORD *)(a2 + 16) = v7;
  return result;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
