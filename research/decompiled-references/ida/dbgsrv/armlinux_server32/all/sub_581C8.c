/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_581C8
// Address: 0x000581C8

//----- (000581C8) --------------------------------------------------------
void *__fastcall sub_581C8(void **a1, char *s)
{
  char *v3; // r8
  size_t v4; // r5
  int v5; // r4
  unsigned int v6; // r6
  char *v8; // r0
  char *v9; // r2

  if ( s )
  {
    v3 = s;
    v4 = strlen(s) + 1;
  }
  else
  {
    v4 = 1;
    v3 = &byte_8DFE8;
  }
  v5 = (int)a1[1];
  v6 = v5 + v4;
  if ( !__CFADD__(v5, v4) )
  {
    if ( v5 >= v6 )
      return j_memcpy((char *)*a1 + v5, v3, v4);
    goto LABEL_10;
  }
  if ( (unsigned int)v5 <= 0x7FFFFFFE )
  {
    v6 = 0x7FFFFFFF;
LABEL_10:
    v8 = (char *)*a1;
    if ( (unsigned int)a1[2] < v6 )
    {
      v8 = (char *)sub_78018((int)a1, *a1, v6, 1u);
      v9 = (char *)a1[1];
      *a1 = v8;
    }
    else
    {
      v9 = (char *)a1[1];
    }
    memset(&v9[(_DWORD)v8], 0, v6 - (_DWORD)v9);
    a1[1] = (void *)v6;
    return j_memcpy((char *)*a1 + v5, v3, v4);
  }
  if ( v5 < 0 )
    a1[1] = (void *)0x7FFFFFFF;
  return j_memcpy((char *)*a1 + v5, v3, v4);
}
// 8DFE8: using guessed type char byte_8DFE8;
