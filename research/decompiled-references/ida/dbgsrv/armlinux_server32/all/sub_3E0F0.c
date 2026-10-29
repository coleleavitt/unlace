/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E0F0
// Address: 0x0003E0F0

//----- (0003E0F0) --------------------------------------------------------
void *__fastcall sub_3E0F0(void **a1, const void *a2, size_t a3)
{
  char *v4; // r4
  char *v6; // r8
  char *v8; // r1
  char *v10; // r2
  char *v11; // r3
  char *v12; // r3
  char *v13; // r0
  char v14; // [sp+3h] [bp-9h] BYREF

  v4 = (char *)a1[1];
  v6 = &v4[a3];
  v8 = (char *)*a1;
  v14 = 0;
  if ( __CFADD__(v4, a3) )
    goto LABEL_11;
  if ( v4 < v6 )
  {
    v10 = (char *)a1[2];
    if ( v8 > &v14 || &v14 >= &v10[(int)v8] )
    {
      if ( v6 > v10 )
        *a1 = sub_78018((int)a1, v8, (unsigned int)&v4[a3], 1u);
      v11 = (char *)a1[1];
      if ( v6 > v11 )
      {
        do
          (v11++)[(_DWORD)*a1] = 0;
        while ( v6 != v11 );
      }
      v8 = (char *)*a1;
      goto LABEL_11;
    }
    if ( v6 > v10 )
    {
      v13 = (char *)sub_78018((int)a1, v8, (unsigned int)&v4[a3], 1u);
      v12 = (char *)a1[1];
      v8 = v13;
      *a1 = v13;
      if ( v6 <= v12 )
        goto LABEL_11;
    }
    else
    {
      v12 = v4;
    }
    do
    {
      (v12++)[(_DWORD)v8] = 0;
      v8 = (char *)*a1;
    }
    while ( v6 != v12 );
LABEL_11:
    a1[1] = v6;
  }
  return j_memcpy(&v4[(_DWORD)v8], a2, a3);
}
