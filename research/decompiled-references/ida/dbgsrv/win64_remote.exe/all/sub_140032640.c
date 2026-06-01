/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140032640
// Address: 0x0000000140032640

//----- (0000000140032640) ----------------------------------------------------
__int64 __fastcall sub_140032640(_QWORD *a1)
{
  char *v1; // rdi
  const char *v2; // rdx
  __int64 v4; // rax
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r8
  int v9; // edx
  int v10; // eax

  v1 = (char *)Str1;
  v2 = Str1;
  if ( a1[5] )
    v2 = (const char *)a1[4];
  v4 = sub_14002D380(a1[12], v2);
  if ( v4 )
  {
    v6 = *(int *)(v4 + 20);
    v7 = a1[22];
    v8 = *(_QWORD *)(a1[12] + 64LL);
    v9 = *(_DWORD *)(v7 + 20);
    v10 = *(_DWORD *)(*(_QWORD *)(v8 + 8 * v6) + 16LL);
    if ( v10 == v9 )
    {
      return sub_1400640B0(0x601u);
    }
    else
    {
      while ( v10 )
      {
        v10 = *(_DWORD *)(*(_QWORD *)(v8 + 8LL * v10) + 16LL);
        if ( v10 == v9 )
          return sub_1400640B0(0x601u);
      }
      *(_DWORD *)(v7 + 16) = v6;
      return 0;
    }
  }
  else
  {
    if ( a1[5] )
      v1 = (char *)a1[4];
    sub_140063F70(0, v1);
    return sub_1400640B0(0x600u);
  }
}
