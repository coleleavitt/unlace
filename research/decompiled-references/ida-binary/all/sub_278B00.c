__int64 __fastcall sub_278B00(unsigned int a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  int v5; // r10d
  __int64 result; // rax
  int v7; // r10d
  unsigned __int64 v8; // rsi
  unsigned int v9; // [rsp+Ch] [rbp-2Ch]

  v1 = sub_277DF0();
  v2 = *(_QWORD *)(v1 + 120);
  if ( v1 )
  {
    v3 = v1;
    ++*(_DWORD *)(v1 + 132);
    v4 = sub_2780D0(v1, v2, a1);
    result = 0;
    if ( v4 == -1 )
    {
      *(_DWORD *)(v3 + 132) = v5;
      if ( v5 )
        return result;
    }
    else
    {
      sub_278850(v3, v4, a1, 0, 1);
      v7 = *(_DWORD *)(v3 + 132) - 1;
      result = 1;
      *(_DWORD *)(v3 + 132) = v7;
      if ( v7 )
        return result;
    }
    if ( (*(_BYTE *)(v3 + 128) & 1) == 0 )
    {
      v9 = result;
      sub_278550(v3);
      return v9;
    }
  }
  else
  {
    v8 = sub_2780D0(0, v2, a1);
    result = 0;
    if ( v8 != -1 )
    {
      sub_278850(0, v8, a1, 0, 1);
      return 1;
    }
  }
  return result;
}
