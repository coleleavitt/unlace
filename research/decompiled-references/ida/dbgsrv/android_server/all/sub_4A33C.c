/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A33C
// Address: 0x000000000004A33C

//----- (000000000004A33C) ----------------------------------------------------
__int64 __fastcall sub_4A33C(__int64 a1, __int64 a2)
{
  unsigned int v2; // w19
  _DWORD *v3; // x0
  _DWORD *v4; // x20

  v2 = *(_DWORD *)(a2 + 1844);
  if ( v2 != -1 )
  {
    v3 = (_DWORD *)__errno(a1);
    *v3 = 0;
    if ( (byte_166A38 & 1) != 0 )
    {
LABEL_7:
      kill(v2, 9);
      return 0;
    }
    v4 = v3;
    if ( (unsigned int)syscall(130, v2, 9) && *v4 == 38 )
    {
      *v4 = 0;
      byte_166A38 = 1;
      goto LABEL_7;
    }
    if ( byte_166A38 == 1 )
      goto LABEL_7;
  }
  return 0;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 166A38: using guessed type char byte_166A38;
