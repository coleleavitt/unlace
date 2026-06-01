/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4492A0
// Address: 0x00000000004492A0

//----- (00000000004492A0) ----------------------------------------------------
__int64 __fastcall sub_4492A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char *v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  char *v7; // rsi
  __int64 v8; // rbx
  char *v10; // rax

  v2 = sub_481160((char **)a1, *(FILE **)(a2 + 288));
  if ( v2 > 0 && *(_QWORD *)(a1 + 8) > 3u )
  {
    v3 = *(char **)a1;
    if ( **(_BYTE **)a1 == 0xEF && v3[1] == -69 && v3[2] == -65 && v2 + 2 >= sub_480CC0(*(FILE **)(a2 + 288)) )
    {
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          v8 = 1;
          return v8 - 1;
        }
        v5 = 1;
        v6 = 0;
        if ( (unsigned __int64)(v4 - 1) > 3 )
        {
          v6 = v4 - 4;
          v5 = v4 - 3;
          memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + 3LL), v4 - 4);
        }
        v7 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v5 )
        {
          v10 = (char *)sub_481540(a1, v7, v5, 1u);
          *(_QWORD *)a1 = v10;
          v7 = v10;
        }
        *(_QWORD *)(a1 + 8) = v5;
        v7[v6] = 0;
        v8 = *(_QWORD *)(a1 + 8);
        if ( v8 )
          return v8 - 1;
      }
      return 0;
    }
  }
  return v2;
}
