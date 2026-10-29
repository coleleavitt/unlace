/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805D340
// Address: 0x0805D340

//----- (0805D340) --------------------------------------------------------
unsigned int __cdecl sub_805D340(int a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int *v3; // edx
  unsigned int v4; // ebp
  unsigned int v5; // edi
  _DWORD *v6; // esi
  const char *v7; // ecx
  const char *v8; // eax
  int v10; // [esp-14h] [ebp-38h]
  int v11; // [esp-10h] [ebp-34h]
  int v12; // [esp-Ch] [ebp-30h]
  unsigned int v13; // [esp+0h] [ebp-24h]

  v3 = a3;
  if ( (unsigned int)a3 < *a2 || (v4 = *a2 + 40 * a2[1], (unsigned int)a3 >= v4) )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(30067, v10, v11, v12);
    goto LABEL_21;
  }
  v5 = a3[1];
  if ( v5 )
  {
    v6 = a3 + 10;
    if ( a3 + 10 == (unsigned int *)v4 )
      goto LABEL_14;
    v13 = a3[3];
    while ( !v6[3] )
    {
      if ( v13 )
      {
        v7 = (const char *)&dword_80DDFD8;
LABEL_7:
        v8 = (const char *)a3[2];
LABEL_8:
        if ( strcmp(v8, v7) )
          goto LABEL_13;
      }
      v5 = v6[1];
      v6 += 10;
      if ( v6 == (_DWORD *)v4 )
      {
LABEL_13:
        v3 = a3;
LABEL_14:
        if ( *v3 < v5 )
        {
          v5 -= *v3;
          return v5;
        }
        if ( !byte_811F8A1 )
          sub_80CFF40(30068, v10, v11, v12);
LABEL_21:
        BUG();
      }
    }
    v7 = (const char *)v6[2];
    v8 = (const char *)&dword_80DDFD8;
    if ( v13 )
      goto LABEL_7;
    goto LABEL_8;
  }
  return v5;
}
// 805D419: variable 'v10' is possibly undefined
// 805D419: variable 'v11' is possibly undefined
// 805D419: variable 'v12' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
