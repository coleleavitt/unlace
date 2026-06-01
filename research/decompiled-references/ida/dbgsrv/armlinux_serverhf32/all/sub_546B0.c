/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_546B0
// Address: 0x000546B0

//----- (000546B0) --------------------------------------------------------
int __fastcall sub_546B0(_DWORD *a1, void **a2, int a3, unsigned int a4)
{
  void *v6; // r0
  unsigned int v7; // r4
  char *v9; // r1
  char *v11; // r1
  unsigned int v12; // r2
  char *v13; // r3
  size_t v14; // r2
  char *v15; // r3
  void *v16; // r0
  char v17; // [sp+Bh] [bp-5h] BYREF

  v6 = nullptr;
  v7 = a4;
  a2[1] = nullptr;
  if ( (a1[104] & 0x10) != 0 )
  {
    v17 = 0;
    if ( !a4 )
      return v7;
    v11 = (char *)*a2;
    v12 = (unsigned int)a2[2];
    if ( *a2 > &v17 || &v17 >= &v11[v12] )
    {
      if ( a4 > v12 )
        *a2 = sub_77EB0((int)a2, v11, a4, 1u);
      v13 = (char *)a2[1];
      if ( v7 > (unsigned int)v13 )
      {
        do
          (v13++)[(_DWORD)*a2] = v17;
        while ( (char *)v7 != v13 );
      }
      goto LABEL_13;
    }
    if ( a4 > v12 )
    {
      v16 = sub_77EB0((int)a2, v11, a4, 1u);
      v15 = (char *)a2[1];
      *a2 = v16;
      if ( v7 <= (unsigned int)v15 )
        goto LABEL_13;
    }
    else
    {
      v15 = nullptr;
    }
    do
      (v15++)[(_DWORD)*a2] = 0;
    while ( (char *)v7 != v15 );
LABEL_13:
    a2[1] = (void *)v7;
    return v7;
  }
  v9 = (char *)*a2;
  if ( a4 )
  {
    if ( (unsigned int)a2[2] < a4 )
    {
      v9 = (char *)sub_77EB0((int)a2, v9, a4, 1u);
      v6 = a2[1];
      *a2 = v9;
      v14 = v7 - (_DWORD)v6;
    }
    else
    {
      v14 = a4;
    }
    memset(&v9[(_DWORD)v6], 0, v14);
    v9 = (char *)*a2;
    a2[1] = (void *)v7;
  }
  if ( (*(int (__fastcall **)(_DWORD *, int, char *, unsigned int, _DWORD))(*a1 + 144))(a1, a3, v9, v7, 0) <= 0 )
    return -1;
  return v7;
}
