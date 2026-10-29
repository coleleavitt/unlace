/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140052440
// Address: 0x0000000140052440

//----- (0000000140052440) ----------------------------------------------------
char __fastcall sub_140052440(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v8; // rax
  bool v9; // r14
  char *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbx
  void *v13; // rcx
  _BYTE v14[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-48h] BYREF
  void *v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+50h] [rbp-30h]
  int v19; // [rsp+58h] [rbp-28h] BYREF
  void *Block[2]; // [rsp+60h] [rbp-20h]
  __int64 v21; // [rsp+70h] [rbp-10h]

  v5 = a2;
  if ( sub_140044800(a1, a2, a3, a4) )
    return 1;
  v16 = nullptr;
  v17 = 0;
  v18 = 0;
  v8 = *(_QWORD *)(a1 + 512);
  if ( !v8 )
    LODWORD(v8) = *(_DWORD *)(a1 + 608);
  if ( (_DWORD)v8 )
  {
    v19 = -2;
    Block[1] = nullptr;
    v21 = 0;
    Block[0] = (void *)-1LL;
    sub_140044480((__int64)&v16, (int)v8, (__int64)&v19);
    if ( v19 >= -1 )
    {
      if ( Block[0] )
      {
        Block[1] = nullptr;
        j_free(Block[0]);
      }
    }
  }
  v9 = (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, void *, _QWORD))(*(_QWORD *)a1 + 216LL))(
         a1,
         v5,
         1,
         v16,
         0) == 1
    && (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, __int64, _QWORD))(*(_QWORD *)a1 + 280LL))(
         a1,
         *((_QWORD *)v16 + 4 * *(int *)(a1 + 616) + 1),
         v14,
         1,
         0) == 1
    && (v14[0] == 0xC2 || v14[0] == 0xC3)
    && (v15 = -1,
        (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64, _QWORD))(*(_QWORD *)a1 + 280LL))(
          a1,
          *((_QWORD *)v16 + 4 * *(int *)(a1 + 612) + 1),
          &v15,
          8,
          0) == 8)
    && a4 == v15;
  v10 = (char *)v16;
  if ( v16 )
  {
    v11 = v17;
    if ( v17 )
    {
      v12 = 0;
      do
      {
        if ( *(int *)&v10[v12] >= -1 )
        {
          v13 = *(void **)&v10[v12 + 8];
          if ( v13 )
          {
            *(_QWORD *)&v10[v12 + 16] = 0;
            j_free(v13);
            *(_QWORD *)&v10[v12 + 8] = 0;
            *(_QWORD *)&v10[v12 + 24] = 0;
          }
          *(_DWORD *)&v10[v12] = -2;
          v10 = (char *)v16;
        }
        v12 += 32;
        --v11;
      }
      while ( v11 );
    }
    v17 = 0;
    j_free(v10);
  }
  return v9;
}
