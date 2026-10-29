/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_374D0
// Address: 0x00000000000374D0

//----- (00000000000374D0) ----------------------------------------------------
__int64 __fastcall sub_374D0(char **a1, int *a2)
{
  int v3; // r13d
  size_t v4; // r14
  void *v5; // r15
  size_t v6; // rbx
  char *v7; // rax
  unsigned __int64 v8; // rbx
  char *v9; // rbp
  char *v10; // r14
  __int64 v11; // r13
  void *v12; // rbx
  __int64 v13; // r15
  void *v14; // rdi
  void *v15; // rdi
  __int64 result; // rax
  int v17; // [rsp+Ch] [rbp-5Ch]
  void *ptr; // [rsp+10h] [rbp-58h]
  int v19; // [rsp+1Ch] [rbp-4Ch]
  char *v20; // [rsp+20h] [rbp-48h]
  size_t v21; // [rsp+28h] [rbp-40h]
  size_t v22; // [rsp+30h] [rbp-38h]

  v3 = *a2;
  v4 = *((_QWORD *)a2 + 2);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*((_QWORD *)a2 + 2));
    memcpy(v5, *((const void **)a2 + 1), v4);
  }
  else
  {
    v5 = nullptr;
  }
  v17 = a2[8];
  v6 = *((_QWORD *)a2 + 6);
  v22 = v6;
  if ( v6 )
  {
    ptr = qalloc_or_throw(v6);
    memcpy(ptr, *((const void **)a2 + 5), v6);
  }
  else
  {
    ptr = nullptr;
  }
  v7 = a1[1];
  v8 = (unsigned __int64)a1[2];
  if ( v8 >= (unsigned __int64)(v7 + 1) )
  {
    v9 = *a1;
  }
  else
  {
    v9 = (char *)qvector_reserve((__int64)a1, nullptr, (unsigned __int64)(v7 + 1), 0x40u);
    v19 = v3;
    v21 = v4;
    v20 = a1[2];
    a1[2] = (char *)v8;
    v10 = *a1;
    v11 = (__int64)(a1[1] - 1);
    if ( v11 >= 0 )
    {
      v12 = v5;
      v13 = 0;
      do
      {
        *(_DWORD *)&v9[v13] = *(_DWORD *)&v10[v13];
        *(_QWORD *)&v9[v13 + 8] = *(_QWORD *)&v10[v13 + 8];
        *(_QWORD *)&v10[v13 + 8] = 0;
        *(_QWORD *)&v9[v13 + 16] = *(_QWORD *)&v10[v13 + 16];
        *(_QWORD *)&v10[v13 + 16] = 0;
        *(_QWORD *)&v9[v13 + 24] = *(_QWORD *)&v10[v13 + 24];
        *(_QWORD *)&v10[v13 + 24] = 0;
        *(_DWORD *)&v9[v13 + 32] = *(_DWORD *)&v10[v13 + 32];
        *(_QWORD *)&v9[v13 + 40] = *(_QWORD *)&v10[v13 + 40];
        *(_QWORD *)&v10[v13 + 40] = 0;
        *(_QWORD *)&v9[v13 + 48] = *(_QWORD *)&v10[v13 + 48];
        *(_QWORD *)&v10[v13 + 48] = 0;
        *(_QWORD *)&v9[v13 + 56] = *(_QWORD *)&v10[v13 + 56];
        *(_QWORD *)&v10[v13 + 56] = 0;
        v14 = *(void **)&v10[v13 + 40];
        if ( v14 )
        {
          *(_QWORD *)&v10[v13 + 48] = 0;
          qfree(v14);
          *(_QWORD *)&v10[v13 + 40] = 0;
          *(_QWORD *)&v10[v13 + 56] = 0;
        }
        v15 = *(void **)&v10[v13 + 8];
        if ( v15 )
        {
          *(_QWORD *)&v10[v13 + 16] = 0;
          qfree(v15);
          *(_QWORD *)&v10[v13 + 8] = 0;
          *(_QWORD *)&v10[v13 + 24] = 0;
        }
        v13 += 64;
        --v11;
      }
      while ( v11 >= 0 );
      v10 = *a1;
      v5 = v12;
    }
    qfree(v10);
    v4 = v21;
    v3 = v19;
    *a1 = v9;
    a1[2] = v20;
    v7 = a1[1];
  }
  result = (_QWORD)v7 << 6;
  *(_DWORD *)&v9[result] = v3;
  *(_QWORD *)&v9[result + 8] = v5;
  *(_QWORD *)&v9[result + 16] = v4;
  *(_QWORD *)&v9[result + 24] = v4;
  *(_DWORD *)&v9[result + 32] = v17;
  *(_QWORD *)&v9[result + 40] = ptr;
  *(_QWORD *)&v9[result + 48] = v22;
  *(_QWORD *)&v9[result + 56] = v22;
  ++a1[1];
  return result;
}
