/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000AB80
// Address: 0x000000014000AB80

//----- (000000014000AB80) ----------------------------------------------------
void __fastcall sub_14000AB80(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // r14
  void **v4; // rsi
  char *v5; // rbp
  __int64 v6; // rdi
  char *v7; // rbx
  void *v8; // rcx

  if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      v3 = 0;
      do
      {
        v4 = (void **)(v3 + *(_QWORD *)a1);
        if ( *v4 )
        {
          v5 = (char *)v4[1];
          if ( v5 )
          {
            v6 = 0;
            do
            {
              v7 = (char *)*v4;
              if ( *(int *)((char *)*v4 + v6) >= -1 )
              {
                v8 = *(void **)&v7[v6 + 8];
                if ( v8 )
                {
                  *(_QWORD *)&v7[v6 + 16] = 0;
                  j_free(v8);
                  *(_QWORD *)&v7[v6 + 8] = 0;
                  *(_QWORD *)&v7[v6 + 24] = 0;
                }
                *(_DWORD *)&v7[v6] = -2;
              }
              v6 += 32;
              --v5;
            }
            while ( v5 );
          }
          v4[1] = nullptr;
          j_free(*v4);
          *v4 = nullptr;
          v4[2] = nullptr;
        }
        v3 += 48;
        --v2;
      }
      while ( v2 );
    }
    *(_QWORD *)(a1 + 8) = 0;
    j_free(*(void **)a1);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
