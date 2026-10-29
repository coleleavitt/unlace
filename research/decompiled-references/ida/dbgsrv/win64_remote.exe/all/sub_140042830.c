/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140042830
// Address: 0x0000000140042830

//----- (0000000140042830) ----------------------------------------------------
void __fastcall sub_140042830(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  int *v6; // rbp
  size_t v7; // r13
  size_t v8; // rbx
  void *v9; // r14
  size_t v10; // r12
  size_t v11; // rsi
  void *v12; // r15
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  char *v15; // rax
  bool v16; // zf
  __int64 v17; // [rsp+20h] [rbp-88h]
  int *v19; // [rsp+B8h] [rbp+10h]
  int v20; // [rsp+C0h] [rbp+18h]
  int v21; // [rsp+C8h] [rbp+20h]

  v3 = a3;
  v5 = a1 + 48;
  sub_14001A3B0((__int64 *)(a1 + 48), 0);
  if ( (unsigned __int64)(int)v3 > *(_QWORD *)(v5 + 16) )
    *(_QWORD *)v5 = sub_14005ABE0(v5, *(void **)v5, (int)v3, 0x38u);
  if ( (int)v3 > 0 )
  {
    v17 = v3;
    do
    {
      v6 = a2;
      v19 = a2 + 14;
      v20 = *a2;
      v21 = a2[1];
      v7 = 0;
      v8 = *((_QWORD *)a2 + 2);
      if ( v8 )
      {
        v9 = sub_14005AAA0(v8);
        v7 = v8;
        memcpy(v9, *((const void **)v6 + 1), v8);
      }
      else
      {
        v8 = 0;
        v9 = nullptr;
      }
      v10 = 0;
      v11 = *((_QWORD *)v6 + 5);
      if ( v11 )
      {
        v12 = sub_14005AAA0(*((_QWORD *)v6 + 5));
        v10 = v11;
        memcpy(v12, *((const void **)v6 + 4), v11);
      }
      else
      {
        v11 = 0;
        v12 = nullptr;
      }
      v13 = *(_QWORD *)(v5 + 8) + 1LL;
      if ( v13 > *(_QWORD *)(v5 + 16) )
        *(_QWORD *)v5 = sub_14005ABE0(v5, *(void **)v5, v13, 0x38u);
      v14 = 56LL * *(_QWORD *)(a1 + 56);
      v15 = *(char **)v5;
      *(_DWORD *)&v15[v14] = v20;
      *(_DWORD *)&v15[v14 + 4] = v21;
      *(_QWORD *)&v15[v14 + 8] = v9;
      *(_QWORD *)&v15[v14 + 16] = v8;
      *(_QWORD *)&v15[v14 + 24] = v7;
      *(_QWORD *)&v15[v14 + 32] = v12;
      *(_QWORD *)&v15[v14 + 40] = v11;
      *(_QWORD *)&v15[v14 + 48] = v10;
      ++*(_QWORD *)(a1 + 56);
      v16 = v17-- == 1;
      a2 = v19;
    }
    while ( !v16 );
  }
}
