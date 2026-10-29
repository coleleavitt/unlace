__int64 __fastcall sub_1F752E0(unsigned int *a1, int a2, __int64 a3, int a4, __int64 *a5, __int64 a6)
{
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  int v20; // r12d
  __int64 v21; // rax
  int v22; // r12d
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 result; // rax
  char *v26; // rax
  __int64 v27; // rdx
  char *v28; // rdi
  char *v29; // rsi
  char *v30; // r10
  __int64 v31; // rcx
  __int64 v32; // r8
  char *v33; // rdx
  unsigned int v34; // [rsp+0h] [rbp-F8h]
  char *v35; // [rsp+0h] [rbp-F8h]
  int v36; // [rsp+0h] [rbp-F8h]
  int v37; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v38; // [rsp+18h] [rbp-E0h]
  int v39; // [rsp+20h] [rbp-D8h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+38h] [rbp-C0h]
  _BYTE v42[184]; // [rsp+40h] [rbp-B8h] BYREF

  v11 = *a1;
  v12 = a1[1] + 1;
  v13 = 2 * *a1;
  a1[1] = v12;
  if ( 4 * v12 >= 3 * v11 )
  {
    v34 = v11;
    v26 = (char *)calloc(v13, 0x10u);
    v27 = v34;
    if ( !v26 )
    {
      if ( v13 || (v26 = (char *)malloc(1u), v27 = v34, !v26) )
        sub_2221CE0("Allocation failed");
    }
    v28 = *((char **)a1 + 13);
    v29 = v28;
    v30 = &v28[16 * v27];
    if ( v27 )
    {
      do
      {
        v31 = *((_QWORD *)v29 + 1);
        if ( v31 )
        {
          do
          {
            v32 = *(_QWORD *)(v31 + 32);
            v33 = &v26[16 * (*(_DWORD *)(v31 + 40) & (v13 - 1))];
            *(_QWORD *)(v31 + 32) = *((_QWORD *)v33 + 1);
            *((_QWORD *)v33 + 1) = v31;
            v31 = v32;
            ++*((_DWORD *)v33 + 1);
          }
          while ( v32 );
        }
        v29 += 16;
      }
      while ( v29 != v30 );
    }
    v35 = v26;
    free(v28);
    *a1 = v13;
    *((_QWORD *)a1 + 13) = v35;
  }
  v14 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 11) += 48LL;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *((_QWORD *)a1 + 2) >= v15 + 48 && v14 )
    *((_QWORD *)a1 + 1) = v15 + 48;
  else
    v15 = sub_986170((__int64)(a1 + 2), 48, 48, 3, (__int64)a5, a6);
  *(_DWORD *)v15 = a2;
  *(_QWORD *)(v15 + 8) = a3;
  *(_DWORD *)(v15 + 16) = a4;
  v16 = *a5;
  *(_QWORD *)(v15 + 32) = 0;
  *(_QWORD *)(v15 + 24) = v16;
  v39 = a4;
  v38 = a3;
  v37 = a2;
  ptr = v42;
  v41 = 0x2000000000LL;
  v17 = sub_1EADE10((__int64)&v37);
  v18 = (unsigned int)v41;
  v19 = (unsigned int)v41 + 1LL;
  if ( v19 > HIDWORD(v41) )
  {
    v36 = v17;
    sub_2237220(&ptr, v42, v19, 4);
    v18 = (unsigned int)v41;
    v17 = v36;
  }
  *((_DWORD *)ptr + v18) = v17;
  v20 = v39;
  LODWORD(v41) = v41 + 1;
  v21 = (unsigned int)v41;
  if ( (unsigned __int64)(unsigned int)v41 + 1 > HIDWORD(v41) )
  {
    sub_2237220(&ptr, v42, (unsigned int)v41 + 1LL, 4);
    v21 = (unsigned int)v41;
  }
  *((_DWORD *)ptr + v21) = v20;
  LODWORD(v41) = v41 + 1;
  v22 = sub_2287CD0(ptr, 4LL * (unsigned int)v41);
  if ( ptr != v42 )
    free(ptr);
  v23 = *a1;
  v24 = *((_QWORD *)a1 + 13);
  *(_DWORD *)(v15 + 40) = v22;
  result = 16LL * (v22 & (v23 - 1)) + v24;
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(result + 8);
  ++*(_DWORD *)(result + 4);
  *(_QWORD *)(result + 8) = v15;
  return result;
}
