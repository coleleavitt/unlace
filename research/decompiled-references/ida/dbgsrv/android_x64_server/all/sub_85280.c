/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85280
// Address: 0x0000000000085280

//----- (0000000000085280) ----------------------------------------------------
__int64 __fastcall sub_85280(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // r15
  const char *v6; // r13
  size_t v7; // rax
  unsigned __int64 v8; // rcx
  unsigned int v10; // [rsp+0h] [rbp-34h]

  v2 = *(_DWORD *)(a1 + 64) - 1;
  if ( v2 >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 64) - 1;
    v4 = 56LL * v2 + 48;
    do
    {
      v5 = *(_QWORD *)(a1 + 56);
      if ( *(_QWORD *)(v5 + v4 - 8) == a2 )
      {
        if ( !*(_BYTE *)(a2 + 25) )
        {
          LOBYTE(v3) = 1;
          return (unsigned int)v3;
        }
        LOBYTE(v3) = 1;
        v10 = v3;
        v6 = s1;
        if ( *(_QWORD *)(a2 + 8) )
          v6 = *(const char **)a2;
        v7 = strlen(v6);
        v8 = *(_QWORD *)(a1 + 8);
        if ( (unsigned __int64)v6 <= v8 && v8 <= (unsigned __int64)&v6[v7] )
          return v10;
        v3 = *(_DWORD *)(a1 + 80);
        if ( v3 > *(_DWORD *)(v5 + v4) )
          return v10;
      }
      v4 -= 56;
      --v2;
    }
    while ( v2 >= 0 );
  }
  return 0;
}
