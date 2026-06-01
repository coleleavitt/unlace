/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E260
// Address: 0x000000010000E260

//----- (000000010000E260) ----------------------------------------------------
__int64 __fastcall sub_10000E260(__int128 *a1, __int128 *a2)
{
  __int64 v3; // r12
  __int128 v4; // xmm1
  __int64 v5; // r15
  __int64 v6; // r13
  __int128 v7; // xmm0
  void *v8; // rdi
  __int64 v9; // r13
  __int128 v10; // xmm0
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  __int128 v15; // [rsp+0h] [rbp-80h]
  __int128 v16; // [rsp+10h] [rbp-70h]
  __int64 v17; // [rsp+30h] [rbp-50h]
  __int16 v18; // [rsp+38h] [rbp-48h]
  __int128 v19; // [rsp+40h] [rbp-40h]

  v19 = *a1;
  v3 = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = 0;
  v15 = *(__int128 *)((char *)a1 + 24);
  v4 = 0;
  *(__int128 *)((char *)a1 + 24) = 0;
  v5 = *((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = 0;
  v16 = a1[3];
  a1[3] = 0;
  v18 = *((_WORD *)a1 + 36);
  v17 = *((_QWORD *)a1 + 8);
  *a1 = *a2;
  v6 = *((_QWORD *)a2 + 2);
  *((_QWORD *)a2 + 2) = 0;
  v7 = *(__int128 *)((char *)a2 + 24);
  *(__int128 *)((char *)a2 + 24) = 0;
  v8 = *((void **)a1 + 2);
  if ( v8 )
  {
    *((_QWORD *)a1 + 3) = 0;
    qfree(v8);
    v4 = 0;
  }
  *((_QWORD *)a1 + 2) = v6;
  *(__int128 *)((char *)a1 + 24) = v7;
  v9 = *((_QWORD *)a2 + 5);
  *((_QWORD *)a2 + 5) = 0;
  v10 = a2[3];
  a2[3] = v4;
  v11 = *((void **)a1 + 5);
  if ( v11 )
  {
    *((_QWORD *)a1 + 6) = 0;
    qfree(v11);
  }
  *((_QWORD *)a1 + 5) = v9;
  a1[3] = v10;
  *((_WORD *)a1 + 36) = *((_WORD *)a2 + 36);
  *((_QWORD *)a1 + 8) = *((_QWORD *)a2 + 8);
  *a2 = v19;
  v12 = *((void **)a2 + 2);
  if ( v12 )
  {
    *((_QWORD *)a2 + 3) = 0;
    qfree(v12);
  }
  *((_QWORD *)a2 + 2) = v3;
  *(__int128 *)((char *)a2 + 24) = v15;
  v13 = *((void **)a2 + 5);
  if ( v13 )
  {
    *((_QWORD *)a2 + 6) = 0;
    qfree(v13);
  }
  *((_QWORD *)a2 + 5) = v5;
  a2[3] = v16;
  *((_WORD *)a2 + 36) = v18;
  *((_QWORD *)a2 + 8) = v17;
  return __stack_chk_guard;
}
