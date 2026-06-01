/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_938C4
// Address: 0x000938C4

//----- (000938C4) --------------------------------------------------------
int __fastcall sub_938C4(__int64 a1)
{
  __int64 v1; // kr00_8
  const void *v2; // r9
  signed int v3; // r5
  char *v4; // r6
  char *v5; // r0

  v1 = a1;
  LODWORD(a1) = *(_DWORD *)(a1 + 4);
  if ( (_DWORD)a1 == *(_DWORD *)(v1 + 8) )
  {
    v2 = *(const void **)v1;
    v3 = a1 - *(_DWORD *)v1;
    if ( (_DWORD)v1 + 12 == *(_DWORD *)v1 )
    {
      v5 = (char *)malloc(2 * v3);
      v4 = v5;
      if ( v3 )
        memmove(v5, v2, v3);
      *(_DWORD *)v1 = v4;
    }
    else
    {
      v4 = (char *)realloc(*(void **)v1, 2 * v3);
      *(_DWORD *)v1 = v4;
    }
    LODWORD(a1) = &v4[4 * (v3 >> 2)];
    HIDWORD(a1) = &v4[4 * (v3 >> 1)];
    *(_QWORD *)(v1 + 4) = a1;
  }
  HIDWORD(a1) = *(_DWORD *)HIDWORD(v1);
  *(_DWORD *)(v1 + 4) = a1 + 4;
  *(_DWORD *)a1 = HIDWORD(a1);
  return a1;
}
