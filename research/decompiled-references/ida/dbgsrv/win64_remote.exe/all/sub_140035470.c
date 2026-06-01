/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140035470
// Address: 0x0000000140035470

//----- (0000000140035470) ----------------------------------------------------
bool __fastcall sub_140035470(_QWORD *a1, int a2, int a3)
{
  char v3; // r9
  __int64 v5; // rcx
  int v6; // edi
  int v7; // eax
  int v8; // edx
  char v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v10 = 0;
  if ( a2 < 0 )
  {
    v8 = -a2;
    if ( v8 >= (unsigned __int64)qword_1400C6060 )
      return 0;
    v6 = *((_DWORD *)off_1400C6068 + 10 * v8 + 8);
    v7 = sub_14002CFB0(*((const char **)off_1400C6068 + 5 * v8 + 2), &v10);
    v3 = v10;
  }
  else
  {
    if ( a2 == 0x7FFFFFFF || (unsigned __int64)a2 >= a1[1] )
      return 0;
    v5 = *(_QWORD *)(*a1 + 8LL * a2);
    v6 = *(_DWORD *)(v5 + 72);
    v7 = *(_DWORD *)(v5 + 24);
  }
  if ( v6 + a3 < v7 )
    return 0;
  return v3 || a3 <= v7;
}
// 1400C6060: using guessed type __int64 qword_1400C6060;
