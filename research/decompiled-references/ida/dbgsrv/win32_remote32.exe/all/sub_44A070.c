/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A070
// Address: 0x0044A070

//----- (0044A070) --------------------------------------------------------
int __cdecl sub_44A070(int a1, _DWORD *a2, char a3)
{
  _DWORD *v3; // ebx
  _BYTE *v4; // eax
  int result; // eax
  unsigned int v6; // ebp
  unsigned int *v7; // edi
  _BYTE *v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // edi
  int v15; // [esp+10h] [ebp-30h]
  unsigned int v16; // [esp+14h] [ebp-2Ch]
  unsigned int v17; // [esp+1Ch] [ebp-24h] BYREF
  _BYTE v18[3]; // [esp+21h] [ebp-1Fh] BYREF
  _BYTE v19[5]; // [esp+24h] [ebp-1Ch] BYREF
  _BYTE v20[3]; // [esp+29h] [ebp-17h] BYREF
  _BYTE v21[5]; // [esp+2Ch] [ebp-14h] BYREF
  _BYTE v22[3]; // [esp+31h] [ebp-Fh] BYREF
  _BYTE v23[5]; // [esp+34h] [ebp-Ch] BYREF
  _BYTE v24[3]; // [esp+39h] [ebp-7h] BYREF

  v3 = a2;
  v4 = sub_4540B0(&v17, (unsigned int)v18, a2[1]);
  result = sub_401600(a1, (unsigned int)&v17, v4 - (_BYTE *)&v17);
  v6 = 0;
  if ( a2[1] )
  {
    result = 0;
    v15 = 0;
    do
    {
      v7 = (unsigned int *)(result + *v3);
      v8 = sub_4540B0(v19, (unsigned int)v20, *v7);
      sub_401600(a1, (unsigned int)v19, v8 - v19);
      v9 = sub_4540B0(v21, (unsigned int)v22, v7[3]);
      sub_401600(a1, (unsigned int)v21, v9 - v21);
      if ( !a3 )
        goto LABEL_15;
      v10 = sub_4540B0(v23, (unsigned int)v24, v7[1]);
      sub_401600(a1, (unsigned int)v23, v10 - v23);
      v11 = v7[3];
      v12 = v7[2];
      v16 = v11;
      v17 = v12;
      if ( !v11 )
        goto LABEL_15;
      v13 = *(_DWORD *)(a1 + 4);
      v14 = v11 + v13;
      if ( v11 + v13 < v13 )
        v14 = 0x7FFFFFFF;
      if ( v14 <= v13 )
      {
        if ( v14 == v13 || v14 >= v13 )
          goto LABEL_14;
      }
      else
      {
        if ( v14 > *(_DWORD *)(a1 + 8) )
          *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v14, 1u);
        sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v14 - *(_DWORD *)(a1 + 4));
        v11 = v16;
        v12 = v17;
      }
      *(_DWORD *)(a1 + 4) = v14;
LABEL_14:
      sub_464310(v13 + *(_DWORD *)a1, v12, v11);
      v3 = a2;
LABEL_15:
      ++v6;
      result = v15 + 20;
      v15 += 20;
    }
    while ( v6 < v3[1] );
  }
  return result;
}
