/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF2D0
// Address: 0x00000000000BF2D0

//----- (00000000000BF2D0) ----------------------------------------------------
size_t __fastcall sub_BF2D0(_QWORD *a1, __int64 a2, void *a3, unsigned __int64 a4)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 v16; // [rsp+0h] [rbp-38h]

  if ( a2 < 0 || a1[1] <= (unsigned __int64)a2 )
  {
    set_qerrno(3u);
    return -(__int64)(a1[1] != a2);
  }
  v7 = a1[4];
  if ( v7 == -1 )
    goto LABEL_14;
  if ( a1[5] < v7 )
  {
    set_qerrno(4u);
    return -1;
  }
  v10 = a2 + v7;
  v11 = a1[3];
  v8 = -1;
  v12 = -1;
  if ( v11 )
  {
    if ( *(int *)v11 >= 2 )
    {
      *(_QWORD *)(v11 + 24) = v10;
      goto LABEL_14;
    }
    v16 = a1[3];
    v13 = qfseek(*(FILE **)(v11 + 8), v10, 0);
    v12 = -1;
    if ( !v13 )
      v12 = qftell(*(FILE **)(v16 + 8));
  }
  if ( v12 != v10 )
    return v8;
LABEL_14:
  v14 = a1[3];
  v15 = a1[1] - a2;
  if ( v15 >= a4 )
    v15 = a4;
  if ( !v14 )
    return -1;
  if ( *(int *)v14 < 2 )
    return qfread(*(FILE **)(v14 + 8), a3, v15);
  else
    return sub_BE3E0(v14, a3, v15);
}
