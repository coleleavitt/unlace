/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26E90
// Address: 0x00026E90

//----- (00026E90) --------------------------------------------------------
unsigned int __cdecl sub_26E90(int a1, _DWORD *a2, unsigned int *a3)
{
  _DWORD *v3; // edi
  const char *v4; // ecx
  const char *v5; // eax
  const char *v6; // esi
  unsigned int result; // eax
  unsigned int v8; // [esp+Ch] [ebp-20h]
  unsigned int v9; // [esp+10h] [ebp-1Ch]
  unsigned int v10; // [esp+14h] [ebp-18h]
  unsigned int v11; // [esp+18h] [ebp-14h]

  if ( *a2 > (unsigned int)a3 || (v9 = *a2 + 40 * a2[1], v9 <= (unsigned int)a3) )
  {
    if ( !(_BYTE)under_debugger )
      interr(30067);
LABEL_19:
    BUG();
  }
  if ( !a3[1] )
    return 0;
  v8 = a3[1];
  v10 = *a3;
  v3 = a3 + 10;
  if ( a3 + 10 != (unsigned int *)v9 )
  {
    v11 = a3[3];
    v4 = byte_EF875;
    do
    {
      v5 = v4;
      if ( v11 )
        v5 = (const char *)a3[2];
      v6 = v4;
      if ( v3[3] )
        v4 = (const char *)v3[2];
      if ( strcmp(v5, v4) )
        break;
      v4 = v6;
      v8 = v3[1];
      v3 += 10;
    }
    while ( (_DWORD *)v9 != v3 );
  }
  result = v8 - v10;
  if ( v8 <= v10 )
  {
    if ( !(_BYTE)under_debugger )
      interr(30068);
    goto LABEL_19;
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
