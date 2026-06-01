/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449F20
// Address: 0x00449F20

//----- (00449F20) --------------------------------------------------------
int __cdecl sub_449F20(int a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  unsigned int v3; // ebx
  _BYTE *v4; // eax
  int result; // eax
  unsigned int *v6; // esi
  _BYTE *v7; // eax
  const char *v8; // ebp
  unsigned int v9; // eax
  bool v10; // zf
  unsigned int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // esi
  int v14; // [esp+10h] [ebp-20h]
  unsigned int v15; // [esp+14h] [ebp-1Ch]
  unsigned int v16; // [esp+1Ch] [ebp-14h] BYREF
  _BYTE v17[3]; // [esp+21h] [ebp-Fh] BYREF
  _BYTE v18[5]; // [esp+24h] [ebp-Ch] BYREF
  _BYTE v19[3]; // [esp+29h] [ebp-7h] BYREF

  v2 = a2;
  v3 = a2[1];
  v15 = v3;
  v4 = sub_4540B0(&v16, (unsigned int)v17, v3);
  result = sub_401600(a1, (unsigned int)&v16, v4 - (_BYTE *)&v16);
  if ( v3 )
  {
    result = 0;
    v14 = 0;
    do
    {
      v6 = (unsigned int *)(result + *v2);
      v7 = sub_4540B0(v18, (unsigned int)v19, *v6);
      sub_401600(a1, (unsigned int)v18, v7 - v18);
      if ( v6[2] )
      {
        v8 = pNodeName;
        if ( v6[1] )
          v8 = (const char *)v6[1];
      }
      else
      {
        v8 = MultiByteStr;
      }
      v9 = strlen(v8);
      v10 = v9 == -1;
      v11 = v9 + 1;
      v16 = v11;
      if ( v10 )
        goto LABEL_18;
      v12 = *(_DWORD *)(a1 + 4);
      v13 = v12 + v11;
      if ( v12 + v11 < v12 )
        v13 = 0x7FFFFFFF;
      if ( v13 <= v12 )
      {
        if ( v13 == v12 || v13 >= v12 )
          goto LABEL_17;
      }
      else
      {
        if ( v13 > *(_DWORD *)(a1 + 8) )
          *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v13, 1u);
        sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v13 - *(_DWORD *)(a1 + 4));
        v11 = v16;
      }
      *(_DWORD *)(a1 + 4) = v13;
LABEL_17:
      sub_464310(v12 + *(_DWORD *)a1, (unsigned int)v8, v11);
      v3 = v15;
LABEL_18:
      v2 = a2;
      result = v14 + 16;
      --v3;
      v14 += 16;
      v15 = v3;
    }
    while ( v3 );
  }
  return result;
}
