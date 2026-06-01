/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003DD0
// Address: 0x0000000140003DD0

//----- (0000000140003DD0) ----------------------------------------------------
__int64 __fastcall sub_140003DD0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 result; // rax
  bool v9; // cl
  _BYTE *v10; // rcx

  v7 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 32) + 8LL))(
          *(_QWORD *)(a1 + 32),
          a2 + *(_QWORD *)(a1 + 24),
          a5,
          a3,
          a4) )
    return 2147500037LL;
  if ( v7 != *(_QWORD *)(a1 + 56) )
    return 0;
  v9 = 1;
  if ( a3 > 4 )
  {
    v9 = 0;
    if ( *(_BYTE *)a5 == 78 && *(_BYTE *)(a5 + 1) == 66 && a3 >= 0x10 )
    {
      *(_BYTE *)(a3 - 1 + a5) = 0;
      v10 = (_BYTE *)(a5 + 16);
    }
    else
    {
      if ( *(_DWORD *)a5 != 1396986706 || a3 < 0x18 )
        goto LABEL_13;
      *(_BYTE *)(a3 - 1 + a5) = 0;
      v10 = (_BYTE *)(a5 + 24);
    }
    v9 = sub_140004D60(v10);
  }
LABEL_13:
  result = 2147500037LL;
  if ( v9 )
    return 0;
  return result;
}
