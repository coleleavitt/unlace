/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF4E0
// Address: 0x080CF4E0

//----- (080CF4E0) --------------------------------------------------------
char *__cdecl sub_80CF4E0(char **a1, FILE *stream)
{
  char *v2; // ebp
  int v3; // edi
  char *v4; // eax
  unsigned int v5; // edx
  char *v6; // ecx
  int v7; // edx
  char *v8; // edx
  char *v9; // ecx
  char *v10; // eax
  unsigned int v11; // eax
  char *v12; // edi
  unsigned int v14; // ebp
  int v15; // ebp
  char *v16; // eax
  int ptr; // [esp+0h] [ebp-24h]
  char *ptra; // [esp+0h] [ebp-24h]
  char *ptrb; // [esp+0h] [ebp-24h]
  char *ptrd; // [esp+0h] [ebp-24h]
  char *ptrc; // [esp+0h] [ebp-24h]

  v2 = nullptr;
  v3 = 0;
  a1[1] = nullptr;
  while ( 1 )
  {
    if ( feof(stream) )
    {
      v15 = v3 | (unsigned int)v2;
      goto LABEL_26;
    }
    v4 = *a1;
    v5 = (unsigned int)a1[1];
    v6 = *a1;
    if ( !v5 )
    {
      ptr = 1024;
      v14 = 1025;
      goto LABEL_19;
    }
    ptr = v5 + 1023;
    if ( v5 != -1023 )
    {
      v14 = v5 + 1024;
      if ( v5 >= v5 + 1024 )
      {
LABEL_22:
        a1[1] = (char *)v14;
        v6[ptr] = 0;
        v7 = (int)a1[1];
        v4 = *a1;
        goto LABEL_7;
      }
LABEL_19:
      if ( (unsigned int)a1[2] < v14 )
      {
        v4 = (char *)sub_80CF920((int)a1, v6, v14, 1u);
        v5 = (unsigned int)a1[1];
        *a1 = v4;
      }
      memset(&v4[v5], 0, v14 - v5);
      v6 = *a1;
      goto LABEL_22;
    }
    v7 = -1023;
    if ( v4 )
    {
      a1[1] = nullptr;
      sub_80CF780(v4);
      *a1 = nullptr;
      v7 = (int)a1[1];
      v4 = nullptr;
      a1[2] = nullptr;
    }
LABEL_7:
    v2 = sub_80CF3B0(&v4[v3], v7 - v3, stream);
    if ( !v2 )
      break;
    ptra = *a1;
    v3 += strlen(&(*a1)[v3]);
    if ( v3 )
    {
      v8 = ptra;
      v9 = (char *)(v3 - 1);
      v10 = &ptra[v3 - 1];
      if ( !((unsigned int)a1[1] | (v3 - 1)) )
        v10 = &byte_811E601;
      if ( *v10 == 10 )
      {
        if ( v3 != 1 )
          goto LABEL_13;
LABEL_23:
        if ( v8 )
        {
          ptrb = v9;
          a1[1] = nullptr;
          sub_80CF780(v8);
          *a1 = nullptr;
          v9 = ptrb;
          a1[2] = nullptr;
        }
        return v9;
      }
    }
  }
  v15 = v3;
LABEL_26:
  if ( v15 )
  {
    v9 = (char *)v3;
    v8 = *a1;
    if ( !v3 )
      goto LABEL_23;
LABEL_13:
    v11 = (unsigned int)a1[1];
    v12 = v9 + 1;
    if ( v11 < (unsigned int)(v9 + 1) )
    {
      if ( a1[2] < v12 )
      {
        ptrc = v9;
        v16 = (char *)sub_80CF920((int)a1, v8, (unsigned int)(v9 + 1), 1u);
        v9 = ptrc;
        *a1 = v16;
        v8 = v16;
        v11 = (unsigned int)a1[1];
      }
      ptrd = v9;
      memset(&v8[v11], 0, (size_t)&v12[-v11]);
      a1[1] = v12;
      v8 = *a1;
      v9 = ptrd;
    }
    else if ( v12 != (char *)v11 )
    {
      a1[1] = v12;
    }
    v9[(_DWORD)v8] = 0;
    return v9;
  }
  return (char *)-1;
}
// 811E601: using guessed type char byte_811E601;
