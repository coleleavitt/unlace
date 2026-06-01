/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043800
// Address: 0x0000000140043800

//----- (0000000140043800) ----------------------------------------------------
__int64 __fastcall sub_140043800(__int64 a1, __int64 a2, int a3, double a4)
{
  double v4; // xmm2_8
  unsigned __int8 v5; // si
  unsigned __int64 v9; // rbx
  __int64 *v10; // r14
  _QWORD *v11; // rcx
  _QWORD *i; // rdx

  v5 = 0;
  if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 5 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    if ( v9 == -1 )
    {
      v9 = *(_QWORD *)(a2 + 24);
      if ( v9 == -1 )
        v9 = *(_QWORD *)(a2 + 8);
    }
    v10 = sub_140043AE0(a1, *(_DWORD *)(a2 + 4), v9, a4);
    if ( v10 )
    {
      sub_140043130(a1, (struct __crt_locale_pointers *)"%a: bptcnd yielded false\n", v4);
      *(_BYTE *)(a2 + 16) = 1;
      v11 = *(_QWORD **)(a1 + 328);
      for ( i = &v11[*(_QWORD *)(a1 + 336)]; v11 != i; ++v11 )
      {
        if ( v9 == *v11 )
        {
          if ( byte_1400CB61C )
            __debugbreak();
          sub_14005A480(617);
        }
      }
      return sub_140043D20((void **)a1, v10, a2, a3);
    }
  }
  return v5;
}
// 14004386D: variable 'v4' is possibly undefined
// 1400CB61C: using guessed type char byte_1400CB61C;
