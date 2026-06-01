/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400440B0
// Address: 0x00000001400440B0

//----- (00000001400440B0) ----------------------------------------------------
__int64 __fastcall sub_1400440B0(__int64 a1)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdi
  char *v5; // r13
  _QWORD *v6; // rdi
  __int64 v7; // r15
  char *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rbx
  void *v12; // rcx
  __int64 result; // rax
  __int64 v14; // [rsp+50h] [rbp+8h]

  v2 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 8) + 1LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v3 > v4 )
  {
    v5 = (char *)sub_14005ABE0(a1, nullptr, v3, 0x30u);
    v14 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v4;
    v6 = *(_QWORD **)a1;
    v7 = *v2 - 1LL;
    if ( v7 >= 0 )
    {
      v8 = v5 + 16;
      do
      {
        *((_QWORD *)v8 - 2) = *v6;
        *v6 = 0;
        *((_QWORD *)v8 - 1) = v6[1];
        v6[1] = 0;
        *(_QWORD *)v8 = v6[2];
        v6[2] = 0;
        *((_QWORD *)v8 + 1) = v6[3];
        *((_QWORD *)v8 + 2) = v6[4];
        v8[24] = *((_BYTE *)v6 + 40);
        if ( *v6 )
        {
          v9 = v6[1];
          if ( v9 )
          {
            v10 = 0;
            do
            {
              v11 = *v6;
              if ( *(int *)(v10 + *v6) >= -1 )
              {
                v12 = *(void **)(v10 + v11 + 8);
                if ( v12 )
                {
                  *(_QWORD *)(v10 + v11 + 16) = 0;
                  j_free(v12);
                  *(_QWORD *)(v10 + v11 + 8) = 0;
                  *(_QWORD *)(v10 + v11 + 24) = 0;
                }
                *(_DWORD *)(v10 + v11) = -2;
              }
              v10 += 32;
              --v9;
            }
            while ( v9 );
          }
          v6[1] = 0;
          j_free((void *)*v6);
          *v6 = 0;
          v6[2] = 0;
        }
        v6 += 6;
        v8 += 48;
        --v7;
      }
      while ( v7 >= 0 );
      v2 = (_QWORD *)(a1 + 8);
    }
    j_free(*(void **)a1);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 16) = v14;
  }
  result = 48LL * *v2 + *(_QWORD *)a1;
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = -1;
  *(_QWORD *)(result + 32) = -1;
  *(_BYTE *)(result + 40) = 0;
  ++*v2;
  return result;
}
