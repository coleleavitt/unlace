/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_424D70
// Address: 0x0000000000424D70

//----- (0000000000424D70) ----------------------------------------------------
__int64 __fastcall sub_424D70(__int64 a1, _BYTE *a2, signed __int64 a3, char a4, __int64 a5)
{
  __int64 v6; // rcx
  int v8; // ebp
  void (__fastcall *v10)(__int64, __int64, signed __int64, _QWORD, __int64); // r13
  __int64 v11; // rax

  v6 = 0;
  if ( a4 )
    v6 = *(unsigned __int8 *)(a1 + 616);
  v8 = sub_47F7C0(*(_QWORD *)(a1 + 472), a2, a3, v6, a5);
  if ( v8 < 0 )
  {
    v10 = *(void (__fastcall **)(__int64, __int64, signed __int64, _QWORD, __int64))(a1 + 496);
    v11 = sub_47F740(*(_QWORD *)(a1 + 472), 0, 1);
    v10(a1, 19, a3, v8, v11);
  }
  return (unsigned int)v8;
}
