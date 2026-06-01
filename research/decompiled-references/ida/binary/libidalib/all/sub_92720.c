unsigned __int64 __fastcall sub_92720(__int64 *a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v1 = a1[1];
  v13 = __readfsqword(0x28u);
  *(_QWORD *)(*a1 + 8 * v1 - 8) = qstrdup();
  v2 = qstrdup();
  v3 = *a1;
  v4 = v2;
  v5 = a1[1];
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    v11 = qvector_reserve();
    *a1 = v11;
    v3 = v11;
    v5 = a1[1];
  }
  *(_QWORD *)(v3 + 8 * v5) = v4;
  v6 = a1[1];
  v7 = a1[2];
  v8 = *a1;
  v9 = v6 + 1;
  a1[1] = v6 + 1;
  if ( v7 < v6 + 2 )
  {
    v12 = qvector_reserve();
    *a1 = v12;
    v8 = v12;
    v9 = a1[1];
  }
  *(_QWORD *)(v8 + 8 * v9) = 0;
  ++a1[1];
  return v13 - __readfsqword(0x28u);
}

