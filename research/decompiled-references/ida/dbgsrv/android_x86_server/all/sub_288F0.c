/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_288F0
// Address: 0x000288F0

//----- (000288F0) --------------------------------------------------------
int __cdecl sub_288F0(int a1, int a2, unsigned int a3, int a4, int a5)
{
  int v5; // edx
  int v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // esi
  bool v9; // cf
  _DWORD *v10; // eax
  int result; // eax
  _DWORD *v12; // eax
  int v13; // ecx

  v5 = a3;
  if ( !a4 )
    return (unsigned __int8)sub_928D0((_DWORD *)a1, v5, a2);
  v6 = (*(int (__cdecl **)(int, unsigned int, int, int, _DWORD))(*(_DWORD *)a1 + 148))(a1, a3, a4, a5, 0);
  v5 = a3;
  if ( v6 != a5 )
    return (unsigned __int8)sub_928D0((_DWORD *)a1, v5, a2);
  v7 = *(_DWORD **)(a1 + 660);
  if ( v7 )
  {
    v8 = (_DWORD *)(a1 + 660);
    v9 = v7[4] < a3;
    if ( v7[4] <= a3 )
      goto LABEL_9;
    while ( 1 )
    {
      v10 = (_DWORD *)*v7;
      v8 = v7;
      if ( !*v7 )
        break;
      while ( 1 )
      {
        v7 = v10;
        v9 = v10[4] < a3;
        if ( v10[4] > a3 )
          break;
LABEL_9:
        if ( v9 )
        {
          v8 = v7 + 1;
          v10 = (_DWORD *)v7[1];
          if ( v10 )
            continue;
        }
        goto LABEL_15;
      }
    }
  }
  else
  {
    v7 = (_DWORD *)(a1 + 660);
  }
  v8 = v7;
LABEL_15:
  result = 1;
  if ( !*v8 )
  {
    v12 = operator new(0x14u);
    v12[4] = a3;
    *v12 = 0;
    v12[1] = 0;
    v12[2] = v7;
    *v8 = v12;
    v13 = **(_DWORD **)(a1 + 656);
    if ( v13 )
    {
      *(_DWORD *)(a1 + 656) = v13;
      v12 = (_DWORD *)*v8;
    }
    sub_2D500(*(_DWORD *)(a1 + 660), (int)v12);
    ++*(_DWORD *)(a1 + 664);
    return 1;
  }
  return result;
}
