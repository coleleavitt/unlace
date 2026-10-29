/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_574C8
// Address: 0x000574C8

//----- (000574C8) --------------------------------------------------------
int __fastcall sub_574C8(int *a1, unsigned int a2, unsigned int a3)
{
  _DWORD *v3; // r0
  unsigned int v4; // r2
  unsigned int *v5; // r7
  unsigned int *v6; // r4
  unsigned int v7; // r6
  bool v8; // cf
  unsigned int v9; // r2
  unsigned int v10; // r1
  unsigned int v11; // r1
  unsigned int v12; // r6
  int result; // r0
  _DWORD *i; // r0
  unsigned int v15; // r6
  unsigned int v16; // r1
  int *v17; // r7
  unsigned int v21; // [sp+24h] [bp-10h]
  unsigned int v22; // [sp+24h] [bp-10h]
  _BYTE v23[4]; // [sp+2Ch] [bp-8h] BYREF

  v3 = (_DWORD *)a1[2];
  v4 = v3[49];
  v5 = (unsigned int *)(v4 + 40 * v3[50] - 40);
  while ( (unsigned int)v5 >= v4 )
  {
    v6 = v5 - 10;
    v7 = *v5;
    v8 = *v5 >= a3;
    v5 -= 10;
    if ( !v8 )
    {
      v9 = v6[11];
      v10 = a3;
      if ( v9 <= a3 )
        v10 = v6[11];
      if ( v10 != -1 )
      {
        v21 = v10;
        v11 = a2;
        if ( v9 <= a2 )
          v11 = v7;
        if ( v7 > a2 )
          v11 = v7;
        v12 = v11;
        if ( (*(int (__fastcall **)(_DWORD *, unsigned int, _BYTE *, int, _DWORD))(*v3 + 144))(v3, v11, v23, 1, 0) == 1 )
        {
          result = (*(int (__fastcall **)(int *, unsigned int, unsigned int))(*a1 + 12))(a1, v12, v21);
          if ( result != -1 )
            return result;
        }
        else
        {
          sub_64B30(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n");
        }
        for ( i = (_DWORD *)a1[2]; (unsigned int)v6 >= i[49]; i = (_DWORD *)v17[2] )
        {
          v15 = v6[1];
          if ( v15 <= a2 )
            break;
          v16 = *v6;
          if ( *v6 <= a2 )
            v16 = a2;
          v22 = v16;
          if ( (*(int (__fastcall **)(_DWORD *))(*i + 144))(i) == 1 )
          {
            v17 = a1;
            result = (*(int (__fastcall **)(int *, unsigned int, unsigned int))(*a1 + 12))(a1, v22, v15);
            if ( result != -1 )
              return result;
          }
          else
          {
            v17 = a1;
            sub_64B30(a1[2], "dbg_bin_search memory range %a..%a is unreadable, skip it\n");
          }
          v6 -= 10;
        }
      }
      return -1;
    }
  }
  return -1;
}
