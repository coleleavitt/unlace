/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140003C30
// Address: 0x0000000140003C30

//----- (0000000140003C30) ----------------------------------------------------
__int64 __fastcall sub_140003C30(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rax

  if ( !a3 )
    return 2147942487LL;
  v5 = nullptr;
  *a3 = 0;
  if ( *a2 == 0x44865A4D4688A074LL && a2[1] == 0x7C9F1D71907BA8AELL
    || *a2 == 0x421B73F4C32ADB82LL && a2[1] == 0xBE5DDF6E70A4D595uLL )
  {
LABEL_21:
    v5 = a1;
    *a3 = a1;
    goto LABEL_22;
  }
  if ( *a2 == 0x432A75178E3F80CALL && a2[1] == 0x8EEAAA34512807BAuLL )
  {
    if ( a1[4] != -1 )
    {
      v6 = a1 + 1;
      if ( !a1 )
        v6 = nullptr;
      v5 = v6;
      *a3 = v6;
    }
    goto LABEL_22;
  }
  if ( *a2 != 0x4F54B80B587A461CLL || a2[1] != 0x19639A5832509491LL )
  {
    if ( *a2 || a2[1] != 0x46000000000000C0LL )
      return 2147500034LL;
    goto LABEL_21;
  }
  if ( a1[4] == -1 )
  {
    v7 = a1 + 2;
    if ( !a1 )
      v7 = nullptr;
    v5 = v7;
    *a3 = v7;
  }
LABEL_22:
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    return 0;
  }
  return 2147500034LL;
}
