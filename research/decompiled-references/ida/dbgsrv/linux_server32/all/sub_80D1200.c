/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D1200
// Address: 0x080D1200

//----- (080D1200) --------------------------------------------------------
int __cdecl sub_80D1200(int a1, int *a2)
{
  _DWORD *ptr; // ebp
  int *v3; // esi
  _DWORD *v4; // eax
  int v6; // [esp+4h] [ebp-38h]
  int v7; // [esp+4h] [ebp-38h]
  int v8; // [esp+8h] [ebp-34h]
  int v9; // [esp+Ch] [ebp-30h]
  int v10; // [esp+1Ch] [ebp-20h]

  ptr = *(_DWORD **)(a1 + 12);
  if ( ptr == (_DWORD *)(a1 + 12) )
  {
LABEL_7:
    if ( !byte_811F8A1 )
      sub_80CFF40(1209, v6, v8, v9);
    goto LABEL_11;
  }
  while ( a2 != ptr + 2 )
  {
    ptr = (_DWORD *)*ptr;
    if ( (_DWORD *)(a1 + 12) == ptr )
      goto LABEL_7;
  }
  v3 = __errno_location();
  v10 = *v3;
  if ( (unsigned __int8)sub_80D10D0(a2[4], 0) )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1158, v7, v8, v9);
LABEL_11:
    BUG();
  }
  v4 = (_DWORD *)*ptr;
  *(_DWORD *)ptr[1] = *ptr;
  v4[1] = ptr[1];
  sub_80D0D50((char *)ptr[6]);
  sub_80CF780(ptr);
  --*(_DWORD *)(a1 + 20);
  *v3 = v10;
  return v10;
}
// 80D12B1: variable 'v6' is possibly undefined
// 80D12B1: variable 'v8' is possibly undefined
// 80D12B1: variable 'v9' is possibly undefined
// 80D12CD: variable 'v7' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
