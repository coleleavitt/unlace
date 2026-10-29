/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82930
// Address: 0x0000000000082930

//----- (0000000000082930) ----------------------------------------------------
__int64 __fastcall sub_82930(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64 *, const char *, _QWORD, _QWORD, __int64),
        __int64 a3)
{
  __int64 *v3; // rbx
  unsigned int v4; // r14d
  __int64 *v7; // rdi
  const char *v8; // rsi
  unsigned int v9; // eax

  v3 = *(__int64 **)(*(_QWORD *)(a1 + 456) + 16LL);
  v4 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      v7 = (v3[2] & 1) != 0 ? (__int64 *)v3[4] : (__int64 *)((char *)v3 + 17);
      v8 = s1;
      if ( v3[6] )
        v8 = (const char *)v3[5];
      v9 = a2(v7, v8, *((unsigned __int8 *)v3 + 64), *((unsigned __int8 *)v3 + 65), a3);
      if ( v9 )
        break;
      v3 = (__int64 *)*v3;
      if ( !v3 )
        return v4;
    }
    return v9;
  }
  return v4;
}
