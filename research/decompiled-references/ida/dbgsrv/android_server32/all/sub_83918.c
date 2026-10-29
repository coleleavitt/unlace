/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83918
// Address: 0x00083918

//----- (00083918) --------------------------------------------------------
int __fastcall sub_83918(unsigned int **a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v8; // r0
  int v9; // r2
  unsigned int *v10; // r1
  unsigned int *v11; // r2
  int v12; // r3
  unsigned int v13; // r0
  _DWORD v15[2]; // [sp+14h] [bp-14h] BYREF
  unsigned int v16[2]; // [sp+1Ch] [bp-Ch] BYREF

  v8 = sub_83812((int)a1, a2, a3, a4);
  v9 = v8;
  if ( a2 != a3 && !v8 )
  {
    v16[0] = a2;
    v16[1] = a4 + a2;
    if ( a4 + a2 > a2 )
    {
      v10 = a1[1];
      if ( !v10 )
        goto LABEL_8;
      v11 = *a1;
      v12 = 0;
      while ( 1 )
      {
        v13 = v11[1];
        if ( v13 >= a2 )
          break;
        v11 += 2;
        if ( ++v12 >= (unsigned int)v10 )
          goto LABEL_8;
      }
      if ( v13 == *v11 || *v11 > a2 || a4 + a2 - 1 > v13 - 1 )
      {
LABEL_8:
        if ( !under_debugger )
          interr(42);
        __debugbreak();
      }
    }
    rangeset_t_sub((int)a1, v16);
    v15[0] = a3;
    v15[1] = a4 + a3;
    rangeset_t_add((int)a1, (int)v15);
    return 0;
  }
  return v9;
}
// E0550: using guessed type char under_debugger;
