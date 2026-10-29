/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100015270
// Address: 0x0000000100015270

//----- (0000000100015270) ----------------------------------------------------
__int64 __fastcall sub_100015270(void **a1, char *a2)
{
  char *v3; // rax
  bool v4; // cl
  unsigned __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  void *v9; // rax
  void *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx

  v3 = (char *)*a1;
  v4 = *a1 <= a2;
  v5 = (unsigned __int64)a1[2];
  if ( v4 && &v3[24 * v5] > a2 )
  {
    v6 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0;
    v7 = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = 0;
    v8 = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = 0;
    v9 = *a1;
    v10 = a1[1];
    if ( a1[2] < (char *)v10 + 1 )
    {
      v9 = qvector_reserve((__int64)a1, v9, (unsigned __int64)v10 + 1, 0x18u);
      *a1 = v9;
      v10 = a1[1];
    }
    v11 = 3LL * (_QWORD)v10;
    *((_QWORD *)v9 + v11) = v6;
    *((_QWORD *)v9 + v11 + 1) = v7;
    *((_QWORD *)v9 + v11 + 2) = v8;
  }
  else
  {
    v12 = a1[1];
    if ( v5 < (unsigned __int64)v12 + 1 )
    {
      v3 = (char *)qvector_reserve((__int64)a1, v3, (unsigned __int64)v12 + 1, 0x18u);
      *a1 = v3;
      v12 = a1[1];
    }
    v13 = 3LL * (_QWORD)v12;
    *(_QWORD *)&v3[8 * v13] = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0;
    *(_QWORD *)&v3[8 * v13 + 8] = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = 0;
    *(_QWORD *)&v3[8 * v13 + 16] = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = 0;
  }
  a1[1] = (char *)a1[1] + 1;
  return __stack_chk_guard;
}
