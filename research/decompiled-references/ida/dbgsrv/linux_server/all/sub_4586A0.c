/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4586A0
// Address: 0x00000000004586A0

//----- (00000000004586A0) ----------------------------------------------------
void __fastcall sub_4586A0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbp
  __int128 v5; // xmm0
  size_t v6; // r15
  __int64 v7; // rbx
  void *v8; // rax

  if ( *(_QWORD *)(a1 + 16) < a2 )
    *(_QWORD *)a1 = sub_481540(a1, *(void **)a1, a2, 0x20u);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 < a2 )
  {
    v5 = 0;
    do
    {
      v7 = *(_QWORD *)a1 + 32 * v4;
      *(_DWORD *)v7 = -2;
      *(_QWORD *)(v7 + 24) = 0;
      *(_OWORD *)(v7 + 8) = v5;
      if ( v7 != a3 )
      {
        if ( *(int *)a3 >= -1 )
        {
          *(_QWORD *)(v7 + 8) = 0;
          *(_OWORD *)(v7 + 16) = 0;
          v6 = *(_QWORD *)(a3 + 16);
          if ( v6 )
          {
            v8 = sub_4814F0(*(_QWORD *)(a3 + 16));
            *(_QWORD *)(v7 + 24) = v6;
            *(_QWORD *)(v7 + 8) = v8;
            memcpy(v8, *(const void **)(a3 + 8), v6);
            *(_QWORD *)(v7 + 16) = v6;
            v5 = 0;
          }
        }
        else
        {
          *(_QWORD *)(v7 + 8) = *(_QWORD *)(a3 + 8);
        }
        *(_DWORD *)v7 = *(_DWORD *)a3;
      }
      ++v4;
    }
    while ( a2 != v4 );
  }
  *(_QWORD *)(a1 + 8) = a2;
}
