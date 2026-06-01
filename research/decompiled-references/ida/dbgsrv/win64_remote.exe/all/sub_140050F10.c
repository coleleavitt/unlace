/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140050F10
// Address: 0x0000000140050F10

//----- (0000000140050F10) ----------------------------------------------------
void __fastcall sub_140050F10(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // r15
  int v9; // eax
  size_t v10; // rbp
  const void *v11; // r13
  size_t v12; // rdi
  unsigned __int64 v13; // rdx

  if ( a3 > 0 )
  {
    v5 = a2 + 8;
    v7 = 0;
    v8 = (unsigned int)a3;
    do
    {
      if ( !a4 || ((unsigned __int8)(1 << (v7 & 7)) & *(_BYTE *)((v7 >> 3) + a4)) != 0 )
      {
        sub_140002D20(a1, *(_DWORD *)(v5 - 8) + 3);
        v9 = *(_DWORD *)(v5 - 8);
        if ( v9 == -2 )
        {
          sub_140002DC0(a1, *(_QWORD *)v5 + 1LL);
        }
        else if ( v9 != -3 )
        {
          sub_140002D20(a1, *(_DWORD *)(v5 + 8));
          v10 = *(_QWORD *)(v5 + 8);
          v11 = *(const void **)v5;
          if ( v10 )
          {
            v12 = a1[1];
            v13 = v12 + v10;
            if ( v12 + v10 < v12 )
              v13 = 0x7FFFFFFFFFFFFFFFLL;
            sub_140002EF0((__int64)a1, v13);
            memcpy((void *)(v12 + *a1), v11, v10);
          }
        }
      }
      ++v7;
      v5 += 32;
      --v8;
    }
    while ( v8 );
  }
}
