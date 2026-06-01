int __fastcall CoinPackedMatrix::dumpMatrix(CoinPackedMatrix *this, const char *a2)
{
  int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rbp
  int v6; // r15d
  __int64 v7; // r13
  __int64 v8; // r14
  double v9; // xmm0_8
  int v10; // edx
  int v12; // ebp
  __int64 v13; // r13
  __int64 v14; // rcx
  FILE *v15; // rbp
  int v16; // r14d
  __int64 v17; // r13
  __int64 v18; // r15
  double v19; // xmm0_8
  int v20; // esi
  FILE *stream; // [rsp+0h] [rbp-48h]
  FILE *streama; // [rsp+0h] [rbp-48h]
  __int64 v23; // [rsp+8h] [rbp-40h]

  if ( a2 )
  {
    stream = fopen(a2, "w");
    fwrite("Dumping matrix...\n\n", 1u, 0x13u, stream);
    fprintf(stream, "colordered: %i\n", *((unsigned __int8 *)this + 8));
    v2 = *((_DWORD *)this + 16);
    fprintf(stream, "major: %i   minor: %i\n", v2, *((_DWORD *)this + 17));
    if ( v2 > 0 )
    {
      v3 = (unsigned int)(v2 - 1);
      v4 = *((_QWORD *)this + 7);
      v5 = 0;
      v23 = v3 + 1;
      do
      {
        fprintf(stream, "vec %i has length %i with entries:\n", v5, *(_DWORD *)(v4 + 4 * v5));
        v4 = *((_QWORD *)this + 7);
        v6 = *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v5);
        if ( v6 < v6 + *(_DWORD *)(v4 + 4 * v5) )
        {
          v7 = 8LL * v6;
          v8 = 4LL * v6;
          do
          {
            ++v6;
            v9 = *(double *)(*((_QWORD *)this + 4) + v7);
            v7 += 8;
            v10 = *(_DWORD *)(*((_QWORD *)this + 5) + v8);
            v8 += 4;
            fprintf(stream, "        %15i  %40.25f\n", v10, v9);
            v4 = *((_QWORD *)this + 7);
          }
          while ( *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v5) + *(_DWORD *)(v4 + 4 * v5) > v6 );
        }
        ++v5;
      }
      while ( v23 != v5 );
    }
    fwrite("\nFinished dumping matrix\n", 1u, 0x19u, stream);
    return fclose(stream);
  }
  else
  {
    puts("Dumping matrix...\n");
    printf("colordered: %i\n", *((unsigned __int8 *)this + 8));
    v12 = *((_DWORD *)this + 16);
    printf("major: %i   minor: %i\n", v12, *((_DWORD *)this + 17));
    if ( v12 > 0 )
    {
      v13 = (unsigned int)(v12 - 1);
      v14 = *((_QWORD *)this + 7);
      v15 = nullptr;
      streama = (FILE *)(v13 + 1);
      do
      {
        printf("vec %i has length %i with entries:\n", (_DWORD)v15, *(_DWORD *)(v14 + 4LL * (_QWORD)v15));
        v14 = *((_QWORD *)this + 7);
        v16 = *(_DWORD *)(*((_QWORD *)this + 6) + 4LL * (_QWORD)v15);
        if ( v16 < v16 + *(_DWORD *)(v14 + 4LL * (_QWORD)v15) )
        {
          v17 = 8LL * v16;
          v18 = 4LL * v16;
          do
          {
            ++v16;
            v19 = *(double *)(*((_QWORD *)this + 4) + v17);
            v17 += 8;
            v20 = *(_DWORD *)(*((_QWORD *)this + 5) + v18);
            v18 += 4;
            printf("        %15i  %40.25f\n", v20, v19);
            v14 = *((_QWORD *)this + 7);
          }
          while ( *(_DWORD *)(*((_QWORD *)this + 6) + 4LL * (_QWORD)v15) + *(_DWORD *)(v14 + 4LL * (_QWORD)v15) > v16 );
        }
        v15 = (FILE *)((char *)v15 + 1);
      }
      while ( streama != v15 );
    }
    return puts("\nFinished dumping matrix");
  }
}

