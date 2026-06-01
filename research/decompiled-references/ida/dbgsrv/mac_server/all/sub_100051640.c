/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100051640
// Address: 0x0000000100051640

//----- (0000000100051640) ----------------------------------------------------
__int64 __fastcall sub_100051640(__int64 a1, int a2, char a3)
{
  int v3; // ebx
  unsigned int v4; // r14d
  __int64 v5; // rax
  int v8[5]; // [rsp+8h] [rbp-48h] BYREF
  char v9; // [rsp+1Fh] [rbp-31h] BYREF

  v3 = *(_DWORD *)(a1 + 80);
  if ( !v3 )
  {
    v4 = 0;
    sub_100010140(a1, 0, 0, 0);
    v5 = sub_100010AC0(a1, 0);
    if ( (unsigned int)sub_10000F3B0(*(_DWORD *)(v5 + 4), *(unsigned int *)(v5 + 8), &v9) == a2 && v9 == a3 )
      return v4;
    return (unsigned int)-1;
  }
  if ( v3 <= 0 )
    return (unsigned int)-1;
  v4 = 0;
  while ( !sub_10000FD10(a1, v4, (__int64)v8)
       || (unsigned int)sub_10000F3B0(v8[0], (unsigned int)v8[1], &v9) != a2
       || v9 != a3 )
  {
    if ( v3 == ++v4 )
      return (unsigned int)-1;
  }
  return v4;
}
