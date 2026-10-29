__int64 __fastcall read_ids_file(__int64 a1, FILE *a2)
{
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  int v5; // ebp
  unsigned int v7; // edi
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  FILE *v13; // rdi
  int v14; // eax
  FILE *v15; // rdi
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // eax
  int ptr; // [rsp+8h] [rbp-60h] BYREF
  __int16 v22; // [rsp+Ch] [rbp-5Ch]
  __int16 v23; // [rsp+Eh] [rbp-5Ah]
  FILE *stream[3]; // [rsp+10h] [rbp-58h] BYREF
  int v25; // [rsp+28h] [rbp-40h]
  char v26; // [rsp+2Ch] [rbp-3Ch] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  if ( !a1 || !*(_QWORD *)(a1 + 8) )
    return (unsigned int)-1;
  v3 = *(_BYTE **)(a1 + 24);
  stream[0] = a2;
  *(_OWORD *)(a1 + 56) = 0;
  if ( v3 )
    *v3 = 0;
  v4 = *(_BYTE **)(a1 + 32);
  if ( v4 )
    *v4 = 0;
  if ( qfread(stream[0], &ptr) != 8 || ptr != 1229014089 || v22 != 21316 )
    return (unsigned int)-3;
  byte_2CD5EE0 = 0;
  if ( v23 != 8 )
  {
    if ( v23 != 7 )
      return (unsigned int)-3;
    byte_2CD5EE0 = 1;
  }
  if ( qfread(stream[0], (void *)(a1 + 80)) == 8 )
  {
    v7 = *(_DWORD *)(a1 + 84);
    if ( !v7 )
      return (unsigned int)-4;
    v8 = *(_DWORD *)(a1 + 80);
    if ( v7 >= v8 / 9uLL )
      return (unsigned int)-4;
    if ( v8 <= 0x10 )
      return (unsigned int)-4;
    v9 = v8 - 16;
    *(_DWORD *)(a1 + 80) = v9;
    if ( v7 >= v9 >> 3 )
      return (unsigned int)-4;
    v10 = *(unsigned int *)(a1 + 48);
    if ( (unsigned int)v10 >= (unsigned int)v9 )
    {
      v17 = qalloc(v8 - 16);
      *(_QWORD *)(a1 + 64) = v17;
      if ( !v17 )
        goto LABEL_56;
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 80);
    }
    else
    {
      if ( v10 >> 3 < v7 )
      {
        *(_DWORD *)(a1 + 48) = 0;
LABEL_23:
        v11 = qtmpfile();
        *(_QWORD *)(a1 + 56) = v11;
        if ( v11 )
          goto LABEL_24;
        if ( *(_DWORD *)(a1 + 48) )
          qfree(*(void **)(a1 + 64));
LABEL_56:
        *(_QWORD *)(a1 + 64) = 0;
        return (unsigned int)-5;
      }
      v18 = 8 * v7;
      *(_DWORD *)(a1 + 48) = v18;
      v19 = qalloc(v18);
      *(_QWORD *)(a1 + 64) = v19;
      if ( !v19 )
        goto LABEL_56;
      if ( *(_DWORD *)(a1 + 48) != *(_DWORD *)(a1 + 80) )
        goto LABEL_23;
    }
LABEL_24:
    v25 = -1;
    *(_QWORD *)(a1 + 72) = stream;
    stream[2] = (FILE *)&v26;
    v5 = zip_inflate(a1, sub_5E0690, sub_5E06A0);
    if ( v5 )
    {
      v13 = *(FILE **)(a1 + 56);
      if ( !v13 )
      {
LABEL_32:
        if ( *(_DWORD *)(a1 + 48) )
        {
          qfree(*(void **)(a1 + 64));
          *(_QWORD *)(a1 + 64) = 0;
        }
        if ( v5 != 4 )
        {
          if ( v5 > 4 )
          {
            if ( v5 != 778 )
              return (unsigned int)-7;
LABEL_50:
            v12 = v25;
            goto LABEL_47;
          }
          if ( v5 != -6 )
          {
            if ( v5 )
              return (unsigned int)-7;
            goto LABEL_50;
          }
          return (unsigned int)-6;
        }
        return (unsigned int)-5;
      }
    }
    else
    {
      v12 = v25;
      if ( v25 == 4 )
      {
        *(_QWORD *)(a1 + 72) = 0;
        return (unsigned int)v5;
      }
      v13 = *(FILE **)(a1 + 56);
      if ( !v13 )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          qfree(*(void **)(a1 + 64));
          *(_QWORD *)(a1 + 64) = 0;
          v12 = v25;
        }
LABEL_47:
        v5 = -8;
        if ( v12 != -2 )
          return (unsigned int)v5;
        return (unsigned int)-4;
      }
    }
    v14 = ferror(v13);
    v15 = *(FILE **)(a1 + 56);
    if ( v14 || (v20 = feof(v15), v15 = *(FILE **)(a1 + 56), v20) )
    {
      qfclose(v15);
      v16 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 56) = 0;
      if ( v16 )
      {
        qfree(*(void **)(a1 + 64));
        *(_QWORD *)(a1 + 64) = 0;
      }
      return (unsigned int)-6;
    }
    qfclose(v15);
    *(_QWORD *)(a1 + 56) = 0;
    goto LABEL_32;
  }
  return (unsigned int)-3;
}
