/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4734E0
// Address: 0x00000000004734E0

//----- (00000000004734E0) ----------------------------------------------------
__int64 __fastcall sub_4734E0(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rax
  unsigned int v4; // eax
  bool v5; // zf
  const char *v6; // rax

  v3 = qword_4C83E0;
  *(_DWORD *)(a1 + 76) = a2;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(v3 + 184))(*(_QWORD *)(a1 + 88));
  *(_DWORD *)(a1 + 76) = -1;
  LOBYTE(v2) = v4 == 1;
  if ( v4 != 1 )
  {
    v5 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(qword_4C83E0 + 232))(*(_QWORD *)(a1 + 88), v4) == 5;
    v6 = "irs";
    if ( !v5 )
      v6 = "openssl";
    *(_QWORD *)(a1 + 64) = v6;
  }
  return v2;
}
// 47353D: variable 'v2' is possibly undefined
// 4C83E0: using guessed type __int64 qword_4C83E0;
