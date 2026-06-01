/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E970
// Address: 0x0002E970

//----- (0002E970) --------------------------------------------------------
int __cdecl sub_2E970(int a1, int a2)
{
  int v2; // ecx
  __pid_t v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi

  v3 = *(_DWORD *)(a2 + 624);
  if ( v3 != -1 )
  {
    v4 = (_DWORD *)__errno(v2);
    *v4 = 0;
    if ( byte_13BD20 )
    {
LABEL_7:
      kill(v3, 9);
      return 0;
    }
    v5 = v4;
    if ( syscall(238, v3, 9) && *v5 == 38 )
    {
      *v5 = 0;
      byte_13BD20 = 1;
      goto LABEL_7;
    }
    if ( byte_13BD20 == 1 )
      goto LABEL_7;
  }
  return 0;
}
// 2E996: variable 'v2' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13BD20: using guessed type char byte_13BD20;
