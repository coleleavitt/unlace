/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22890
// Address: 0x00022890

//----- (00022890) --------------------------------------------------------
unsigned int __fastcall sub_22890(int a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v3; // r6
  unsigned int v4; // r5
  unsigned int result; // r0
  unsigned int *v6; // r6
  unsigned int *v7; // r4
  const char *v8; // r0
  const char *v9; // r1
  unsigned int v10; // [sp+0h] [bp-Ch]
  unsigned int v12; // [sp+8h] [bp-4h]

  if ( *a2 > (unsigned int)a3 || (v3 = *a2 + 40 * a2[1], v3 <= (unsigned int)a3) )
  {
    if ( !under_debugger )
      interr(30067);
LABEL_19:
    __debugbreak();
  }
  v4 = a3[1];
  result = 0;
  if ( !v4 )
    return result;
  v10 = *a3;
  if ( a3 + 10 != (unsigned int *)v3 )
  {
    v6 = (unsigned int *)(v3 - 40);
    v12 = a3[3];
    v7 = a3;
    do
    {
      v8 = &byte_B3CBE;
      if ( v12 )
        v8 = (const char *)a3[2];
      v9 = &byte_B3CBE;
      if ( v7[13] )
        v9 = (const char *)v7[12];
      if ( strcmp(v8, v9) )
        break;
      v4 = v7[11];
      v7 += 10;
    }
    while ( v6 != v7 );
  }
  if ( v4 <= v10 )
  {
    if ( !under_debugger )
      interr(30068);
    goto LABEL_19;
  }
  return v4 - v10;
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
