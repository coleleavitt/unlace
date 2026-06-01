/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A32F0
// Address: 0x00000000000A32F0

//----- (00000000000A32F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_A32F0(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  unsigned __int64 result; // rax
  const char *v6; // rdx
  __int64 v7; // r8
  const char *v8; // rcx
  __int64 v9; // [rsp+0h] [rbp-8h]

  HIDWORD(v9) = HIDWORD(result);
  if ( !a3 || (*(_BYTE *)(a3 + 4) & 8) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 7 )
    {
      if ( !(_BYTE)under_debugger )
        interr(3299);
      BUG();
    }
    v6 = *(const char **)(a2 + 8);
    v7 = *(_QWORD *)(a2 + 32);
    if ( *(_QWORD *)(a2 + 48) )
      v8 = *(const char **)(a2 + 40);
    else
      v8 = s1;
    if ( v7 == -1 )
    {
      return sub_391F0(a1, "%a: %s (exc.code %x, tid %d)\n", a4, v6, (_DWORD)v8, *(_DWORD *)(a2 + 24));
    }
    else
    {
      LODWORD(v9) = *(_DWORD *)(a2 + 4);
      sub_391F0(a1, "%a: %s -> %a (exc.code %x, tid %d)\n", a4, v6, a5, (_DWORD)v8, v7);
      return v9;
    }
  }
  return result;
}
// A32F0: variable 'result' is possibly undefined
// 158B40: using guessed type __int64 under_debugger;
