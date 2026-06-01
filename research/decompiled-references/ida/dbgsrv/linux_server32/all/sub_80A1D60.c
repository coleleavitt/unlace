/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A1D60
// Address: 0x080A1D60

//----- (080A1D60) --------------------------------------------------------
int __cdecl sub_80A1D60(int a1, _DWORD *a2, int a3)
{
  int result; // eax
  int v4; // edx
  int v5; // ebx
  int v6; // edi
  int *v7; // ebp
  int *v8; // edx
  int v9; // [esp-28h] [ebp-28h]
  int v10; // [esp-24h] [ebp-24h]
  int v11; // [esp-20h] [ebp-20h]

  result = (int)a2;
  if ( !a3 || (*(_BYTE *)(a3 + 4) & 8) == 0 )
  {
    if ( (a2[4] & 0xFFFFFFF) != 7 )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(3299, v9, v10, v11);
      BUG();
    }
    v4 = a2[7];
    v5 = a2[5];
    v6 = a2[9];
    if ( v4 == -1 )
    {
      v8 = &dword_80DDFD8;
      if ( v6 )
        v8 = (int *)a2[8];
      return sub_8058E20(a1, "%a: %s (exc.code %x, tid %d)\n", a2[2], v8, v5, a2[1]);
    }
    else
    {
      v7 = &dword_80DDFD8;
      if ( v6 )
        v7 = (int *)a2[8];
      return sub_8058E20(a1, "%a: %s -> %a (exc.code %x, tid %d)\n", a2[2], v7, v4, v5, a2[1]);
    }
  }
  return result;
}
// 80A1E2E: variable 'v9' is possibly undefined
// 80A1E2E: variable 'v10' is possibly undefined
// 80A1E2E: variable 'v11' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
