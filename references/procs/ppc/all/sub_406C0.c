__int64 __fastcall sub_406C0(__int64 a1, __int64 a2, __int64 a3, int a4, double a5)
{
  __int64 v5; // r15
  int v6; // r12d
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]
  unsigned __int64 v21; // [rsp+8h] [rbp-40h]

  v5 = (int)a2 - 2LL;
  v6 = a3;
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v9, a2, a3, a5);
    v10 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    v11 = v5 + v10;
    if ( v10 >= v5 + v10 )
      goto LABEL_3;
LABEL_20:
    v21 = v11;
    v19 = qvector_reserve(a1 + 8, 0, v11, 4);
    v11 = v21;
    *(_QWORD *)(a1 + 8) = v19;
    v9 = v19;
    v17 = *(_QWORD *)(a1 + 16);
    v5 = v21 - v17;
    goto LABEL_16;
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = v10 + v5;
  if ( v10 >= v10 + v5 )
  {
LABEL_3:
    if ( v11 == v10 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( *(_QWORD *)(a1 + 24) < v11 )
    goto LABEL_20;
  v17 = *(_QWORD *)(a1 + 16);
LABEL_16:
  v20 = v11;
  memset((void *)(v9 + 4 * v17), 0, 4 * v5);
  v11 = v20;
LABEL_4:
  *(_QWORD *)(a1 + 16) = v11;
LABEL_5:
  v12 = 3;
  if ( (int)a2 > 2 )
  {
    do
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4 * (v10 - 3 + v12)) = v12;
      ++v12;
    }
    while ( (int)a2 >= v12 );
  }
  if ( (unsigned __int8)getinf_flag(67, 32) )
  {
    v18 = *(_QWORD *)(a1 + 32);
    if ( v18 )
    {
      *(_QWORD *)(a1 + 40) = 0;
      qfree(v18, 32, v13, a5);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 48) = 0;
    }
    sub_33B40(a1, 1, 36, v6);
  }
  else if ( a4 == 2 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = v16;
    return (unsigned int)v16;
  }
  v14 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)a1 = a4;
  *(_DWORD *)(a1 + 4) = v14;
  result = (unsigned int)v14;
  if ( ((a4 - 2) & 0xFFFFFFFD) == 0 )
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 40) + v14);
    *(_DWORD *)(a1 + 4) = result;
  }
  return result;
}
