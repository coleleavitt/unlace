__int64 __fastcall sub_5B6380(__int64 **a1, unsigned int **a2)
{
  unsigned int *v2; // rbp
  __int64 *v3; // r12
  __int64 v4; // rbx
  unsigned int *v5; // rax
  int v6; // r8d
  int v7; // r9d
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v13; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v2 = *a2;
  v16 = __readfsqword(0x28u);
  v3 = *a1;
  ptr = nullptr;
  v15 = 0;
  v4 = *(_QWORD *)(*v3 + 1480) + 1624LL;
  v5 = sub_4EE820(v4, *v2);
  if ( v5 )
  {
    if ( *((char *)v5 + 9) >= 0 || (v5 = sub_4EE820(v4, v5[4])) != nullptr )
      get_ea_name(&ptr, *v5, 0, 0);
  }
  v8 = (__int64 *)v3[2];
  v9 = v8[1];
  v10 = *v8;
  if ( v8[2] < (unsigned __int64)(v9 + 1) )
  {
    v13 = qvector_reserve(v3[2], v10, v9 + 1, 24);
    *v8 = v13;
    v9 = v8[1];
    v10 = v13;
  }
  v11 = v10 + 24 * v9;
  *(_QWORD *)v11 = 0;
  *(_OWORD *)(v11 + 8) = 0;
  ++v8[1];
  sub_419660(v3[1], v2[4], nullptr, 0, v6, v7);
  sub_3573A0((char **)v11);
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    qfree(ptr);
  }
  return 0;
}

