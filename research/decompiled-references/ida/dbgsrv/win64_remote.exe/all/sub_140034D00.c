/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140034D00
// Address: 0x0000000140034D00

//----- (0000000140034D00) ----------------------------------------------------
__int64 __fastcall sub_140034D00(_QWORD *a1, const char *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r9
  size_t v7; // r15
  void *v8; // rax
  char *v9; // rdx
  unsigned __int64 *v10; // r8
  bool v11; // al
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  void *v14; // r14
  void *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *Block[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  void *v21; // [rsp+38h] [rbp-18h]
  void *v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+48h] [rbp-8h]

  v4 = a1[1];
  *(_OWORD *)Block = 0;
  v5 = 0;
  v20 = 0;
  v6 = v4;
  if ( a2 )
  {
    v7 = strlen(a2);
    v8 = nullptr;
    if ( v7 != -1 )
    {
      v8 = sub_14005ABE0((__int64)Block, nullptr, v7 + 1, 1u);
      Block[0] = v8;
    }
    Block[1] = (void *)(v7 + 1);
    memcpy(v8, a2, v7);
    *((_BYTE *)Block[0] + v7) = 0;
    v6 = a1[1];
    v5 = v20;
  }
  v9 = (char *)*a1;
  v10 = a1 + 2;
  v11 = (unsigned __int64)Block >= *a1 && Block < (void **)&v9[24 * *v10];
  v12 = *v10;
  v13 = v6 + 1;
  if ( v11 )
  {
    v14 = Block[0];
    v21 = Block[0];
    Block[0] = nullptr;
    v15 = Block[1];
    v22 = Block[1];
    Block[1] = nullptr;
    v23 = v5;
    v20 = 0;
    if ( v13 > v12 )
    {
      v9 = (char *)sub_14005ABE0((__int64)a1, v9, v13, 0x18u);
      *a1 = v9;
    }
    v16 = 3LL * a1[1];
    *(_QWORD *)&v9[8 * v16] = v14;
    *(_QWORD *)&v9[8 * v16 + 8] = v15;
    *(_QWORD *)&v9[8 * v16 + 16] = v5;
  }
  else
  {
    if ( v13 > v12 )
    {
      v9 = (char *)sub_14005ABE0((__int64)a1, v9, v13, 0x18u);
      *a1 = v9;
    }
    v17 = 3LL * a1[1];
    *(void **)&v9[8 * v17] = Block[0];
    Block[0] = nullptr;
    *(void **)&v9[8 * v17 + 8] = Block[1];
    Block[1] = nullptr;
    *(_QWORD *)&v9[8 * v17 + 16] = v20;
    v20 = 0;
  }
  ++a1[1];
  if ( Block[0] )
  {
    Block[1] = nullptr;
    j_free(Block[0]);
  }
  return v4;
}
