/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140009630
// Address: 0x0000000140009630

//----- (0000000140009630) ----------------------------------------------------
__int64 __fastcall sub_140009630(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r13
  __int64 result; // rax
  void *v5; // rbx
  _QWORD *v6; // r15
  __int64 v7; // r12
  __int64 v8; // r14
  void **v9; // rsi
  char *v10; // rbp
  __int64 v11; // rdi
  char *v12; // rbx
  void *v13; // rcx
  __int64 v14; // [rsp+60h] [rbp+8h]
  void *v16; // [rsp+70h] [rbp+18h]

  v14 = a1;
  v3 = (_QWORD *)a3;
  result = a2;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      sub_140009630(a1, result, v3[2]);
      v5 = v3;
      v16 = v3;
      v6 = v3;
      v3 = (_QWORD *)*v3;
      if ( v6[5] )
      {
        v7 = v6[6];
        if ( v7 )
        {
          v8 = 0;
          do
          {
            v9 = (void **)(v8 + v6[5]);
            if ( *v9 )
            {
              v10 = (char *)v9[1];
              if ( v10 )
              {
                v11 = 0;
                do
                {
                  v12 = (char *)*v9;
                  if ( *(int *)((char *)*v9 + v11) >= -1 )
                  {
                    v13 = *(void **)&v12[v11 + 8];
                    if ( v13 )
                    {
                      *(_QWORD *)&v12[v11 + 16] = 0;
                      j_free(v13);
                      *(_QWORD *)&v12[v11 + 8] = 0;
                      *(_QWORD *)&v12[v11 + 24] = 0;
                    }
                    *(_DWORD *)&v12[v11] = -2;
                  }
                  v11 += 32;
                  --v10;
                }
                while ( v10 );
              }
              v9[1] = nullptr;
              j_free(*v9);
              *v9 = nullptr;
              v9[2] = nullptr;
            }
            v8 += 48;
            --v7;
          }
          while ( v7 );
          v5 = v16;
        }
        v6[6] = 0;
        j_free((void *)v6[5]);
        v6[5] = 0;
        v6[7] = 0;
      }
      j_j_free(v5);
      result = a2;
      a1 = v14;
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
  return result;
}
