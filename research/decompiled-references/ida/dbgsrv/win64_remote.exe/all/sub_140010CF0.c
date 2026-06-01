/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140010CF0
// Address: 0x0000000140010CF0

//----- (0000000140010CF0) ----------------------------------------------------
__int64 __fastcall sub_140010CF0(__int64 a1, unsigned int a2, int a3)
{
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 *i; // rax
  __int64 v8; // r8
  bool v9; // al
  BOOL v10; // edi

  if ( a3 != 1 )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  v5 = *(__int64 **)(a1 + 1088);
  v6 = v5;
  for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25); i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) >= a2 )
      v6 = i;
    else
      i += 2;
  }
  if ( *((_BYTE *)v6 + 25) || a2 < *((_DWORD *)v6 + 8) )
    v6 = *(__int64 **)(a1 + 1088);
  v8 = 0;
  if ( v6 != v5 )
    v8 = (__int64)(v6 + 5);
  if ( !v8 )
    return 0xFFFFFFFFLL;
  v9 = sub_14001C1D0(v8, 1u);
  v10 = v9;
  if ( !v9 )
    sub_140043190(a1, (struct __crt_locale_pointers *)"%d: (set_step) SetThreadContext failed", a2);
  return (unsigned int)(2 * v10 - 1);
}
// 1400CB61C: using guessed type char byte_1400CB61C;
