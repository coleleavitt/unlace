/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000641F0
// Address: 0x00000001000641F0

//----- (00000001000641F0) ----------------------------------------------------
void __fastcall sub_1000641F0(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  const char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  const char *v8; // rcx
  const char *v9; // rcx

  if ( !a3 || (*(_BYTE *)(a3 + 4) & 8) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 7 )
    {
      v5 = *(const char **)(a2 + 8);
      v6 = *(_QWORD *)(a2 + 32);
      v7 = *(_QWORD *)(a2 + 48);
      if ( v6 == -1 )
      {
        if ( v7 )
          v9 = *(const char **)(a2 + 40);
        else
          v9 = _s1;
        sub_100005090(a1, "%a: %s (exc.code %x, tid %d)\n", a4, v5, (_DWORD)v9, *(_DWORD *)(a2 + 24));
      }
      else
      {
        if ( v7 )
          v8 = *(const char **)(a2 + 40);
        else
          v8 = _s1;
        sub_100005090(a1, "%a: %s -> %a (exc.code %x, tid %d)\n", a4, v5, a5, (_DWORD)v8, v6);
      }
    }
    else
    {
      if ( under_debugger == 1 )
        BUG();
      interr(0xCE3u);
      sub_1000642A0(3299, a2);
    }
  }
}
// 1000AE23D: using guessed type char under_debugger;
