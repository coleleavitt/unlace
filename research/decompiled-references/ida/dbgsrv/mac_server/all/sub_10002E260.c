/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002E260
// Address: 0x000000010002E260

//----- (000000010002E260) ----------------------------------------------------
__int64 __fastcall sub_10002E260(char **a1, unsigned __int8 *a2)
{
  char *v3; // rax
  char *v4; // rcx
  char *v5; // rdi
  unsigned __int8 v7[8]; // [rsp+0h] [rbp-30h] BYREF
  __int128 v8; // [rsp+8h] [rbp-28h]
  __int64 v9; // [rsp+18h] [rbp-18h]

  v7[0] = 2;
  v8 = 0;
  v9 = 0;
  copy_idcv(v7, a2);
  v3 = *a1;
  v4 = a1[1];
  if ( a1[2] < v4 + 1 )
  {
    v3 = (char *)qvector_reserve((__int64)a1, v3, (unsigned __int64)(v4 + 1), 0x20u);
    *a1 = v3;
    v4 = a1[1];
  }
  v5 = &v3[32 * (_QWORD)v4];
  *v5 = 2;
  *(_OWORD *)(v5 + 8) = 0;
  *((_QWORD *)v5 + 3) = 0;
  copy_idcv((unsigned __int8 *)v5, v7);
  ++a1[1];
  free_idcv(v7);
  return __stack_chk_guard;
}
