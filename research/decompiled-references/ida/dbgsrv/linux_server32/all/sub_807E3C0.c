/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807E3C0
// Address: 0x0807E3C0

//----- (0807E3C0) --------------------------------------------------------
unsigned int __usercall sub_807E3C0@<eax>(char **a1@<eax>, const void *a2@<edx>, size_t a3@<ecx>)
{
  unsigned int v4; // ebp
  char *v5; // eax
  unsigned int v7; // edx
  unsigned int result; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v13; // [esp+4h] [ebp-38h]
  unsigned int v14; // [esp+4h] [ebp-38h]
  unsigned int v15; // [esp+4h] [ebp-38h]
  char v16; // [esp+1Bh] [ebp-21h] BYREF
  unsigned int v17; // [esp+1Ch] [ebp-20h]

  v4 = (unsigned int)a1[1];
  v5 = *a1;
  v17 = __readgsdword(0x14u);
  v16 = 0;
  v7 = a3 + v4;
  if ( !__CFADD__(a3, v4) )
  {
    if ( v4 >= v7 )
      goto LABEL_3;
    v13 = (unsigned int)a1[2];
    if ( &v16 < v5 || &v16 >= &a1[2][(int)v5] )
    {
      v9 = v4;
      if ( v13 >= v7
        || (v14 = v7,
            v5 = (char *)sub_80CF920((int)a1, v5, v7, 1u),
            v9 = (unsigned int)a1[1],
            v7 = v14,
            *a1 = v5,
            v9 < v14) )
      {
        do
        {
          v5[v9++] = 0;
          v5 = *a1;
        }
        while ( v7 != v9 );
      }
    }
    else
    {
      v10 = v4;
      if ( v13 >= v7
        || (v15 = v7,
            v5 = (char *)sub_80CF920((int)a1, v5, v7, 1u),
            v10 = (unsigned int)a1[1],
            v7 = v15,
            *a1 = v5,
            v10 < v15) )
      {
        do
        {
          v5[v10] = 0;
          v11 = v10 + 1;
          v5 = *a1;
          if ( v7 == v11 )
            break;
          v5[v11] = 0;
          v10 = v11 + 1;
          v5 = *a1;
        }
        while ( v7 != v10 );
      }
    }
  }
  a1[1] = (char *)v7;
LABEL_3:
  memcpy(&v5[v4], a2, a3);
  result = v17 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
