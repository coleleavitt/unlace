__int64 __fastcall sub_666940(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v5; // rdi
  _DWORD *v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // rax
  _DWORD *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // rsi
  __int64 v14; // rax
  _DWORD v16[66]; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int64 v17; // [rsp+108h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( !a2 )
    return -1;
  if ( !(unsigned __int8)sub_666730(a1, (__int64)a2, a3) )
    return -1;
  v5 = a3;
  v6 = v16;
  v7 = ea2node(v5);
  if ( netnode_supval(v7, 17, v16, 260, 83) <= 0 )
    return -1;
  v8 = v16[0];
  if ( v16[0] > 0x3FuLL )
    return -1;
  a2[1] = 0;
  if ( !v8 )
    return 0;
  v9 = &v16[v8];
  v10 = 0;
  do
  {
    v12 = v6[1];
    v13 = *a2;
    if ( a2[2] < (unsigned __int64)(v10 + 1) )
    {
      v14 = qvector_reserve(a2, v13, v10 + 1, 4);
      v10 = a2[1];
      *a2 = v14;
      v13 = v14;
    }
    *(_DWORD *)(v13 + 4 * v10) = v12;
    v11 = a2[1];
    ++v6;
    v10 = v11 + 1;
    a2[1] = v11 + 1;
  }
  while ( v6 != v9 );
  return v11 + 1;
}

