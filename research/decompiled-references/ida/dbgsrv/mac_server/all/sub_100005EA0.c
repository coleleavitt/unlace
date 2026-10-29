/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005EA0
// Address: 0x0000000100005EA0

//----- (0000000100005EA0) ----------------------------------------------------
__int64 __fastcall sub_100005EA0(char **a1, char *a2)
{
  char *v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  char *v9; // rax
  char *v10; // rcx
  __int64 v11; // rcx
  char *v12; // rdi
  __int64 v13; // rcx
  __int64 v15; // [rsp+0h] [rbp-80h]
  __int64 v16; // [rsp+8h] [rbp-78h]
  __int64 v17; // [rsp+10h] [rbp-70h]

  v3 = *a1;
  v4 = (unsigned __int64)a1[2];
  if ( *a1 <= a2 && &(*a1)[56 * v4] > a2 )
  {
    v15 = *(_QWORD *)a2;
    v16 = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = 0;
    v17 = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = 0;
    v5 = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = 0;
    v6 = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = 0;
    v7 = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = 0;
    v8 = *((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 6) = 0;
    v9 = *a1;
    v10 = a1[1];
    if ( a1[2] < v10 + 1 )
    {
      v9 = (char *)qvector_reserve((__int64)a1, v9, (unsigned __int64)(v10 + 1), 0x38u);
      *a1 = v9;
      v10 = a1[1];
    }
    v11 = 56LL * (_QWORD)v10;
    *(_QWORD *)&v9[v11] = v15;
    *(_QWORD *)&v9[v11 + 8] = v16;
    *(_QWORD *)&v9[v11 + 16] = v17;
    *(_QWORD *)&v9[v11 + 24] = v5;
    *(_QWORD *)&v9[v11 + 32] = v6;
    *(_QWORD *)&v9[v11 + 40] = v7;
    *(_QWORD *)&v9[v11 + 48] = v8;
  }
  else
  {
    v12 = a1[1];
    if ( v4 < (unsigned __int64)(v12 + 1) )
    {
      v3 = (char *)qvector_reserve((__int64)a1, v3, (unsigned __int64)(v12 + 1), 0x38u);
      *a1 = v3;
      v12 = a1[1];
    }
    v13 = 56LL * (_QWORD)v12;
    *(_QWORD *)&v3[v13] = *(_QWORD *)a2;
    *(_QWORD *)&v3[v13 + 8] = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = 0;
    *(_QWORD *)&v3[v13 + 16] = *((_QWORD *)a2 + 2);
    *((_QWORD *)a2 + 2) = 0;
    *(_QWORD *)&v3[v13 + 24] = *((_QWORD *)a2 + 3);
    *((_QWORD *)a2 + 3) = 0;
    *(_QWORD *)&v3[v13 + 32] = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = 0;
    *(_QWORD *)&v3[v13 + 40] = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = 0;
    *(_QWORD *)&v3[v13 + 48] = *((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 6) = 0;
  }
  ++a1[1];
  return __stack_chk_guard;
}
