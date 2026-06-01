/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002FE40
// Address: 0x000000014002FE40

//----- (000000014002FE40) ----------------------------------------------------
__int64 __fastcall sub_14002FE40(__int64 a1)
{
  char *v1; // rdi
  const char *v2; // rdx
  unsigned __int16 v4; // ax
  int v5; // r8d
  __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)Str1;
  v2 = Str1;
  if ( *(_QWORD *)(a1 + 40) )
    v2 = *(const char **)(a1 + 32);
  v4 = sub_1400333C0((_QWORD *)a1, v2, &v8);
  v5 = v8;
  if ( v8 == 1 || (unsigned int)(v8 - 2) < 2 )
  {
    v7 = *(_QWORD *)(a1 + 360) + 16LL * *(_QWORD *)(a1 + 368);
    *(_DWORD *)(v7 - 4) = v4;
    *(_DWORD *)(v7 - 8) = v5;
    *(_DWORD *)(v7 - 12) = *(_DWORD *)(a1 + 200);
    return 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 40) )
      v1 = *(char **)(a1 + 32);
    sub_140063F70(0, v1);
    return sub_1400640B0(0x37u);
  }
}
