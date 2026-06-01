/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E1AF
// Address: 0x0046E1AF

//----- (0046E1AF) --------------------------------------------------------
char __usercall sub_46E1AF@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int v4; // eax
  int v6[4]; // [esp-24h] [ebp-38h] BYREF
  __int64 v7; // [esp-14h] [ebp-28h]
  _BYTE *v8; // [esp-Ch] [ebp-20h]
  int v9; // [esp-8h] [ebp-1Ch]
  double *v10; // [esp-4h] [ebp-18h]
  double v11; // [esp+4h] [ebp-10h] BYREF
  char v12; // [esp+13h] [ebp-1h] BYREF

  v10 = &v11;
  v12 = 0;
  v11 = 0.0;
  sub_46D440(v6, a1 + 8, *(_DWORD *)(a1 + 48), *(_DWORD *)(a1 + 52), &v12);
  v4 = sub_46D4D7(a2, a3, *(_DWORD **)(a1 + 104), v6[0], v6[1], v6[2], v6[3], v7, v8, v9, v10);
  if ( !v12 || v4 == 1 )
    return 0;
  if ( *(_BYTE *)(a1 + 46) )
    return 1;
  return sub_46E53C(a1, a2, a3, &v11);
}
// 46E1AF: too many cbuild loops
