/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2E7E0
// Address: 0x0002E7E0

//----- (0002E7E0) --------------------------------------------------------
char __cdecl sub_2E7E0(int *a1, int a2, int *a3)
{
  int v3; // ecx
  char result; // al
  int *v5; // esi
  int v6; // edi
  size_t v7; // ecx
  int v8; // edi
  int v9; // ecx
  const void *v10; // edx
  int v11; // ecx

  v3 = *a1;
  if ( *a1 == 3 )
  {
    ((void (__cdecl *)(int, int *, int))a1[3])(a2, a3, a1[4]);
    return 1;
  }
  v5 = (int *)(a1[2] + a2);
  if ( (unsigned int)(v3 - 1) < 2 )
  {
    v6 = *a3;
    if ( *a3 < -1 )
    {
      v7 = 8 * (v6 == -2);
      if ( v7 != a1[3] )
        return 0;
    }
    else
    {
      v7 = a3[2];
      if ( v7 != a1[3] )
        return 0;
    }
    if ( v6 < -1 )
      v10 = a3 + 1;
    else
      v10 = (const void *)a3[1];
    memcpy(v5, v10, v7);
    return 1;
  }
  if ( v3 )
    return 1;
  v8 = a3[1];
  v9 = a1[4];
  switch ( v9 )
  {
    case 4:
      goto LABEL_20;
    case 2:
      v8 = (unsigned __int16)v8;
      goto LABEL_20;
    case 1:
      v8 = (unsigned __int8)v8;
LABEL_20:
      v11 = 0;
      goto LABEL_22;
  }
  v11 = a3[2];
LABEL_22:
  result = 1;
  switch ( a1[3] )
  {
    case 1:
      *(_BYTE *)v5 = v8;
      break;
    case 2:
      *(_WORD *)v5 = v8;
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      return result;
    case 4:
      *v5 = v8;
      break;
    case 8:
      *v5 = v8;
      v5[1] = v11;
      break;
    default:
      return 1;
  }
  return result;
}
