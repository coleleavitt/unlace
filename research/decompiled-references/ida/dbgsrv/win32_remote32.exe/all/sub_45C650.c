/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C650
// Address: 0x0045C650

//----- (0045C650) --------------------------------------------------------
__int32 __userpurge sub_45C650@<eax>(int a1@<ebx>, int *a2, int a3, int a4, __m128i a5)
{
  int v6; // ecx
  int v7; // edx
  unsigned int **v8; // edi
  int v9; // edx
  __int32 v10; // ebp
  int v11; // ebx
  _BYTE *v12; // edi
  int v13; // eax
  int v14; // eax
  int v16; // [esp+4h] [ebp-8h]
  int v17; // [esp+10h] [ebp+4h]

  if ( a5.m128i_i32[1] <= 0 )
    return a5.m128i_i32[0];
  v6 = a3;
  v7 = a4;
  v16 = 0;
  if ( (a4 & a3) == 0xFFFFFFFF )
  {
    v17 = 0;
  }
  else if ( a2 )
  {
    v8 = (unsigned int **)(a2 + 2);
    if ( *a2 < 2 )
    {
      if ( sub_45CFE0(a1, (int)v8, (int)*v8, 0, 1u) )
      {
        v16 = -1;
        v17 = -1;
      }
      else
      {
        v16 = sub_45D030(a1, (int)v8, *v8);
        v17 = v9;
      }
      v7 = a4;
      v6 = a3;
    }
    else
    {
      v16 = a2[6];
      v17 = a2[7];
    }
    if ( *a2 < 2 )
    {
      if ( !sub_45CFE0(a1, (int)v8, (int)*v8, __SPAIR64__(v7, v6), 0) )
        sub_45D030(a1, (int)v8, *v8);
    }
    else
    {
      a2[6] = v6;
      a2[7] = v7;
    }
  }
  else
  {
    v16 = -1;
    v17 = -1;
  }
  v10 = a5.m128i_i32[0];
  v11 = 0;
  v12 = (_BYTE *)a5.m128i_i32[0];
  while ( (unsigned int)++v11 < a5.m128i_i32[1] && a2 )
  {
    v13 = *a2 < 2 ? sub_45CF50((_DWORD *)a2[2], &a5, 1) : sub_45C370((int)a2, (unsigned int)&a5, 1);
    if ( v13 != 1 )
      break;
    v14 = a5.m128i_u8[0];
    *v12++ = a5.m128i_i8[0];
    if ( !v14 )
      goto LABEL_26;
  }
  *v12 = 0;
LABEL_26:
  if ( (a4 & a3) == 0xFFFFFFFF || !a2 )
    return v10;
  if ( *a2 >= 2 )
  {
    a2[6] = v16;
    a2[7] = v17;
    return v10;
  }
  if ( sub_45CFE0(v11, (int)v12, a2[2], __SPAIR64__(v17, v16), 0) )
    return v10;
  sub_45D030(v11, (int)v12, (unsigned int *)a2[2]);
  return v10;
}
// 45C6E3: variable 'v9' is possibly undefined
