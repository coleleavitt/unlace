/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2499C
// Address: 0x0002499C

//----- (0002499C) --------------------------------------------------------
int __fastcall sub_2499C(int a1, int a2, unsigned int a3, unsigned int a4, int *a5)
{
  int *v5; // r6
  int v6; // r3
  _DWORD *v7; // r7
  _DWORD *v8; // r0
  unsigned int v9; // r3
  int v10; // r1
  _DWORD *v11; // r1
  int v12; // r5
  int v13; // r4
  unsigned int v15; // [sp+4h] [bp-8h]

  v15 = a3;
  v5 = a5;
  if ( a5 )
  {
    v6 = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 44) = a2;
    v7 = (_DWORD *)(a1 + 276);
    v8 = *(_DWORD **)(a1 + 276);
    v9 = a4;
    if ( a4 )
    {
      v10 = 20 * a3 + 8;
      do
      {
        if ( v8[3] > a3 )
        {
          v8[10] |= *(unsigned __int8 *)(*(_DWORD *)v8[1] + v10);
          v8 = (_DWORD *)*v7;
        }
        ++a3;
        v10 += 20;
        --v9;
      }
      while ( v9 );
    }
    if ( (*(int (__fastcall **)(_DWORD *))(*v8 + 12))(v8) )
    {
      v11 = (_DWORD *)*v7;
      if ( !a4 )
        return (*(int (__fastcall **)(_DWORD *))(*v11 + 16))(v11);
      v12 = 20 * v15;
      v13 = 0;
      while ( 1 )
      {
        if ( v11[3] <= v15 + v13 )
        {
          if ( !under_debugger )
            interr(3258);
          __debugbreak();
        }
        if ( !sub_26D94((int *)(v11[2] + v12), (int)v11, v5) )
          break;
        v12 += 20;
        v11 = (_DWORD *)*v7;
        v5 += 6;
        if ( ++v13 >= a4 )
          return (*(int (__fastcall **)(_DWORD *))(*v11 + 16))(v11);
      }
    }
  }
  return 0;
}
// E0550: using guessed type char under_debugger;
