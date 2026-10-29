/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467280
// Address: 0x0000000000467280

//----- (0000000000467280) ----------------------------------------------------
void __fastcall sub_467280(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  size_t v5; // r15
  __int64 v6; // r15
  __int64 v7; // rbx
  size_t v8; // r15
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax

  if ( *(_QWORD *)(a1 + 16) < a2 )
    *(_QWORD *)a1 = sub_481540(a1, *(void **)a1, a2, 0x50u);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 < a2 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)a1 + 80 * v4;
        *(_QWORD *)v7 = 0;
        *(_OWORD *)(v7 + 8) = 0;
        v8 = *(_QWORD *)(a3 + 8);
        if ( v8 )
        {
          v9 = sub_4814F0(*(_QWORD *)(a3 + 8));
          *(_QWORD *)(v7 + 16) = v8;
          *(_QWORD *)v7 = v9;
          memcpy(v9, *(const void **)a3, v8);
          *(_QWORD *)(v7 + 8) = v8;
        }
        *(_QWORD *)(v7 + 24) = 0;
        *(_OWORD *)(v7 + 32) = 0;
        v5 = *(_QWORD *)(a3 + 32);
        if ( v5 )
        {
          v11 = sub_4814F0(*(_QWORD *)(a3 + 32));
          *(_QWORD *)(v7 + 24) = v11;
          *(_QWORD *)(v7 + 40) = v5;
          memcpy(v11, *(const void **)(a3 + 24), v5);
          *(_QWORD *)(v7 + 32) = v5;
        }
        *(_QWORD *)(v7 + 48) = 0;
        *(_OWORD *)(v7 + 56) = 0;
        v6 = *(_QWORD *)(a3 + 56);
        if ( v6 )
          break;
        ++v4;
        *(_DWORD *)(v7 + 72) = *(_DWORD *)(a3 + 72);
        if ( a2 == v4 )
          goto LABEL_12;
      }
      v10 = sub_4814F0(16 * v6);
      *(_QWORD *)(v7 + 48) = v10;
      ++v4;
      *(_QWORD *)(v7 + 64) = v6;
      memcpy(v10, *(const void **)(a3 + 48), 16 * v6);
      *(_QWORD *)(v7 + 56) = v6;
      *(_DWORD *)(v7 + 72) = *(_DWORD *)(a3 + 72);
    }
    while ( a2 != v4 );
  }
LABEL_12:
  *(_QWORD *)(a1 + 8) = a2;
}
