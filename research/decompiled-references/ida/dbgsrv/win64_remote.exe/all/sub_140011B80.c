/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140011B80
// Address: 0x0000000140011B80

//----- (0000000140011B80) ----------------------------------------------------
__int64 __fastcall sub_140011B80(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // al
  unsigned int v11; // ecx

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  if ( !a4 )
    return 0xFFFFFFFFLL;
  v8 = *(_QWORD *)(a1 + 496);
  *(_DWORD *)(v8 + 108) = a2;
  *(_DWORD *)(v8 + 104) = 0;
  v9 = *(_QWORD *)(a1 + 496);
  if ( v5 < *(_QWORD *)(v9 + 24) )
    *(_DWORD *)(v9 + 104) |= *(unsigned __int8 *)(**(_QWORD **)(v9 + 8) + 32 * v5 + 12);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 496) + 16LL))(*(_QWORD *)(a1 + 496))
    || !sub_140018280(*(_QWORD *)(a1 + 496), v5, a4) )
  {
    return 0xFFFFFFFFLL;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 496) + 24LL))(*(_QWORD *)(a1 + 496));
  v11 = 1;
  if ( !v10 )
    return (unsigned int)-1;
  return v11;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
