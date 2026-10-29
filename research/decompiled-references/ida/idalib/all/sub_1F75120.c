__int64 __fastcall sub_1F75120(unsigned int *a1, int a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // r15d
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 result; // rax
  char *v19; // rax
  char *v20; // rdi
  char *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r9
  char *v24; // rdx
  char *v25; // [rsp+8h] [rbp-50h]
  int v26; // [rsp+10h] [rbp-48h] BYREF
  __int64 v27; // [rsp+18h] [rbp-40h]

  v10 = *a1;
  v11 = a1[1] + 1;
  v12 = 2 * *a1;
  a1[1] = v11;
  if ( 4 * v11 >= 3 * v10 )
  {
    v19 = (char *)calloc(v12, 0x10u);
    if ( !v19 && (v12 || (v19 = (char *)malloc(1u)) == nullptr) )
      sub_2221CE0("Allocation failed");
    v20 = *((char **)a1 + 13);
    v21 = v20;
    if ( v10 )
    {
      do
      {
        v22 = *((_QWORD *)v21 + 1);
        if ( v22 )
        {
          do
          {
            v23 = *(_QWORD *)(v22 + 24);
            v24 = &v19[16 * (*(_DWORD *)(v22 + 32) & (v12 - 1))];
            *(_QWORD *)(v22 + 24) = *((_QWORD *)v24 + 1);
            *((_QWORD *)v24 + 1) = v22;
            v22 = v23;
            ++*((_DWORD *)v24 + 1);
          }
          while ( v23 );
        }
        v21 += 16;
      }
      while ( v21 != &v20[16 * v10] );
    }
    v25 = v19;
    free(v20);
    *a1 = v12;
    *((_QWORD *)a1 + 13) = v25;
  }
  v13 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 11) += 40LL;
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *((_QWORD *)a1 + 2) >= v14 + 40 && v13 )
    *((_QWORD *)a1 + 1) = v14 + 40;
  else
    v14 = sub_986170((__int64)(a1 + 2), 40, 40, 3, a5, a6);
  *(_DWORD *)v14 = a2;
  *(_QWORD *)(v14 + 8) = a3;
  v15 = *a4;
  *(_QWORD *)(v14 + 24) = 0;
  *(_QWORD *)(v14 + 16) = v15;
  v26 = a2;
  v27 = a3;
  v16 = sub_1EADE10((__int64)&v26);
  v17 = *a1;
  *(_DWORD *)(v14 + 32) = v16;
  result = *((_QWORD *)a1 + 13) + 16LL * ((v17 - 1) & v16);
  *(_QWORD *)(v14 + 24) = *(_QWORD *)(result + 8);
  ++*(_DWORD *)(result + 4);
  *(_QWORD *)(result + 8) = v14;
  return result;
}
