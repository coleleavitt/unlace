/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_28260
// Address: 0x00028260

//----- (00028260) --------------------------------------------------------
int __cdecl sub_28260(int a1)
{
  int v1; // ecx
  __pid_t v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  __pid_t v6; // [esp-Ch] [ebp-28h]
  __pid_t v7; // [esp+8h] [ebp-14h]

  if ( !*(_DWORD *)(a1 + 76) )
  {
    v2 = *(_DWORD *)(a1 + 624);
    v3 = (_DWORD *)__errno(v1);
    *v3 = 0;
    if ( !byte_13BD20 )
    {
      v7 = v2;
      v6 = v2;
      v4 = v3;
      if ( syscall(238, v6, 19) && *v4 == 38 )
      {
        *v4 = 0;
        byte_13BD20 = 1;
        v2 = v7;
      }
      else
      {
        v2 = v7;
        if ( byte_13BD20 != 1 )
        {
LABEL_8:
          *(_BYTE *)(*(_DWORD *)(a1 + 568) + 44) = 1;
          goto LABEL_9;
        }
      }
    }
    kill(v2, 19);
    goto LABEL_8;
  }
LABEL_9:
  *(_WORD *)(a1 + 676) = 256;
  return 1;
}
// 28287: variable 'v1' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13BD20: using guessed type char byte_13BD20;
