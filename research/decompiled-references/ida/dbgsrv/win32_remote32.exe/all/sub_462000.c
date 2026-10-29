/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462000
// Address: 0x00462000

//----- (00462000) --------------------------------------------------------
int __cdecl sub_462000(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // ebp
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // edi
  char *v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // ebx
  unsigned int v15; // [esp+10h] [ebp-Ch] BYREF
  unsigned int v16; // [esp+14h] [ebp-8h]
  unsigned int v17; // [esp+18h] [ebp-4h]

  v3 = a2;
  v15 = a2;
  v17 = a2 + a3;
  if ( a2 >= a2 + a3 )
    return v15 - v3;
  while ( 1 )
  {
    v4 = v15;
    v16 = v15;
    v5 = sub_45A040((int *)&v15);
    if ( v5 == -1 )
      break;
    if ( !v5 )
    {
      v6 = *(_DWORD *)(a1 + 4);
      v7 = v6 + 2;
      if ( v6 + 2 < v6 )
        v7 = 0x7FFFFFFF;
      if ( v7 <= v6 )
      {
        if ( v7 != v6 )
        {
          LOBYTE(a3) = 0;
          if ( v7 < v6 )
            *(_DWORD *)(a1 + 4) = v7;
        }
        *(_WORD *)(v6 + *(_DWORD *)a1) = -32576;
      }
      else
      {
        if ( v7 > *(_DWORD *)(a1 + 8) )
          *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v7, 1u);
        sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v7 - *(_DWORD *)(a1 + 4));
        v8 = *(char **)a1;
        *(_DWORD *)(a1 + 4) = v7;
        LOBYTE(a3) = 0;
        *(_WORD *)&v8[v6] = -32576;
      }
      goto LABEL_27;
    }
    v9 = v15 - v4;
    if ( v15 - v4 >= 4 )
    {
      v12 = v5 - 0x10000;
      v13 = (unsigned __int16)((((unsigned int)(v5 - 0x10000) >> 10) & 0x3FF) - 10240);
      LOBYTE(a3) = ((unsigned __int16)((((unsigned int)(v5 - 0x10000) >> 10) & 0x3FF) - 10240) >> 12) - 32;
      sub_461F90((char **)a1, (char *)&a3);
      LOBYTE(a3) = ((v13 >> 6) & 0x3F) + 0x80;
      sub_461F90((char **)a1, (char *)&a3);
      LOBYTE(a3) = ((v12 >> 10) & 0x3F) + 0x80;
      sub_461F90((char **)a1, (char *)&a3);
      LOWORD(v12) = (v12 & 0x3FF) - 9216;
      LOBYTE(a3) = ((unsigned __int16)v12 >> 12) - 32;
      sub_461F90((char **)a1, (char *)&a3);
      LOBYTE(a3) = (((unsigned __int16)v12 >> 6) & 0x3F) + 0x80;
      sub_461F90((char **)a1, (char *)&a3);
      LOBYTE(a3) = (v12 & 0x3F) + 0x80;
      sub_461F90((char **)a1, (char *)&a3);
      goto LABEL_27;
    }
    if ( v9 )
    {
      v10 = *(_DWORD *)(a1 + 4);
      v11 = v9 + v10;
      if ( v9 + v10 < v10 )
        v11 = 0x7FFFFFFF;
      if ( v11 <= v10 )
      {
        if ( v11 != v10 )
        {
          LOBYTE(a3) = 0;
          if ( v11 < v10 )
            goto LABEL_24;
        }
      }
      else
      {
        if ( v11 > *(_DWORD *)(a1 + 8) )
          *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v11, 1u);
        sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v11 - *(_DWORD *)(a1 + 4));
        LOBYTE(a3) = 0;
LABEL_24:
        *(_DWORD *)(a1 + 4) = v11;
      }
      sub_464310(v10 + *(_DWORD *)a1, v16, v9);
    }
LABEL_27:
    if ( v15 >= v17 )
    {
      v3 = a2;
      return v15 - v3;
    }
  }
  *sub_46B984() = 42;
  return -1;
}
