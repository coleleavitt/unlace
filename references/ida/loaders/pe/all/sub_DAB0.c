bool __fastcall sub_DAB0(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rdx
  unsigned __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v13; // [rsp+0h] [rbp-18h]

  v4 = a3;
  if ( a2 && *a2 == 3 )
    return qlseek() != -1;
  v6 = *(_QWORD *)(a1 + 16) - 1LL;
  if ( v6 >= 0 )
  {
    v7 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
    while ( v4 < *v7 || v4 >= v7[1] )
    {
      --v6;
      v7 -= 4;
      if ( v6 == -1 )
        goto LABEL_8;
    }
    if ( v4 + v7[2] - *v7 != -1 )
      return qlseek() != -1;
  }
LABEL_8:
  if ( (signed __int64)v4 < *(_QWORD *)(a1 + 592) + *(unsigned int *)(a1 + 156) )
    return qlseek() != -1;
  if ( !*(_BYTE *)(a1 + 985)
    && (int)sub_CFC0(1u, (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?", a3) <= 0 )
  {
    sub_DA00(
      0,
      (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
      v8,
      v9,
      v10,
      v11,
      v13);
  }
  *(_BYTE *)(a1 + 985) = 1;
  qlseek();
  return 0;
}
