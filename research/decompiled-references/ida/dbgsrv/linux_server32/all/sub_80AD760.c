/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AD760
// Address: 0x080AD760

//----- (080AD760) --------------------------------------------------------
int __cdecl sub_80AD760(int *a1, unsigned int *a2, unsigned int a3, int a4, unsigned int a5, __int64 a6)
{
  int v6; // esi
  unsigned int v7; // edi
  __int64 v8; // rcx
  unsigned int v9; // esi
  int result; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // [esp+0h] [ebp-24h]

  v6 = a4;
  v7 = a5;
  v14 = a6;
  if ( (a5 & a4) == 0xFFFFFFFF )
  {
    v6 = sub_80CD730((int)a1, 0, 1);
    v7 = v13;
  }
  if ( (HIDWORD(a6) & (unsigned int)a6) == 0xFFFFFFFF )
  {
    LODWORD(v12) = sub_80CD6E0(a1);
    v14 = v12;
  }
  v8 = v14 - __PAIR64__(v7, v6);
  if ( ((((v14 - __PAIR64__(v7, v6)) >> 32) | v7) & 0x80000000) != 0LL )
  {
    LODWORD(v11) = 0;
    goto LABEL_12;
  }
  v9 = *a2;
  if ( *a2 && a3 && !is_mul_ok(a3, v9) || (result = 1, v8 < a3 * v9) )
  {
    v11 = v8 / a3;
LABEL_12:
    *a2 = v11;
    return 0;
  }
  return result;
}
// 80AD856: variable 'v13' is possibly undefined
// 80AD826: variable 'v12' is possibly undefined
