/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140031C80
// Address: 0x0000000140031C80

//----- (0000000140031C80) ----------------------------------------------------
__int64 __fastcall sub_140031C80(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  size_t v6; // rdi
  void *v7; // rax
  void **v8; // rdi
  unsigned __int64 v9; // r8

  v2 = operator new(0x20u);
  v3 = v2;
  if ( v2 )
  {
    *v2 = 0;
    v2[6] = 0;
  }
  else
  {
    v3 = nullptr;
  }
  *v3 = 1;
  v4 = operator new(0x18u);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v6 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      v7 = sub_14005AAA0(*(_QWORD *)(a1 + 40));
      *v5 = v7;
      v5[2] = v6;
      memcpy(v7, *(const void **)(a1 + 32), v6);
      v5[1] = v6;
    }
  }
  else
  {
    v5 = nullptr;
  }
  *((_QWORD *)v3 + 2) = v5;
  v8 = (void **)(a1 + 336);
  v9 = *(_QWORD *)(a1 + 344) + 1LL;
  if ( v9 > *(_QWORD *)(a1 + 352) )
    *v8 = sub_14005ABE0(a1 + 336, *v8, v9, 8u);
  *((_QWORD *)*v8 + (*(_QWORD *)(a1 + 344))++) = v3;
  return 0;
}
