__int64 __fastcall sub_33DFC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdi

  v5 = sub_1698A0(0, (int)"HIDECANCEL\nAre you sure you want to delete selected name(s)?");
  result = 0;
  if ( v5 == 1 )
  {
    v7 = *(__int64 **)a4;
    v8 = *(_QWORD *)a4 + 8LL * *(_QWORD *)(a4 + 8);
    while ( (__int64 *)v8 != v7 )
    {
      v9 = *v7++;
      set_name(v9, &unk_5C2F25, 256);
    }
    return 2;
  }
  return result;
}
