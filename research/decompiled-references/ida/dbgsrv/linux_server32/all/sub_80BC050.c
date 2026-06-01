/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BC050
// Address: 0x080BC050

//----- (080BC050) --------------------------------------------------------
int __cdecl sub_80BC050(int a1, int a2, int a3, int a4)
{
  __suseconds_t v4; // eax
  unsigned int v5; // edx
  int v6; // edi
  int v7; // eax
  __suseconds_t v8; // eax
  unsigned int v9; // edx
  unsigned __int64 v10; // rax
  int v11; // ecx
  unsigned __int64 v13; // [esp+0h] [ebp-2Ch]

  v13 = 0;
  if ( a4 >= 0 )
  {
    v4 = sub_80D0330();
    v13 = (unsigned int)v4 + 1000LL * (unsigned int)a4 + 1000000LL * v5;
  }
  if ( !a3 )
    return a3;
  v6 = a3;
  while ( 1 )
  {
    if ( v13 )
    {
      v8 = sub_80D0330();
      v10 = (unsigned int)v8 + 1000000LL * v9;
      v11 = 0;
      if ( v10 < v13 )
        v11 = (v13 - v10) / 0x3E8;
    }
    else
    {
      v11 = -1;
    }
    if ( (*(int (__cdecl **)(int, int))(*(_DWORD *)a1 + 24))(a1, v11) <= 0 )
      break;
    v7 = (*(int (__cdecl **)(int, int, int))(*(_DWORD *)a1 + 28))(a1, a2, v6);
    if ( v7 <= 0 )
      break;
    a2 += v7;
    v6 -= v7;
    if ( !v6 )
      return a3;
  }
  return a3 - v6;
}
// 80BC0B1: variable 'v5' is possibly undefined
// 80BC12A: variable 'v9' is possibly undefined
