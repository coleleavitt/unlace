/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2490C
// Address: 0x0002490C

//----- (0002490C) --------------------------------------------------------
int __fastcall sub_2490C(int a1, int a2, unsigned int a3, int *a4)
{
  int v6; // r7
  int *v7; // r7
  int v8; // r0
  int v9; // r1
  int result; // r0

  if ( !a4 )
    return -1;
  v6 = *(_DWORD *)(a1 + 276);
  *(_DWORD *)(v6 + 40) = 0;
  *(_DWORD *)(v6 + 44) = a2;
  v7 = (int *)(a1 + 276);
  v8 = *(_DWORD *)(a1 + 276);
  if ( *(_DWORD *)(v8 + 12) > a3 )
  {
    *(_DWORD *)(v8 + 40) |= *(unsigned __int8 *)(**(_DWORD **)(v8 + 4) + 20 * a3 + 8);
    v8 = *v7;
  }
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8) )
    return -1;
  if ( *(_DWORD *)(*v7 + 12) <= a3 )
  {
    if ( !under_debugger )
      interr(3258);
    __debugbreak();
  }
  if ( !sub_26D94((int *)(*(_DWORD *)(*v7 + 8) + 20 * a3), *v7, a4) )
    return -1;
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)*v7 + 16))(*v7);
  result = 1;
  if ( !v9 )
    return -1;
  return result;
}
// E0550: using guessed type char under_debugger;
