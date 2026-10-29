/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4315C0
// Address: 0x00000000004315C0

//----- (00000000004315C0) ----------------------------------------------------
__int64 __fastcall sub_4315C0(__int64 a1)
{
  unsigned __int16 v1; // dx
  void **v3; // r12
  char v4; // bl
  _BYTE *v5; // rax
  void *v6; // rsi
  void *v7; // rax

  v1 = *(_WORD *)(a1 + 120) - 1;
  if ( v1 <= 0xFu )
  {
    v3 = *(void ***)(a1 + 200);
    v4 = v1 + 64;
    *(_BYTE *)(a1 + 212) = v1 + 64;
    v5 = v3[1];
    v6 = *v3;
    if ( v3[2] < v5 + 1 )
    {
      v7 = sub_481540((__int64)v3, v6, (unsigned __int64)(v5 + 1), 1u);
      *v3 = v7;
      v6 = v7;
      v5 = v3[1];
    }
    v5[(_QWORD)v6] = v4;
    v3[1] = (char *)v3[1] + 1;
    ++*(_DWORD *)(a1 + 208);
    return 0;
  }
  else
  {
    sub_431490(a1, 0x40u, v1);
    return 0;
  }
}
