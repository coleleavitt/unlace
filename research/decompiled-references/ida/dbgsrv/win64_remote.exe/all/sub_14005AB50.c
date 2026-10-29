/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005AB50
// Address: 0x000000014005AB50

//----- (000000014005AB50) ----------------------------------------------------
_BYTE *__fastcall sub_14005AB50(char *a1)
{
  size_t v3; // rsi
  _BYTE *v4; // rax
  _BYTE *v5; // rdi

  if ( !a1 )
    return nullptr;
  v3 = strlen(a1) + 1;
  v4 = j__malloc_base(v3);
  v5 = v4;
  if ( v4 )
  {
    sub_1400621E0(v4, a1, v3);
    return v5;
  }
  else
  {
    sub_1400640B0(1u);
    *errno() = 12;
    sub_1400640B0(1u);
    return nullptr;
  }
}
