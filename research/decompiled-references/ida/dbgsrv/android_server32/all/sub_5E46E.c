/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E46E
// Address: 0x0005E46E

//----- (0005E46E) --------------------------------------------------------
int sub_5E46E(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        char *a18,
        _BYTE *a19,
        unsigned int a20,
        void *a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        void *a33,
        int a34,
        int a35,
        int a36,
        int a37,
        char *a38,
        _BYTE *a39,
        int a40,
        ...)
{
  char *v40; // r7
  size_t v41; // r0
  char *v42; // r5
  unsigned int v43; // r4
  int v44; // r6
  const char *v45; // r5
  char *v47; // r1
  unsigned int v48; // r6
  int i; // r5
  char *v50; // r1
  char *v51; // r3
  void *v52; // r0
  char *v53; // r4
  FILE *v54; // r0
  int v55; // r1
  int v56; // r3
  va_list s2; // [sp+90h] [bp+90h] BYREF

  va_start(s2, a40);
  if ( qdirname((char *)&STACK[0x2090], 0x1000u, v40) )
  {
    if ( !qisdir((const char *)&STACK[0x2090]) )
    {
      qmake_full_path((unsigned int)&STACK[0x1090], 4096, (char *)&STACK[0x2090]);
      qgetcwd((char *)s2, 0x1000u);
      v41 = _strlen_chk((char *)s2, 4096);
      if ( !strncmp((const char *)&STACK[0x1090], (const char *)s2, v41) )
      {
        a39 = nullptr;
        a38 = nullptr;
        a17 = 0;
        a40 = 0;
        a16 = 1;
        do
        {
          if ( qisdir((const char *)&STACK[0x1090]) )
            break;
          v42 = a38;
          sub_1B09C((int)&a33, (char *)&STACK[0x1090]);
          sub_5F826((void **)&a38, (int)v42, (int *)&a33);
          if ( a33 )
          {
            a34 = 0;
            qfree(a33);
            a35 = 0;
            a33 = nullptr;
          }
        }
        while ( qdirname((char *)&STACK[0x1090], 0x1000u, (char *)&STACK[0x1090]) );
        a20 = (unsigned int)a39;
        if ( a39 )
        {
          a19 = (_BYTE *)(a28 + 96);
          v43 = 1;
          v44 = 4;
          a18 = &byte_B3CBE;
          do
          {
            v45 = &byte_B3CBE;
            if ( *(_DWORD *)&a38[v44] )
              v45 = *(const char **)&a38[4 * a23 + v44];
            if ( *a19 )
              sub_1BBA0((int)"open_file() creating directory %s\n", v45);
            v44 += 12;
            if ( qmkdir(v45, 0x1FFu) )
              break;
          }
          while ( v43++ < a20 );
        }
        v47 = a38;
        if ( a38 )
        {
          a19 = a39;
          if ( a39 )
          {
            v48 = 1;
            for ( i = 8; ; i += 12 )
            {
              a20 = (unsigned int)v47;
              v50 = &v47[i];
              v51 = &v50[4 * a23];
              v52 = *((void **)v51 - 1);
              v53 = v51 - 4;
              if ( v52 )
              {
                *(_DWORD *)&v50[4 * a23] = 0;
                qfree(v52);
                *(_DWORD *)v53 = 0;
                *(_DWORD *)(a20 + i) = 0;
              }
              if ( v48 >= (unsigned int)a19 )
                break;
              ++v48;
              v47 = a38;
            }
            v47 = a38;
          }
          a39 = nullptr;
          qfree(v47);
          a40 = 0;
          a38 = nullptr;
        }
      }
    }
  }
  v54 = fopenWB(v40);
  return sub_5E5CE(
           v54,
           v55,
           (int)a21,
           v56,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           (int)a18,
           (int)a19,
           a20,
           (int)a21,
           a22);
}
// 5E47A: variable 'v40' is possibly undefined
// 5E5CD: variable 'v55' is possibly undefined
// 5E5CD: variable 'v56' is possibly undefined
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
