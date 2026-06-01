/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457DE0
// Address: 0x0000000000457DE0

//----- (0000000000457DE0) ----------------------------------------------------
void __fastcall sub_457DE0(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  __int64 v5; // r8
  const char *v6; // rcx
  __int64 v7; // rdx

  if ( !a3 || (*(_BYTE *)(a3 + 4) & 8) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(3299);
      BUG();
    }
    v5 = *(_QWORD *)(a2 + 32);
    v6 = s1;
    v7 = *(_QWORD *)(a2 + 48);
    if ( v5 == -1 )
    {
      if ( v7 )
        v6 = *(const char **)(a2 + 40);
      sub_411B10(a1, "%a: %s (exc.code %x, tid %d)\n", a4, *(const char **)(a2 + 8), (_DWORD)v6, *(_DWORD *)(a2 + 24));
    }
    else
    {
      if ( v7 )
        v6 = *(const char **)(a2 + 40);
      sub_411B10(a1, "%a: %s -> %a (exc.code %x, tid %d)\n", a4, *(const char **)(a2 + 8), a5, (_DWORD)v6, v5);
    }
  }
}
// 4C94E1: using guessed type char byte_4C94E1;
