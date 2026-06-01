/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7E75C
// Address: 0x0007E75C

//----- (0007E75C) --------------------------------------------------------
int __fastcall sub_7E75C(_DWORD *a1, int a2, int a3)
{
  int v5; // r1
  int result; // r0
  _BYTE *v7; // r3
  int v8; // r8
  int v10; // r2
  int v11; // r10
  unsigned int v12; // r9
  __int64 v13; // r0
  unsigned int v14; // r0
  unsigned __int8 *v15; // [sp+0h] [bp-Ch] BYREF

  if ( a1 )
  {
    v5 = a1[5];
    result = 1;
    if ( !v5 )
      return result;
    v7 = (_BYTE *)a1[4];
    if ( (*v7 & 0x80) == 0 )
    {
      result = 1;
      v8 = 1 << (*v7 & 0xF);
      if ( v8 <= 8 && !__CFADD__(a2, a1[1]) )
      {
        v10 = a1[3];
        v11 = a2 - v10;
        if ( a2 == v10 )
          return result;
        v12 = (unsigned int)&v7[v5];
        v15 = v7 + 1;
        if ( &v7[v5] <= v7 + 1 )
        {
LABEL_14:
          a1[3] = a2;
          return 1;
        }
        while ( 1 )
        {
          v14 = sub_762E4(&v15, v12);
          if ( v14 + v8 <= v14 || v14 + v8 >= a1[1] )
            break;
          HIDWORD(v13) = v8;
          LODWORD(v13) = *a1 + v14;
          sub_7E664(v13, v11, a3);
          if ( (unsigned int)v15 >= v12 )
            goto LABEL_14;
        }
      }
    }
  }
  return 0;
}
