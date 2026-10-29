/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68314
// Address: 0x00068314

//----- (00068314) --------------------------------------------------------
char *__fastcall sub_68314(void **a1, struct sockaddr *sa, socklen_t salen, int a4)
{
  unsigned int v7; // r5
  char *v8; // r7
  void *v9; // r1
  size_t v10; // r0
  void *v11; // r1
  unsigned int v12; // r3
  unsigned int v13; // r8
  size_t v14; // r10
  unsigned int v15; // r9
  char *result; // r0
  size_t v17; // r0
  size_t v18; // r0
  void *v19; // r3
  size_t v20; // r10
  int v21; // r3
  size_t v22; // r11
  void *v23; // r1
  int v24; // r6
  int v25; // r8
  unsigned int v26; // r7
  void *v27; // r1
  size_t v28; // r0
  int v29; // [sp+18h] [bp-414h]
  char host[1024]; // [sp+24h] [bp-408h] BYREF

  v7 = (unsigned int)a1[1];
  if ( v7 )
    --v7;
  if ( a4 && !getnameinfo(sa, salen, host, 0x400u, nullptr, 0, 8u) )
  {
    v18 = strlen(host);
    v19 = a1[1];
    v20 = v18;
    if ( v19 )
    {
      v21 = (int)v19 - 1;
      v22 = v18 + v21;
      v29 = v21;
    }
    else
    {
      v29 = 0;
      v22 = v18;
    }
    v23 = *a1;
    if ( v22 + 1 > (unsigned int)a1[2] )
    {
      v23 = sub_78018((int)a1, v23, v22 + 1, 1u);
      *a1 = v23;
    }
    a1[1] = (void *)(v22 + 1);
    *((_BYTE *)v23 + v22) = 0;
    memmove((char *)*a1 + v29, host, v20);
  }
  if ( !getnameinfo(sa, salen, host, 0x400u, nullptr, 0, 1u) )
  {
    v8 = (char *)a1[1];
    v9 = *a1;
    if ( v8 )
    {
      v13 = (unsigned int)(v8 - 1);
      if ( v7 < (unsigned int)(v8 - 1) )
      {
        if ( v8 + 1 > a1[2] )
        {
          v9 = sub_78018((int)a1, v9, (unsigned int)(v8 + 1), 1u);
          *a1 = v9;
        }
        a1[1] = v8 + 1;
        *((_BYTE *)v9 + v13) = 40;
        v8[(_DWORD)*a1] = 0;
        v28 = strlen(host);
        v12 = (unsigned int)a1[2];
        v8 = (char *)a1[1];
        v14 = v28;
        if ( v8 )
          --v8;
        v11 = *a1;
      }
      else
      {
        --v8;
        v17 = strlen(host);
        v11 = *a1;
        v12 = (unsigned int)a1[2];
        v14 = v17;
      }
    }
    else
    {
      v10 = strlen(host);
      v11 = *a1;
      v12 = (unsigned int)a1[2];
      v13 = 0;
      v14 = v10;
    }
    v15 = (unsigned int)&v8[v14 + 1];
    if ( v15 > v12 )
    {
      v11 = sub_78018((int)a1, v11, (unsigned int)&v8[v14 + 1], 1u);
      *a1 = v11;
    }
    a1[1] = (void *)v15;
    v8[v14 + (_DWORD)v11] = 0;
    memmove(&v8[(_DWORD)*a1], host, v14);
    if ( v7 < v13 )
    {
      v24 = (int)a1[1];
      v25 = v24 - 1;
      v26 = v24 + 1;
      if ( !v24 )
      {
        v25 = 0;
        v24 = 1;
        v26 = 2;
      }
      v27 = *a1;
      if ( v26 > (unsigned int)a1[2] )
      {
        v27 = sub_78018((int)a1, v27, v26, 1u);
        *a1 = v27;
      }
      a1[1] = (void *)v26;
      *((_BYTE *)v27 + v25) = 41;
      *((_BYTE *)*a1 + v24) = 0;
    }
  }
  result = (char *)a1[1];
  if ( result )
    return (char *)(v7 < (unsigned int)(result - 1));
  return result;
}
