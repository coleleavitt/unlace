/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4819E0
// Address: 0x004819E0

//----- (004819E0) --------------------------------------------------------
void __usercall sub_4819E0(unsigned __int64 a1@<st0>)
{
  int v1; // eax
  bool v2; // zf
  int v3; // [esp+0h] [ebp-Ch]
  char v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+4h] [ebp-8h]

  if ( !dword_4B7FB4 )
    goto LABEL_6;
  v1 = _mm_getcsr() & 0x7F80;
  v2 = v1 == 8064;
  if ( v1 == 8064 )
    v2 = (v4 & 0x7F) == 127;
  if ( v2 )
  {
    sub_481AF0(*(double *)&a1);
  }
  else
  {
LABEL_6:
    sub_482278(a1, HIDWORD(a1));
    sub_481A38(v3, v5);
  }
}
// 481A08: variable 'v4' is possibly undefined
// 481A26: variable 'v3' is possibly undefined
// 481A26: variable 'v5' is possibly undefined
// 481A38: using guessed type _DWORD __cdecl sub_481A38(_DWORD, _DWORD);
// 4B7FB4: using guessed type int dword_4B7FB4;
