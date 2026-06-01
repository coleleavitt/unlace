/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_502EC
// Address: 0x000502EC

//----- (000502EC) --------------------------------------------------------
int __fastcall sub_502EC(int a1, int a2)
{
  int v3; // r3
  int v4; // r2
  bool v5; // nf
  int result; // r0
  int v8; // r1
  int v9; // r1
  int v10; // [sp+4h] [bp-Ch] BYREF
  int v11; // [sp+8h] [bp-8h]
  int v12; // [sp+Ch] [bp-4h]

  v3 = *(_DWORD *)(a1 + 188) + 1;
  v4 = _stack_chk_guard;
  v5 = *(_DWORD *)(a1 + 188) - 1023 < 0;
  *(_DWORD *)(a1 + 188) = v3;
  v12 = v4;
  if ( v5 == __OFSUB__(v3, 1024) )
    _longjmp_chk(a1 + 200, 54);
  sub_50BC8(a1, a2, 1);
  if ( *(_WORD *)(*(_DWORD *)(a1 + 592) + 12) != 41 )
    sub_4C0D8(a1);
  result = sub_502C8(a1);
  if ( *(_BYTE *)(a1 + 596) )
  {
    *(_BYTE *)(a1 + 596) = 0;
    v8 = *(_DWORD *)(a1 + 604);
    v10 = *(_DWORD *)(a1 + 600);
    v11 = v8;
    sub_50488(a1, a2, 0);
    sub_4C0E4(a2, (unsigned __int8 *)&v10);
    result = v10;
    v9 = v11;
    *(_DWORD *)(a1 + 600) = v10;
    *(_DWORD *)(a1 + 604) = v9;
  }
  --*(_DWORD *)(a1 + 188);
  return result;
}
// 13EC0: using guessed type void __fastcall __noreturn _longjmp_chk(_DWORD, _DWORD);
