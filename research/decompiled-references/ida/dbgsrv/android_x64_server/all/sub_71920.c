/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71920
// Address: 0x0000000000071920

//----- (0000000000071920) ----------------------------------------------------
void __fastcall sub_71920(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rax
  int v5; // ebp
  unsigned __int64 i; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // bl
  int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rbx
  void *v13; // rdi
  void *v14; // rdi

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    v5 = 1;
    for ( i = 0; i < v4; i = v5++ )
    {
      v7 = *(_QWORD *)(v3 + 24);
      v8 = 56 * i;
      v9 = *(_BYTE *)(v7 + v8 + 24);
      if ( v9 == 5 || v9 == 6 && (unsigned __int64)off_154A20 <= -*(_DWORD *)(v7 + v8 + 32) )
      {
        a1 = v7 + v8 + 24;
        free_idcv((char *)a1, a2, a3);
        v4 = *(_QWORD *)(v3 + 32);
      }
    }
  }
  if ( qword_154A40[1] )
    ((void (__fastcall *)(__int64))qword_154A40[1])(a1);
  v10 = *(_DWORD *)(v3 + 8) - 1;
  if ( v10 >= 0 )
  {
    v11 = v10;
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v11);
      if ( v12 )
      {
        v13 = *(void **)(v12 + 32);
        if ( v13 )
        {
          *(_QWORD *)(v12 + 40) = 0;
          qfree(v13);
          *(_QWORD *)(v12 + 32) = 0;
          *(_QWORD *)(v12 + 48) = 0;
        }
        sub_7FF10(v12, *(_QWORD **)(v12 + 8));
        operator delete((void *)v12);
      }
      --v11;
    }
    while ( (int)v11 >= 0 );
  }
  v14 = *(void **)v3;
  if ( *(_QWORD *)v3 )
  {
    *(_QWORD *)(v3 + 8) = 0;
    qfree(v14);
    *(_QWORD *)v3 = 0;
    *(_QWORD *)(v3 + 16) = 0;
  }
}
// 154A20: using guessed type int *off_154A20;
// 154A40: using guessed type __int64 qword_154A40[4];
// 154A48: using guessed type __int64 (__fastcall *)(_QWORD);
