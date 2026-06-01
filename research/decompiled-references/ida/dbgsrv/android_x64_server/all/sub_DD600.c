/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DD600
// Address: 0x00000000000DD600

//----- (00000000000DD600) ----------------------------------------------------
_QWORD *__fastcall sub_DD600(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rax
  char *v5; // r13
  char *v6; // rax
  char *v7; // r12
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *result; // rax

  v4 = sub_D97A0(a1);
  if ( !v4 )
    return nullptr;
  v5 = v4;
  v6 = sub_D97A0(a1);
  if ( !v6 )
    return nullptr;
  v7 = v6;
  v8 = *(_QWORD **)(a1 + 4832);
  v9 = v8[1];
  if ( (unsigned __int64)(v9 + 48) < 0xFF0 )
  {
    v11 = v8 + 1;
  }
  else
  {
    v10 = (_QWORD *)operator new[](0x1000u);
    *v10 = v8;
    v10[1] = 0;
    *(_QWORD *)(a1 + 4832) = v10;
    v9 = 0;
    v11 = v10 + 1;
    v8 = v10;
  }
  *v11 = v9 + 48;
  result = (_QWORD *)((char *)v8 + v9 + 16);
  *(_DWORD *)((char *)v8 + v9 + 24) = 16843050;
  *result = off_151F18;
  *(_QWORD *)((char *)v8 + v9 + 32) = v5;
  *(_QWORD *)((char *)v8 + v9 + 40) = a2;
  *(_QWORD *)((char *)v8 + v9 + 48) = a3;
  *(_QWORD *)((char *)v8 + v9 + 56) = v7;
  return result;
}
// 151F18: using guessed type __int64 (__fastcall *off_151F18[7])();
