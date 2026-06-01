/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_439DC0
// Address: 0x0000000000439DC0

//----- (0000000000439DC0) ----------------------------------------------------
__int64 __fastcall sub_439DC0(_QWORD *a1, const char *a2, __int64 a3)
{
  pthread_mutex_t *v3; // r14
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  size_t v9; // rax
  __int64 v10; // rdx
  size_t v11; // r15
  int v12; // eax
  void *v13; // rsi
  void *v14; // rax
  void *v15; // rax
  __int64 v16; // [rsp+8h] [rbp-40h]
  size_t v17; // [rsp+8h] [rbp-40h]

  if ( !a2 )
    return 0;
  v3 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v5 = sub_439CF0((__int64)a1, a2);
  if ( !v5 )
  {
    v7 = operator new(0x60u);
    v8 = a1[9];
    v5 = v7;
    v7 += 8;
    *(_DWORD *)v7 = 0;
    *(_QWORD *)(v7 + 8) = 0;
    *(_DWORD *)(v5 + 52) = v8;
    *(_QWORD *)(v5 + 24) = v7;
    *(_QWORD *)(v5 + 32) = v7;
    *(_QWORD *)(v5 + 40) = 0;
    *(_DWORD *)(v5 + 48) = 0;
    *(_QWORD *)(v5 + 56) = 0;
    *(_QWORD *)(v5 + 80) = -1;
    *(_DWORD *)(v5 + 88) = -1;
    *(_OWORD *)(v5 + 64) = 0;
    v16 = v8;
    v9 = strlen(a2);
    v10 = v16;
    v11 = v9;
    if ( v9 )
    {
      v17 = v9 + 1;
      v15 = sub_481540(v5 + 56, nullptr, v9 + 1, 1u);
      *(_QWORD *)(v5 + 56) = v15;
      *(_QWORD *)(v5 + 64) = v17;
      memmove(v15, a2, v11);
      *(_BYTE *)(*(_QWORD *)(v5 + 56) + v11) = 0;
      v10 = a1[9];
    }
    v12 = 0;
    if ( a3 )
      v12 = *(_DWORD *)(a3 + 52);
    *(_DWORD *)(v5 + 48) = v12;
    v13 = (void *)a1[8];
    if ( a1[10] < (unsigned __int64)(v10 + 1) )
    {
      v14 = sub_481540((__int64)(a1 + 8), v13, v10 + 1, 8u);
      a1[8] = v14;
      v10 = a1[9];
      v13 = v14;
    }
    *((_QWORD *)v13 + v10) = v5;
    ++a1[9];
  }
  sub_482F10(v3);
  return v5;
}
