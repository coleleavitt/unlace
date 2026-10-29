/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003ED40
// Address: 0x000000014003ED40

//----- (000000014003ED40) ----------------------------------------------------
void __fastcall sub_14003ED40(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rdx
  unsigned int v9; // ebx
  unsigned int v10; // eax

  v6 = *(_QWORD *)(a1 + 168);
  if ( v6 < a3 )
  {
    v9 = sub_14003FD60(*(void **)(a1 + 160), v6);
    v10 = sub_14003FD60(*(void **)(a1 + 168), a3);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 8LL))(a2, v9, v10, a4);
    *(_QWORD *)(a1 + 168) = a3;
  }
}
