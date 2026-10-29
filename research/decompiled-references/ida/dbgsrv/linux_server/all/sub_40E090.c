/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E090
// Address: 0x000000000040E090

//----- (000000000040E090) ----------------------------------------------------
void __fastcall sub_40E090(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // r12
  char *v3; // rax
  __int64 v4; // rbp
  __int64 i; // r13
  char *v6; // r14
  char *v7; // rdi
  __int64 v8; // r15
  __int64 j; // rbx
  char *v10; // rax
  void *v11; // rdx
  _QWORD *v12; // [rsp+8h] [rbp-40h]

  v12 = a1;
  while ( v12 )
  {
    v1 = v12;
    v2 = v12;
    sub_40E090(v12[3]);
    v12 = (_QWORD *)v12[2];
    v3 = (char *)v1[5];
    if ( v3 )
    {
      v4 = v1[6];
      if ( v4 )
      {
        for ( i = 0; i != v4; ++i )
        {
          v6 = &v3[48 * i];
          v7 = *(char **)v6;
          if ( *(_QWORD *)v6 )
          {
            v8 = *((_QWORD *)v6 + 1);
            if ( v8 )
            {
              for ( j = 0; j != v8; ++j )
              {
                v10 = &v7[32 * j];
                if ( *(int *)v10 >= -1 )
                {
                  v11 = *((void **)v10 + 1);
                  if ( v11 )
                  {
                    *((_QWORD *)v10 + 2) = 0;
                    j__free(v11);
                    v7 = *(char **)v6;
                  }
                }
              }
            }
            *((_QWORD *)v6 + 1) = 0;
            j__free(v7);
            v3 = (char *)v2[5];
          }
        }
      }
      v2[6] = 0;
      j__free(v3);
    }
    operator delete(v2, 0x40u);
  }
}
