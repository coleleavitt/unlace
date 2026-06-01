/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400321D0
// Address: 0x00000001400321D0

//----- (00000001400321D0) ----------------------------------------------------
__int64 __fastcall sub_1400321D0(_QWORD *a1)
{
  __int64 v2; // r15
  const char *v3; // r14
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rsi
  size_t v8; // rax

  v2 = *(_QWORD *)(a1[42] + 8LL * a1[43] - 8);
  v3 = Str1;
  if ( a1[5] )
    v3 = (const char *)a1[4];
  v4 = operator new(0x20u);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0;
    v4[6] = 0;
  }
  else
  {
    v5 = nullptr;
  }
  *v5 = 5;
  v6 = operator new(0x18u);
  v7 = (__int64)v6;
  if ( v6 )
  {
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    if ( v3 )
    {
      v8 = strlen(v3);
      sub_140001810(v7, v3, v8);
    }
  }
  else
  {
    v7 = 0;
  }
  *((_QWORD *)v5 + 1) = v7;
  *((_QWORD *)v5 + 2) = v2;
  *(_QWORD *)(a1[42] + 8LL * a1[43] - 8) = v5;
  return 0;
}
